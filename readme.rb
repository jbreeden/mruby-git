# mruby-git
# =========
#
# Bindings to libgit2 for MRuby.
# 
# Tutorial
# ========
#
# The following tutorial was taken from https://libgit2.github.com/docs/guides/101-samples/
# and converted to match the MRuby api.
#
# Initialize the library
# ----------------------
# The library needs to keep some global state and initialize its dependencies. You must therefore initialize the library before working with it.
# This is handled for you when `mruby-git` is loaded, so no need to call it manually.
#
# ```Ruby
# Git.libgit2_init
# ```
#
# Usually you don't need to call the shutdown function as the operating system will take care of reclaiming resources, but if your application uses libgit2 in some areas which are not usually active, you can use
#
# ```Ruby
# Git.libgit2_shutdown
# ```
#
# to ask the library to clean up the global state. The cleanup will be performed once there have been the same number of calls to git_libgit2_shutdown() as there were for git_libgit2_init().
#
# Errors
# ------
# Any error from libgit2 are raised as Git::Error objects.
#
# ```Ruby
puts 'Attempting to open nonexistent repo'
begin
  repo = Git.repository_open('dne')
rescue Git::Error => ex
  puts "#{ex.class}: #{ex.message}"
else
  raise "Expected an error, but didn't catch one."
end
# ```
#
# Repositories
# ------------
# ### Init (Simple)
#
# ```Ruby
## With working directory:
puts 'Create a repo with a working directory'
repo = Git.repository_init("sandbox/wd", false)
## …or bare:
puts 'Create a bare repo'
repo = Git.repository_init("sandbox/bare", true)
# ```
#
# ### Init (Options)
#
# ```Ruby
opts = Git::RepositoryInitOptions.new

## Customize options
opts.flags |= Git::REPOSITORY_INIT_MKPATH # mkdir as needed to create repo */
opts.description = "My repository has a custom description"

puts "Making a repository in sandbox/no/parent (as with mkdir -p)"
repo = Git.repository_init_ext("sandbox/no/parent", opts)

# ```
#
# ### Clone (Simple)
#
# ```Ruby
url = "http://github.com/jbreeden/yargs"
path = "sandbox/yargs"
opt = Git::CloneOptions.new
puts "Cloning yargs repo"
repo = Git.clone(url, path, opt)
# ```

# ### Clone (Progress)
# (Not yet supported)
# ```Ruby
## typedef struct { /* … */ } progress_data;
## int fetch_progress(
##             const git_transfer_progress *stats,
##             void *payload)
## {
##   progress_data *pd = (progress_data*)payload;
##   /* Do something with network transfer progress */
## }
## 
## void checkout_progress(
##             const char *path,
##             size_t cur,
##             size_t tot,
##             void *payload)
## {
##   progress_data *pd = (progress_data*)payload;
##   /* Do something with checkout progress */
## }
## 
## /* … */
## progress_data d = {0};
## git_clone_options clone_opts = GIT_CLONE_OPTIONS_INIT;
## 
## clone_opts.checkout_opts.checkout_strategy = GIT_CHECKOUT_SAFE;
## clone_opts.checkout_opts.progress_cb = checkout_progress;
## clone_opts.checkout_opts.progress_payload = &d;
## clone_opts.checkout_opts = checkout_opts;
## clone_opts.fetch_opts.callbacks.transfer_progress = fetch_progress;
## clone_opts.fetch_opts.callbacks.payload = &d;
## 
## git_repository *repo = NULL;
## int error = git_clone(&repo, url, path, &clone_opts);
# ```

# ### Clone (Custom repo and remote)
# (Callbacks not yet supported)
# ```Ruby
## int create_repsitory(git_repository **out, const char *path, int bare, void *payload)
## {
##     int error;
## 
##     /*
##      * We create the repository ourselves, libgit2 gives us the parameters it would
##      * have used to create the repository. In this case we ignore the path passed
##      * to git_clone() and put it under /tmp/
##      */
##     if ((error = git_repository_init(out, "/tmp/...", bare)) < 0)
##         return error;
## 
##     /* Further customisation of the repository goes here */
## 
##     return 0;
## }
## 
## int create_remote(git_remote **out, git_repository *repo, const char *name, const char *url)
## {
##     int error;
## 
##     /*
##      * Like above, we create the repository based on what libgit2 would have used
##      * (which is what was passed to git_clone. We could use a different refspec
##      * or name.
##      */
##     if ((error = git_remote_create(out, repo, name, url)) < 0)
##         return error;
## 
##     /* Further customisation of the remote goes here */
## 
##     return 0;
## }
## 
## git_repository *repo;
## git_clone_options clone_opts = GIT_CLONE_OPTIONS_INIT;
## clone_opts.repository_cb = create_repository;
## clone_opts.remote_cb     = create_remote;
## 
## error = git_clone(&repo, url, path, &clone_opts);
# ```

# ### Clone (Mirror)
# (Not yet supported)
# ```Ruby
## int create_remote_mirror(git_remote **out, git_repository *repo, const char *name, const char *url, void *payload)
## {
##     int error;
##     git_remote *remote;
##     git_config *cfg;
##     char *mirror_config;
## 
##     /* Create the repository with a mirror refspec */
##     if ((error = git_remote_create_with_fetchspec(&remote, repo, name, url, "+refs/*:refs/*")) < 0)
##         return error;
## 
##     /* Set the mirror setting to true on this remote  */
##     if ((error = git_repository_config(&cfg, repo)) < 0)
##         return error;
## 
##     if (asprintf(&mirror_config, "remote.%s.mirror", name) == -1) {
##         giterr_set(GITERR_OS, "asprintf failed");
##         git_config_free(cfg);
##         return -1;
##     }
## 
##     error = git_repository_set_bool(cfg, mirror_config, true);
## 
##     free(mirror_config);
##     git_config_free(cfg);
## 
##     return error;
## }
## 
## git_repository *repo = NULL;
## git_clone_options clone_opts = GIT_CLONE_OPTIONS_INIT;
## 
## error = git_clone(&repo, url, path, &clone_opts);
# ```
#
# ### Open (Simple)
#
# ```Ruby
begin
  repo = Git.repository_open("sandbox/yargs")
rescue Git::Error
  puts "Failed to open yargs repo"
else
  puts "Opened yargs repo #{repo}"
end
# ```
#
# ### Open (Options)
# Note that flag options and nullable params (like the ceiling_dirs parameter
# to repository_open_ext) from the C API are typically optional in the Ruby API.
#
# ```Ruby
## Open repository, walking up from given directory to find root.
repo = Git.repository_open_ext("sandbox") # No flags param, defaults to 0

## Open repository in given directory (or fail if not a repository)
begin
  repo = Git.repository_open_ext("sandbox", Git::REPOSITORY_OPEN_NO_SEARCH)
rescue Git::Error
  puts "Error opening non-repo folder as repo - as expected."
else
  raise "Expected an exception, but caught none."
end
## GIT::REPOSITORY_OPEN_CROSS_FS - Unless this flag is set, open will not
##   continue searching across filesystem boundaries (i.e. when `st_dev`
##   changes from the `stat` system call)
puts 'Open repository with "ceiling" directories list to limit walking up'
repo = Git.repository_open_ext("#{Dir.pwd}/sandbox", Git::REPOSITORY_OPEN_CROSS_FS, "#{File.dirname(Dir.pwd)}:/other/dir");
# ```
#
# ### Open (Bare)
# A fast way of opening a bare repository when the exact path is known.
#
# ```Ruby
repo = Git.repository_open_bare("sandbox/bare")
# ```
#
# ### Find Repository
# Check if a given path is inside a repository and return the repository root directory if found.
# Note that MRuby uses the Git::Buf class to represet `struct git_buf`. You can use
# `to_s` to get the string value from a buffer.
#
# ```Ruby
root = Git.repository_discover("./sandbox")
puts "Root of ./sandbox is #{root.to_s}"
# ```
#
# ### Check If Repository
# No convenience method for this yet. `repository_open` will throw. (TODO: Add `repository_exists?`)
#
# ```Ruby
begin
  Git.repository_open("sandbox")
rescue Git::Error => ex
  puts ex.message
end
# ```
#
# Objects
# -------
#
# ### SHAs and OIDs
#
# SHA-1 hashes are usually written as 40 characters of hexadecimal. These are converted to a binary representation internally, called git_oid, and there are routines for converting back and forth.
#
# ```Ruby
## Convert a SHA to an OID
sha = "4a202b346bb0fb0db7eff3cffeb3c70babbd2045"
oid = Git.oid_fromstr(sha)
puts "Got oid #{oid} (#{oid.class})"

## Make a shortened printable string from an OID
short = Git.oid_tostr_s(oid)[0..6]
puts "Converted Git::Oid to short sha: #{short}"
# ```
#
# ### Lookups
#
#There are four kinds of objects in a Git repository – commits, trees, blobs, and tag annotations. Each type of object has an API for doing lookups.
#
# ```Ruby
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
# ```
# ### Object Hierarchy
# Git::Object acts like a "base class" for all of these types.
# You can use `Git.object_lookup` to get an object regardless of type.
# 
# ```Ruby
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
# ```
#
# ### Blobs
# #### Content
#
# ```Ruby
blob = Git.object_lookup(repo, Git.oid_fromstr("c815940f2e68aedd6870a5cc79f626f78385041f"))
rawsize = Git::blob_rawsize(blob)
rawcontent = Git::blob_rawcontent(blob)
puts "Raw content of blob: \n#{rawcontent}"

filtered_content = Git.blob_filtered_content(
  blob,                # blob
  "yargs.rb",          # path (for attribute-based filtering)
  true)                # check if binary?
puts "Filtered content of blob: \n#{filtered_content}"
# ```
#
# #### Create
# 
# ```

oid = Git.blob_create_fromworkdir(repo, "README.md")
puts oid # => f561043483649a283f67d02ff99d403fa86cdb88

oid = Git.blob_create_fromdisk(repo, "/etc/hosts")
puts oid #=> e30a9d040bada9de35ddda5f8a5f6427be7b387f

str = "# Hello there!"
oid = Git.blob_create_frombuffer(repo, str)
puts oid # => fad4d167a9db3d88ae591b2b4aad3bd7e3e9fe94
# ```
#
# ### Trees
# A tree object in libgit2 is more like a directory. It can represent a directory tree by containing references to other trees.
# 
# #### Lookups
# Each commit has a tree, you can look them up by OID:
#
# ```Ruby
oid = Git.oid_fromstr("a17678a74a41b8a649da1c1782fd63650be4b326")
commit = Git.commit_lookup(repo, oid)
tree = Git.commit_tree(commit)
puts "Tree: #{tree}"
# ```
#
# Trees can contain trees:
# ```Ruby
entry = Git.tree_entry_byindex(tree, 0)
if Git.tree_entry_type(entry) == Git::OBJ_TREE
  subtree = Git.tree_lookup(repo, Git.tree_entry_id(entry))
end
# ```
# #### Tree Entries
# ```Ruby
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

## In C, you have to be careful to free this one,
## unlike the results from most lookups. mruby-git
## handles that for you.
entry = Git.tree_entry_bypath(tree, "README.md")
# ```
#
# #### Walking
# (Not yet supported)
# ```RUBY
##typedef struct { /* … */ } walk_data;
##
##int walk_cb(const char *root,
##            const git_tree_entry *entry,
##            void *payload)
##{
##  walk_data *d = (walk_data*)payload;
##  /* … */
##}
##
##git_object *obj = NULL;
##int error = git_revparse_single(&obj, repo, "HEAD^{tree}");
##git_tree *tree = (git_tree *)obj;
##
##walk_data d = {0};
##error = git_tree_walk(tree, GIT_TREEWALK_PRE, walk_cb, &d);
# ```
# #### Treebuilder
# Since trees in git are immutable we need a mechanism to build them. This method in libgit2 is the treebuilder. Just like the tree object, the treebuilder object represents a single directory containing other objects.
# ```Ruby
bld = Git.treebuilder_new(repo)

## Add some entries
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
# ```
#
# ### Commits
# #### Lookups
#
# ```Ruby
obj = Git.revparse_single(repo, "HEAD")
commit = Git.commit_lookup(repo, Git.object_id(obj))
puts "Commit: #{commit}"
#```
#
# #### Properties
#
# ```Ruby
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
# ```
# #### Parents
# ```Ruby
count = Git.commit_parentcount(commit)
(0..(count - 1)).each do |i|
  nth_parent_id = Git.commit_parent_id(commit, i)
  nth_parent = Git.commit_parent(commit, i)
  puts "Parent #{i}: #{nth_parent}"
end

nth_ancestor = Git.commit_nth_gen_ancestor(commit, 2)
puts "2nd ancestory: #{nth_ancestor}"
#```
#
# #### Create
# ```Ruby
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
# ```
#
# ### References
# #### Lookups (full name)
ref = Git.reference_lookup(repo, "refs/heads/master")
puts "refs/heads/master: #{ref}"
# #### Lookups (short name)
#
# ```Ruby
ref = Git.reference_dwim(repo, "HEAD") # "master" isn't working... TODO
puts "HEAD^: #{ref}"
# ```
#
# #### Lookups (resolved)
# Get the object pointed to by a symbolic reference (or a chain of them).
#
# ```Ruby
oid = Git.reference_name_to_id(repo, "HEAD")
puts "HEAD: #{oid}"
# ```
#
# #### Listing
#
# ```Ruby
reflist = Git.reference_list(repo)
puts "Reflist: #{reflist}"
puts "Reflist Strings: #{reflist.strings}"
# ```
#
# #### Foreach (refs)
# (Not yet supported)
#
# ```Ruby
## typedef struct { /* … */ } ref_data;
## 
## int each_ref_cb(git_reference *ref, void *payload)
## {
##   ref_data *d = (ref_data*)payload;
##   /* … */
## }
## 
## ref_data d = {0};
## int error = git_reference_foreach(repo, each_ref_cb, &d);
# ```
#
# #### Foreach (names)
# (Not yet supported)
#
# ```Ruby
##typedef struct { /* … */ } ref_data;
##
##int each_name_cb(const char *name, void *payload)
##{
##  ref_data *d = (ref_data*)payload;
##  /* … */
##}
##
##ref_data d = {0};
##int error = git_reference_foreach_name(repo, each_name_cb, &d);
# ```
#
# #### Foreach (glob)
# (Not yet supported)
#
# ```Ruby
##typedef struct { /* … */ } ref_data;
##
##int each_name_cb(const char *name, void *payload)
##{
##  ref_data *d = (ref_data*)payload;
##  /* … */
##}
##
##ref_data d = {0};
##int error = git_reference_foreach_glob(repo, "refs/remotes/*", each_name_cb, &d);
#
# #### Iterator (all)
# ```Ruby
iter = Git.reference_iterator_new(repo)

## Git.reference_next() return nil after last element (any errors are raised)
while ref = Git.reference_next(iter)
  puts "Ref iteration: #{ref}"
end
puts "Done iterating"
# ```
#
# #### Iterator (glob)
#
# ```Ruby
iter = Git.reference_iterator_glob_new(repo, "refs/heads/*")

while ref_name = Git.reference_next_name(iter)
  puts "Reference Name Iteration: #{ref_name}"
end
# ```
# #### Create (direct)
#
# ```Ruby
oid = Git.object_id(Git.revparse_single(repo, "HEAD"))
ref = Git.reference_create(
  repo,
  "refs/heads/test/ing", # name
  oid,                 # target
  true,                # force?
)                  # message param omitted (would be a string for the reflog)
puts "Made new ref: #{ref}"
# puts "Made `direct` ref pointing to HEAD: #{ref}"
# ```
#
# #### Create (symbolic)
#
# ```Ruby
ref = Git.reference_symbolic_create(
      repo,
      "refs/heads/symbolic",     # name
      "refs/heads/master",       # target
      true,                      # force?
      "Making a symbolic ref")   # Reflog message
puts "Made new symbolic ref: #{ref}"
# ```
#
# ### Tags
#
# #### Lookups (annotations)
#
# ```Ruby
tag = Git.tag_lookup(repo, Git.object_id(Git.revparse_single(repo, "v1.0.0")))
puts "Tag: #{tag}"
# ```
#
# #### Listing (all)
#
# ```Ruby
tags = Git.tag_list(repo)
puts "Tags: #{tags.strings}"
# ```
#
# #### Listing (glob)
#
# ```Ruby
matching_tags = Git.tag_list_match("v1.*", repo)
puts "Matching tag: #{matching_tags.strings}"
# ```
#
# #### Foreach
# 
# (Not yet supported)
#
# ```Ruby
##typedef struct { /* … */ } tag_data;
##
##int each_tag(const char *name, git_oid *oid, void *payload)
##{
##  tag_data *d = (tag_data*)payload;
##  /* … */
##}
##
##tag_data d = {0};
##int error = git_tag_foreach(repo, each_tag, &d);
# ```
# 
# #### Annotation Properties
#
# ```Ruby
puts "Tag target_id: #{Git.tag_target_id(tag)}"
puts "Tag target_type: #{Git.tag_target_type(tag)}"
puts "Tag name: #{Git.tag_name(tag)}"
puts "Tag tagger: #{Git.tag_tagger(tag)}"
puts "Tag message: #{Git.tag_message(tag)}"
# ```
#
# #### Create (lightweight)
#
# ```Ruby
target = Git.revparse_single(repo, "HEAD^{commit}")
oid = Git.tag_create_lightweight(
      repo,       # repository
      "v2.3.4",   # name
      target,     # target
      false)      # force?
# ```
#
# ### Create (annotated)
#
# ```Ruby
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
# ```
#
# #### Peeling
#
# ```Ruby
obj = Git.tag_peel(tag)
puts "Peeled tag: #{obj}"
# ```
#
__END__
Index
Loading
/* Each repository owns an index */
git_index *idx = NULL;
int error = git_repository_index(&idx, repo);

/* Or you can open it by path */
error = git_index_open(&idx, "/path/to/repo/.git/index");
( git_repository_index, git_index_open )

Creating (in-memory)
In-memory indexes cannot be saved to disk, but can be useful for creating trees.

git_index *idx = NULL;
int error = git_index_new(&idx);
( git_index_new )

Disk
/* Make the in-memory index match what's on disk */
int error = git_index_read(idx, true);

/* Write the in-memory index to disk */
error = git_index_write(idx);
( git_index_read, git_index_write )

Trees
Note that all tree operations work recursively. For example, git_index_read_tree will replace not only the root directory, but all subdirectory contents as well.

/* Overwrite the index contents with those of a tree */
git_tree *tree = NULL;
int error = git_revparse_single((git_object**)&tree,
                                repo, "HEAD~^{tree}");
error = git_index_read_tree(idx, tree);

/* Write the index contents to the ODB as a tree */
git_oid new_tree_id = 0;
error = git_index_write_tree(&new_tree_id, idx);

/* In-memory indexes can write trees to any repo */
error = git_index_write_tree_to(&new_tree_id, idx, other_repo);
( git_revparse_single, git_index_read_tree, git_index_write_tree, git_index_write_tree_to )

Entries
/* Access by index */
size_t count = git_index_entrycount(idx);
for (size_t i=0; i<count; i++) {
  const git_index_entry *entry = git_index_get_byindex(idx, i);
  /* … */
}

/* Access by path */
const git_index_entry *entry = git_index_get_bypath(
        idx,                /* index */
        "path/to/file.rb",  /* path */
        0);                 /* stage */
( git_index_entrycount, git_index_get_byindex, git_index_get_bypath, git_index_entry )

Conflicts
if (git_index_has_conflicts(idx)) {
  /* If you know the path of a conflicted file */
  const git_index_entry *ancestor = NULL,
                        *ours = NULL,
                        *theirs = NULL;
  int error = git_index_conflict_get(&ancestor, &ours, &theirs
                                     idx, "path/to/file.cs");

  /* Or, iterate through all conflicts */
  git_index_conflict_iterator *iter = NULL;
  error = git_index_conflict_iterator_new(&iter, idx);
  while (git_index_conflict_next(&ancestor, &ours, &theirs, iter)
              != GIT_ITEROVER) {
    /* Mark this conflict as resolved */
    error = git_index_conflict_remove(idx, ours->path);
  }
  git_index_conflict_iterator_free(iter);
}
( git_index_has_conflicts, git_index_conflict_get, git_index_conflict_iterator_new, git_index_conflict_next, git_index_conflict_iterator_free, git_index_conflict_remove )

Add & Remove
/* Force a single file to be added (even if it is ignored) */
error = git_index_add_bypath(idx, "path/to/file.py");
/* … or removed */
error = git_index_remove_bypath(idx, "path/to/file.py");

typedef struct { /* … */ } match_data;
int match_cb(const char *path, const char *spec, void *payload)
{
  match_data *d = (match_data*)payload;
  /*
   * return 0 to add/remove this path,
   * a positive number to skip this path,
   * or a negative number to abort the operation.
   */
}

const char *paths[] = {"src/*", "test/*"};
git_strarray arr = {paths, 2};

/* Add matching files (this skips ignored files) */
match_data d = {0};
int error = git_index_add_all(idx, &arr, GIT_INDEX_ADD_DEFAULT,
                              match_cb, &d);
/* … or remove them */
error = git_index_remove_all(idx, &arr, match_cb, &d);

/* Something like 'git add .' */
error = git_index_update_all(idx, &arr, match_cb, &d);
( git_index_add_bypath, git_index_remove_bypath, git_strarray, git_index_add_all, git_index_remove_all, git_index_update_all )

Status
Iterating (Simple)
typedef struct { /* … */ } status_data;

int status_cb(const char *path,
              unsigned int status_flags,
              void *payload)
{
  status_data *d = (status_data*)payload;
  /* … */
}

status_data d = {0};
int error = git_status_foreach(repo, status_cb, &d);
(git_status_foreach, git_status_cb)

Iterating (Options)
typedef struct { /* … */ } status_data;

int status_cb(const char *path,
              unsigned int status_flags,
              void *payload)
{
  status_data *d = (status_data*)payload;
  /* … */
}

git_status_options opts = GIT_STATUS_OPTIONS_INIT;
status_data d = {0};
int error = git_status_foreach_ext(repo, &opts, status_cb, &d);
(git_status_foreach_ext, git_status_options, git_status_cb)

Iterating (Manual)
git_status_options opts = GIT_STATUS_OPTIONS_INIT;
git_status_list *statuses = NULL;
int error = git_status_list_new(&statuses, repo, &opts);

size_t count = git_status_list_entrycount(statuses);
for (size_t i=0; i<count; ++i) {
  const git_status_entry *entry = git_status_byindex(statuses, i);
  /* … */
}
(git_status_list_new, git_status_options, git_status_options, git_status_list_entrycount, git_status_byindex, git_status_entry)

Diff
Index to Workdir
Like git diff.

git_diff *diff = NULL;
int error = git_diff_index_to_workdir(&diff, repo, NULL, NULL);
(git_diff_index_to_workdir)

HEAD to Index
Like git diff --cached.

git_object *obj = NULL;
int error = git_revparse_single(&obj, repo, "HEAD^{tree}");

git_tree *tree = NULL;
error = git_tree_lookup(&tree, repo, git_object_id(obj));

git_diff *diff = NULL;
error = git_diff_tree_to_index(&diff, repo, tree, NULL, NULL);
(git_revparse_single, git_tree_lookup, git_diff_tree_to_index)

HEAD to Workdir
Like git diff HEAD.

git_object *obj = NULL;
int error = git_revparse_single(&obj, repo, "HEAD^{tree}");

git_tree *tree = NULL;
error = git_tree_lookup(&tree, repo, git_object_id(obj));

git_diff *diff = NULL;
error = git_diff_tree_to_workdir_with_index(&diff, repo, tree, NULL);
(git_revparse_single, git_tree_lookup, git_diff_tree_to_workdir_with_index)

Commit to Its Parent
Like git show <commit>.

git_object *obj = NULL;
int error = git_revparse_single(&obj, repo, "committish");

git_commit *commit = NULL;
error = git_commit_lookup(&commit, repo, git_object_id(obj));

git_commit *parent = NULL;
error = git_commit_parent(&parent, commit, 0);

git_tree *commit_tree = NULL, *parent_tree = NULL;
error = git_commit_tree(&commit_tree, commit);
error = git_commit_tree(&parent_tree, parent);

git_diff *diff = NULL;
error = git_diff_tree_to_tree(
          &diff, repo, commit_tree, parent_tree, NULL);
(git_revparse_single, git_commit_lookup, git_commit_parent, git_commit_tree, git_diff_tree_to_tree)

Rename detection
git_diff_find_options opts = GIT_DIFF_FIND_OPTIONS_INIT;
opts.flags = GIT_DIFF_FIND_RENAMES |
             GIT_DIFF_FIND_COPIES |
             GIT_DIFF_FIND_FOR_UNTRACKED;

int error = git_diff_find_similar(diff, &opts);
(git_diff_find_options, git_diff_find_similar)

Iterating Deltas
typedef struct { /* … */ } diff_data;

int each_file_cb(const git_diff_delta *delta,
                 float progress,
                 void *payload)
{
  diff_data *d = (diff_data*)payload;
  /* … */
}

int each_hunk_cb(const git_diff_delta *delta,
                 const git_diff_hunk *hunk,
                 void *payload)
{
  diff_data *d = (diff_data*)payload;
  /* … */
}

int each_line_cb(const git_diff_delta *delta,
                 const git_diff_hunk *hunk,
                 const git_diff_line *line,
                 void *payload)
{
  diff_data *d = (diff_data*)payload;
  /* … */
}

diff_data d = {0};
int error = git_diff_foreach(diff,
                             each_file_cb,
                             each_hunk_cb,
                             each_line_cb,
                             &d);
(git_diff_foreach, git_diff_file_cb, git_diff_hunk_cb)

Generating a Patch
A patch represents the text diff of two blobs.

git_patch *patch = NULL;
int error = git_patch_from_diff(&patch, diff, 0);
(git_patch_from_diff)

Config
Files
char path[1024] = {0};
int error = git_config_find_global(path, 1024);
error = git_config_find_xdg(path, 1024);
error = git_config_find_system(path, 1024);
( git_config_find_global, git_config_find_xdg, git_config_find_system )

Opening
git_config *cfg = NULL;
int error = git_config_open_default(&cfg);
/* or */
error = git_repository_config(&cfg, repo);
Once you have a config instance, you can specify which of its levels to operate at (if you want something other than repository's):

git_config *sys_cfg = NULL;
int error = git_config_open_level(&sys_cfg, cfg, GIT_CONFIG_LEVEL_SYSTEM);
( git_config_open_default, git_repository_config, git_config_open_level )

Values (Simple)
Raw entries are available:

const git_config_entry *entry = NULL;
int error = git_config_get_entry(&entry, cfg, "diff.renames");
/* work with it */
git_config_entry_free(entry);
Or you can let libgit2 do the parsing:

int32_t i32val;
int64_t i64val;
int boolval;
git_buf strval = GIT_BUF_INIT;
error = git_config_get_int32(&i32val, cfg, "foo.bar");
error = git_config_get_int64(&i64val, cfg, "foo.bar");
error = git_config_get_bool(&boolval, cfg, "foo.bar");
error = git_config_get_string_buf(&strval, cfg, "foo.bar");
Setting values is fairly straightforward. This operates at the most specific config level; if you want to set a global or system-level value, use git_config_open_level.

error = git_config_set_int32(cfg, "foo.bar", 3);
error = git_config_set_int64(cfg, "foo.bar", 3);
error = git_config_set_bool(cfg, "foo.bar", true);
error = git_config_set_string(cfg, "foo.bar", "baz");
( git_config_get_entry, git_config_get_int32, git_config_get_int64, git_config_get_bool, git_config_get_string, git_config_set_int32, git_config_set_int64, git_config_set_bool, git_config_set_string )

Values (Multi)
Some configuration entries can have multiple values, like core.gitProxy.

/* replace values by regex, perhaps many of them */
int error = git_config_set_multivar(cfg,
    "core.gitProxy",           /* config entry name */
    ".*example\.com.*",        /* regex to match */
    "'cat' for example.com");  /* new value */

/* adding a value means replacing one that doesn't exist */
int error = git_config_set_multivar(cfg, "core.gitProxy",
    "doesntexist", "'foo bar' for example.com");
Multivars are read either with a foreach loop:

typedef struct { /* … */ } multivar_data;

int foreach_cb(const git_config_entry *entry, void *payload)
{
  multivar_data *d = (multivar_data*)payload;
  /* … */
}

multivar_data d = {0};
int error = git_config_get_multivar_foreach(cfg, "core.gitProxy",
    NULL, foreach_cb, &d);
Or an iterator:

git_config_iterator *iter;
git_config_entry *entry;

int error = git_config_multivar_iterator_new(&iter, cfg,
    "core.gitProxy", "regex.*");
while (git_config_next(&entry, iter) == 0) {
  /* … */
}
git_config_iterator_free(iter);
( git_config_set_multivar, git_config_get_multivar, git_config_multivar_iterator_new, git_config_next, git_config_free )

Iterating
git_config_iterator *iter;
git_config_entry *entry;
int error = git_config_iterator_new(&iter, cfg);
while (git_config_next(&entry, iter) == 0) {
  /* … */
}
( git_config_iterator_new, git_config_next, )

Revwalk
Simple
git_revwalk *walker;
int error = git_revwalk_new(&walker, repo);
error = git_revwalk_push_range(walker, "HEAD~20..HEAD");

git_oid oid;
while (!git_revwalk_next(&oid, walker)) {
  /* … */
}
( git_revwalk_new, git_revwalk_push_range, git_revwalk_next )

Pushing and Hiding
/* Pushing marks starting points */
error = git_revwalk_push_head(walker);
error = git_revwalk_push_ref(walker, "HEAD");
error = git_revwalk_push_glob(walker, "tags/*");

/* Hiding marks stopping points */
error = git_revwalk_hide(walker, &oid);
error = git_revwalk_hide_glob(walker, "tags/v0.*");
( git_revwalk_push_head, git_revwalk_push_ref, git_revwalk_push_glob, git_revwalk_hide, git_revwalk_hide_glob )

With Options
/* Set sorting mode */
git_revwalk_sorting(walker, GIT_SORT_TIME | GIT_SORT_REVERSE);

/* Only walk the first-parent path */
git_revwalk_simplify_first_parent(walker);
( git_revwalk_sorting, git_revwalk_simplify_first_parent )

Checkout
Strategies
git_checkout_options isn't actually very optional. The defaults won't be useful outside of a small number of cases. The best example of this is checkout_strategy; the default value does nothing to the work tree. So if you want your checkout to check files out, choose an appropriate strategy.

NONE is the equivalent of a dry run; no files will be checked out.
SAFE is similar to git checkout; unmodified files are updated, and modified files are left alone. If a file was present in the old HEAD but is missing, it's considered deleted, and won't be created.
RECREATE_MISSING is similar to git checkout-index, or what happens after a clone. Unmodified files are updated, and missing files are created, but files with modifications are left alone.
FORCE is similar to git checkout --force; all modifications are overwritten, and all missing files are created.
Take a look at the checkout header for extensive explanation of the checkout flags.

Simple
/* Checkout from HEAD, something like `git checkout HEAD` */
int error = git_checkout_head(repo, &opts);

/* Checkout from the index */
error = git_checkout_index(repo, &opts);

/* Checkout a different tree */
git_object *treeish = NULL;
error = git_revparse_single(&treeish, repo, "feature_branch1");
error = git_checkout_tree(repo, treeish, &opts);
( git_checkout_head, git_checkout_index, git_checkout_tree, git_revparse_single )

Paths
This limits the checkout operation to only certain paths, kind of like git checkout … -- path/to/a path/to/b.

char *paths[] = { "path/to/a.txt", "path/to/b.txt" };
opts.paths.strings = paths;
opts.paths.count = 2;
int error = git_checkout_head(repo, &opts);
(git_strarray)

Progress
typedef struct { /* … */ } progress_data;
void checkout_progress(
            const char *path,
            size_t completed_steps,
            size_t total_steps,
            void *payload)
{
  progress_data *pd = (progress_data*)payload;
  int checkout_percent = total_steps > 0
      ? (100 * completed_steps) / total_steps
      : 0;
  /* Do something with checkout progress */
}

/* … */
progress_data d = {0};
git_checkout_options opts = GIT_CHECKOUT_OPTIONS_INIT;
opts.progress_cb = checkout_progress;
opts.progress_payload = &d;

int error = git_checkout_head(repo, &opts);
( git_checkout_options, git_checkout_progress_cb )

Notify
typedef struct { /* … */ } notify_data;
static int checkout_notify(
          git_checkout_notify_t why,
          const char *path,
          const git_diff_file *baseline,
          const git_diff_file *target,
          const git_diff_file *workdir,
          void *payload)
{
  notify_data *d = (notify_data*)payload;
  /* … */
}

/* … */
notify_data d = {0};
git_checkout_options opts = GIT_CHECKOUT_OPTIONS_INIT;
opts.notify_cb = checkout_notify;
opts.notify_payload = &d;

int error = git_checkout_head(repo, &opts);
( git_checkout_options, git_checkout_notify_t )

Remotes
Listing
git_strarray remotes = {0};
int error = git_remote_list(&remotes, repo);
( git_remote_list )

Looking up
git_remote *remote = NULL;
int error = git_remote_lookup(&remote, repo, "origin");
( git_remote_load )

Creating
Both of these methods save the remote configuration to disk before returning.

/* Creates an empty remote */
git_remote *newremote = NULL;
int error = git_remote_create(&newremote, repo, "upstream",
      "https://github.com/libgit2/libgit2");

/* Pre-populates a new remote with a custom fetchspec */
git_remote *newremote2 = NULL;
error = git_remote_create(&newremote2, repo, "upstream2",
      "https://github.com/libgit2/libgit2",    /* URL */
      "+refs/heads/*:refs/custom/namespace/*"); /* fetchspec */
( git_remote_create, git_remote_create_with_fetchspec )

Creating (anonymous)
This method creates a remote that cannot be saved. This is the kind of remote to use when you have a URL instead of a remote's name.

git_remote *remote;
int error = git_remote_create_anonymous(&remote, repo,
      "https://github.com/libgit2/libgit2");   /* URL */
( git_remote_create_anonymous )

Renaming
git_strarray problems;

int error = git_remote_rename(&problems, repo, "origin", "old_origin");
/* warn the user about the refspecs which couldn't be adjusted */
git_strarray_free(&problems);
( git_remote_rename )

Properties
const char *name = git_remote_name(remote);
const char *url  = git_remote_url(remote);
const char *pushurl = git_remote_pushurl(remote);

/* URLs are mutable, but make sure you save */
int error = git_remote_set_url(remote, "https://…");
error = git_remote_set_pushurl(remote, "https://…");
( git_remote_name, git_remote_url, git_remote_pushurl, git_remote_set_url, git_remote_set_pushurl, )

Refspecs
/* refspecs are available en masse */
git_strarray fetch_refspecs = {0};
int error = git_remote_get_fetch_refspecs(&fetch_refspecs, remote);
git_strarray push_refspecs = {0};
error = git_remote_get_push_refspecs(&fetch_refspecs, remote);

/* … or individually */
size_t count = git_remote_refspec_count(remote);
const git_refspec *rs = git_remote_get_refspec(remote, 0);

/* You can add refspecs to the configuration */
error = git_remote_add_fetch(repo, "origin", "…");
error = git_remote_add_push(repo, "origin", "…");
( git_remote_get_fetch_refspecs, git_remote_get_push_refspecs, git_remote_refspec_count, git_remote_get_refspec, git_remote_add_fetch, git_remote_add_push, )

Fetching
int error;
git_remote *remote;

/* lookup the remote */
error = git_remote_lookup(&remote, repo, "origin");
error = git_remote_fetch(remote,
                         NULL, /* refspecs, NULL to use the configured ones */
                         NULL, /* options, empty for defaults */
                         NULL); /* reflog mesage, usually "fetch" or "pull", you can leave it NULL for "fetch" */
( git_remote_fetch )

Callbacks
The network code uses callbacks for reporting progress and getting credentials (when necessary). Note that inside a callback is the only place where git_remote_stop has any effect.

/* Progress callback */
typedef struct { /* … */ } remote_data;
int progress_cb(const git_transfer_progress *stats, void *payload)
{
  remote_data *d = (remote_data*)payload;
  /* … */
}

/* Credential callback */
int credential_cb(git_cred **out,
                  const char *url,
                  const char *username_from_url,
                  unsigned int allowed_types,
                  void *payload)
{
  remote_data *d = (remote_data*)payload;
  /* … */
}

remote_data d = {0};
git_remote_callbacks callbacks = GIT_REMOTE_CALLBACKS_INIT;
git_fetch_options fetch_opts = GIT_FETCH_OPTIONS_INIT;
fetch_opts.callbacks.progress = progress_cb;
fetch_opts.callbacks.credentials = credential_cb;
fetch_opts.callbacks.payload = &d;
int error = git_remote_fetch(remote, NULL, &fetch_opts, NULL);
For an example of the credentials callback in action, check out the network example, or the built-in credential helpers.
