# Initialize the library
# ----------------------
# The library needs to keep some global state and initialize its dependencies. You must therefore initialize the library before working with it
#
# ```Ruby
Git.libgit2_init
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
# Return codes from public APIs indicate general failure category. For extended information, libgit2 keeps some data in thread-local storage.
# Any out parameters from the C API are returned in an array with the error code:
#
# ```Ruby
error, repo = Git.repository_open('dne')
if error < 0
  e = Git.err_last
  puts "Error #{error} #{e.klass} #{e.message}"
end
# ```
#
# Repositories
# ------------
# Init (Simple)
#
# ```Ruby
## With working directory:
error, repo = Git.repository_init("sandbox/wd", false)
## …or bare:
error, repo = Git.repository_init("sandbox/bare", true)
# ```
#
# Init (Options)
#
# ```Ruby
opts = Git::RepositoryInitOptions.new

# ```Ruby 
# Customize options
opts.flags |= Git::REPOSITORY_INIT_MKPATH # mkdir as needed to create repo */
opts.description = "My repository has a custom description"

error, repo = Git.repository_init_ext("sandbox/no/parent", opts)

__END__
Clone (Simple)
git_repository *repo = NULL;
const char *url = "http://…";
const char *path = "/tmp/…";
int error = git_clone(&repo, url, path, NULL);
(git_clone)

Clone (Progress)
typedef struct { /* … */ } progress_data;
int fetch_progress(
            const git_transfer_progress *stats,
            void *payload)
{
  progress_data *pd = (progress_data*)payload;
  /* Do something with network transfer progress */
}

void checkout_progress(
            const char *path,
            size_t cur,
            size_t tot,
            void *payload)
{
  progress_data *pd = (progress_data*)payload;
  /* Do something with checkout progress */
}

/* … */
progress_data d = {0};
git_clone_options clone_opts = GIT_CLONE_OPTIONS_INIT;

clone_opts.checkout_opts.checkout_strategy = GIT_CHECKOUT_SAFE;
clone_opts.checkout_opts.progress_cb = checkout_progress;
clone_opts.checkout_opts.progress_payload = &d;
clone_opts.checkout_opts = checkout_opts;
clone_opts.fetch_opts.callbacks.transfer_progress = fetch_progress;
clone_opts.fetch_opts.callbacks.payload = &d;

git_repository *repo = NULL;
int error = git_clone(&repo, url, path, &clone_opts);
(git_clone, git_clone_options)

Clone (Custom repo and remote)
int create_repsitory(git_repository **out, const char *path, int bare, void *payload)
{
    int error;

    /*
     * We create the repository ourselves, libgit2 gives us the parameters it would
     * have used to create the repository. In this case we ignore the path passed
     * to git_clone() and put it under /tmp/
     */
    if ((error = git_repository_init(out, "/tmp/...", bare)) < 0)
        return error;

    /* Further customisation of the repository goes here */

    return 0;
}

int create_remote(git_remote **out, git_repository *repo, const char *name, const char *url, void *payload)
{
    int error;

    /*
     * Like above, we create the repository based on what libgit2 would have used
     * (which is what was passed to git_clone. We could use a different refspec
     * or name.
     */
    if ((error = git_remote_create(out, repo, name, url)) < 0)
        return error;

    /* Further customisation of the remote goes here */

    return 0;
}

git_repository *repo;
git_clone_options clone_opts = GIT_CLONE_OPTIONS_INIT;
clone_opts.repository_cb = create_repository;
clone_opts.remote_cb     = create_remote;

error = git_clone(&repo, url, path, &clone_opts);
(git_clone_into)

Clone (Mirror)
int create_remote_mirror(git_remote **out, git_repository *repo, const char *name, const char *url, void *payload)
{
    int error;
    git_remote *remote;
    git_config *cfg;
    char *mirror_config;

    /* Create the repository with a mirror refspec */
    if ((error = git_remote_create_with_fetchspec(&remote, repo, name, url, "+refs/*:refs/*")) < 0)
        return error;

    /* Set the mirror setting to true on this remote  */
    if ((error = git_repository_config(&cfg, repo)) < 0)
        return error;

    if (asprintf(&mirror_config, "remote.%s.mirror", name) == -1) {
        giterr_set(GITERR_OS, "asprintf failed");
        git_config_free(cfg);
        return -1;
    }

    error = git_repository_set_bool(cfg, mirror_config, true);

    free(mirror_config);
    git_config_free(cfg);

    return error;
}

git_repository *repo = NULL;
git_clone_options clone_opts = GIT_CLONE_OPTIONS_INIT;

error = git_clone(&repo, url, path, &clone_opts);
(git_remote_create_with_fetchspec, git_repository_config, git_config_set_bool, git_clone)

Open (Simple)
git_repository *repo = NULL;
int error = git_repository_open(&repo, "/tmp/…");
(git_repository_open)

Open (Options)
int error;
git_repository *repo = NULL;

/* Open repository, walking up from given directory to find root */
error = git_repository_open_ext(&repo, "/tmp/…", 0, NULL);

/* Open repository in given directory (or fail if not a repository) */
error = git_repository_open_ext(
    &repo, "/tmp/…", GIT_REPOSITORY_OPEN_NO_SEARCH, NULL);

/* Open repository with "ceiling" directories list to limit walking up */
error = git_repository_open_ext(
    &repo, "/home/acct/…, GIT_REPOSITORY_OPEN_CROSS_FS, "/tmp:/usr:/home");
(git_repository_open_ext, git_repository_open_flag_t)

Open (Bare)
A fast way of opening a bare repository when the exact path is known.

git_repository *repo = NULL;
int error = git_repository_open_bare(&repo, "/var/data/…/repo.git");
(git_repository_open_bare)

Find Repository
Check if a given path is inside a repository and return the repository root directory if found.

git_buf root = {0};
int error = git_repository_discover(&root, "/tmp/…", 0, NULL);
…
git_buf_free(&root); /* returned path data must be freed after use */
(git_repository_discover)

Check If Repository
/* Pass NULL for the output parameter to check for but not open the repo */
if (git_repository_open_ext(
        NULL, "/tmp/…", GIT_REPOSITORY_OPEN_NO_SEARCH, NULL) == 0) {
    /* directory looks like an openable repository */;
}
(git_repository_open_ext, git_repository_open_flag_t)

Objects
SHAs and OIDs
SHA-1 hashes are usually written as 40 characters of hexadecimal. These are converted to a binary representation internally, called git_oid, and there are routines for converting back and forth.

/* Convert a SHA to an OID */
const char *sha = "4a202b346bb0fb0db7eff3cffeb3c70babbd2045";
git_oid oid = 0;
int error = git_oid_fromstr(&oid, sha);

/* Make a shortened printable string from an OID */
char shortsha[10] = {0};
git_oid_tostr(shortsha, 9, &oid);
(git_oid_fromstr, git_oid_tostr, git_oid_allocfmt)

Lookups
There are four kinds of objects in a Git repository – commits, trees, blobs, and tag annotations. Each type of object has an API for doing lookups.

git_commit *commit;
int error = git_commit_lookup(&commit, repo, &oid);

git_tree *tree;
error = git_tree_lookup(&tree, repo, &oid);

git_blob *blob;
error = git_blob_lookup(&blob, repo, &oid);

git_tag tag;
error = git_tag_lookup(&tag, repo, &oid);
(git_commit_lookup, git_tree_lookup, git_blob_lookup, git_tag_lookup)

Casting
git_object acts like a "base class" for all of these types.

git_object *obj;
int error = git_object_lookup(&obj, repo, &oid, GIT_OBJ_ANY);
if (git_object_type(obj) == GIT_OBJ_COMMIT) {
  /* This is relatively safe */
  git_commit *commit = (git_commit*)obj;
}
/* etc. */
(git_object_lookup, git_object_type, git_otype)

Blobs
Lookups
git_blob *blob = NULL;
int error = git_blob_lookup(&blob, repo, &oid);
( git_blob_lookup )

Content
git_off_t rawsize = git_blob_rawsize(blob);
const void *rawcontent = git_blob_rawcontent(blob);

git_buf filtered_content = GIT_BUF_INIT;
int error = git_blob_filtered_content(
  &filtered_content,    /* output buffer */
  blob,                 /* blob */
  "README.md",          /* path (for attribute-based filtering) */
  true);                /* check if binary? */
git_buf_free(&filtered_content);
( git_blob_rawsize, git_blob_rawcontent, git_blob_filtered_content )

Create
git_oid oid = 0;
int error = git_blob_create_fromworkdir(&oid, repo, "README.md");
error = git_blob_create_fromdisk(&oid, repo, "/etc/hosts");

const char str[] = "# Hello there!";
error = git_blob_create_frombuffer(&oid, repo, str, strlen(str));
( git_blob_create_fromworkdir, git_blob_create_fromdisk, git_blob_create_frombuffer )

Trees
A tree object in libgit2 is more like a directory. It can represent a directory tree by containing references to other trees.

Lookups
Each commit has a tree:

git_tree *tree = NULL;
int error = git_commit_tree(&tree, commit);
You can look them up by OID:

git_tree *tree = NULL;
int error = git_tree_lookup(&tree, repo, &oid);
Trees can contain trees:

const git_tree_entry *entry = git_tree_entry_byindex(tree, 0);
if (git_tree_entry_type(entry) == GIT_OBJ_TREE) {
  git_tree *subtree = NULL;
  int error = git_tree_lookup(&subtree, repo, git_tree_entry_id(entry));
}
(git_commit_tree, git_tree_lookup, git_tree_entry_byindex, git_tree_entry_type)

Tree Entries
git_object *obj = NULL;
int error = git_revparse_single(&obj, repo, "HEAD^{tree}");
git_tree *tree = (git_tree *)obj;

size_t count = git_tree_entrycount(tree);
git_tree_entry *entry = git_tree_entry_byindex(tree, 0);

const char *name = git_tree_entry_name(entry); /* filename */
git_otype objtype = git_tree_entry_type(entry); /* blob or tree */
git_filemode_t mode = git_tree_entry_filemode(entry); /* *NIX filemode */

git_tree_entry *entry2 = NULL;
error = git_tree_entry_bypath(&entry2, tree, "a/b/c.txt");
git_tree_entry_free(entry2); /* caller has to free this one */
(git_revparse_single, git_tree_entrycount, git_tree_entry_byindex, git_tree_entry_name, git_tree_entry_type, git_tree_entry_filemode, git_tree_entry_bypath, git_tree_entry_free)

Walking
typedef struct { /* … */ } walk_data;

int walk_cb(const char *root,
            const git_tree_entry *entry,
            void *payload)
{
  walk_data *d = (walk_data*)payload;
  /* … */
}

git_object *obj = NULL;
int error = git_revparse_single(&obj, repo, "HEAD^{tree}");
git_tree *tree = (git_tree *)obj;

walk_data d = {0};
error = git_tree_walk(tree, GIT_TREEWALK_PRE, walk_cb, &d);
(git_revparse_single, git_tree_walk, git_treewalk_mode, git_treewalk_cb)

Treebuilder
Since trees in git are immutable we need a mechanism to build them. This method in libgit2 is the treebuilder. Just like the tree object, the treebuilder object represents a single directory containing other objects.

git_treebuilder *bld = NULL;
int error = git_treebuilder_create(&bld, NULL);

/* Add some entries */
git_object *obj = NULL;
error = git_revparse_single(&obj, repo, "HEAD:README.md");
error = git_treebuilder_insert(NULL, bld,
                               "README.md",        /* filename */
                               git_object_id(obj), /* OID */
                               GIT_FILEMODE_BLOB); /* mode */
git_object_free(obj);
error = git_revparse_single(&obj, repo, "v0.1.0:foo/bar/baz.c");
error = git_treebuilder_insert(NULL, bld,
                               "d.c",
                               git_object_id(obj),
                               GIT_FILEMODE_BLOB);
git_object_free(obj);

git_oid oid = 0;
error = git_treebuilder_write(&oid, repo, bld);
git_treebuilder_free(bld);
(git_revparse_single, git_object_free, git_treebuilder_create, git_treebuilder_insert, git_treebuilder_write, git_treebuilder_free)

Commits
Lookups
git_commit *commit;
int error = git_commit_lookup(&commit, repo, &oid);
( git_commit_lookup )

Properties
const git_oid *oid             = git_commit_id(commit);
const char *encoding           = git_commit_message_encoding(commit);
const char *message            = git_commit_message(commit);
const char *summmary           = git_commit_summary(commit);
git_time_t time                = git_commit_time(commit);
int offset_in_min              = git_commit_time_offset(commit);
const git_signature *committer = git_commit_committer(commit);
const git_signature *author    = git_commit_author(commit);
const char *header             = git_commit_raw_header(commit);
const git_oid *tree_id         = git_commit_tree_id(commit);
( git_commit_id, git_commit_message_encoding, git_commit_message, git_commit_summary, git_commit_time, git_commit_time_offset, git_commit_committer, git_commit_author, git_commit_raw_header, git_commit_tree_id )

Parents
unsigned int count = git_commit_parentcount(commit);
for (unsigned int i=0; i<count; i++) {
  git_oid *nth_parent_id = git_commit_parent_id(commit);

  git_commit *nth_parent = NULL;
  int error = git_commit_parent(&nth_parent, commit, i);
  /* … */
}

git_commit *nth_ancestor = NULL;
int error = git_commit_nth_gen_ancestor(&nth_ancestor, commit, 7);
( git_commit_parentcount, git_commit_parent_id, git_commit_parent, git_commit_nth_gen_ancestor )

Create
git_signature *me = NULL;
int error = git_signature_now(&me, "Me", "me@example.com");

const git_commit *parents[] = {parent1, parent2};

git_oid new_commit_id = 0;
error = git_commit_create(
  &new_commit_id,
  repo,
  "HEAD",                      /* name of ref to update */
  me,                          /* author */
  me,                          /* committer */
  "UTF-8",                     /* message encoding */
  "Flooberhaul the whatnots",  /* message */
  tree,                        /* root tree */
  2,                           /* parent count */
  parents);                    /* parents */
( git_signature_now, git_commit_create )

References
Lookups (full name)
git_reference *ref = NULL;
int error = git_reference_lookup(&ref, repo, "refs/heads/master");
(git_reference_lookup)

Lookups (short name)
git_reference *ref = NULL;
int error = git_reference_dwim(&ref, repo, "master");
(git_reference_dwim)

Lookups (resolved)
Get the object pointed to by a symbolic reference (or a chain of them).

git_oid oid = 0;
int error = git_reference_name_to_id(&oid, repo, "HEAD");
(git_reference_name_to_id)

Listing
git_strarray refs = {0};
int error = git_reference_list(&refs, repo);
(git_reference_list)

Foreach (refs)
typedef struct { /* … */ } ref_data;

int each_ref_cb(git_reference *ref, void *payload)
{
  ref_data *d = (ref_data*)payload;
  /* … */
}

ref_data d = {0};
int error = git_reference_foreach(repo, each_ref_cb, &d);
(git_reference_foreach)

Foreach (names)
typedef struct { /* … */ } ref_data;

int each_name_cb(const char *name, void *payload)
{
  ref_data *d = (ref_data*)payload;
  /* … */
}

ref_data d = {0};
int error = git_reference_foreach_name(repo, each_name_cb, &d);
(git_reference_foreach_name)

Foreach (glob)
typedef struct { /* … */ } ref_data;

int each_name_cb(const char *name, void *payload)
{
  ref_data *d = (ref_data*)payload;
  /* … */
}

ref_data d = {0};
int error = git_reference_foreach_glob(repo, "refs/remotes/*", each_name_cb, &d);
(git_reference_foreach_glob)

Iterator (all)
git_reference_iterator *iter = NULL;
int error = git_reference_iterator_new(&iter, repo);

git_reference *ref = NULL;
while (!(error = git_reference_next(&ref, iter))) {
  /* … */
}

if (error != GIT_ITEROVER) {
  /* error */
}
( git_reference_iterator_new, git_reference_next )

Iterator (glob)
git_reference_iterator *iter = NULL;
int error = git_reference_iterator_glob_new(&iter, repo, "refs/heads/*");

const char *name = NULL;
while (!(error = git_reference_next_name(&name, iter))) {
  /* … */
}

if (error != GIT_ITEROVER) {
  /* error */
}
( git_reference_iterator_glob_new, git_reference_next_name )

Create (direct)
git_reference *ref = NULL;
int error = git_reference_create(&ref, repo,
      "refs/heads/direct",       /* name */
      &oid,                      /* target */
      true,                      /* force? */
      NULL);                     /* the message for the reflog */
(git_reference_create)

Create (symbolic)
git_reference *ref = NULL;
int error = git_reference_symbolic_create(&ref, repo,
      "refs/heads/symbolic",     /* name */
      "refs/heads/master",       /* target */
      true,                      /* force? */
      NULL);                     /* the message for the reflog */
(git_reference_symbolic_create)

Tags
Lookups (annotations)
git_tag *tag = NULL;
int error = git_tag_lookup(&tag, repo, &oid);
(git_tag_lookup)

Listing (all)
git_strarray tags = {0};
int error = git_tag_list(&tags, repo);
(git_tag_list)

Listing (glob)
git_strarray tags = {0};
int error = git_tag_list_match(&tags, "v0.*", repo);
(git_tag_list_match)

Foreach
typedef struct { /* … */ } tag_data;

int each_tag(const char *name, git_oid *oid, void *payload)
{
  tag_data *d = (tag_data*)payload;
  /* … */
}

tag_data d = {0};
int error = git_tag_foreach(repo, each_tag, &d);
(git_tag_foreach)

Annotation Properties
const git_oid *target_id = git_tag_target_id(tag);
git_otype target_type = git_tag_target_type(tag);
const char *tag_name = git_tag_name(tag);
const git_signature *tagger = git_tag_tagger(tag);
const char *message = git_tag_message(tag);
( git_tag_target_id, git_tag_target_type, git_tag_name, git_tag_tagger, git_tag_message )

Create (lightweight)
git_oid oid = 0;
git_object *target = NULL;

int error = git_revparse_single(&target, repo, "HEAD^{commit}");
error = git_tag_create_lightweight(
      &oid,       /* target ID (see docs) */
      repo,       /* repository */
      "v2.3.4",   /* name */
      target,     /* target */
      false);     /* force? */
( git_revparse_single, git_tag_create_lightweight )

Create (annotated)
git_oid oid = 0;
git_object *target = NULL;
git_signature *tagger = NULL;

int error = git_revparse_single(&target, repo, "HEAD^{commit}");
error = git_signature_now(
      &tagger,            /* output */
      "Ben Straub",       /* name */
      "bs@github.com");   /* email */
error = git_tag_create(
      &oid,               /* new object id */
      repo,               /* repo */
      "v2.3.4",           /* name */
      target,             /* target */
      tagger,             /* name/email/timestamp */
      "Released 10/5/11", /* message */
      false);             /* force? */
( git_revparse_single, git_signature_now, git_tag_create )

Peeling
git_object *dereferenced_target = NULL;
int error = git_tag_peel(&dereferenced_target, tag);
( git_tag_peel )

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