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
puts 'Attempting to open nonexistent repo'
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
-------

### SHAs and OIDs

SHA-1 hashes are usually written as 40 characters of hexadecimal. These are converted to a binary representation internally, called git_oid, and there are routines for converting back and forth.

```Ruby
# Convert a SHA to an OID
sha = "4a202b346bb0fb0db7eff3cffeb3c70babbd2045"
oid = Git.oid_fromstr(sha)
puts "Got oid #{oid} (#{oid.class})"

# Make a shortened printable string from an OID
short = Git.oid_tostr_s(oid)[0..6]
puts "Converted Git::Oid to short sha: #{short}"
```

### Lookups

There are four kinds of objects in a Git repository – commits, trees, blobs, and tag annotations. Each type of object has an API for doing lookups.

```Ruby
repo = Git.repository_open("./sandbox/yargs")

begin
  oid = Git.oid_fromstr("a17678a74a41b8a649da1c1782fd63650be4b326")
  commit = Git.commit_lookup(repo, oid)
rescue Git::Error => ex
  puts "Error looking up commit: #{ex.message}"
  raise
end

begin
  oid = Git.oid_fromstr("186fcd23ca6dc239b2d4e3c56981a76c6ad0c0bf")
  tree = Git.tree_lookup(repo, oid)
rescue Git::Error => ex
  puts "Error looking up tree: #{ex.message}"
  raise
end

begin
  oid = Git.oid_fromstr("c815940f2e68aedd6870a5cc79f626f78385041f")
  blob = Git.blob_lookup(repo, oid)
rescue Git::Error => ex
  puts "Error looking up blob: #{ex.message}"
  raise
end

begin
  oid = Git.oid_fromstr("e48f03632fea10a1af70889b39d27dd71c91eee8")
  tag = Git.tag_lookup(repo, oid)
rescue Git::Error => ex
  puts "Error looking up tag: #{ex.message}"
  raise
end
```
### Object Hierarchy
Git::Object acts like a "base class" for all of these types.
You can use `Git.object_lookup` to get an object regardless of type.

```Ruby
begin
  oid = Git.oid_fromstr("a17678a74a41b8a649da1c1782fd63650be4b326")
  commit = Git.object_lookup(repo, oid)
  puts "Object lookup for commit returned a #{commit.class}" # => Git::Commit
rescue Git::Error => ex
  puts "Error looking up commit: #{ex.message}"
  raise
end

begin
  oid = Git.oid_fromstr("186fcd23ca6dc239b2d4e3c56981a76c6ad0c0bf")
  tree = Git.object_lookup(repo, oid)
  puts "Object lookup for tree returned a #{tree.class}" # => Git::Tree
rescue Git::Error => ex
  puts "Error looking up tree: #{ex.message}"
  raise
end

begin
  oid = Git.oid_fromstr("c815940f2e68aedd6870a5cc79f626f78385041f")
  blob = Git.object_lookup(repo, oid)
  puts "Object lookup for blob returned a #{blob.class}" # => Git::Blob
rescue Git::Error => ex
  puts "Error looking up blob: #{ex.message}"
  raise
end

begin
  oid = Git.oid_fromstr("e48f03632fea10a1af70889b39d27dd71c91eee8")
  tag = Git.object_lookup(repo, oid)
  puts "Object lookup for tag returned a #{tag.class}" # => Git::Tag
rescue Git::Error => ex
  puts "Error looking up tag: #{ex.message}"
  raise
end
```

### Blobs
#### Content

```Ruby
blob = Git.object_lookup(repo, Git.oid_fromstr("c815940f2e68aedd6870a5cc79f626f78385041f"))
rawsize = Git::blob_rawsize(blob)
rawcontent = Git::blob_rawcontent(blob)
puts "Raw content of blob: \n#{rawcontent}"

filtered_content = Git.blob_filtered_content(
  blob,                # blob
  "yargs.rb",          # path (for attribute-based filtering)
  true)                # check if binary?
puts "Filtered content of blob: \n#{filtered_content}"
```

#### Create

```

oid = Git.blob_create_fromworkdir(repo, "README.md")
puts oid # => f561043483649a283f67d02ff99d403fa86cdb88

oid = Git.blob_create_fromdisk(repo, "/etc/hosts")
puts oid #=> e30a9d040bada9de35ddda5f8a5f6427be7b387f

str = "# Hello there!"
oid = Git.blob_create_frombuffer(repo, str)
puts oid # => fad4d167a9db3d88ae591b2b4aad3bd7e3e9fe94
```

### Trees
A tree object in libgit2 is more like a directory. It can represent a directory tree by containing references to other trees.

#### Lookups
Each commit has a tree, you can look them up by OID:

```Ruby
oid = Git.oid_fromstr("a17678a74a41b8a649da1c1782fd63650be4b326")
commit = Git.commit_lookup(repo, oid)
tree = Git.commit_tree(commit)
puts "Tree: #{tree}"
```

Trees can contain trees:
```Ruby
entry = Git.tree_entry_byindex(tree, 0)
if Git.tree_entry_type(entry) == Git::OBJ_TREE
  subtree = Git.tree_lookup(repo, Git.tree_entry_id(entry))
end
```
#### Tree Entries
```Ruby
tree = Git.revparse_single(repo, "HEAD^{tree}")
puts "Tree: #{tree}"

count = Git.tree_entrycount(tree)
puts "Count: #{count}"

entry = Git.tree_entry_byindex(tree, 0)
puts "Entry: #{entry}"

name = Git.tree_entry_name(entry) # filename
puts "Name: #{name}"

objtype = Git.tree_entry_type(entry) # blob or tree
puts "Object type: #{objtype}"

mode = Git.tree_entry_filemode(entry) # *NIX filemode
puts "Mode: #{mode}"

# In C, you have to be careful to free this one,
# unlike the results from most lookups. mruby-git
# handles that for you.
entry = Git.tree_entry_bypath(tree, "README.md")
```

#### Walking
(Not yet supported)
```RUBY
#typedef struct { /* … */ } walk_data;
#
#int walk_cb(const char *root,
#            const git_tree_entry *entry,
#            void *payload)
#{
#  walk_data *d = (walk_data*)payload;
#  /* … */
#}
#
#git_object *obj = NULL;
#int error = git_revparse_single(&obj, repo, "HEAD^{tree}");
#git_tree *tree = (git_tree *)obj;
#
#walk_data d = {0};
#error = git_tree_walk(tree, GIT_TREEWALK_PRE, walk_cb, &d);
```
#### Treebuilder
Since trees in git are immutable we need a mechanism to build them. This method in libgit2 is the treebuilder. Just like the tree object, the treebuilder object represents a single directory containing other objects.
```Ruby
bld = Git.treebuilder_new(repo)

# Add some entries
obj = Git.revparse_single(repo, "HEAD:README.md")
Git.treebuilder_insert(bld,
                       "README.md",        # filename
                       Git.object_id(obj), # OID
                       Git::FILEMODE_BLOB)  # mode

obj = Git.revparse_single(repo, "v1.0.0:yargs.rb")
Git.treebuilder_insert(bld,
                       "d.c",
                       Git.object_id(obj),
                       Git::FILEMODE_BLOB)

oid = Git.treebuilder_write(bld)
puts "Wrote tree #{oid}"
```

### Commits
#### Lookups

```Ruby
obj = Git.revparse_single(repo, "HEAD")
commit = Git.commit_lookup(repo, Git.object_id(obj))
puts "Commit: #{commit}"
```

#### Properties

```Ruby
puts "Commit id:  #{Git.commit_id(commit)}"
puts "Commit message_encoding:  #{Git.commit_message_encoding(commit)}"
puts "Commit message:  #{Git.commit_message(commit)}"
puts "Commit summary:  #{Git.commit_summary(commit)}"
puts "Commit time:  #{Git.commit_time(commit)}"
puts "Commit time_offset:  #{Git.commit_time_offset(commit)}"
puts "Commit committer:  #{Git.commit_committer(commit)}"
puts "Commit author:  #{Git.commit_author(commit)}"
puts "Commit raw_header:  \n#{Git.commit_raw_header(commit)}"
puts "Commit tree_id:  #{Git.commit_tree_id(commit)}"
```
#### Parents
```Ruby
count = Git.commit_parentcount(commit)
(0..(count - 1)).each do |i|
  nth_parent_id = Git.commit_parent_id(commit, i)
  nth_parent = Git.commit_parent(commit, i)
  puts "Parent #{i}: #{nth_parent}"
end

nth_ancestor = Git.commit_nth_gen_ancestor(commit, 2)
puts "2nd ancestory: #{nth_ancestor}"
```

#### Create
```Ruby
my_signature = Git.signature_now("Me", "me@example.com")

parents = [Git.revparse_single(repo, "HEAD")]

oid = Git.commit_create(
  repo,
  "HEAD",                      # name of ref to update
  my_signature,                          # author
  my_signature,                          # committer
  "UTF-8",                     # message encoding
  "Flooberhaul the whatnots",  # message
  tree,                        # root tree
  parents)                     # parents
puts "Created commit #{oid}"
```

### References
#### Lookups (full name)
ref = Git.reference_lookup(repo, "refs/heads/master")
puts "refs/heads/master: #{ref}"
#### Lookups (short name)

```Ruby
ref = Git.reference_dwim(repo, "HEAD") # "master" isn't working... TODO
puts "HEAD^: #{ref}"
```

#### Lookups (resolved)
Get the object pointed to by a symbolic reference (or a chain of them).

```Ruby
oid = Git.reference_name_to_id(repo, "HEAD")
puts "HEAD: #{oid}"
```

#### Listing

```Ruby
reflist = Git.reference_list(repo)
puts "Reflist: #{reflist}"
puts "Reflist Strings: #{reflist.strings}"
```

#### Foreach (refs)
(Not yet supported)

```Ruby
# typedef struct { /* … */ } ref_data;
# 
# int each_ref_cb(git_reference *ref, void *payload)
# {
#   ref_data *d = (ref_data*)payload;
#   /* … */
# }
# 
# ref_data d = {0};
# int error = git_reference_foreach(repo, each_ref_cb, &d);
```

#### Foreach (names)
(Not yet supported)

```Ruby
#typedef struct { /* … */ } ref_data;
#
#int each_name_cb(const char *name, void *payload)
#{
#  ref_data *d = (ref_data*)payload;
#  /* … */
#}
#
#ref_data d = {0};
#int error = git_reference_foreach_name(repo, each_name_cb, &d);
```

#### Foreach (glob)
(Not yet supported)

```Ruby
#typedef struct { /* … */ } ref_data;
#
#int each_name_cb(const char *name, void *payload)
#{
#  ref_data *d = (ref_data*)payload;
#  /* … */
#}
#
#ref_data d = {0};
#int error = git_reference_foreach_glob(repo, "refs/remotes/*", each_name_cb, &d);

#### Iterator (all)
```Ruby
iter = Git.reference_iterator_new(repo)

# Git.reference_next() return nil after last element (any errors are raised)
while ref = Git.reference_next(iter)
  puts "Ref iteration: #{ref}"
end
puts "Done iterating"
```

#### Iterator (glob)

```Ruby
iter = Git.reference_iterator_glob_new(repo, "refs/heads/*")

while ref_name = Git.reference_next_name(iter)
  puts "Reference Name Iteration: #{ref_name}"
end
```
#### Create (direct)

```Ruby
oid = Git.object_id(Git.revparse_single(repo, "HEAD"))
ref = Git.reference_create(
  repo,
  "refs/heads/test/ing", # name
  oid,                 # target
  true,                # force?
)                  # message param omitted (would be a string for the reflog)
puts "Made new ref: #{ref}"
puts "Made `direct` ref pointing to HEAD: #{ref}"
```

#### Create (symbolic)

```Ruby
ref = Git.reference_symbolic_create(
      repo,
      "refs/heads/symbolic",     # name
      "refs/heads/master",       # target
      true,                      # force?
      "Making a symbolic ref")   # Reflog message
puts "Made new symbolic ref: #{ref}"
```

### Tags

#### Lookups (annotations)

```Ruby
tag = Git.tag_lookup(repo, Git.object_id(Git.revparse_single(repo, "v1.0.0")))
puts "Tag: #{tag}"
```

#### Listing (all)

```Ruby
tags = Git.tag_list(repo)
puts "Tags: #{tags.strings}"
```

#### Listing (glob)

```Ruby
matching_tags = Git.tag_list_match("v1.*", repo)
puts "Matching tag: #{matching_tags.strings}"
```

#### Foreach

(Not yet supported)

```Ruby
#typedef struct { /* … */ } tag_data;
#
#int each_tag(const char *name, git_oid *oid, void *payload)
#{
#  tag_data *d = (tag_data*)payload;
#  /* … */
#}
#
#tag_data d = {0};
#int error = git_tag_foreach(repo, each_tag, &d);
```

#### Annotation Properties

```Ruby
puts "Tag target_id: #{Git.tag_target_id(tag)}"
puts "Tag target_type: #{Git.tag_target_type(tag)}"
puts "Tag name: #{Git.tag_name(tag)}"
puts "Tag tagger: #{Git.tag_tagger(tag)}"
puts "Tag message: #{Git.tag_message(tag)}"
```

#### Create (lightweight)

```Ruby
target = Git.revparse_single(repo, "HEAD^{commit}")
oid = Git.tag_create_lightweight(
      repo,       # repository
      "v2.3.4",   # name
      target,     # target
      false)      # force?
```

### Create (annotated)

```Ruby
target = Git.revparse_single(repo, "HEAD^{commit}")
tagger = Git.signature_now(
      "Ben Straub",       # name
      "bs@github.com")    # email
oid = Git.tag_create(
      repo,               # repo
      "v2.3.5",           # name
      target,             # target
      tagger,             # name/email/timestamp
      "Released 10/5/11", # message
      false)              # force?
puts "Created tag: #{oid}"
```

#### Peeling

```Ruby
obj = Git.tag_peel(tag)
puts "Peeled tag: #{obj}"
```

