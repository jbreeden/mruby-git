mruby-git
=========

Bindings to libgit2 for MRuby.

Tutorial
========

The following tutorial was taken from https://libgit2.github.com/docs/guides/101-samples/
and converted to match the MRuby api.

Initialize the library
----------------------
The library needs to keep some global state and initialize its dependencies. You must therefore initialize the library before working with it.
This is handled for you when `mruby-git` is loaded, so no need to call it manually.

```Ruby
Git.libgit2_init
```

Usually you don't need to call the shutdown function as the operating system will take care of reclaiming resources, but if your application uses libgit2 in some areas which are not usually active, you can use

```Ruby
Git.libgit2_shutdown
```

to ask the library to clean up the global state. The cleanup will be performed once there have been the same number of calls to git_libgit2_shutdown() as there were for git_libgit2_init().

Errors
------
Any error from libgit2 are raised as Git::Error objects.

```Ruby
puts 'Attempting to open non-existant repo'
begin
  repo = Git.repository_open('dne')
rescue Git::Error => ex
  puts "#{ex.class}: #{ex.message}"
else
  raise "Expected an error, but didn't catch one."
end
```

Repositories
------------
### Init (Simple)

```Ruby
# With working directory:
puts 'Create a repo with a working directory'
repo = Git.repository_init("sandbox/wd", false)
# …or bare:
puts 'Create a bare repo'
repo = Git.repository_init("sandbox/bare", true)
```

### Init (Options)

```Ruby
opts = Git::RepositoryInitOptions.new

# Customize options
opts.flags |= Git::REPOSITORY_INIT_MKPATH # mkdir as needed to create repo */
opts.description = "My repository has a custom description"

puts "Making a repository in sandbox/no/parent (as with mkdir -p)"
repo = Git.repository_init_ext("sandbox/no/parent", opts)

```

### Clone (Simple)

```Ruby
url = "http://github.com/jbreeden/yargs"
path = "sandbox/yargs"
opt = Git::CloneOptions.new
puts "Cloning yargs repo"
repo = Git.clone(url, path, opt)
```

### Clone (Progress)
(Not yet supported)
```Ruby
# typedef struct { /* … */ } progress_data;
# int fetch_progress(
#             const git_transfer_progress *stats,
#             void *payload)
# {
#   progress_data *pd = (progress_data*)payload;
#   /* Do something with network transfer progress */
# }
# 
# void checkout_progress(
#             const char *path,
#             size_t cur,
#             size_t tot,
#             void *payload)
# {
#   progress_data *pd = (progress_data*)payload;
#   /* Do something with checkout progress */
# }
# 
# /* … */
# progress_data d = {0};
# git_clone_options clone_opts = GIT_CLONE_OPTIONS_INIT;
# 
# clone_opts.checkout_opts.checkout_strategy = GIT_CHECKOUT_SAFE;
# clone_opts.checkout_opts.progress_cb = checkout_progress;
# clone_opts.checkout_opts.progress_payload = &d;
# clone_opts.checkout_opts = checkout_opts;
# clone_opts.fetch_opts.callbacks.transfer_progress = fetch_progress;
# clone_opts.fetch_opts.callbacks.payload = &d;
# 
# git_repository *repo = NULL;
# int error = git_clone(&repo, url, path, &clone_opts);
```

### Clone (Custom repo and remote)
(Callbacks not yet supported)
```Ruby
# int create_repsitory(git_repository **out, const char *path, int bare, void *payload)
# {
#     int error;
# 
#     /*
#      * We create the repository ourselves, libgit2 gives us the parameters it would
#      * have used to create the repository. In this case we ignore the path passed
#      * to git_clone() and put it under /tmp/
#      */
#     if ((error = git_repository_init(out, "/tmp/...", bare)) < 0)
#         return error;
# 
#     /* Further customisation of the repository goes here */
# 
#     return 0;
# }
# 
# int create_remote(git_remote **out, git_repository *repo, const char *name, const char *url)
# {
#     int error;
# 
#     /*
#      * Like above, we create the repository based on what libgit2 would have used
#      * (which is what was passed to git_clone. We could use a different refspec
#      * or name.
#      */
#     if ((error = git_remote_create(out, repo, name, url)) < 0)
#         return error;
# 
#     /* Further customisation of the remote goes here */
# 
#     return 0;
# }
# 
# git_repository *repo;
# git_clone_options clone_opts = GIT_CLONE_OPTIONS_INIT;
# clone_opts.repository_cb = create_repository;
# clone_opts.remote_cb     = create_remote;
# 
# error = git_clone(&repo, url, path, &clone_opts);
```

### Clone (Mirror)
(Not yet supported)
```Ruby
# int create_remote_mirror(git_remote **out, git_repository *repo, const char *name, const char *url, void *payload)
# {
#     int error;
#     git_remote *remote;
#     git_config *cfg;
#     char *mirror_config;
# 
#     /* Create the repository with a mirror refspec */
#     if ((error = git_remote_create_with_fetchspec(&remote, repo, name, url, "+refs/*:refs/*")) < 0)
#         return error;
# 
#     /* Set the mirror setting to true on this remote  */
#     if ((error = git_repository_config(&cfg, repo)) < 0)
#         return error;
# 
#     if (asprintf(&mirror_config, "remote.%s.mirror", name) == -1) {
#         giterr_set(GITERR_OS, "asprintf failed");
#         git_config_free(cfg);
#         return -1;
#     }
# 
#     error = git_repository_set_bool(cfg, mirror_config, true);
# 
#     free(mirror_config);
#     git_config_free(cfg);
# 
#     return error;
# }
# 
# git_repository *repo = NULL;
# git_clone_options clone_opts = GIT_CLONE_OPTIONS_INIT;
# 
# error = git_clone(&repo, url, path, &clone_opts);
```

### Open (Simple)

```Ruby
begin
  repo = Git.repository_open("sandbox/yargs")
rescue Git::Error
  puts "Failed to open yargs repo"
else
  puts "Opened yargs repo #{repo}"
end
```

### Open (Options)
Note that flag options and nullable params (like the ceiling_dirs parameter
to repository_open_ext) from the C API are typically optional in the Ruby API.

```Ruby
# Open repository, walking up from given directory to find root.
repo = Git.repository_open_ext("sandbox") # No flags param, defaults to 0

# Open repository in given directory (or fail if not a repository)
begin
  repo = Git.repository_open_ext("sandbox", Git::REPOSITORY_OPEN_NO_SEARCH)
rescue Git::Error
  puts "Error opening non-repo folder as repo - as expected."
else
  raise "Expected an exception, but caught none."
end
# GIT::REPOSITORY_OPEN_CROSS_FS - Unless this flag is set, open will not
#   continue searching across filesystem boundaries (i.e. when `st_dev`
#   changes from the `stat` system call)
puts 'Open repository with "ceiling" directories list to limit walking up'
repo = Git.repository_open_ext("#{Dir.pwd}/sandbox", Git::REPOSITORY_OPEN_CROSS_FS, "#{File.dirname(Dir.pwd)}:/other/dir");
```

### Open (Bare)
A fast way of opening a bare repository when the exact path is known.

```Ruby
repo = Git.repository_open_bare("sandbox/bare")
```

### Find Repository
Check if a given path is inside a repository and return the repository root directory if found.
Note that MRuby uses the Git::Buf class to represet `struct git_buf`. You can use
`to_s` to get the string value from a buffer.

```Ruby
root = Git.repository_discover("./sandbox")
puts "Root of ./sandbox is #{root.to_s}"
```

### Check If Repository
No convenience method for this yet. `repository_open` will throw. (TODO: Add `repository_exists?`)

```Ruby
begin
  Git.repository_open("sandbox")
rescue Git::Error => ex
  puts ex.message
end
```

Objects
SHAs and OIDs
SHA-1 hashes are usually written as 40 characters of hexadecimal. These are converted to a binary representation internally, called git_oid, and there are routines for converting back and forth.

```Ruby
Convert a SHA to an OID
sha = "4a202b346bb0fb0db7eff3cffeb3c70babbd2045"
oid = Git.oid_fromstr(sha)
puts "Got oid #{oid} (#{oid.class})"

Make a shortened printable string from an OID
short = Git.oid_tostr_s(oid)[0..6]
puts "Converted Git::Oid to short sha: #{short}"
```
