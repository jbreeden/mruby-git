#include "mruby_Git.h"

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

#ifdef __cplusplus
extern "C" {
#endif

/* MRUBY_BINDING: git_annotated_commit_free */
/* sha: c10baf7d74ff0b9957c2dad680ed77de3deddc377ee224662800d4bc0eb5ad87 */
#if BIND_git_annotated_commit_free_FUNCTION
#define git_annotated_commit_free_REQUIRED_ARGC 1
#define git_annotated_commit_free_OPTIONAL_ARGC 0
/* git_annotated_commit_free
 *
 * Parameters:
 * - commit: git_annotated_commit *
 * Return Type: void
 */
mrb_value
mrb_Git_git_annotated_commit_free(mrb_state* mrb, mrb_value self) {
  mrb_value commit;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &commit);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, AnnotatedCommit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "AnnotatedCommit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  git_annotated_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_annotated_commit(commit));

  /* Invocation */
  git_annotated_commit_free(native_commit);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_annotated_commit_from_fetchhead */
/* sha: a0f8ad1790a5710b853b4157873a8a8fcf940c59c9728144a901d88d052a9da0 */
#if BIND_git_annotated_commit_from_fetchhead_FUNCTION
#define git_annotated_commit_from_fetchhead_REQUIRED_ARGC 4
#define git_annotated_commit_from_fetchhead_OPTIONAL_ARGC 0
/* git_annotated_commit_from_fetchhead
 *
 * Parameters:
 * - repo: git_repository *
 * - branch_name: const char *
 * - remote_url: const char *
 * - id: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_annotated_commit_from_fetchhead(mrb_state* mrb, mrb_value self) {
  git_annotated_commit * native_out = NULL;
  mrb_value repo;
  char * native_branch_name = NULL;
  char * native_remote_url = NULL;
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "ozzo", &repo, &native_branch_name, &native_remote_url, &id);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_annotated_commit_from_fetchhead(&native_out, native_repo, native_branch_name, native_remote_url, native_id);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_annotated_commit(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_annotated_commit_from_ref */
/* sha: 952a5dfe5b5f342d6ccea100d76b1f8839087752a2d325344935d0efed778cfc */
#if BIND_git_annotated_commit_from_ref_FUNCTION
#define git_annotated_commit_from_ref_REQUIRED_ARGC 2
#define git_annotated_commit_from_ref_OPTIONAL_ARGC 0
/* git_annotated_commit_from_ref
 *
 * Parameters:
 * - repo: git_repository *
 * - ref: const git_reference *
 * Return Type: int
 */
mrb_value
mrb_Git_git_annotated_commit_from_ref(mrb_state* mrb, mrb_value self) {
  git_annotated_commit * native_out = NULL;
  mrb_value repo;
  mrb_value ref;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &repo, &ref);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: ref */
  const git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Invocation */
  int native_return_value = git_annotated_commit_from_ref(&native_out, native_repo, native_ref);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_annotated_commit(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_annotated_commit_from_revspec */
/* sha: 127ece75cc2938c16651e023decd777ee5b2b9fa9e7a718d53889cbe7586929b */
#if BIND_git_annotated_commit_from_revspec_FUNCTION
#define git_annotated_commit_from_revspec_REQUIRED_ARGC 2
#define git_annotated_commit_from_revspec_OPTIONAL_ARGC 0
/* git_annotated_commit_from_revspec
 *
 * Parameters:
 * - repo: git_repository *
 * - revspec: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_annotated_commit_from_revspec(mrb_state* mrb, mrb_value self) {
  git_annotated_commit * native_out = NULL;
  mrb_value repo;
  char * native_revspec = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_revspec);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_annotated_commit_from_revspec(&native_out, native_repo, native_revspec);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_annotated_commit(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_annotated_commit_id */
/* sha: 03aac0a4fd8cc604fa9cd0334de237690566b81f0931152451681720f820288d */
#if BIND_git_annotated_commit_id_FUNCTION
#define git_annotated_commit_id_REQUIRED_ARGC 1
#define git_annotated_commit_id_OPTIONAL_ARGC 0
/* git_annotated_commit_id
 *
 * Parameters:
 * - commit: const git_annotated_commit *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_annotated_commit_id(mrb_state* mrb, mrb_value self) {
  mrb_value commit;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &commit);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, AnnotatedCommit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "AnnotatedCommit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  const git_annotated_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_annotated_commit(commit));

  /* Invocation */
  const git_oid * native_return_value = git_annotated_commit_id(native_commit);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_annotated_commit_lookup */
/* sha: 8637905786250fe1fb1ca48fcd8209ad8c3e6847bd268a3c1ff2667c8943d683 */
#if BIND_git_annotated_commit_lookup_FUNCTION
#define git_annotated_commit_lookup_REQUIRED_ARGC 2
#define git_annotated_commit_lookup_OPTIONAL_ARGC 0
/* git_annotated_commit_lookup
 *
 * Parameters:
 * - repo: git_repository *
 * - id: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_annotated_commit_lookup(mrb_state* mrb, mrb_value self) {
  git_annotated_commit * native_out = NULL;
  mrb_value repo;
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &repo, &id);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_annotated_commit_lookup(&native_out, native_repo, native_id);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_annotated_commit(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_attr_add_macro */
/* sha: 1100484ad8a435db81dc7d463dce953ea41ede62ea2742ddcd7d8dfc5fb8353e */
#if BIND_git_attr_add_macro_FUNCTION
#define git_attr_add_macro_REQUIRED_ARGC 3
#define git_attr_add_macro_OPTIONAL_ARGC 0
/* git_attr_add_macro
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * - values: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_attr_add_macro(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_name = NULL;
  char * native_values = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozz", &repo, &native_name, &native_values);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_attr_add_macro(native_repo, native_name, native_values);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_attr_cache_flush */
/* sha: 06ab8bcb73a66e6e03b44c29654356edb8528e60e5d15493b23828c8cf482979 */
#if BIND_git_attr_cache_flush_FUNCTION
#define git_attr_cache_flush_REQUIRED_ARGC 1
#define git_attr_cache_flush_OPTIONAL_ARGC 0
/* git_attr_cache_flush
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: void
 */
mrb_value
mrb_Git_git_attr_cache_flush(mrb_state* mrb, mrb_value self) {
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  git_attr_cache_flush(native_repo);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_attr_foreach */
/* sha: 413e0188f61adb5eb9bb923844386045abaa27147d7af6665b874ea0f71605f8 */
#if BIND_git_attr_foreach_FUNCTION
#define git_attr_foreach_REQUIRED_ARGC 5
#define git_attr_foreach_OPTIONAL_ARGC 0
/* git_attr_foreach
 *
 * Parameters:
 * - repo: git_repository *
 * - flags: uint32_t
 * - path: const char *
 * - callback: git_attr_foreach_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_attr_foreach(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_int native_flags;
  char * native_path = NULL;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "oizoo", &repo, &native_flags, &native_path, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_char_PTR_COMMA_const_char_PTR_COMMA_void_PTR_RPAREN(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: callback */
  int (*native_callback)(const char *, const char *, void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_char_PTR_COMMA_const_char_PTR_COMMA_void_PTR_RPAREN(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_attr_foreach(native_repo, native_flags, native_path, native_callback, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_attr_get */
/* sha: 185e4b9d0aa1c47686c0218bae2fc54672787a46b569dbaba14a520d30a12c3d */
#if BIND_git_attr_get_FUNCTION
#define git_attr_get_REQUIRED_ARGC 4
#define git_attr_get_OPTIONAL_ARGC 0
/* git_attr_get
 *
 * Parameters:
 * - repo: git_repository *
 * - flags: uint32_t
 * - path: const char *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_attr_get(mrb_state* mrb, mrb_value self) {
  char * native_value_out = NULL;
  mrb_value repo;
  mrb_int native_flags;
  char * native_path = NULL;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oizz", &repo, &native_flags, &native_path, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_attr_get(&native_value_out, native_repo, native_flags, native_path, native_name);

  /* Box out param: value_out */
  mrb_value value_out = native_value_out ==  NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_value_out);

  return value_out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_attr_get_many */
/* sha: a6c8e7e7af76527565f6aae4444bfb42d40e8228488da1d14f480abae806bafe */
#if BIND_git_attr_get_many_FUNCTION
#define git_attr_get_many_REQUIRED_ARGC 6
#define git_attr_get_many_OPTIONAL_ARGC 0
/* git_attr_get_many
 *
 * Parameters:
 * - values_out: const char **
 * - repo: git_repository *
 * - flags: uint32_t
 * - path: const char *
 * - num_attr: size_t
 * - names: const char **
 * Return Type: int
 */
mrb_value
mrb_Git_git_attr_get_many(mrb_state* mrb, mrb_value self) {
  mrb_value values_out;
  mrb_value repo;
  mrb_int native_flags;
  char * native_path = NULL;
  mrb_int native_num_attr;
  mrb_value names;

  /* Fetch the args */
  mrb_get_args(mrb, "ooizio", &values_out, &repo, &native_flags, &native_path, &native_num_attr, &names);

  /* Type checking */
  TODO_type_check_char_PTR_PTR(values_out);
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR_PTR(names);

  /* Unbox param: values_out */
  const char ** native_values_out = TODO_mruby_unbox_char_PTR_PTR(values_out);

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: names */
  const char ** native_names = TODO_mruby_unbox_char_PTR_PTR(names);

  /* Invocation */
  int native_return_value = git_attr_get_many(native_values_out, native_repo, native_flags, native_path, native_num_attr, native_names);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_attr_value */
/* sha: aa487003555e3ef7b4d32d313cb98152218e21f7d4ce94425fb1c69b436508b9 */
#if BIND_git_attr_value_FUNCTION
#define git_attr_value_REQUIRED_ARGC 1
#define git_attr_value_OPTIONAL_ARGC 0
/* git_attr_value
 *
 * Parameters:
 * - attr: const char *
 * Return Type: git_attr_t
 */
mrb_value
mrb_Git_git_attr_value(mrb_state* mrb, mrb_value self) {
  char * native_attr = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_attr);

  /* Invocation */
  git_attr_t native_return_value = git_attr_value(native_attr);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blame_buffer */
/* sha: bfd006b689cce4cd9431793728e181ffc967e40e35d458ee0f40574873d7f9ae */
#if BIND_git_blame_buffer_FUNCTION
#define git_blame_buffer_REQUIRED_ARGC 3
#define git_blame_buffer_OPTIONAL_ARGC 0
/* git_blame_buffer
 *
 * Parameters:
 * - reference: git_blame *
 * - buffer: const char *
 * - buffer_len: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_blame_buffer(mrb_state* mrb, mrb_value self) {
  git_blame * native_out = NULL;
  mrb_value reference;
  char * native_buffer = NULL;
  mrb_int native_buffer_len;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &reference, &native_buffer, &native_buffer_len);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, reference, Blame_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blame expected");
    return mrb_nil_value();
  }

  /* Unbox param: reference */
  git_blame * native_reference = (mrb_nil_p(reference) ? NULL : mruby_unbox_git_blame(reference));

  /* Invocation */
  int native_return_value = git_blame_buffer(&native_out, native_reference, native_buffer, native_buffer_len);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_blame(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blame_file */
/* sha: cf55a875d90d72807c86e08cfbf8402f3b28a44fcdbef1398f5c52e4e66e5310 */
#if BIND_git_blame_file_FUNCTION
#define git_blame_file_REQUIRED_ARGC 3
#define git_blame_file_OPTIONAL_ARGC 0
/* git_blame_file
 *
 * Parameters:
 * - repo: git_repository *
 * - path: const char *
 * - options: git_blame_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_blame_file(mrb_state* mrb, mrb_value self) {
  git_blame * native_out = NULL;
  mrb_value repo;
  char * native_path = NULL;
  mrb_value options;

  /* Fetch the args */
  mrb_get_args(mrb, "ozo", &repo, &native_path, &options);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, options, BlameOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "BlameOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: options */
  git_blame_options * native_options = (mrb_nil_p(options) ? NULL : mruby_unbox_git_blame_options(options));

  /* Invocation */
  int native_return_value = git_blame_file(&native_out, native_repo, native_path, native_options);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_blame(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blame_free */
/* sha: 1b57908a45f2826eb88205486f3d228fcbf435982ec3c3f1f2ddea8fcab4cc2b */
#if BIND_git_blame_free_FUNCTION
#define git_blame_free_REQUIRED_ARGC 1
#define git_blame_free_OPTIONAL_ARGC 0
/* git_blame_free
 *
 * Parameters:
 * - blame: git_blame *
 * Return Type: void
 */
mrb_value
mrb_Git_git_blame_free(mrb_state* mrb, mrb_value self) {
  mrb_value blame;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &blame);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, blame, Blame_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blame expected");
    return mrb_nil_value();
  }

  /* Unbox param: blame */
  git_blame * native_blame = (mrb_nil_p(blame) ? NULL : mruby_unbox_git_blame(blame));

  /* Invocation */
  git_blame_free(native_blame);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blame_get_hunk_byindex */
/* sha: c0617822a989e5f3144a46ce55bc378335d4010697f44d7bdd33e194bdf3b47f */
#if BIND_git_blame_get_hunk_byindex_FUNCTION
#define git_blame_get_hunk_byindex_REQUIRED_ARGC 2
#define git_blame_get_hunk_byindex_OPTIONAL_ARGC 0
/* git_blame_get_hunk_byindex
 *
 * Parameters:
 * - blame: git_blame *
 * - index: uint32_t
 * Return Type: const git_blame_hunk *
 */
mrb_value
mrb_Git_git_blame_get_hunk_byindex(mrb_state* mrb, mrb_value self) {
  mrb_value blame;
  mrb_int native_index;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &blame, &native_index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, blame, Blame_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blame expected");
    return mrb_nil_value();
  }

  /* Unbox param: blame */
  git_blame * native_blame = (mrb_nil_p(blame) ? NULL : mruby_unbox_git_blame(blame));

  /* Invocation */
  const git_blame_hunk * native_return_value = git_blame_get_hunk_byindex(native_blame, native_index);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_blame_hunk(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blame_get_hunk_byline */
/* sha: 6db3ad327fd85c4b9147929b14693d78b52df57bffe6fa668bb8c5c2a15c9905 */
#if BIND_git_blame_get_hunk_byline_FUNCTION
#define git_blame_get_hunk_byline_REQUIRED_ARGC 2
#define git_blame_get_hunk_byline_OPTIONAL_ARGC 0
/* git_blame_get_hunk_byline
 *
 * Parameters:
 * - blame: git_blame *
 * - lineno: size_t
 * Return Type: const git_blame_hunk *
 */
mrb_value
mrb_Git_git_blame_get_hunk_byline(mrb_state* mrb, mrb_value self) {
  mrb_value blame;
  mrb_int native_lineno;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &blame, &native_lineno);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, blame, Blame_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blame expected");
    return mrb_nil_value();
  }

  /* Unbox param: blame */
  git_blame * native_blame = (mrb_nil_p(blame) ? NULL : mruby_unbox_git_blame(blame));

  /* Invocation */
  const git_blame_hunk * native_return_value = git_blame_get_hunk_byline(native_blame, native_lineno);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_blame_hunk(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blame_get_hunk_count */
/* sha: be71c2091e98575d45968474ac4ae42431cac959c7668db9ae554806e15d7835 */
#if BIND_git_blame_get_hunk_count_FUNCTION
#define git_blame_get_hunk_count_REQUIRED_ARGC 1
#define git_blame_get_hunk_count_OPTIONAL_ARGC 0
/* git_blame_get_hunk_count
 *
 * Parameters:
 * - blame: git_blame *
 * Return Type: uint32_t
 */
mrb_value
mrb_Git_git_blame_get_hunk_count(mrb_state* mrb, mrb_value self) {
  mrb_value blame;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &blame);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, blame, Blame_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blame expected");
    return mrb_nil_value();
  }

  /* Unbox param: blame */
  git_blame * native_blame = (mrb_nil_p(blame) ? NULL : mruby_unbox_git_blame(blame));

  /* Invocation */
  uint32_t native_return_value = git_blame_get_hunk_count(native_blame);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blame_init_options */
/* sha: f92993916c7fbd51557a6bff90b1f446ed1e2768b79b30be73d0653d94094c0c */
#if BIND_git_blame_init_options_FUNCTION
#define git_blame_init_options_REQUIRED_ARGC 2
#define git_blame_init_options_OPTIONAL_ARGC 0
/* git_blame_init_options
 *
 * Parameters:
 * - opts: git_blame_options *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_blame_init_options(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, BlameOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "BlameOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_blame_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_blame_options(opts));

  /* Invocation */
  int native_return_value = git_blame_init_options(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blob_create_frombuffer */
/* sha: dd25e2b593eb4147ea4fcfc59fb11fdf14b93fd364d0573386a57ff30a7e6ed0 */
#if BIND_git_blob_create_frombuffer_FUNCTION
#define git_blob_create_frombuffer_REQUIRED_ARGC 3
#define git_blob_create_frombuffer_OPTIONAL_ARGC 0
/* git_blob_create_frombuffer
 *
 * Parameters:
 * - id: git_oid *
 * - repo: git_repository *
 * - buffer: const void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_blob_create_frombuffer(mrb_state* mrb, mrb_value self) {
  mrb_value id;
  mrb_value repo;
  mrb_value native_buffer;

  /* Fetch the args */
  mrb_get_args(mrb, "ooS", &id, &repo, &native_buffer);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: id */
  git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_blob_create_frombuffer(native_id, native_repo, RSTRING_PTR(native_buffer), RSTRING_LEN(native_buffer));

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blob_create_fromchunks */
/* sha: c9ea0c0bac33b252e2f82ef74dea1611086ec38b472604c33a76b22ad6835ee9 */
#if BIND_git_blob_create_fromchunks_FUNCTION
#define git_blob_create_fromchunks_REQUIRED_ARGC 5
#define git_blob_create_fromchunks_OPTIONAL_ARGC 0
/* git_blob_create_fromchunks
 *
 * Parameters:
 * - id: git_oid *
 * - repo: git_repository *
 * - hintpath: const char *
 * - callback: git_blob_chunk_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_blob_create_fromchunks(mrb_state* mrb, mrb_value self) {
  mrb_value id;
  mrb_value repo;
  char * native_hintpath = NULL;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "oozoo", &id, &repo, &native_hintpath, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_blob_chunk_cb(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: id */
  git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: callback */
  git_blob_chunk_cb native_callback = TODO_mruby_unbox_git_blob_chunk_cb(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_blob_create_fromchunks(native_id, native_repo, native_hintpath, native_callback, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blob_create_fromdisk */
/* sha: 91e50df5cf1de1127f0ef3aa95033a338dbcd842740e0ababe4c7ec87b4933da */
#if BIND_git_blob_create_fromdisk_FUNCTION
#define git_blob_create_fromdisk_REQUIRED_ARGC 3
#define git_blob_create_fromdisk_OPTIONAL_ARGC 0
/* git_blob_create_fromdisk
 *
 * Parameters:
 * - id: git_oid *
 * - repo: git_repository *
 * - path: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_blob_create_fromdisk(mrb_state* mrb, mrb_value self) {
  mrb_value id;
  mrb_value repo;
  char * native_path = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooz", &id, &repo, &native_path);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: id */
  git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_blob_create_fromdisk(native_id, native_repo, native_path);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blob_create_fromworkdir */
/* sha: cf1e495253aabb370a68e4fb4421a2fb8d29e4976286be2f0dbaca293126683a */
#if BIND_git_blob_create_fromworkdir_FUNCTION
#define git_blob_create_fromworkdir_REQUIRED_ARGC 3
#define git_blob_create_fromworkdir_OPTIONAL_ARGC 0
/* git_blob_create_fromworkdir
 *
 * Parameters:
 * - id: git_oid *
 * - repo: git_repository *
 * - relative_path: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_blob_create_fromworkdir(mrb_state* mrb, mrb_value self) {
  mrb_value id;
  mrb_value repo;
  char * native_relative_path = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooz", &id, &repo, &native_relative_path);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: id */
  git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_blob_create_fromworkdir(native_id, native_repo, native_relative_path);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blob_filtered_content */
/* sha: 2dd94d39b94f1aecbd26472125ea31fd97b3e36547e46358ace2eb88e1f4836e */
#if BIND_git_blob_filtered_content_FUNCTION
#define git_blob_filtered_content_REQUIRED_ARGC 3
#define git_blob_filtered_content_OPTIONAL_ARGC 0
/* git_blob_filtered_content
 *
 * Parameters:
 * - blob: git_blob *
 * - as_path: const char *
 * - check_for_binary_data: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_blob_filtered_content(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value blob;
  char * native_as_path = NULL;
  mrb_int native_check_for_binary_data;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &blob, &native_as_path, &native_check_for_binary_data);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, blob, Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blob expected");
    return mrb_nil_value();
  }

  /* Unbox param: blob */
  git_blob * native_blob = (mrb_nil_p(blob) ? NULL : mruby_unbox_git_blob(blob));

  /* Invocation */
  int native_return_value = git_blob_filtered_content(native_out, native_blob, native_as_path, native_check_for_binary_data);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blob_free */
/* sha: 3744d2bfbb352180afe3ed04719d78a9150ea254b5c58f3c8d8d9e1cbf9decfe */
#if BIND_git_blob_free_FUNCTION
#define git_blob_free_REQUIRED_ARGC 1
#define git_blob_free_OPTIONAL_ARGC 0
/* git_blob_free
 *
 * Parameters:
 * - blob: git_blob *
 * Return Type: void
 */
mrb_value
mrb_Git_git_blob_free(mrb_state* mrb, mrb_value self) {
  mrb_value blob;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &blob);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, blob, Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blob expected");
    return mrb_nil_value();
  }

  /* Unbox param: blob */
  git_blob * native_blob = (mrb_nil_p(blob) ? NULL : mruby_unbox_git_blob(blob));

  /* Invocation */
  git_blob_free(native_blob);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blob_id */
/* sha: b5b29714d61b778872f26ffc811953341159921eda09351ee33ebcde2cf53e9c */
#if BIND_git_blob_id_FUNCTION
#define git_blob_id_REQUIRED_ARGC 1
#define git_blob_id_OPTIONAL_ARGC 0
/* git_blob_id
 *
 * Parameters:
 * - blob: const git_blob *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_blob_id(mrb_state* mrb, mrb_value self) {
  mrb_value blob;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &blob);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, blob, Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blob expected");
    return mrb_nil_value();
  }

  /* Unbox param: blob */
  const git_blob * native_blob = (mrb_nil_p(blob) ? NULL : mruby_unbox_git_blob(blob));

  /* Invocation */
  const git_oid * native_return_value = git_blob_id(native_blob);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blob_is_binary */
/* sha: 00a17bf21c068e00ec7becfa8a6869010640a43614f486b16fe3465cfd52f956 */
#if BIND_git_blob_is_binary_FUNCTION
#define git_blob_is_binary_REQUIRED_ARGC 1
#define git_blob_is_binary_OPTIONAL_ARGC 0
/* git_blob_is_binary
 *
 * Parameters:
 * - blob: const git_blob *
 * Return Type: int
 */
mrb_value
mrb_Git_git_blob_is_binary(mrb_state* mrb, mrb_value self) {
  mrb_value blob;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &blob);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, blob, Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blob expected");
    return mrb_nil_value();
  }

  /* Unbox param: blob */
  const git_blob * native_blob = (mrb_nil_p(blob) ? NULL : mruby_unbox_git_blob(blob));

  /* Invocation */
  int native_return_value = git_blob_is_binary(native_blob);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blob_lookup */
/* sha: d0347b0fd5c58e50da3b624d93b79d0d7c91daf8028fc6f1377ff760367550b8 */
#if BIND_git_blob_lookup_FUNCTION
#define git_blob_lookup_REQUIRED_ARGC 2
#define git_blob_lookup_OPTIONAL_ARGC 0
/* git_blob_lookup
 *
 * Parameters:
 * - repo: git_repository *
 * - id: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_blob_lookup(mrb_state* mrb, mrb_value self) {
  git_blob * native_blob = NULL;
  mrb_value repo;
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &repo, &id);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_blob_lookup(&native_blob, native_repo, native_id);

  /* Box out param: blob */
  mrb_value blob = native_blob == NULL ? mrb_nil_value() : mruby_giftwrap_git_blob(mrb, native_blob);

  return blob;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blob_lookup_prefix */
/* sha: cb14b480e72dfcb32b54f191cc4d587a6d0a788440736327f333fd02f8f5860a */
#if BIND_git_blob_lookup_prefix_FUNCTION
#define git_blob_lookup_prefix_REQUIRED_ARGC 3
#define git_blob_lookup_prefix_OPTIONAL_ARGC 0
/* git_blob_lookup_prefix
 *
 * Parameters:
 * - repo: git_repository *
 * - id: const git_oid *
 * - len: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_blob_lookup_prefix(mrb_state* mrb, mrb_value self) {
  git_blob * native_blob = NULL;
  mrb_value repo;
  mrb_value id;
  mrb_int native_len;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &repo, &id, &native_len);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_blob_lookup_prefix(&native_blob, native_repo, native_id, native_len);

  /* Box out param: blob */
  mrb_value blob = native_blob == NULL ? mrb_nil_value() : mruby_giftwrap_git_blob(mrb, native_blob);

  return blob;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blob_owner */
/* sha: 101b87a1ab77b319d5b62b43b8d05b93eb02d35cb3017b33ddb7eee9a29890ba */
#if BIND_git_blob_owner_FUNCTION
#define git_blob_owner_REQUIRED_ARGC 1
#define git_blob_owner_OPTIONAL_ARGC 0
/* git_blob_owner
 *
 * Parameters:
 * - blob: const git_blob *
 * Return Type: git_repository *
 */
mrb_value
mrb_Git_git_blob_owner(mrb_state* mrb, mrb_value self) {
  mrb_value blob;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &blob);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, blob, Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blob expected");
    return mrb_nil_value();
  }

  /* Unbox param: blob */
  const git_blob * native_blob = (mrb_nil_p(blob) ? NULL : mruby_unbox_git_blob(blob));

  /* Invocation */
  git_repository * native_return_value = git_blob_owner(native_blob);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_repository(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blob_rawcontent */
/* sha: b2a3a017925156cbd6e918dc4690ee3354917ad5267f78949c2f5367d15f995c */
#if BIND_git_blob_rawcontent_FUNCTION
#define git_blob_rawcontent_REQUIRED_ARGC 1
#define git_blob_rawcontent_OPTIONAL_ARGC 0
/* git_blob_rawcontent
 *
 * Parameters:
 * - blob: const git_blob *
 * Return Type: const void *
 */
mrb_value
mrb_Git_git_blob_rawcontent(mrb_state* mrb, mrb_value self) {
  mrb_value blob;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &blob);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, blob, Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blob expected");
    return mrb_nil_value();
  }

  /* Unbox param: blob */
  const git_blob * native_blob = (mrb_nil_p(blob) ? NULL : mruby_unbox_git_blob(blob));

  /* Invocation */
  const void * native_return_value = git_blob_rawcontent(native_blob);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_blob_rawsize */
/* sha: ba5e16b3937112d5802e80bff2ddd0a4a05d203ec7b36a3296a2031599619f28 */
#if BIND_git_blob_rawsize_FUNCTION
#define git_blob_rawsize_REQUIRED_ARGC 1
#define git_blob_rawsize_OPTIONAL_ARGC 0
/* git_blob_rawsize
 *
 * Parameters:
 * - blob: const git_blob *
 * Return Type: git_off_t
 */
mrb_value
mrb_Git_git_blob_rawsize(mrb_state* mrb, mrb_value self) {
  mrb_value blob;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &blob);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, blob, Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blob expected");
    return mrb_nil_value();
  }

  /* Unbox param: blob */
  const git_blob * native_blob = (mrb_nil_p(blob) ? NULL : mruby_unbox_git_blob(blob));

  /* Invocation */
  git_off_t native_return_value = git_blob_rawsize(native_blob);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_branch_create */
/* sha: 27dadef5095074e497c576a2d1d8629bce92c804210b1bc418250a88db3c39c8 */
#if BIND_git_branch_create_FUNCTION
#define git_branch_create_REQUIRED_ARGC 4
#define git_branch_create_OPTIONAL_ARGC 0
/* git_branch_create
 *
 * Parameters:
 * - repo: git_repository *
 * - branch_name: const char *
 * - target: const git_commit *
 * - force: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_branch_create(mrb_state* mrb, mrb_value self) {
  git_reference * native_out = NULL;
  mrb_value repo;
  char * native_branch_name = NULL;
  mrb_value target;
  mrb_int native_force;

  /* Fetch the args */
  mrb_get_args(mrb, "ozoi", &repo, &native_branch_name, &target, &native_force);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, target, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: target */
  const git_commit * native_target = (mrb_nil_p(target) ? NULL : mruby_unbox_git_commit(target));

  /* Invocation */
  int native_return_value = git_branch_create(&native_out, native_repo, native_branch_name, native_target, native_force);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_branch_create_from_annotated */
/* sha: 69e0654cb6e616487916fa7e710d350e536aab1a285da949e035df25a7b4e24a */
#if BIND_git_branch_create_from_annotated_FUNCTION
#define git_branch_create_from_annotated_REQUIRED_ARGC 4
#define git_branch_create_from_annotated_OPTIONAL_ARGC 0
/* git_branch_create_from_annotated
 *
 * Parameters:
 * - repository: git_repository *
 * - branch_name: const char *
 * - commit: const git_annotated_commit *
 * - force: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_branch_create_from_annotated(mrb_state* mrb, mrb_value self) {
  git_reference * native_ref_out = NULL;
  mrb_value repository;
  char * native_branch_name = NULL;
  mrb_value commit;
  mrb_int native_force;

  /* Fetch the args */
  mrb_get_args(mrb, "ozoi", &repository, &native_branch_name, &commit, &native_force);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repository, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, commit, AnnotatedCommit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "AnnotatedCommit expected");
    return mrb_nil_value();
  }

  /* Unbox param: repository */
  git_repository * native_repository = (mrb_nil_p(repository) ? NULL : mruby_unbox_git_repository(repository));

  /* Unbox param: commit */
  const git_annotated_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_annotated_commit(commit));

  /* Invocation */
  int native_return_value = git_branch_create_from_annotated(&native_ref_out, native_repository, native_branch_name, native_commit, native_force);

  /* Box out param: ref_out */
  mrb_value ref_out = native_ref_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference(mrb, native_ref_out);

  return ref_out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_branch_delete */
/* sha: b1bacd3fc70d0a8f2d4918c6c6569353e91bc4badbd5c273b9e4352bba381aa7 */
#if BIND_git_branch_delete_FUNCTION
#define git_branch_delete_REQUIRED_ARGC 1
#define git_branch_delete_OPTIONAL_ARGC 0
/* git_branch_delete
 *
 * Parameters:
 * - branch: git_reference *
 * Return Type: int
 */
mrb_value
mrb_Git_git_branch_delete(mrb_state* mrb, mrb_value self) {
  mrb_value branch;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &branch);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, branch, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: branch */
  git_reference * native_branch = (mrb_nil_p(branch) ? NULL : mruby_unbox_git_reference(branch));

  /* Invocation */
  int native_return_value = git_branch_delete(native_branch);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_branch_is_head */
/* sha: 7dd6e435c50d010bf3830a4e7eaceec1fdef30c51e83792936afc00dda67a3f2 */
#if BIND_git_branch_is_head_FUNCTION
#define git_branch_is_head_REQUIRED_ARGC 1
#define git_branch_is_head_OPTIONAL_ARGC 0
/* git_branch_is_head
 *
 * Parameters:
 * - branch: const git_reference *
 * Return Type: int
 */
mrb_value
mrb_Git_git_branch_is_head(mrb_state* mrb, mrb_value self) {
  mrb_value branch;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &branch);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, branch, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: branch */
  const git_reference * native_branch = (mrb_nil_p(branch) ? NULL : mruby_unbox_git_reference(branch));

  /* Invocation */
  int native_return_value = git_branch_is_head(native_branch);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_branch_iterator_free */
/* sha: 10adfc0dcf298a072da40069d7bbe88314047f0006cca4286cb7a690323f3a21 */
#if BIND_git_branch_iterator_free_FUNCTION
#define git_branch_iterator_free_REQUIRED_ARGC 1
#define git_branch_iterator_free_OPTIONAL_ARGC 0
/* git_branch_iterator_free
 *
 * Parameters:
 * - iter: git_branch_iterator *
 * Return Type: void
 */
mrb_value
mrb_Git_git_branch_iterator_free(mrb_state* mrb, mrb_value self) {
  mrb_value iter;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &iter);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, iter, BranchIterator_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "BranchIterator expected");
    return mrb_nil_value();
  }

  /* Unbox param: iter */
  git_branch_iterator * native_iter = (mrb_nil_p(iter) ? NULL : mruby_unbox_git_branch_iterator(iter));

  /* Invocation */
  git_branch_iterator_free(native_iter);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_branch_iterator_new */
/* sha: 0d5c5c31be846380f0c51525b6588a4c82679f22d8636522db6207aea7f12688 */
#if BIND_git_branch_iterator_new_FUNCTION
#define git_branch_iterator_new_REQUIRED_ARGC 2
#define git_branch_iterator_new_OPTIONAL_ARGC 0
/* git_branch_iterator_new
 *
 * Parameters:
 * - repo: git_repository *
 * - list_flags: git_branch_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_branch_iterator_new(mrb_state* mrb, mrb_value self) {
  git_branch_iterator * native_out = NULL;
  mrb_value repo;
  mrb_int native_list_flags;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &repo, &native_list_flags);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_branch_iterator_new(&native_out, native_repo, native_list_flags);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_branch_iterator(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_branch_lookup */
/* sha: 7a842c64bd2cb9f2097cc275202fcb69cbefb8e285ed70db81a3df159937acbc */
#if BIND_git_branch_lookup_FUNCTION
#define git_branch_lookup_REQUIRED_ARGC 3
#define git_branch_lookup_OPTIONAL_ARGC 0
/* git_branch_lookup
 *
 * Parameters:
 * - repo: git_repository *
 * - branch_name: const char *
 * - branch_type: git_branch_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_branch_lookup(mrb_state* mrb, mrb_value self) {
  git_reference * native_out = NULL;
  mrb_value repo;
  char * native_branch_name = NULL;
  mrb_int native_branch_type;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &repo, &native_branch_name, &native_branch_type);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_branch_lookup(&native_out, native_repo, native_branch_name, native_branch_type);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_branch_move */
/* sha: 5bd41de845967d790c7b8175c8edeb77e23d0cfdca237d4f129d596d25ed75d6 */
#if BIND_git_branch_move_FUNCTION
#define git_branch_move_REQUIRED_ARGC 3
#define git_branch_move_OPTIONAL_ARGC 0
/* git_branch_move
 *
 * Parameters:
 * - branch: git_reference *
 * - new_branch_name: const char *
 * - force: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_branch_move(mrb_state* mrb, mrb_value self) {
  git_reference * native_out = NULL;
  mrb_value branch;
  char * native_new_branch_name = NULL;
  mrb_int native_force;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &branch, &native_new_branch_name, &native_force);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, branch, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: branch */
  git_reference * native_branch = (mrb_nil_p(branch) ? NULL : mruby_unbox_git_reference(branch));

  /* Invocation */
  int native_return_value = git_branch_move(&native_out, native_branch, native_new_branch_name, native_force);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_branch_name */
/* sha: 30275ba781cfb1994e7a4caf55be6cd6fbd066aa3d314c0103ed05fb352be4ef */
#if BIND_git_branch_name_FUNCTION
#define git_branch_name_REQUIRED_ARGC 1
#define git_branch_name_OPTIONAL_ARGC 0
/* git_branch_name
 *
 * Parameters:
 * - ref: const git_reference *
 * Return Type: int
 */
mrb_value
mrb_Git_git_branch_name(mrb_state* mrb, mrb_value self) {
  char * native_out = NULL;
  mrb_value ref;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ref);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref */
  const git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Invocation */
  int native_return_value = git_branch_name(&native_out, native_ref);

  /* Box out param: out */
  mrb_value out = native_out ==  NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_branch_next */
/* sha: 0111c8d86d6ded1e01baf6b66ec653360473d823d5158fcbaa7de7dc47826295 */
#if BIND_git_branch_next_FUNCTION
#define git_branch_next_REQUIRED_ARGC 1
#define git_branch_next_OPTIONAL_ARGC 0
/* git_branch_next
 *
 * Parameters:
 * - iter: git_branch_iterator *
 * Return Type: int
 */
mrb_value
mrb_Git_git_branch_next(mrb_state* mrb, mrb_value self) {
  mrb_value results = mrb_ary_new(mrb);
  git_reference * native_out = NULL;
  int native_out_type;
  mrb_value iter;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &iter);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, iter, BranchIterator_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "BranchIterator expected");
    return mrb_nil_value();
  }

  /* Unbox param: iter */
  git_branch_iterator * native_iter = (mrb_nil_p(iter) ? NULL : mruby_unbox_git_branch_iterator(iter));

  /* Invocation */
  int native_return_value = git_branch_next(&native_out, &native_out_type, native_iter);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference(mrb, native_out);
  /* Box out param: out_type */
  mrb_value out_type = mrb_fixnum_value(native_out_type);

  /* Add out params to results */
  mrb_ary_push(mrb, results, out);
  mrb_ary_push(mrb, results, out_type);

  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_branch_remote_name */
/* sha: 171b1eb37041d84edcc553b0538e6d60222490d0f3c40ba3f470655bddd00500 */
#if BIND_git_branch_remote_name_FUNCTION
#define git_branch_remote_name_REQUIRED_ARGC 2
#define git_branch_remote_name_OPTIONAL_ARGC 0
/* git_branch_remote_name
 *
 * Parameters:
 * - repo: git_repository *
 * - canonical_branch_name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_branch_remote_name(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value repo;
  char * native_canonical_branch_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_canonical_branch_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_branch_remote_name(native_out, native_repo, native_canonical_branch_name);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_branch_set_upstream */
/* sha: 85f362a2c5006a99be2cb1e8ed4030d80adbd9e52c61c7939946afbff0733278 */
#if BIND_git_branch_set_upstream_FUNCTION
#define git_branch_set_upstream_REQUIRED_ARGC 2
#define git_branch_set_upstream_OPTIONAL_ARGC 0
/* git_branch_set_upstream
 *
 * Parameters:
 * - branch: git_reference *
 * - upstream_name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_branch_set_upstream(mrb_state* mrb, mrb_value self) {
  mrb_value branch;
  char * native_upstream_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &branch, &native_upstream_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, branch, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: branch */
  git_reference * native_branch = (mrb_nil_p(branch) ? NULL : mruby_unbox_git_reference(branch));

  /* Invocation */
  int native_return_value = git_branch_set_upstream(native_branch, native_upstream_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_branch_upstream */
/* sha: a5509cedad31e12a0e08c3dee86c3b199cd37167addd208c73415769a79e4e14 */
#if BIND_git_branch_upstream_FUNCTION
#define git_branch_upstream_REQUIRED_ARGC 1
#define git_branch_upstream_OPTIONAL_ARGC 0
/* git_branch_upstream
 *
 * Parameters:
 * - branch: const git_reference *
 * Return Type: int
 */
mrb_value
mrb_Git_git_branch_upstream(mrb_state* mrb, mrb_value self) {
  git_reference * native_out = NULL;
  mrb_value branch;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &branch);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, branch, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: branch */
  const git_reference * native_branch = (mrb_nil_p(branch) ? NULL : mruby_unbox_git_reference(branch));

  /* Invocation */
  int native_return_value = git_branch_upstream(&native_out, native_branch);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_branch_upstream_name */
/* sha: caa5fc87d9e5137e4a04fad4b954dcb4497af68a3aeace44daa6354be7dc2aa6 */
#if BIND_git_branch_upstream_name_FUNCTION
#define git_branch_upstream_name_REQUIRED_ARGC 2
#define git_branch_upstream_name_OPTIONAL_ARGC 0
/* git_branch_upstream_name
 *
 * Parameters:
 * - repo: git_repository *
 * - refname: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_branch_upstream_name(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value repo;
  char * native_refname = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_refname);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_branch_upstream_name(native_out, native_repo, native_refname);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_branch_upstream_remote */
/* sha: 768b2bc0d1eceefcc8bd7e508f016b4f44cfa71da1755a728607cfde274dd8c4 */
#if BIND_git_branch_upstream_remote_FUNCTION
#define git_branch_upstream_remote_REQUIRED_ARGC 3
#define git_branch_upstream_remote_OPTIONAL_ARGC 0
/* git_branch_upstream_remote
 *
 * Parameters:
 * - buf: git_buf *
 * - repo: git_repository *
 * - refname: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_branch_upstream_remote(mrb_state* mrb, mrb_value self) {
  mrb_value buf;
  mrb_value repo;
  char * native_refname = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooz", &buf, &repo, &native_refname);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, buf, Buf_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Buf expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: buf */
  git_buf * native_buf = mrb_nil_p(buf) ? NULL : mruby_unbox_git_buf(buf);

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_branch_upstream_remote(native_buf, native_repo, native_refname);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_buf_contains_nul */
/* sha: 68dd5fc5899563be2983c1f5780a0ea566241a7cd60252bbc046c747d68e0de2 */
#if BIND_git_buf_contains_nul_FUNCTION
#define git_buf_contains_nul_REQUIRED_ARGC 1
#define git_buf_contains_nul_OPTIONAL_ARGC 0
/* git_buf_contains_nul
 *
 * Parameters:
 * - buf: const git_buf *
 * Return Type: int
 */
mrb_value
mrb_Git_git_buf_contains_nul(mrb_state* mrb, mrb_value self) {
  mrb_value buf;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &buf);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, buf, Buf_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Buf expected");
    return mrb_nil_value();
  }

  /* Unbox param: buf */
  git_buf * native_buf = mrb_nil_p(buf) ? NULL : mruby_unbox_git_buf(buf);

  /* Invocation */
  int native_return_value = git_buf_contains_nul(native_buf);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_buf_free */
/* sha: 7822f3652a3efef7ae1742cd08f9ebad3bef7e65ba9a6ad92e5cedab923220f4 */
#if BIND_git_buf_free_FUNCTION
#define git_buf_free_REQUIRED_ARGC 1
#define git_buf_free_OPTIONAL_ARGC 0
/* git_buf_free
 *
 * Parameters:
 * - buffer: git_buf *
 * Return Type: void
 */
mrb_value
mrb_Git_git_buf_free(mrb_state* mrb, mrb_value self) {
  mrb_value buffer;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &buffer);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, buffer, Buf_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Buf expected");
    return mrb_nil_value();
  }

  /* Unbox param: buffer */
  git_buf * native_buffer = mrb_nil_p(buffer) ? NULL : mruby_unbox_git_buf(buffer);

  /* Invocation */
  git_buf_free(native_buffer);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_buf_grow */
/* sha: 094183c514f40a0feae149a6415fe786df4befb05538e30f18becb3f2241c48e */
#if BIND_git_buf_grow_FUNCTION
#define git_buf_grow_REQUIRED_ARGC 2
#define git_buf_grow_OPTIONAL_ARGC 0
/* git_buf_grow
 *
 * Parameters:
 * - buffer: git_buf *
 * - target_size: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_buf_grow(mrb_state* mrb, mrb_value self) {
  mrb_value buffer;
  mrb_int native_target_size;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &buffer, &native_target_size);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, buffer, Buf_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Buf expected");
    return mrb_nil_value();
  }

  /* Unbox param: buffer */
  git_buf * native_buffer = mrb_nil_p(buffer) ? NULL : mruby_unbox_git_buf(buffer);

  /* Invocation */
  int native_return_value = git_buf_grow(native_buffer, native_target_size);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_buf_is_binary */
/* sha: cd813b5b603a56595a0ac908b03a4fc61581637518d9d46fc6c55be87c9d2ad6 */
#if BIND_git_buf_is_binary_FUNCTION
#define git_buf_is_binary_REQUIRED_ARGC 1
#define git_buf_is_binary_OPTIONAL_ARGC 0
/* git_buf_is_binary
 *
 * Parameters:
 * - buf: const git_buf *
 * Return Type: int
 */
mrb_value
mrb_Git_git_buf_is_binary(mrb_state* mrb, mrb_value self) {
  mrb_value buf;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &buf);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, buf, Buf_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Buf expected");
    return mrb_nil_value();
  }

  /* Unbox param: buf */
  git_buf * native_buf = mrb_nil_p(buf) ? NULL : mruby_unbox_git_buf(buf);

  /* Invocation */
  int native_return_value = git_buf_is_binary(native_buf);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_buf_set */
/* sha: ab3a3809dd728935e488a062e58dae1b24afe91dacd7feeffd562ca3119db51e */
#if BIND_git_buf_set_FUNCTION
#define git_buf_set_REQUIRED_ARGC 2
#define git_buf_set_OPTIONAL_ARGC 0
/* git_buf_set
 *
 * Parameters:
 * - buffer: git_buf *
 * - data: const void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_buf_set(mrb_state* mrb, mrb_value self) {
  mrb_value buffer;
  mrb_value native_data;

  /* Fetch the args */
  mrb_get_args(mrb, "oS", &buffer, &native_data);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, buffer, Buf_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Buf expected");
    return mrb_nil_value();
  }

  /* Unbox param: buffer */
  git_buf * native_buffer = mrb_nil_p(buffer) ? NULL : mruby_unbox_git_buf(buffer);

  /* Invocation */
  int native_return_value = git_buf_set(native_buffer, RSTRING_PTR(native_data), RSTRING_LEN(native_data));

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_checkout_head */
/* sha: 0c04e675e42276ac1f7fea1d71fe287bcc6b67b1300e64ca6c0e0a9e05c54d8a */
#if BIND_git_checkout_head_FUNCTION
#define git_checkout_head_REQUIRED_ARGC 2
#define git_checkout_head_OPTIONAL_ARGC 0
/* git_checkout_head
 *
 * Parameters:
 * - repo: git_repository *
 * - opts: const git_checkout_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_checkout_head(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &repo, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, CheckoutOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CheckoutOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: opts */
  const git_checkout_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_checkout_options(opts));

  /* Invocation */
  int native_return_value = git_checkout_head(native_repo, native_opts);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_checkout_index */
/* sha: 8d048a062033f5d36d180977f98f2fe8e1fe2532680545b7f63ead18f8c16e1a */
#if BIND_git_checkout_index_FUNCTION
#define git_checkout_index_REQUIRED_ARGC 3
#define git_checkout_index_OPTIONAL_ARGC 0
/* git_checkout_index
 *
 * Parameters:
 * - repo: git_repository *
 * - index: git_index *
 * - opts: const git_checkout_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_checkout_index(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value index;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &repo, &index, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, CheckoutOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CheckoutOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Unbox param: opts */
  const git_checkout_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_checkout_options(opts));

  /* Invocation */
  int native_return_value = git_checkout_index(native_repo, native_index, native_opts);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_checkout_init_options */
/* sha: 2f9f91a52f652ed3d24902ec9dd85039f845b00c6e4ca9c7261214d27ed1e447 */
#if BIND_git_checkout_init_options_FUNCTION
#define git_checkout_init_options_REQUIRED_ARGC 2
#define git_checkout_init_options_OPTIONAL_ARGC 0
/* git_checkout_init_options
 *
 * Parameters:
 * - opts: git_checkout_options *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_checkout_init_options(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, CheckoutOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CheckoutOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_checkout_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_checkout_options(opts));

  /* Invocation */
  int native_return_value = git_checkout_init_options(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_checkout_tree */
/* sha: 0ea4d1aff5b49da637d6d3551bce8f1df7dcc1dce7bad9b31e6b213e15f0dfa6 */
#if BIND_git_checkout_tree_FUNCTION
#define git_checkout_tree_REQUIRED_ARGC 3
#define git_checkout_tree_OPTIONAL_ARGC 0
/* git_checkout_tree
 *
 * Parameters:
 * - repo: git_repository *
 * - treeish: const git_object *
 * - opts: const git_checkout_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_checkout_tree(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value treeish;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &repo, &treeish, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, treeish, Object_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Object expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, CheckoutOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CheckoutOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: treeish */
  const git_object * native_treeish = (mrb_nil_p(treeish) ? NULL : mruby_unbox_git_object(treeish));

  /* Unbox param: opts */
  const git_checkout_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_checkout_options(opts));

  /* Invocation */
  int native_return_value = git_checkout_tree(native_repo, native_treeish, native_opts);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_cherrypick */
/* sha: b2f5a570e6d40dec5623290455c7b31a5aa87d45ad72c31f04b3fae91d4ef867 */
#if BIND_git_cherrypick_FUNCTION
#define git_cherrypick_REQUIRED_ARGC 3
#define git_cherrypick_OPTIONAL_ARGC 0
/* git_cherrypick
 *
 * Parameters:
 * - repo: git_repository *
 * - commit: git_commit *
 * - cherrypick_options: const git_cherrypick_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_cherrypick(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value commit;
  mrb_value cherrypick_options;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &repo, &commit, &cherrypick_options);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, cherrypick_options, CherrypickOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CherrypickOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: commit */
  git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Unbox param: cherrypick_options */
  const git_cherrypick_options * native_cherrypick_options = (mrb_nil_p(cherrypick_options) ? NULL : mruby_unbox_git_cherrypick_options(cherrypick_options));

  /* Invocation */
  int native_return_value = git_cherrypick(native_repo, native_commit, native_cherrypick_options);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_cherrypick_commit */
/* sha: 69c9dc3dcd9fbfd85b4f0fe2fe434cbae6284b6cc8d1cc4489f2974d85eeaad7 */
#if BIND_git_cherrypick_commit_FUNCTION
#define git_cherrypick_commit_REQUIRED_ARGC 5
#define git_cherrypick_commit_OPTIONAL_ARGC 0
/* git_cherrypick_commit
 *
 * Parameters:
 * - repo: git_repository *
 * - cherrypick_commit: git_commit *
 * - our_commit: git_commit *
 * - mainline: unsigned int
 * - merge_options: const git_merge_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_cherrypick_commit(mrb_state* mrb, mrb_value self) {
  git_index * native_out = NULL;
  mrb_value repo;
  mrb_value cherrypick_commit;
  mrb_value our_commit;
  mrb_int native_mainline;
  mrb_value merge_options;

  /* Fetch the args */
  mrb_get_args(mrb, "oooio", &repo, &cherrypick_commit, &our_commit, &native_mainline, &merge_options);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, cherrypick_commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, our_commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, merge_options, MergeOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MergeOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: cherrypick_commit */
  git_commit * native_cherrypick_commit = (mrb_nil_p(cherrypick_commit) ? NULL : mruby_unbox_git_commit(cherrypick_commit));

  /* Unbox param: our_commit */
  git_commit * native_our_commit = (mrb_nil_p(our_commit) ? NULL : mruby_unbox_git_commit(our_commit));

  /* Unbox param: merge_options */
  const git_merge_options * native_merge_options = (mrb_nil_p(merge_options) ? NULL : mruby_unbox_git_merge_options(merge_options));

  /* Invocation */
  int native_return_value = git_cherrypick_commit(&native_out, native_repo, native_cherrypick_commit, native_our_commit, native_mainline, native_merge_options);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_index(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_cherrypick_init_options */
/* sha: 63534b70de768f24081cc8eb29e83080077241ed5e1fa52a457ca9f5d4e2c126 */
#if BIND_git_cherrypick_init_options_FUNCTION
#define git_cherrypick_init_options_REQUIRED_ARGC 2
#define git_cherrypick_init_options_OPTIONAL_ARGC 0
/* git_cherrypick_init_options
 *
 * Parameters:
 * - opts: git_cherrypick_options *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_cherrypick_init_options(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, CherrypickOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CherrypickOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_cherrypick_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_cherrypick_options(opts));

  /* Invocation */
  int native_return_value = git_cherrypick_init_options(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_clone */
/* sha: fda31264d57cd9af7f6a7332a1c99bd062b03dbc9cb0d9786bfc98e9b7c10081 */
#if BIND_git_clone_FUNCTION
#define git_clone_REQUIRED_ARGC 3
#define git_clone_OPTIONAL_ARGC 0
/* git_clone
 *
 * Parameters:
 * - url: const char *
 * - local_path: const char *
 * - options: const git_clone_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_clone(mrb_state* mrb, mrb_value self) {
  git_repository * native_out = NULL;
  char * native_url = NULL;
  char * native_local_path = NULL;
  mrb_value options;

  /* Fetch the args */
  mrb_get_args(mrb, "zzo", &native_url, &native_local_path, &options);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, options, CloneOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CloneOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: options */
  const git_clone_options * native_options = (mrb_nil_p(options) ? NULL : mruby_unbox_git_clone_options(options));

  /* Invocation */
  int native_return_value = git_clone(&native_out, native_url, native_local_path, native_options);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_repository(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_clone_init_options */
/* sha: 58ffbe5df21d3d752c0a3cfe2377e73a58742f7df6a03f450e4d42435e2bc191 */
#if BIND_git_clone_init_options_FUNCTION
#define git_clone_init_options_REQUIRED_ARGC 2
#define git_clone_init_options_OPTIONAL_ARGC 0
/* git_clone_init_options
 *
 * Parameters:
 * - opts: git_clone_options *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_clone_init_options(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, CloneOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CloneOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_clone_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_clone_options(opts));

  /* Invocation */
  int native_return_value = git_clone_init_options(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_amend */
/* sha: 483ef6628aa889eb17011286d0c333e7bc538d69a4c2931f7d8be30b14dacac5 */
#if BIND_git_commit_amend_FUNCTION
#define git_commit_amend_REQUIRED_ARGC 8
#define git_commit_amend_OPTIONAL_ARGC 0
/* git_commit_amend
 *
 * Parameters:
 * - id: git_oid *
 * - commit_to_amend: const git_commit *
 * - update_ref: const char *
 * - author: const git_signature *
 * - committer: const git_signature *
 * - message_encoding: const char *
 * - message: const char *
 * - tree: const git_tree *
 * Return Type: int
 */
mrb_value
mrb_Git_git_commit_amend(mrb_state* mrb, mrb_value self) {
  mrb_value id;
  mrb_value commit_to_amend;
  char * native_update_ref = NULL;
  mrb_value author;
  mrb_value committer;
  char * native_message_encoding = NULL;
  char * native_message = NULL;
  mrb_value tree;

  /* Fetch the args */
  mrb_get_args(mrb, "oozoozzo", &id, &commit_to_amend, &native_update_ref, &author, &committer, &native_message_encoding, &native_message, &tree);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, commit_to_amend, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, author, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, committer, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }

  /* Unbox param: id */
  git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Unbox param: commit_to_amend */
  const git_commit * native_commit_to_amend = (mrb_nil_p(commit_to_amend) ? NULL : mruby_unbox_git_commit(commit_to_amend));

  /* Unbox param: author */
  const git_signature * native_author = (mrb_nil_p(author) ? NULL : mruby_unbox_git_signature(author));

  /* Unbox param: committer */
  const git_signature * native_committer = (mrb_nil_p(committer) ? NULL : mruby_unbox_git_signature(committer));

  /* Unbox param: tree */
  const git_tree * native_tree = (mrb_nil_p(tree) ? NULL : mruby_unbox_git_tree(tree));

  /* Invocation */
  int native_return_value = git_commit_amend(native_id, native_commit_to_amend, native_update_ref, native_author, native_committer, native_message_encoding, native_message, native_tree);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_author */
/* sha: 1f6aa41b5da02b22eb3bd373b6b9edb373a986e01c5974692bd9075c10d5fe40 */
#if BIND_git_commit_author_FUNCTION
#define git_commit_author_REQUIRED_ARGC 1
#define git_commit_author_OPTIONAL_ARGC 0
/* git_commit_author
 *
 * Parameters:
 * - commit: const git_commit *
 * Return Type: const git_signature *
 */
mrb_value
mrb_Git_git_commit_author(mrb_state* mrb, mrb_value self) {
  mrb_value commit;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &commit);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  const git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  const git_signature * native_return_value = git_commit_author(native_commit);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_signature(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_body */
/* sha: 0c49e748877cdbaa65c4ab674afe70869b4301364394a04d6e92a3034ec4f87a */
#if BIND_git_commit_body_FUNCTION
#define git_commit_body_REQUIRED_ARGC 1
#define git_commit_body_OPTIONAL_ARGC 0
/* git_commit_body
 *
 * Parameters:
 * - commit: git_commit *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_commit_body(mrb_state* mrb, mrb_value self) {
  mrb_value commit;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &commit);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  const char * native_return_value = git_commit_body(native_commit);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_committer */
/* sha: 02b88b6ee1641d6c619a2a99d5bb620ffa64afc654548be0d64991d72c6a29a6 */
#if BIND_git_commit_committer_FUNCTION
#define git_commit_committer_REQUIRED_ARGC 1
#define git_commit_committer_OPTIONAL_ARGC 0
/* git_commit_committer
 *
 * Parameters:
 * - commit: const git_commit *
 * Return Type: const git_signature *
 */
mrb_value
mrb_Git_git_commit_committer(mrb_state* mrb, mrb_value self) {
  mrb_value commit;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &commit);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  const git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  const git_signature * native_return_value = git_commit_committer(native_commit);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_signature(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_create */
/* sha: 51baca7ce5c001f6fbe30ddb55afb48ddc37ab6e6e4f1c7fd3d5e2e459bf5d61 */
#if BIND_git_commit_create_FUNCTION
#define git_commit_create_REQUIRED_ARGC 10
#define git_commit_create_OPTIONAL_ARGC 0
/* git_commit_create
 *
 * Parameters:
 * - id: git_oid *
 * - repo: git_repository *
 * - update_ref: const char *
 * - author: const git_signature *
 * - committer: const git_signature *
 * - message_encoding: const char *
 * - message: const char *
 * - tree: const git_tree *
 * - parent_count: size_t
 * - parents: const git_commit *[]
 * Return Type: int
 */
mrb_value
mrb_Git_git_commit_create(mrb_state* mrb, mrb_value self) {
  mrb_value id;
  mrb_value repo;
  char * native_update_ref = NULL;
  mrb_value author;
  mrb_value committer;
  char * native_message_encoding = NULL;
  char * native_message = NULL;
  mrb_value tree;
  mrb_int native_parent_count;
  mrb_value parents;

  /* Fetch the args */
  mrb_get_args(mrb, "oozoozzoio", &id, &repo, &native_update_ref, &author, &committer, &native_message_encoding, &native_message, &tree, &native_parent_count, &parents);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, author, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, committer, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_commit_PTR_[](parents);

  /* Unbox param: id */
  git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: author */
  const git_signature * native_author = (mrb_nil_p(author) ? NULL : mruby_unbox_git_signature(author));

  /* Unbox param: committer */
  const git_signature * native_committer = (mrb_nil_p(committer) ? NULL : mruby_unbox_git_signature(committer));

  /* Unbox param: tree */
  const git_tree * native_tree = (mrb_nil_p(tree) ? NULL : mruby_unbox_git_tree(tree));

  /* Unbox param: parents */
  const git_commit *[] native_parents = TODO_mruby_unbox_git_commit_PTR_[](parents);

  /* Invocation */
  int native_return_value = git_commit_create(native_id, native_repo, native_update_ref, native_author, native_committer, native_message_encoding, native_message, native_tree, native_parent_count, native_parents);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_create_v */
/* sha: c911688c6a796552e1ba09ff96a578c3dc10827a46d9d534ec008bba6dcffddb */
#if BIND_git_commit_create_v_FUNCTION
#define git_commit_create_v_REQUIRED_ARGC 9
#define git_commit_create_v_OPTIONAL_ARGC 0
/* git_commit_create_v
 *
 * Parameters:
 * - id: git_oid *
 * - repo: git_repository *
 * - update_ref: const char *
 * - author: const git_signature *
 * - committer: const git_signature *
 * - message_encoding: const char *
 * - message: const char *
 * - tree: const git_tree *
 * - parent_count: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_commit_create_v(mrb_state* mrb, mrb_value self) {
  mrb_value id;
  mrb_value repo;
  char * native_update_ref = NULL;
  mrb_value author;
  mrb_value committer;
  char * native_message_encoding = NULL;
  char * native_message = NULL;
  mrb_value tree;
  mrb_int native_parent_count;

  /* Fetch the args */
  mrb_get_args(mrb, "oozoozzoi", &id, &repo, &native_update_ref, &author, &committer, &native_message_encoding, &native_message, &tree, &native_parent_count);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, author, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, committer, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }

  /* Unbox param: id */
  git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: author */
  const git_signature * native_author = (mrb_nil_p(author) ? NULL : mruby_unbox_git_signature(author));

  /* Unbox param: committer */
  const git_signature * native_committer = (mrb_nil_p(committer) ? NULL : mruby_unbox_git_signature(committer));

  /* Unbox param: tree */
  const git_tree * native_tree = (mrb_nil_p(tree) ? NULL : mruby_unbox_git_tree(tree));

  /* Invocation */
  int native_return_value = git_commit_create_v(native_id, native_repo, native_update_ref, native_author, native_committer, native_message_encoding, native_message, native_tree, native_parent_count);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_free */
/* sha: f70363f18aa37ea0ceabb563e6e45eacd21edf87974e5775a426e3a2660a2abe */
#if BIND_git_commit_free_FUNCTION
#define git_commit_free_REQUIRED_ARGC 1
#define git_commit_free_OPTIONAL_ARGC 0
/* git_commit_free
 *
 * Parameters:
 * - commit: git_commit *
 * Return Type: void
 */
mrb_value
mrb_Git_git_commit_free(mrb_state* mrb, mrb_value self) {
  mrb_value commit;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &commit);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  git_commit_free(native_commit);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_header_field */
/* sha: 8df99718326071c7be462202084003e13ef448a0f0cfff5b3c5d8c1eb7f225ab */
#if BIND_git_commit_header_field_FUNCTION
#define git_commit_header_field_REQUIRED_ARGC 2
#define git_commit_header_field_OPTIONAL_ARGC 0
/* git_commit_header_field
 *
 * Parameters:
 * - commit: const git_commit *
 * - field: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_commit_header_field(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value commit;
  char * native_field = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &commit, &native_field);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  const git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  int native_return_value = git_commit_header_field(native_out, native_commit, native_field);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_id */
/* sha: cc3f84d5d4846ae10bfa1537ee523c62a3549eb32ad06f3613cb00e87c43814a */
#if BIND_git_commit_id_FUNCTION
#define git_commit_id_REQUIRED_ARGC 1
#define git_commit_id_OPTIONAL_ARGC 0
/* git_commit_id
 *
 * Parameters:
 * - commit: const git_commit *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_commit_id(mrb_state* mrb, mrb_value self) {
  mrb_value commit;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &commit);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  const git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  const git_oid * native_return_value = git_commit_id(native_commit);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_lookup */
/* sha: 59ddc748b8d1ce8feb6466876cc521d2667d001e3590518faaecfb0559840c0a */
#if BIND_git_commit_lookup_FUNCTION
#define git_commit_lookup_REQUIRED_ARGC 2
#define git_commit_lookup_OPTIONAL_ARGC 0
/* git_commit_lookup
 *
 * Parameters:
 * - repo: git_repository *
 * - id: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_commit_lookup(mrb_state* mrb, mrb_value self) {
  git_commit * native_commit = NULL;
  mrb_value repo;
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &repo, &id);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_commit_lookup(&native_commit, native_repo, native_id);

  /* Box out param: commit */
  mrb_value commit = native_commit == NULL ? mrb_nil_value() : mruby_giftwrap_git_commit(mrb, native_commit);

  return commit;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_lookup_prefix */
/* sha: 3d440ab040650c3f2f8fb5c5c4c5e2d43b8b25f381a7cba6b6062e85600355fb */
#if BIND_git_commit_lookup_prefix_FUNCTION
#define git_commit_lookup_prefix_REQUIRED_ARGC 3
#define git_commit_lookup_prefix_OPTIONAL_ARGC 0
/* git_commit_lookup_prefix
 *
 * Parameters:
 * - repo: git_repository *
 * - id: const git_oid *
 * - len: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_commit_lookup_prefix(mrb_state* mrb, mrb_value self) {
  git_commit * native_commit = NULL;
  mrb_value repo;
  mrb_value id;
  mrb_int native_len;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &repo, &id, &native_len);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_commit_lookup_prefix(&native_commit, native_repo, native_id, native_len);

  /* Box out param: commit */
  mrb_value commit = native_commit == NULL ? mrb_nil_value() : mruby_giftwrap_git_commit(mrb, native_commit);

  return commit;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_message */
/* sha: ff1bad69213e76473efe7b2865bc0d21d9f89c76a49b91eb5c5b0ad8493ecbcc */
#if BIND_git_commit_message_FUNCTION
#define git_commit_message_REQUIRED_ARGC 1
#define git_commit_message_OPTIONAL_ARGC 0
/* git_commit_message
 *
 * Parameters:
 * - commit: const git_commit *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_commit_message(mrb_state* mrb, mrb_value self) {
  mrb_value commit;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &commit);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  const git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  const char * native_return_value = git_commit_message(native_commit);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_message_encoding */
/* sha: c353517d5ec6ef938585e27ae5f4b4013029f13317e087da031f86866aec5292 */
#if BIND_git_commit_message_encoding_FUNCTION
#define git_commit_message_encoding_REQUIRED_ARGC 1
#define git_commit_message_encoding_OPTIONAL_ARGC 0
/* git_commit_message_encoding
 *
 * Parameters:
 * - commit: const git_commit *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_commit_message_encoding(mrb_state* mrb, mrb_value self) {
  mrb_value commit;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &commit);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  const git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  const char * native_return_value = git_commit_message_encoding(native_commit);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_message_raw */
/* sha: 5154a7c34384a14a5c44cd97d9c8f598e80dcd5e8549e514844aa492169f19a9 */
#if BIND_git_commit_message_raw_FUNCTION
#define git_commit_message_raw_REQUIRED_ARGC 1
#define git_commit_message_raw_OPTIONAL_ARGC 0
/* git_commit_message_raw
 *
 * Parameters:
 * - commit: const git_commit *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_commit_message_raw(mrb_state* mrb, mrb_value self) {
  mrb_value commit;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &commit);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  const git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  const char * native_return_value = git_commit_message_raw(native_commit);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_nth_gen_ancestor */
/* sha: 2a75ced0f7d060bcf9d4a8d781ef01cce289476aae5e5478e754efe793b682b4 */
#if BIND_git_commit_nth_gen_ancestor_FUNCTION
#define git_commit_nth_gen_ancestor_REQUIRED_ARGC 2
#define git_commit_nth_gen_ancestor_OPTIONAL_ARGC 0
/* git_commit_nth_gen_ancestor
 *
 * Parameters:
 * - commit: const git_commit *
 * - n: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_commit_nth_gen_ancestor(mrb_state* mrb, mrb_value self) {
  git_commit * native_ancestor = NULL;
  mrb_value commit;
  mrb_int native_n;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &commit, &native_n);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  const git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  int native_return_value = git_commit_nth_gen_ancestor(&native_ancestor, native_commit, native_n);

  /* Box out param: ancestor */
  mrb_value ancestor = native_ancestor == NULL ? mrb_nil_value() : mruby_giftwrap_git_commit(mrb, native_ancestor);

  return ancestor;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_owner */
/* sha: 8304aec89de65b19830c942421cb7ee29f8e059ba2b758d56ba6260139a24bf0 */
#if BIND_git_commit_owner_FUNCTION
#define git_commit_owner_REQUIRED_ARGC 1
#define git_commit_owner_OPTIONAL_ARGC 0
/* git_commit_owner
 *
 * Parameters:
 * - commit: const git_commit *
 * Return Type: git_repository *
 */
mrb_value
mrb_Git_git_commit_owner(mrb_state* mrb, mrb_value self) {
  mrb_value commit;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &commit);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  const git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  git_repository * native_return_value = git_commit_owner(native_commit);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_repository(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_parent */
/* sha: 335490e8848254b7db4757fb87df19494e430ab214acf8ff2270b6d85dc5819e */
#if BIND_git_commit_parent_FUNCTION
#define git_commit_parent_REQUIRED_ARGC 2
#define git_commit_parent_OPTIONAL_ARGC 0
/* git_commit_parent
 *
 * Parameters:
 * - commit: const git_commit *
 * - n: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_commit_parent(mrb_state* mrb, mrb_value self) {
  git_commit * native_out = NULL;
  mrb_value commit;
  mrb_int native_n;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &commit, &native_n);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  const git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  int native_return_value = git_commit_parent(&native_out, native_commit, native_n);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_commit(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_parent_id */
/* sha: 5c5949f38fd5aa3337b609dea1cc85c1b379beec3d95598624d8452f20f405c8 */
#if BIND_git_commit_parent_id_FUNCTION
#define git_commit_parent_id_REQUIRED_ARGC 2
#define git_commit_parent_id_OPTIONAL_ARGC 0
/* git_commit_parent_id
 *
 * Parameters:
 * - commit: const git_commit *
 * - n: unsigned int
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_commit_parent_id(mrb_state* mrb, mrb_value self) {
  mrb_value commit;
  mrb_int native_n;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &commit, &native_n);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  const git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  const git_oid * native_return_value = git_commit_parent_id(native_commit, native_n);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_parentcount */
/* sha: c35e39f49bcfcb01312b6028efb4b77a5ba1ca171287cbe9b338ecee5be40605 */
#if BIND_git_commit_parentcount_FUNCTION
#define git_commit_parentcount_REQUIRED_ARGC 1
#define git_commit_parentcount_OPTIONAL_ARGC 0
/* git_commit_parentcount
 *
 * Parameters:
 * - commit: const git_commit *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_git_commit_parentcount(mrb_state* mrb, mrb_value self) {
  mrb_value commit;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &commit);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  const git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  unsigned int native_return_value = git_commit_parentcount(native_commit);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_raw_header */
/* sha: b0612fa1c5daf9aad7aaf406b934a52a505d372ffd30dc00a5c7dd3fdb397c4e */
#if BIND_git_commit_raw_header_FUNCTION
#define git_commit_raw_header_REQUIRED_ARGC 1
#define git_commit_raw_header_OPTIONAL_ARGC 0
/* git_commit_raw_header
 *
 * Parameters:
 * - commit: const git_commit *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_commit_raw_header(mrb_state* mrb, mrb_value self) {
  mrb_value commit;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &commit);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  const git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  const char * native_return_value = git_commit_raw_header(native_commit);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_summary */
/* sha: edc528da2e506accc2743d23989c2a29de3d0b77b727fbdf041f6027e2a70fe3 */
#if BIND_git_commit_summary_FUNCTION
#define git_commit_summary_REQUIRED_ARGC 1
#define git_commit_summary_OPTIONAL_ARGC 0
/* git_commit_summary
 *
 * Parameters:
 * - commit: git_commit *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_commit_summary(mrb_state* mrb, mrb_value self) {
  mrb_value commit;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &commit);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  const char * native_return_value = git_commit_summary(native_commit);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_time */
/* sha: 7b10a305e83289d2d81fe2ca30d9fd2e8ab49d44bcf3b9bde5a04ba36f980740 */
#if BIND_git_commit_time_FUNCTION
#define git_commit_time_REQUIRED_ARGC 1
#define git_commit_time_OPTIONAL_ARGC 0
/* git_commit_time
 *
 * Parameters:
 * - commit: const git_commit *
 * Return Type: git_time_t
 */
mrb_value
mrb_Git_git_commit_time(mrb_state* mrb, mrb_value self) {
  mrb_value commit;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &commit);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  const git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  git_time_t native_return_value = git_commit_time(native_commit);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_time_offset */
/* sha: e291e73fc818b190ed97da8e57f2404042c5aed6039026728ee664a778680d85 */
#if BIND_git_commit_time_offset_FUNCTION
#define git_commit_time_offset_REQUIRED_ARGC 1
#define git_commit_time_offset_OPTIONAL_ARGC 0
/* git_commit_time_offset
 *
 * Parameters:
 * - commit: const git_commit *
 * Return Type: int
 */
mrb_value
mrb_Git_git_commit_time_offset(mrb_state* mrb, mrb_value self) {
  mrb_value commit;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &commit);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  const git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  int native_return_value = git_commit_time_offset(native_commit);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_tree */
/* sha: 92af11e26ff1b4c4e0baac350cf55cc091594de09d939dababe3e9f205579c22 */
#if BIND_git_commit_tree_FUNCTION
#define git_commit_tree_REQUIRED_ARGC 1
#define git_commit_tree_OPTIONAL_ARGC 0
/* git_commit_tree
 *
 * Parameters:
 * - commit: const git_commit *
 * Return Type: int
 */
mrb_value
mrb_Git_git_commit_tree(mrb_state* mrb, mrb_value self) {
  git_tree * native_tree_out = NULL;
  mrb_value commit;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &commit);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  const git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  int native_return_value = git_commit_tree(&native_tree_out, native_commit);

  /* Box out param: tree_out */
  mrb_value tree_out = native_tree_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_tree(mrb, native_tree_out);

  return tree_out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_commit_tree_id */
/* sha: 6012ae18fceaa498561b6cb024805262877794f831d17159402aea58b686c745 */
#if BIND_git_commit_tree_id_FUNCTION
#define git_commit_tree_id_REQUIRED_ARGC 1
#define git_commit_tree_id_OPTIONAL_ARGC 0
/* git_commit_tree_id
 *
 * Parameters:
 * - commit: const git_commit *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_commit_tree_id(mrb_state* mrb, mrb_value self) {
  mrb_value commit;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &commit);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }

  /* Unbox param: commit */
  const git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Invocation */
  const git_oid * native_return_value = git_commit_tree_id(native_commit);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_add_file_ondisk */
/* sha: adb43428d603683a33acbed42cf6e60ff7ecc9bf44fa7ccec6234964183e43a7 */
#if BIND_git_config_add_file_ondisk_FUNCTION
#define git_config_add_file_ondisk_REQUIRED_ARGC 4
#define git_config_add_file_ondisk_OPTIONAL_ARGC 0
/* git_config_add_file_ondisk
 *
 * Parameters:
 * - cfg: git_config *
 * - path: const char *
 * - level: git_config_level_t
 * - force: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_add_file_ondisk(mrb_state* mrb, mrb_value self) {
  mrb_value cfg;
  char * native_path = NULL;
  mrb_int native_level;
  mrb_int native_force;

  /* Fetch the args */
  mrb_get_args(mrb, "ozii", &cfg, &native_path, &native_level, &native_force);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  int native_return_value = git_config_add_file_ondisk(native_cfg, native_path, native_level, native_force);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_backend_foreach_match */
/* sha: 89df72269bc9140d76329e3d56e5ec1d6e788ae37f83413a5322201504839e18 */
#if BIND_git_config_backend_foreach_match_FUNCTION
#define git_config_backend_foreach_match_REQUIRED_ARGC 4
#define git_config_backend_foreach_match_OPTIONAL_ARGC 0
/* git_config_backend_foreach_match
 *
 * Parameters:
 * - backend: git_config_backend *
 * - regexp: const char *
 * - callback: git_config_foreach_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_backend_foreach_match(mrb_state* mrb, mrb_value self) {
  mrb_value backend;
  char * native_regexp = NULL;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ozoo", &backend, &native_regexp, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, backend, ConfigBackend_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ConfigBackend expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_config_foreach_cb(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: backend */
  git_config_backend * native_backend = (mrb_nil_p(backend) ? NULL : mruby_unbox_git_config_backend(backend));

  /* Unbox param: callback */
  git_config_foreach_cb native_callback = TODO_mruby_unbox_git_config_foreach_cb(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_config_backend_foreach_match(native_backend, native_regexp, native_callback, native_payload);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_delete_entry */
/* sha: 754533aca31373b431e7eef6f0a388aa24922cdecdea3f0b8e21c738826f4214 */
#if BIND_git_config_delete_entry_FUNCTION
#define git_config_delete_entry_REQUIRED_ARGC 2
#define git_config_delete_entry_OPTIONAL_ARGC 0
/* git_config_delete_entry
 *
 * Parameters:
 * - cfg: git_config *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_delete_entry(mrb_state* mrb, mrb_value self) {
  mrb_value cfg;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &cfg, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  int native_return_value = git_config_delete_entry(native_cfg, native_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_delete_multivar */
/* sha: 459d923d321223470c20d66ee4b703ec14c1fa5622ceb6b48047c61ffe01b229 */
#if BIND_git_config_delete_multivar_FUNCTION
#define git_config_delete_multivar_REQUIRED_ARGC 3
#define git_config_delete_multivar_OPTIONAL_ARGC 0
/* git_config_delete_multivar
 *
 * Parameters:
 * - cfg: git_config *
 * - name: const char *
 * - regexp: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_delete_multivar(mrb_state* mrb, mrb_value self) {
  mrb_value cfg;
  char * native_name = NULL;
  char * native_regexp = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozz", &cfg, &native_name, &native_regexp);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  int native_return_value = git_config_delete_multivar(native_cfg, native_name, native_regexp);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_entry_free */
/* sha: d38ab356806e2f38e75869f6a813b5a4c381c70774bba5a50d6d4bfd686b4dff */
#if BIND_git_config_entry_free_FUNCTION
#define git_config_entry_free_REQUIRED_ARGC 1
#define git_config_entry_free_OPTIONAL_ARGC 0
/* git_config_entry_free
 *
 * Parameters:
 * - arg1: git_config_entry *
 * Return Type: void
 */
mrb_value
mrb_Git_git_config_entry_free(mrb_state* mrb, mrb_value self) {
  mrb_value arg1;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &arg1);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, arg1, ConfigEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ConfigEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: arg1 */
  git_config_entry * native_arg1 = (mrb_nil_p(arg1) ? NULL : mruby_unbox_git_config_entry(arg1));

  /* Invocation */
  git_config_entry_free(native_arg1);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_find_global */
/* sha: cbe515fe39c88ef05cf5d5021194e9bdf0d09dffd47e95bcba451e4757bf55da */
#if BIND_git_config_find_global_FUNCTION
#define git_config_find_global_REQUIRED_ARGC 0
#define git_config_find_global_OPTIONAL_ARGC 0
/* git_config_find_global
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_find_global(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));


  /* Invocation */
  int native_return_value = git_config_find_global(native_out);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_find_programdata */
/* sha: 1c549eb77779fedab813dbc59f6eb53051a54bbbe5f91e930a31c4e890e0a641 */
#if BIND_git_config_find_programdata_FUNCTION
#define git_config_find_programdata_REQUIRED_ARGC 0
#define git_config_find_programdata_OPTIONAL_ARGC 0
/* git_config_find_programdata
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_find_programdata(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));


  /* Invocation */
  int native_return_value = git_config_find_programdata(native_out);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_find_system */
/* sha: ac83e1a1ad7b55fb1a4b01e1d8a8f472b2bb191a4a01b3d47ab42951da2f24f4 */
#if BIND_git_config_find_system_FUNCTION
#define git_config_find_system_REQUIRED_ARGC 0
#define git_config_find_system_OPTIONAL_ARGC 0
/* git_config_find_system
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_find_system(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));


  /* Invocation */
  int native_return_value = git_config_find_system(native_out);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_find_xdg */
/* sha: a4ef803f9719b62f65ff3f270fbe8e2e2f8e2a89c0e41152f5227296c9986b24 */
#if BIND_git_config_find_xdg_FUNCTION
#define git_config_find_xdg_REQUIRED_ARGC 0
#define git_config_find_xdg_OPTIONAL_ARGC 0
/* git_config_find_xdg
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_find_xdg(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));


  /* Invocation */
  int native_return_value = git_config_find_xdg(native_out);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_foreach */
/* sha: 1a84278606ba98cbf7d14d0854d5c82ffd208e067426672829bfa3666a60dbd5 */
#if BIND_git_config_foreach_FUNCTION
#define git_config_foreach_REQUIRED_ARGC 3
#define git_config_foreach_OPTIONAL_ARGC 0
/* git_config_foreach
 *
 * Parameters:
 * - cfg: const git_config *
 * - callback: git_config_foreach_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_foreach(mrb_state* mrb, mrb_value self) {
  mrb_value cfg;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &cfg, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_config_foreach_cb(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: cfg */
  const git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Unbox param: callback */
  git_config_foreach_cb native_callback = TODO_mruby_unbox_git_config_foreach_cb(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_config_foreach(native_cfg, native_callback, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_foreach_match */
/* sha: 7bbe5964226ebee035a62cff2a4c1604e27262f08fad0de790bde52719a87c26 */
#if BIND_git_config_foreach_match_FUNCTION
#define git_config_foreach_match_REQUIRED_ARGC 4
#define git_config_foreach_match_OPTIONAL_ARGC 0
/* git_config_foreach_match
 *
 * Parameters:
 * - cfg: const git_config *
 * - regexp: const char *
 * - callback: git_config_foreach_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_foreach_match(mrb_state* mrb, mrb_value self) {
  mrb_value cfg;
  char * native_regexp = NULL;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ozoo", &cfg, &native_regexp, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_config_foreach_cb(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: cfg */
  const git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Unbox param: callback */
  git_config_foreach_cb native_callback = TODO_mruby_unbox_git_config_foreach_cb(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_config_foreach_match(native_cfg, native_regexp, native_callback, native_payload);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_free */
/* sha: d09f64fffd45922ab7f3c9125144edf2e7ee2365cd27e41db51d49a89e98ab9b */
#if BIND_git_config_free_FUNCTION
#define git_config_free_REQUIRED_ARGC 1
#define git_config_free_OPTIONAL_ARGC 0
/* git_config_free
 *
 * Parameters:
 * - cfg: git_config *
 * Return Type: void
 */
mrb_value
mrb_Git_git_config_free(mrb_state* mrb, mrb_value self) {
  mrb_value cfg;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cfg);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  git_config_free(native_cfg);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_get_bool */
/* sha: 378e3cdffacf904ccf978fe06f725eea0d478c4ee350ec4351edb89e505b6754 */
#if BIND_git_config_get_bool_FUNCTION
#define git_config_get_bool_REQUIRED_ARGC 2
#define git_config_get_bool_OPTIONAL_ARGC 0
/* git_config_get_bool
 *
 * Parameters:
 * - cfg: const git_config *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_get_bool(mrb_state* mrb, mrb_value self) {
  int native_out;
  mrb_value cfg;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &cfg, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  const git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  int native_return_value = git_config_get_bool(&native_out, native_cfg, native_name);

  /* Box out param: out */
  mrb_value out = native_out == 0 ? mrb_false_value() : mrb_true_value();

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_get_entry */
/* sha: 8ff96f7837791cf324aff9b7407f9d4ea11407fd3467db20b190e3b913e24439 */
#if BIND_git_config_get_entry_FUNCTION
#define git_config_get_entry_REQUIRED_ARGC 2
#define git_config_get_entry_OPTIONAL_ARGC 0
/* git_config_get_entry
 *
 * Parameters:
 * - cfg: const git_config *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_get_entry(mrb_state* mrb, mrb_value self) {
  git_config_entry * native_out = NULL;
  mrb_value cfg;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &cfg, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  const git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  int native_return_value = git_config_get_entry(&native_out, native_cfg, native_name);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_config_entry(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_get_int32 */
/* sha: 386492c1f05095fbf5355a4d67aede46802ac439d271bbb1697fa0570628d6cb */
#if BIND_git_config_get_int32_FUNCTION
#define git_config_get_int32_REQUIRED_ARGC 2
#define git_config_get_int32_OPTIONAL_ARGC 0
/* git_config_get_int32
 *
 * Parameters:
 * - cfg: const git_config *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_get_int32(mrb_state* mrb, mrb_value self) {
  int native_out;
  mrb_value cfg;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &cfg, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  const git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  int native_return_value = git_config_get_int32(&native_out, native_cfg, native_name);

  /* Box out param: out */
  mrb_value out = mrb_fixnum_value(native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_get_int64 */
/* sha: 2dd8e5591ac0695ba072ee8c60830616e1e290947283e41b8335c07714988b87 */
#if BIND_git_config_get_int64_FUNCTION
#define git_config_get_int64_REQUIRED_ARGC 2
#define git_config_get_int64_OPTIONAL_ARGC 0
/* git_config_get_int64
 *
 * Parameters:
 * - cfg: const git_config *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_get_int64(mrb_state* mrb, mrb_value self) {
  int native_out;
  mrb_value cfg;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &cfg, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  const git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  int native_return_value = git_config_get_int64(&native_out, native_cfg, native_name);

  /* Box out param: out */
  mrb_value out = mrb_fixnum_value(native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_get_mapped */
/* sha: 0719e92c633ff590c3c6a29d4d332b80fca489049c7270838a18e651c62df9bc */
#if BIND_git_config_get_mapped_FUNCTION
#define git_config_get_mapped_REQUIRED_ARGC 4
#define git_config_get_mapped_OPTIONAL_ARGC 0
/* git_config_get_mapped
 *
 * Parameters:
 * - cfg: const git_config *
 * - name: const char *
 * - maps: const git_cvar_map *
 * - map_n: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_get_mapped(mrb_state* mrb, mrb_value self) {
  int native_out;
  mrb_value cfg;
  char * native_name = NULL;
  mrb_value maps;
  mrb_int native_map_n;

  /* Fetch the args */
  mrb_get_args(mrb, "ozoi", &cfg, &native_name, &maps, &native_map_n);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, maps, CvarMap_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CvarMap expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  const git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Unbox param: maps */
  const git_cvar_map * native_maps = (mrb_nil_p(maps) ? NULL : mruby_unbox_git_cvar_map(maps));

  /* Invocation */
  int native_return_value = git_config_get_mapped(&native_out, native_cfg, native_name, native_maps, native_map_n);

  /* Box out param: out */
  mrb_value out = mrb_fixnum_value(native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_get_multivar_foreach */
/* sha: 40c7e3be1b7abeffbd2a1db61e50292de792d1a442dde1b16b86c6e6caf216e4 */
#if BIND_git_config_get_multivar_foreach_FUNCTION
#define git_config_get_multivar_foreach_REQUIRED_ARGC 5
#define git_config_get_multivar_foreach_OPTIONAL_ARGC 0
/* git_config_get_multivar_foreach
 *
 * Parameters:
 * - cfg: const git_config *
 * - name: const char *
 * - regexp: const char *
 * - callback: git_config_foreach_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_get_multivar_foreach(mrb_state* mrb, mrb_value self) {
  mrb_value cfg;
  char * native_name = NULL;
  char * native_regexp = NULL;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ozzoo", &cfg, &native_name, &native_regexp, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_config_foreach_cb(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: cfg */
  const git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Unbox param: callback */
  git_config_foreach_cb native_callback = TODO_mruby_unbox_git_config_foreach_cb(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_config_get_multivar_foreach(native_cfg, native_name, native_regexp, native_callback, native_payload);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_get_path */
/* sha: 54e8d1080edac4efcdb29fd41f5bb5d95bc29fa620257a64c18a6ac60249810e */
#if BIND_git_config_get_path_FUNCTION
#define git_config_get_path_REQUIRED_ARGC 2
#define git_config_get_path_OPTIONAL_ARGC 0
/* git_config_get_path
 *
 * Parameters:
 * - cfg: const git_config *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_get_path(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value cfg;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &cfg, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  const git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  int native_return_value = git_config_get_path(native_out, native_cfg, native_name);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_get_string */
/* sha: e39325b216d03756b725c59a293ab1d7c7ae440336b93b02bca44159c996df34 */
#if BIND_git_config_get_string_FUNCTION
#define git_config_get_string_REQUIRED_ARGC 2
#define git_config_get_string_OPTIONAL_ARGC 0
/* git_config_get_string
 *
 * Parameters:
 * - cfg: const git_config *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_get_string(mrb_state* mrb, mrb_value self) {
  char * native_out = NULL;
  mrb_value cfg;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &cfg, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  const git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  int native_return_value = git_config_get_string(&native_out, native_cfg, native_name);

  /* Box out param: out */
  mrb_value out = native_out ==  NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_get_string_buf */
/* sha: 4608e84d02457f285337bec21b6d2ed7b9a3087076826c4578b5c2d3411fd39a */
#if BIND_git_config_get_string_buf_FUNCTION
#define git_config_get_string_buf_REQUIRED_ARGC 2
#define git_config_get_string_buf_OPTIONAL_ARGC 0
/* git_config_get_string_buf
 *
 * Parameters:
 * - cfg: const git_config *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_get_string_buf(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value cfg;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &cfg, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  const git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  int native_return_value = git_config_get_string_buf(native_out, native_cfg, native_name);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_iterator_free */
/* sha: b52ea96b15f875471910e4261e115e2ff141a9f817852dcf52356a72e53e4188 */
#if BIND_git_config_iterator_free_FUNCTION
#define git_config_iterator_free_REQUIRED_ARGC 1
#define git_config_iterator_free_OPTIONAL_ARGC 0
/* git_config_iterator_free
 *
 * Parameters:
 * - iter: git_config_iterator *
 * Return Type: void
 */
mrb_value
mrb_Git_git_config_iterator_free(mrb_state* mrb, mrb_value self) {
  mrb_value iter;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &iter);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, iter, ConfigIterator_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ConfigIterator expected");
    return mrb_nil_value();
  }

  /* Unbox param: iter */
  git_config_iterator * native_iter = (mrb_nil_p(iter) ? NULL : mruby_unbox_git_config_iterator(iter));

  /* Invocation */
  git_config_iterator_free(native_iter);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_iterator_glob_new */
/* sha: dff9ca4eb2fa842cbef2e15ba0fddd2fa9ae4cc571c0e9d1faa596d00ba520fc */
#if BIND_git_config_iterator_glob_new_FUNCTION
#define git_config_iterator_glob_new_REQUIRED_ARGC 2
#define git_config_iterator_glob_new_OPTIONAL_ARGC 0
/* git_config_iterator_glob_new
 *
 * Parameters:
 * - cfg: const git_config *
 * - regexp: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_iterator_glob_new(mrb_state* mrb, mrb_value self) {
  git_config_iterator * native_out = NULL;
  mrb_value cfg;
  char * native_regexp = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &cfg, &native_regexp);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  const git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  int native_return_value = git_config_iterator_glob_new(&native_out, native_cfg, native_regexp);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_config_iterator(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_iterator_new */
/* sha: 13f23415d289698c7426a9182980e78b0b4534b981b0fcb8642db0e849bab489 */
#if BIND_git_config_iterator_new_FUNCTION
#define git_config_iterator_new_REQUIRED_ARGC 1
#define git_config_iterator_new_OPTIONAL_ARGC 0
/* git_config_iterator_new
 *
 * Parameters:
 * - cfg: const git_config *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_iterator_new(mrb_state* mrb, mrb_value self) {
  git_config_iterator * native_out = NULL;
  mrb_value cfg;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cfg);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  const git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  int native_return_value = git_config_iterator_new(&native_out, native_cfg);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_config_iterator(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_lock */
/* sha: 1db1144a2fca7728655b72aef0229b64151e8b373e7eaa90c3a1f43be929152e */
#if BIND_git_config_lock_FUNCTION
#define git_config_lock_REQUIRED_ARGC 1
#define git_config_lock_OPTIONAL_ARGC 0
/* git_config_lock
 *
 * Parameters:
 * - cfg: git_config *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_lock(mrb_state* mrb, mrb_value self) {
  git_transaction * native_tx = NULL;
  mrb_value cfg;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cfg);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  int native_return_value = git_config_lock(&native_tx, native_cfg);

  /* Box out param: tx */
  mrb_value tx = native_tx == NULL ? mrb_nil_value() : mruby_giftwrap_git_transaction(mrb, native_tx);

  return tx;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_lookup_map_value */
/* sha: e2bc5803437689fde1166b6ee7eb668d805bf4da0d182a5f6d7ae49589daa6d2 */
#if BIND_git_config_lookup_map_value_FUNCTION
#define git_config_lookup_map_value_REQUIRED_ARGC 3
#define git_config_lookup_map_value_OPTIONAL_ARGC 0
/* git_config_lookup_map_value
 *
 * Parameters:
 * - maps: const git_cvar_map *
 * - map_n: size_t
 * - value: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_lookup_map_value(mrb_state* mrb, mrb_value self) {
  int native_out;
  mrb_value maps;
  mrb_int native_map_n;
  char * native_value = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oiz", &maps, &native_map_n, &native_value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, maps, CvarMap_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CvarMap expected");
    return mrb_nil_value();
  }

  /* Unbox param: maps */
  const git_cvar_map * native_maps = (mrb_nil_p(maps) ? NULL : mruby_unbox_git_cvar_map(maps));

  /* Invocation */
  int native_return_value = git_config_lookup_map_value(&native_out, native_maps, native_map_n, native_value);

  /* Box out param: out */
  mrb_value out = mrb_fixnum_value(native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_multivar_iterator_new */
/* sha: 869ac2e7eca13a9a08c57d11aa34863cb6e2888993b0c06f2369c02c247b90e8 */
#if BIND_git_config_multivar_iterator_new_FUNCTION
#define git_config_multivar_iterator_new_REQUIRED_ARGC 3
#define git_config_multivar_iterator_new_OPTIONAL_ARGC 0
/* git_config_multivar_iterator_new
 *
 * Parameters:
 * - cfg: const git_config *
 * - name: const char *
 * - regexp: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_multivar_iterator_new(mrb_state* mrb, mrb_value self) {
  git_config_iterator * native_out = NULL;
  mrb_value cfg;
  char * native_name = NULL;
  char * native_regexp = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozz", &cfg, &native_name, &native_regexp);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  const git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  int native_return_value = git_config_multivar_iterator_new(&native_out, native_cfg, native_name, native_regexp);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_config_iterator(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_new */
/* sha: 4c7ecf83b8571751a566ea6cbe84f1cfddfa091ea76aa430e4cf16465caf430d */
#if BIND_git_config_new_FUNCTION
#define git_config_new_REQUIRED_ARGC 0
#define git_config_new_OPTIONAL_ARGC 0
/* git_config_new
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_new(mrb_state* mrb, mrb_value self) {
  git_config * native_out = NULL;


  /* Invocation */
  int native_return_value = git_config_new(&native_out);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_config(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_next */
/* sha: e7933fd0ec4df9dc7d7f224ba0c3a27763ef97b228d400507ed62f6c2c914ef6 */
#if BIND_git_config_next_FUNCTION
#define git_config_next_REQUIRED_ARGC 1
#define git_config_next_OPTIONAL_ARGC 0
/* git_config_next
 *
 * Parameters:
 * - iter: git_config_iterator *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_next(mrb_state* mrb, mrb_value self) {
  git_config_entry * native_entry = NULL;
  mrb_value iter;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &iter);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, iter, ConfigIterator_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ConfigIterator expected");
    return mrb_nil_value();
  }

  /* Unbox param: iter */
  git_config_iterator * native_iter = (mrb_nil_p(iter) ? NULL : mruby_unbox_git_config_iterator(iter));

  /* Invocation */
  int native_return_value = git_config_next(&native_entry, native_iter);

  /* Box out param: entry */
  mrb_value entry = native_entry == NULL ? mrb_nil_value() : mruby_giftwrap_git_config_entry(mrb, native_entry);

  return entry;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_open_default */
/* sha: 68f9ec78c9c9007833ae0504dc4340bc8b3913afcf933255ae687f58040d7865 */
#if BIND_git_config_open_default_FUNCTION
#define git_config_open_default_REQUIRED_ARGC 0
#define git_config_open_default_OPTIONAL_ARGC 0
/* git_config_open_default
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_open_default(mrb_state* mrb, mrb_value self) {
  git_config * native_out = NULL;


  /* Invocation */
  int native_return_value = git_config_open_default(&native_out);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_config(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_open_global */
/* sha: 7138f28cff50789ea26738dec67403e4d3e64c4dc71dbde5f7dd34a0d1f87dfc */
#if BIND_git_config_open_global_FUNCTION
#define git_config_open_global_REQUIRED_ARGC 1
#define git_config_open_global_OPTIONAL_ARGC 0
/* git_config_open_global
 *
 * Parameters:
 * - config: git_config *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_open_global(mrb_state* mrb, mrb_value self) {
  git_config * native_out = NULL;
  mrb_value config;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &config);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, config, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: config */
  git_config * native_config = (mrb_nil_p(config) ? NULL : mruby_unbox_git_config(config));

  /* Invocation */
  int native_return_value = git_config_open_global(&native_out, native_config);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_config(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_open_level */
/* sha: 2a317409c9b28bdee25a84851760bb4ce8d16fb41bfc0434e544abe878e3d846 */
#if BIND_git_config_open_level_FUNCTION
#define git_config_open_level_REQUIRED_ARGC 2
#define git_config_open_level_OPTIONAL_ARGC 0
/* git_config_open_level
 *
 * Parameters:
 * - parent: const git_config *
 * - level: git_config_level_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_open_level(mrb_state* mrb, mrb_value self) {
  git_config * native_out = NULL;
  mrb_value parent;
  mrb_int native_level;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &parent, &native_level);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, parent, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: parent */
  const git_config * native_parent = (mrb_nil_p(parent) ? NULL : mruby_unbox_git_config(parent));

  /* Invocation */
  int native_return_value = git_config_open_level(&native_out, native_parent, native_level);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_config(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_open_ondisk */
/* sha: ef2822885cbcc38420ae8b833b5f2df9f09456aee147e836743904cb8430fec8 */
#if BIND_git_config_open_ondisk_FUNCTION
#define git_config_open_ondisk_REQUIRED_ARGC 1
#define git_config_open_ondisk_OPTIONAL_ARGC 0
/* git_config_open_ondisk
 *
 * Parameters:
 * - path: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_open_ondisk(mrb_state* mrb, mrb_value self) {
  git_config * native_out = NULL;
  char * native_path = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_path);

  /* Invocation */
  int native_return_value = git_config_open_ondisk(&native_out, native_path);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_config(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_parse_bool */
/* sha: e1a1f15445dd842178e985e7c07843588285cd264bcea77ffa561fb0957951e7 */
#if BIND_git_config_parse_bool_FUNCTION
#define git_config_parse_bool_REQUIRED_ARGC 1
#define git_config_parse_bool_OPTIONAL_ARGC 0
/* git_config_parse_bool
 *
 * Parameters:
 * - value: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_parse_bool(mrb_state* mrb, mrb_value self) {
  int native_out;
  char * native_value = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_value);

  /* Invocation */
  int native_return_value = git_config_parse_bool(&native_out, native_value);

  /* Box out param: out */
  mrb_value out = native_out == 0 ? mrb_false_value() : mrb_true_value();

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_parse_int32 */
/* sha: 90e8fc3629d7bbd6874bb32d5da406963284be51290d08321b3127b1802c3699 */
#if BIND_git_config_parse_int32_FUNCTION
#define git_config_parse_int32_REQUIRED_ARGC 1
#define git_config_parse_int32_OPTIONAL_ARGC 0
/* git_config_parse_int32
 *
 * Parameters:
 * - value: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_parse_int32(mrb_state* mrb, mrb_value self) {
  int native_out;
  char * native_value = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_value);

  /* Invocation */
  int native_return_value = git_config_parse_int32(&native_out, native_value);

  /* Box out param: out */
  mrb_value out = mrb_fixnum_value(native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_parse_int64 */
/* sha: d4f892bb36e222347fc75089f477289d2b6bbf449843d987210aa675f59fa8a6 */
#if BIND_git_config_parse_int64_FUNCTION
#define git_config_parse_int64_REQUIRED_ARGC 1
#define git_config_parse_int64_OPTIONAL_ARGC 0
/* git_config_parse_int64
 *
 * Parameters:
 * - value: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_parse_int64(mrb_state* mrb, mrb_value self) {
  int native_out;
  char * native_value = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_value);

  /* Invocation */
  int native_return_value = git_config_parse_int64(&native_out, native_value);

  /* Box out param: out */
  mrb_value out = mrb_fixnum_value(native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_parse_path */
/* sha: 80521e444b6b4262329e6e172ecf62b571dcb1da509802a5b393008224b82da6 */
#if BIND_git_config_parse_path_FUNCTION
#define git_config_parse_path_REQUIRED_ARGC 1
#define git_config_parse_path_OPTIONAL_ARGC 0
/* git_config_parse_path
 *
 * Parameters:
 * - value: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_parse_path(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  char * native_value = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_value);

  /* Invocation */
  int native_return_value = git_config_parse_path(native_out, native_value);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_set_bool */
/* sha: 7d0faac9dd41971da89aef427777425364a2a9585c0cf81fbe02d30945020633 */
#if BIND_git_config_set_bool_FUNCTION
#define git_config_set_bool_REQUIRED_ARGC 3
#define git_config_set_bool_OPTIONAL_ARGC 0
/* git_config_set_bool
 *
 * Parameters:
 * - cfg: git_config *
 * - name: const char *
 * - value: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_set_bool(mrb_state* mrb, mrb_value self) {
  mrb_value cfg;
  char * native_name = NULL;
  mrb_int native_value;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &cfg, &native_name, &native_value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  int native_return_value = git_config_set_bool(native_cfg, native_name, native_value);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_set_int32 */
/* sha: 708823ed9d4affcf01d18fa7b40dbacabf098c0cdc9159109f8297a564e32c66 */
#if BIND_git_config_set_int32_FUNCTION
#define git_config_set_int32_REQUIRED_ARGC 3
#define git_config_set_int32_OPTIONAL_ARGC 0
/* git_config_set_int32
 *
 * Parameters:
 * - cfg: git_config *
 * - name: const char *
 * - value: int32_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_set_int32(mrb_state* mrb, mrb_value self) {
  mrb_value cfg;
  char * native_name = NULL;
  mrb_int native_value;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &cfg, &native_name, &native_value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  int native_return_value = git_config_set_int32(native_cfg, native_name, native_value);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_set_int64 */
/* sha: 32ea6f0e0ae0bc8f6ddd3c013fb1131977a95cd93653723d3b8487497290078a */
#if BIND_git_config_set_int64_FUNCTION
#define git_config_set_int64_REQUIRED_ARGC 3
#define git_config_set_int64_OPTIONAL_ARGC 0
/* git_config_set_int64
 *
 * Parameters:
 * - cfg: git_config *
 * - name: const char *
 * - value: int64_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_set_int64(mrb_state* mrb, mrb_value self) {
  mrb_value cfg;
  char * native_name = NULL;
  mrb_int native_value;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &cfg, &native_name, &native_value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  int native_return_value = git_config_set_int64(native_cfg, native_name, native_value);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_set_multivar */
/* sha: 61e50bebd39f2d24f7b487977de50b712b3fb0f0f144fbf97d5b7f0ae5c184e2 */
#if BIND_git_config_set_multivar_FUNCTION
#define git_config_set_multivar_REQUIRED_ARGC 4
#define git_config_set_multivar_OPTIONAL_ARGC 0
/* git_config_set_multivar
 *
 * Parameters:
 * - cfg: git_config *
 * - name: const char *
 * - regexp: const char *
 * - value: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_set_multivar(mrb_state* mrb, mrb_value self) {
  mrb_value cfg;
  char * native_name = NULL;
  char * native_regexp = NULL;
  char * native_value = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozzz", &cfg, &native_name, &native_regexp, &native_value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  int native_return_value = git_config_set_multivar(native_cfg, native_name, native_regexp, native_value);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_set_string */
/* sha: d083d16bf31f016490ac15719beaf35bbdccbed9f4ea441c930a676783ac590b */
#if BIND_git_config_set_string_FUNCTION
#define git_config_set_string_REQUIRED_ARGC 3
#define git_config_set_string_OPTIONAL_ARGC 0
/* git_config_set_string
 *
 * Parameters:
 * - cfg: git_config *
 * - name: const char *
 * - value: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_set_string(mrb_state* mrb, mrb_value self) {
  mrb_value cfg;
  char * native_name = NULL;
  char * native_value = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozz", &cfg, &native_name, &native_value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cfg, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: cfg */
  git_config * native_cfg = (mrb_nil_p(cfg) ? NULL : mruby_unbox_git_config(cfg));

  /* Invocation */
  int native_return_value = git_config_set_string(native_cfg, native_name, native_value);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_config_snapshot */
/* sha: 6aaa382b7ba87c62d8ac1474123d1a5b6fc1ae93a1ff8059227b27aeb3d3c0ac */
#if BIND_git_config_snapshot_FUNCTION
#define git_config_snapshot_REQUIRED_ARGC 1
#define git_config_snapshot_OPTIONAL_ARGC 0
/* git_config_snapshot
 *
 * Parameters:
 * - config: git_config *
 * Return Type: int
 */
mrb_value
mrb_Git_git_config_snapshot(mrb_state* mrb, mrb_value self) {
  git_config * native_out = NULL;
  mrb_value config;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &config);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, config, Config_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Config expected");
    return mrb_nil_value();
  }

  /* Unbox param: config */
  git_config * native_config = (mrb_nil_p(config) ? NULL : mruby_unbox_git_config(config));

  /* Invocation */
  int native_return_value = git_config_snapshot(&native_out, native_config);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_config(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_cred_default_new */
/* sha: 15a2a42c847c5e6a0ee785b6ccbf15e696bc930e2f9cf628fcad9888b3130f88 */
#if BIND_git_cred_default_new_FUNCTION
#define git_cred_default_new_REQUIRED_ARGC 0
#define git_cred_default_new_OPTIONAL_ARGC 0
/* git_cred_default_new
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Git_git_cred_default_new(mrb_state* mrb, mrb_value self) {
  git_cred * native_out = NULL;


  /* Invocation */
  int native_return_value = git_cred_default_new(&native_out);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_cred(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_cred_free */
/* sha: e34b48b43361ce39ec0319d29373ab57cddcfaa31abf5d19522fc1533e1d7251 */
#if BIND_git_cred_free_FUNCTION
#define git_cred_free_REQUIRED_ARGC 1
#define git_cred_free_OPTIONAL_ARGC 0
/* git_cred_free
 *
 * Parameters:
 * - cred: git_cred *
 * Return Type: void
 */
mrb_value
mrb_Git_git_cred_free(mrb_state* mrb, mrb_value self) {
  mrb_value cred;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cred);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cred, Cred_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Cred expected");
    return mrb_nil_value();
  }

  /* Unbox param: cred */
  git_cred * native_cred = (mrb_nil_p(cred) ? NULL : mruby_unbox_git_cred(cred));

  /* Invocation */
  git_cred_free(native_cred);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_cred_has_username */
/* sha: 7e63b1bd9858d4674d1e39bf8d3526c350cf5550bc47c992055a25625e2cd01c */
#if BIND_git_cred_has_username_FUNCTION
#define git_cred_has_username_REQUIRED_ARGC 1
#define git_cred_has_username_OPTIONAL_ARGC 0
/* git_cred_has_username
 *
 * Parameters:
 * - cred: git_cred *
 * Return Type: int
 */
mrb_value
mrb_Git_git_cred_has_username(mrb_state* mrb, mrb_value self) {
  mrb_value cred;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &cred);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, cred, Cred_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Cred expected");
    return mrb_nil_value();
  }

  /* Unbox param: cred */
  git_cred * native_cred = (mrb_nil_p(cred) ? NULL : mruby_unbox_git_cred(cred));

  /* Invocation */
  int native_return_value = git_cred_has_username(native_cred);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_cred_ssh_custom_new */
/* sha: e1ad901aa175735b8bbc82c890d11cb7297e04d6170cb17d0745011e4ebd684d */
#if BIND_git_cred_ssh_custom_new_FUNCTION
#define git_cred_ssh_custom_new_REQUIRED_ARGC 5
#define git_cred_ssh_custom_new_OPTIONAL_ARGC 0
/* git_cred_ssh_custom_new
 *
 * Parameters:
 * - username: const char *
 * - publickey: const char *
 * - publickey_len: size_t
 * - sign_callback: git_cred_sign_callback
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_cred_ssh_custom_new(mrb_state* mrb, mrb_value self) {
  git_cred * native_out = NULL;
  char * native_username = NULL;
  char * native_publickey = NULL;
  mrb_int native_publickey_len;
  mrb_value sign_callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "zzioo", &native_username, &native_publickey, &native_publickey_len, &sign_callback, &payload);

  /* Type checking */
  TODO_type_check_git_cred_sign_callback(sign_callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: sign_callback */
  git_cred_sign_callback native_sign_callback = TODO_mruby_unbox_git_cred_sign_callback(sign_callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_cred_ssh_custom_new(&native_out, native_username, native_publickey, native_publickey_len, native_sign_callback, native_payload);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_cred(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_cred_ssh_interactive_new */
/* sha: 6c366244a1b37a95eb2b845b61089fb77493e5e75451cebfd8c872b125c86dcd */
#if BIND_git_cred_ssh_interactive_new_FUNCTION
#define git_cred_ssh_interactive_new_REQUIRED_ARGC 3
#define git_cred_ssh_interactive_new_OPTIONAL_ARGC 0
/* git_cred_ssh_interactive_new
 *
 * Parameters:
 * - username: const char *
 * - prompt_callback: git_cred_ssh_interactive_callback
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_cred_ssh_interactive_new(mrb_state* mrb, mrb_value self) {
  git_cred * native_out = NULL;
  char * native_username = NULL;
  mrb_value prompt_callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "zoo", &native_username, &prompt_callback, &payload);

  /* Type checking */
  TODO_type_check_git_cred_ssh_interactive_callback(prompt_callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: prompt_callback */
  git_cred_ssh_interactive_callback native_prompt_callback = TODO_mruby_unbox_git_cred_ssh_interactive_callback(prompt_callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_cred_ssh_interactive_new(&native_out, native_username, native_prompt_callback, native_payload);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_cred(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_cred_ssh_key_from_agent */
/* sha: 35502ff5ac5eeb238f98b9c4c5358c8e00f434a3a4d0c40964f936a7eb355411 */
#if BIND_git_cred_ssh_key_from_agent_FUNCTION
#define git_cred_ssh_key_from_agent_REQUIRED_ARGC 1
#define git_cred_ssh_key_from_agent_OPTIONAL_ARGC 0
/* git_cred_ssh_key_from_agent
 *
 * Parameters:
 * - username: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_cred_ssh_key_from_agent(mrb_state* mrb, mrb_value self) {
  git_cred * native_out = NULL;
  char * native_username = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_username);

  /* Invocation */
  int native_return_value = git_cred_ssh_key_from_agent(&native_out, native_username);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_cred(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_cred_ssh_key_memory_new */
/* sha: 1b507badd3b59ad34e853819f797d5fc843ff72cf967c31187cb984dde16dd6c */
#if BIND_git_cred_ssh_key_memory_new_FUNCTION
#define git_cred_ssh_key_memory_new_REQUIRED_ARGC 4
#define git_cred_ssh_key_memory_new_OPTIONAL_ARGC 0
/* git_cred_ssh_key_memory_new
 *
 * Parameters:
 * - username: const char *
 * - publickey: const char *
 * - privatekey: const char *
 * - passphrase: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_cred_ssh_key_memory_new(mrb_state* mrb, mrb_value self) {
  git_cred * native_out = NULL;
  char * native_username = NULL;
  char * native_publickey = NULL;
  char * native_privatekey = NULL;
  char * native_passphrase = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "zzzz", &native_username, &native_publickey, &native_privatekey, &native_passphrase);

  /* Invocation */
  int native_return_value = git_cred_ssh_key_memory_new(&native_out, native_username, native_publickey, native_privatekey, native_passphrase);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_cred(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_cred_ssh_key_new */
/* sha: a6bff8ddebcfc3ca7642d5192d85aa7d88544d85fdd7ad236440a8f37f916c9d */
#if BIND_git_cred_ssh_key_new_FUNCTION
#define git_cred_ssh_key_new_REQUIRED_ARGC 4
#define git_cred_ssh_key_new_OPTIONAL_ARGC 0
/* git_cred_ssh_key_new
 *
 * Parameters:
 * - username: const char *
 * - publickey: const char *
 * - privatekey: const char *
 * - passphrase: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_cred_ssh_key_new(mrb_state* mrb, mrb_value self) {
  git_cred * native_out = NULL;
  char * native_username = NULL;
  char * native_publickey = NULL;
  char * native_privatekey = NULL;
  char * native_passphrase = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "zzzz", &native_username, &native_publickey, &native_privatekey, &native_passphrase);

  /* Invocation */
  int native_return_value = git_cred_ssh_key_new(&native_out, native_username, native_publickey, native_privatekey, native_passphrase);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_cred(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_cred_username_new */
/* sha: b1e1df1445c2221fbeda76159a29418706b134a803b41f7e0bac6bdc88e4b1b6 */
#if BIND_git_cred_username_new_FUNCTION
#define git_cred_username_new_REQUIRED_ARGC 1
#define git_cred_username_new_OPTIONAL_ARGC 0
/* git_cred_username_new
 *
 * Parameters:
 * - username: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_cred_username_new(mrb_state* mrb, mrb_value self) {
  git_cred * native_cred = NULL;
  char * native_username = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_username);

  /* Invocation */
  int native_return_value = git_cred_username_new(&native_cred, native_username);

  /* Box out param: cred */
  mrb_value cred = native_cred == NULL ? mrb_nil_value() : mruby_giftwrap_git_cred(mrb, native_cred);

  return cred;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_cred_userpass */
/* sha: 061d6fe44d2b2933100e7ce39d15249529a0eedfd847d82e294cfb9b7f431456 */
#if BIND_git_cred_userpass_FUNCTION
#define git_cred_userpass_REQUIRED_ARGC 4
#define git_cred_userpass_OPTIONAL_ARGC 0
/* git_cred_userpass
 *
 * Parameters:
 * - url: const char *
 * - user_from_url: const char *
 * - allowed_types: unsigned int
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_cred_userpass(mrb_state* mrb, mrb_value self) {
  git_cred * native_cred = NULL;
  char * native_url = NULL;
  char * native_user_from_url = NULL;
  mrb_int native_allowed_types;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "zzio", &native_url, &native_user_from_url, &native_allowed_types, &payload);

  /* Type checking */
  TODO_type_check_void_PTR(payload);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_cred_userpass(&native_cred, native_url, native_user_from_url, native_allowed_types, native_payload);

  /* Box out param: cred */
  mrb_value cred = native_cred == NULL ? mrb_nil_value() : mruby_giftwrap_git_cred(mrb, native_cred);

  return cred;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_cred_userpass_plaintext_new */
/* sha: dad56c8d5bb8799cf59ac3681701d59929890c1d4ffdbb2ef5743e8ddb0eae24 */
#if BIND_git_cred_userpass_plaintext_new_FUNCTION
#define git_cred_userpass_plaintext_new_REQUIRED_ARGC 2
#define git_cred_userpass_plaintext_new_OPTIONAL_ARGC 0
/* git_cred_userpass_plaintext_new
 *
 * Parameters:
 * - username: const char *
 * - password: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_cred_userpass_plaintext_new(mrb_state* mrb, mrb_value self) {
  git_cred * native_out = NULL;
  char * native_username = NULL;
  char * native_password = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "zz", &native_username, &native_password);

  /* Invocation */
  int native_return_value = git_cred_userpass_plaintext_new(&native_out, native_username, native_password);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_cred(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_describe_commit */
/* sha: 2773aa42f752a0ee060f0bed4c9a8ffcb90974f761536b498e7326c9039db668 */
#if BIND_git_describe_commit_FUNCTION
#define git_describe_commit_REQUIRED_ARGC 2
#define git_describe_commit_OPTIONAL_ARGC 0
/* git_describe_commit
 *
 * Parameters:
 * - committish: git_object *
 * - opts: git_describe_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_describe_commit(mrb_state* mrb, mrb_value self) {
  git_describe_result * native_result = NULL;
  mrb_value committish;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &committish, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, committish, Object_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Object expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, DescribeOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DescribeOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: committish */
  git_object * native_committish = (mrb_nil_p(committish) ? NULL : mruby_unbox_git_object(committish));

  /* Unbox param: opts */
  git_describe_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_describe_options(opts));

  /* Invocation */
  int native_return_value = git_describe_commit(&native_result, native_committish, native_opts);

  /* Box out param: result */
  mrb_value result = native_result == NULL ? mrb_nil_value() : mruby_giftwrap_git_describe_result(mrb, native_result);

  return result;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_describe_format */
/* sha: 8e142d1788445209e5071e138f9ddaf26f74d5fcdc3b13f44a38d9dcf642902d */
#if BIND_git_describe_format_FUNCTION
#define git_describe_format_REQUIRED_ARGC 2
#define git_describe_format_OPTIONAL_ARGC 0
/* git_describe_format
 *
 * Parameters:
 * - result: const git_describe_result *
 * - opts: const git_describe_format_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_describe_format(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value result;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &result, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, result, DescribeResult_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DescribeResult expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, DescribeFormatOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DescribeFormatOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: result */
  const git_describe_result * native_result = (mrb_nil_p(result) ? NULL : mruby_unbox_git_describe_result(result));

  /* Unbox param: opts */
  const git_describe_format_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_describe_format_options(opts));

  /* Invocation */
  int native_return_value = git_describe_format(native_out, native_result, native_opts);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_describe_init_format_options */
/* sha: 53fd598acd887da6a7f66f805e8e27b6dc2d393e7277298847b9d7143f07f3c6 */
#if BIND_git_describe_init_format_options_FUNCTION
#define git_describe_init_format_options_REQUIRED_ARGC 2
#define git_describe_init_format_options_OPTIONAL_ARGC 0
/* git_describe_init_format_options
 *
 * Parameters:
 * - opts: git_describe_format_options *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_describe_init_format_options(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, DescribeFormatOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DescribeFormatOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_describe_format_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_describe_format_options(opts));

  /* Invocation */
  int native_return_value = git_describe_init_format_options(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_describe_init_options */
/* sha: 6bc1c31a2072c7ab93a50fb2e52c1d5083d73f49efc94d9ec21e439de011ef35 */
#if BIND_git_describe_init_options_FUNCTION
#define git_describe_init_options_REQUIRED_ARGC 2
#define git_describe_init_options_OPTIONAL_ARGC 0
/* git_describe_init_options
 *
 * Parameters:
 * - opts: git_describe_options *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_describe_init_options(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, DescribeOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DescribeOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_describe_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_describe_options(opts));

  /* Invocation */
  int native_return_value = git_describe_init_options(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_describe_result_free */
/* sha: 6a751bc73bbed1e228c1253634886342ffb4be397c4846a9c80717b06bc846a4 */
#if BIND_git_describe_result_free_FUNCTION
#define git_describe_result_free_REQUIRED_ARGC 1
#define git_describe_result_free_OPTIONAL_ARGC 0
/* git_describe_result_free
 *
 * Parameters:
 * - result: git_describe_result *
 * Return Type: void
 */
mrb_value
mrb_Git_git_describe_result_free(mrb_state* mrb, mrb_value self) {
  mrb_value result;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &result);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, result, DescribeResult_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DescribeResult expected");
    return mrb_nil_value();
  }

  /* Unbox param: result */
  git_describe_result * native_result = (mrb_nil_p(result) ? NULL : mruby_unbox_git_describe_result(result));

  /* Invocation */
  git_describe_result_free(native_result);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_describe_workdir */
/* sha: 4484c4ce450e898efac525bbb163312d611cf959ae56078b3ca26796bcad2119 */
#if BIND_git_describe_workdir_FUNCTION
#define git_describe_workdir_REQUIRED_ARGC 2
#define git_describe_workdir_OPTIONAL_ARGC 0
/* git_describe_workdir
 *
 * Parameters:
 * - repo: git_repository *
 * - opts: git_describe_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_describe_workdir(mrb_state* mrb, mrb_value self) {
  git_describe_result * native_out = NULL;
  mrb_value repo;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &repo, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, DescribeOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DescribeOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: opts */
  git_describe_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_describe_options(opts));

  /* Invocation */
  int native_return_value = git_describe_workdir(&native_out, native_repo, native_opts);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_describe_result(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_blob_to_buffer */
/* sha: 7eca9273f2460718fdaa5f3c3a2c86e2a2a483d0f5f272b7874e811b0f96a5d7 */
#if BIND_git_diff_blob_to_buffer_FUNCTION
#define git_diff_blob_to_buffer_REQUIRED_ARGC 11
#define git_diff_blob_to_buffer_OPTIONAL_ARGC 0
/* git_diff_blob_to_buffer
 *
 * Parameters:
 * - old_blob: const git_blob *
 * - old_as_path: const char *
 * - buffer: const char *
 * - buffer_len: size_t
 * - buffer_as_path: const char *
 * - options: const git_diff_options *
 * - file_cb: git_diff_file_cb
 * - binary_cb: git_diff_binary_cb
 * - hunk_cb: git_diff_hunk_cb
 * - line_cb: git_diff_line_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_blob_to_buffer(mrb_state* mrb, mrb_value self) {
  mrb_value old_blob;
  char * native_old_as_path = NULL;
  char * native_buffer = NULL;
  mrb_int native_buffer_len;
  char * native_buffer_as_path = NULL;
  mrb_value options;
  mrb_value file_cb;
  mrb_value binary_cb;
  mrb_value hunk_cb;
  mrb_value line_cb;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ozzizoooooo", &old_blob, &native_old_as_path, &native_buffer, &native_buffer_len, &native_buffer_as_path, &options, &file_cb, &binary_cb, &hunk_cb, &line_cb, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, old_blob, Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blob expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, options, DiffOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffOptions expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_diff_file_cb(file_cb);
  TODO_type_check_git_diff_binary_cb(binary_cb);
  TODO_type_check_git_diff_hunk_cb(hunk_cb);
  TODO_type_check_git_diff_line_cb(line_cb);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: old_blob */
  const git_blob * native_old_blob = (mrb_nil_p(old_blob) ? NULL : mruby_unbox_git_blob(old_blob));

  /* Unbox param: options */
  const git_diff_options * native_options = (mrb_nil_p(options) ? NULL : mruby_unbox_git_diff_options(options));

  /* Unbox param: file_cb */
  git_diff_file_cb native_file_cb = TODO_mruby_unbox_git_diff_file_cb(file_cb);

  /* Unbox param: binary_cb */
  git_diff_binary_cb native_binary_cb = TODO_mruby_unbox_git_diff_binary_cb(binary_cb);

  /* Unbox param: hunk_cb */
  git_diff_hunk_cb native_hunk_cb = TODO_mruby_unbox_git_diff_hunk_cb(hunk_cb);

  /* Unbox param: line_cb */
  git_diff_line_cb native_line_cb = TODO_mruby_unbox_git_diff_line_cb(line_cb);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_diff_blob_to_buffer(native_old_blob, native_old_as_path, native_buffer, native_buffer_len, native_buffer_as_path, native_options, native_file_cb, native_binary_cb, native_hunk_cb, native_line_cb, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_blobs */
/* sha: e8662003428a77b31689696b1ae9da99c1725be4b95e72300a7076ec6a5557d2 */
#if BIND_git_diff_blobs_FUNCTION
#define git_diff_blobs_REQUIRED_ARGC 10
#define git_diff_blobs_OPTIONAL_ARGC 0
/* git_diff_blobs
 *
 * Parameters:
 * - old_blob: const git_blob *
 * - old_as_path: const char *
 * - new_blob: const git_blob *
 * - new_as_path: const char *
 * - options: const git_diff_options *
 * - file_cb: git_diff_file_cb
 * - binary_cb: git_diff_binary_cb
 * - hunk_cb: git_diff_hunk_cb
 * - line_cb: git_diff_line_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_blobs(mrb_state* mrb, mrb_value self) {
  mrb_value old_blob;
  char * native_old_as_path = NULL;
  mrb_value new_blob;
  char * native_new_as_path = NULL;
  mrb_value options;
  mrb_value file_cb;
  mrb_value binary_cb;
  mrb_value hunk_cb;
  mrb_value line_cb;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ozozoooooo", &old_blob, &native_old_as_path, &new_blob, &native_new_as_path, &options, &file_cb, &binary_cb, &hunk_cb, &line_cb, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, old_blob, Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blob expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, new_blob, Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blob expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, options, DiffOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffOptions expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_diff_file_cb(file_cb);
  TODO_type_check_git_diff_binary_cb(binary_cb);
  TODO_type_check_git_diff_hunk_cb(hunk_cb);
  TODO_type_check_git_diff_line_cb(line_cb);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: old_blob */
  const git_blob * native_old_blob = (mrb_nil_p(old_blob) ? NULL : mruby_unbox_git_blob(old_blob));

  /* Unbox param: new_blob */
  const git_blob * native_new_blob = (mrb_nil_p(new_blob) ? NULL : mruby_unbox_git_blob(new_blob));

  /* Unbox param: options */
  const git_diff_options * native_options = (mrb_nil_p(options) ? NULL : mruby_unbox_git_diff_options(options));

  /* Unbox param: file_cb */
  git_diff_file_cb native_file_cb = TODO_mruby_unbox_git_diff_file_cb(file_cb);

  /* Unbox param: binary_cb */
  git_diff_binary_cb native_binary_cb = TODO_mruby_unbox_git_diff_binary_cb(binary_cb);

  /* Unbox param: hunk_cb */
  git_diff_hunk_cb native_hunk_cb = TODO_mruby_unbox_git_diff_hunk_cb(hunk_cb);

  /* Unbox param: line_cb */
  git_diff_line_cb native_line_cb = TODO_mruby_unbox_git_diff_line_cb(line_cb);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_diff_blobs(native_old_blob, native_old_as_path, native_new_blob, native_new_as_path, native_options, native_file_cb, native_binary_cb, native_hunk_cb, native_line_cb, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_buffers */
/* sha: 8c8cb88ff0ef23504dfbb88df21b2151d755545bc4c156571039701d8a191353 */
#if BIND_git_diff_buffers_FUNCTION
#define git_diff_buffers_REQUIRED_ARGC 12
#define git_diff_buffers_OPTIONAL_ARGC 0
/* git_diff_buffers
 *
 * Parameters:
 * - old_buffer: const void *
 * - old_len: size_t
 * - old_as_path: const char *
 * - new_buffer: const void *
 * - new_len: size_t
 * - new_as_path: const char *
 * - options: const git_diff_options *
 * - file_cb: git_diff_file_cb
 * - binary_cb: git_diff_binary_cb
 * - hunk_cb: git_diff_hunk_cb
 * - line_cb: git_diff_line_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_buffers(mrb_state* mrb, mrb_value self) {
  mrb_value old_buffer;
  mrb_int native_old_len;
  char * native_old_as_path = NULL;
  mrb_value new_buffer;
  mrb_int native_new_len;
  char * native_new_as_path = NULL;
  mrb_value options;
  mrb_value file_cb;
  mrb_value binary_cb;
  mrb_value hunk_cb;
  mrb_value line_cb;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "oizoizoooooo", &old_buffer, &native_old_len, &native_old_as_path, &new_buffer, &native_new_len, &native_new_as_path, &options, &file_cb, &binary_cb, &hunk_cb, &line_cb, &payload);

  /* Type checking */
  TODO_type_check_void_PTR(old_buffer);
  TODO_type_check_void_PTR(new_buffer);
  if (!mrb_obj_is_kind_of(mrb, options, DiffOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffOptions expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_diff_file_cb(file_cb);
  TODO_type_check_git_diff_binary_cb(binary_cb);
  TODO_type_check_git_diff_hunk_cb(hunk_cb);
  TODO_type_check_git_diff_line_cb(line_cb);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: old_buffer */
  const void * native_old_buffer = TODO_mruby_unbox_void_PTR(old_buffer);

  /* Unbox param: new_buffer */
  const void * native_new_buffer = TODO_mruby_unbox_void_PTR(new_buffer);

  /* Unbox param: options */
  const git_diff_options * native_options = (mrb_nil_p(options) ? NULL : mruby_unbox_git_diff_options(options));

  /* Unbox param: file_cb */
  git_diff_file_cb native_file_cb = TODO_mruby_unbox_git_diff_file_cb(file_cb);

  /* Unbox param: binary_cb */
  git_diff_binary_cb native_binary_cb = TODO_mruby_unbox_git_diff_binary_cb(binary_cb);

  /* Unbox param: hunk_cb */
  git_diff_hunk_cb native_hunk_cb = TODO_mruby_unbox_git_diff_hunk_cb(hunk_cb);

  /* Unbox param: line_cb */
  git_diff_line_cb native_line_cb = TODO_mruby_unbox_git_diff_line_cb(line_cb);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_diff_buffers(native_old_buffer, native_old_len, native_old_as_path, native_new_buffer, native_new_len, native_new_as_path, native_options, native_file_cb, native_binary_cb, native_hunk_cb, native_line_cb, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_commit_as_email */
/* sha: 05c7a26601eef9caab616572825da4764800187a460347cdf24a74e948ade271 */
#if BIND_git_diff_commit_as_email_FUNCTION
#define git_diff_commit_as_email_REQUIRED_ARGC 6
#define git_diff_commit_as_email_OPTIONAL_ARGC 0
/* git_diff_commit_as_email
 *
 * Parameters:
 * - repo: git_repository *
 * - commit: git_commit *
 * - patch_no: size_t
 * - total_patches: size_t
 * - flags: git_diff_format_email_flags_t
 * - diff_opts: const git_diff_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_commit_as_email(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value repo;
  mrb_value commit;
  mrb_int native_patch_no;
  mrb_int native_total_patches;
  mrb_int native_flags;
  mrb_value diff_opts;

  /* Fetch the args */
  mrb_get_args(mrb, "ooiiio", &repo, &commit, &native_patch_no, &native_total_patches, &native_flags, &diff_opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, diff_opts, DiffOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: commit */
  git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Unbox param: diff_opts */
  const git_diff_options * native_diff_opts = (mrb_nil_p(diff_opts) ? NULL : mruby_unbox_git_diff_options(diff_opts));

  /* Invocation */
  int native_return_value = git_diff_commit_as_email(native_out, native_repo, native_commit, native_patch_no, native_total_patches, native_flags, native_diff_opts);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_find_init_options */
/* sha: 5f2c66a6974cce74ce6b2fbaff2f8e92170d9240e0db711b2b0be7fd59d470bd */
#if BIND_git_diff_find_init_options_FUNCTION
#define git_diff_find_init_options_REQUIRED_ARGC 2
#define git_diff_find_init_options_OPTIONAL_ARGC 0
/* git_diff_find_init_options
 *
 * Parameters:
 * - opts: git_diff_find_options *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_find_init_options(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, DiffFindOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffFindOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_diff_find_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_diff_find_options(opts));

  /* Invocation */
  int native_return_value = git_diff_find_init_options(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_find_similar */
/* sha: 0f4ca14e31f0edf6a94525abe5a55ae3a86444cedbd3e4fa45fb0285cc36bf0d */
#if BIND_git_diff_find_similar_FUNCTION
#define git_diff_find_similar_REQUIRED_ARGC 2
#define git_diff_find_similar_OPTIONAL_ARGC 0
/* git_diff_find_similar
 *
 * Parameters:
 * - diff: git_diff *
 * - options: const git_diff_find_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_find_similar(mrb_state* mrb, mrb_value self) {
  mrb_value diff;
  mrb_value options;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &diff, &options);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, diff, Diff_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Diff expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, options, DiffFindOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffFindOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: diff */
  git_diff * native_diff = (mrb_nil_p(diff) ? NULL : mruby_unbox_git_diff(diff));

  /* Unbox param: options */
  const git_diff_find_options * native_options = (mrb_nil_p(options) ? NULL : mruby_unbox_git_diff_find_options(options));

  /* Invocation */
  int native_return_value = git_diff_find_similar(native_diff, native_options);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_foreach */
/* sha: 9eb20e812cc50f0f67cc47fb4c02a7a4e3e3590e00c772b904e1f37cfe331ff5 */
#if BIND_git_diff_foreach_FUNCTION
#define git_diff_foreach_REQUIRED_ARGC 6
#define git_diff_foreach_OPTIONAL_ARGC 0
/* git_diff_foreach
 *
 * Parameters:
 * - diff: git_diff *
 * - file_cb: git_diff_file_cb
 * - binary_cb: git_diff_binary_cb
 * - hunk_cb: git_diff_hunk_cb
 * - line_cb: git_diff_line_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_foreach(mrb_state* mrb, mrb_value self) {
  mrb_value diff;
  mrb_value file_cb;
  mrb_value binary_cb;
  mrb_value hunk_cb;
  mrb_value line_cb;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooo", &diff, &file_cb, &binary_cb, &hunk_cb, &line_cb, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, diff, Diff_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Diff expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_diff_file_cb(file_cb);
  TODO_type_check_git_diff_binary_cb(binary_cb);
  TODO_type_check_git_diff_hunk_cb(hunk_cb);
  TODO_type_check_git_diff_line_cb(line_cb);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: diff */
  git_diff * native_diff = (mrb_nil_p(diff) ? NULL : mruby_unbox_git_diff(diff));

  /* Unbox param: file_cb */
  git_diff_file_cb native_file_cb = TODO_mruby_unbox_git_diff_file_cb(file_cb);

  /* Unbox param: binary_cb */
  git_diff_binary_cb native_binary_cb = TODO_mruby_unbox_git_diff_binary_cb(binary_cb);

  /* Unbox param: hunk_cb */
  git_diff_hunk_cb native_hunk_cb = TODO_mruby_unbox_git_diff_hunk_cb(hunk_cb);

  /* Unbox param: line_cb */
  git_diff_line_cb native_line_cb = TODO_mruby_unbox_git_diff_line_cb(line_cb);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_diff_foreach(native_diff, native_file_cb, native_binary_cb, native_hunk_cb, native_line_cb, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_format_email */
/* sha: f8e1d4a57261ab7ac9d0c7d8d59d18a751f095c1c6cf173051dc6edbb277a02a */
#if BIND_git_diff_format_email_FUNCTION
#define git_diff_format_email_REQUIRED_ARGC 2
#define git_diff_format_email_OPTIONAL_ARGC 0
/* git_diff_format_email
 *
 * Parameters:
 * - diff: git_diff *
 * - opts: const git_diff_format_email_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_format_email(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value diff;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &diff, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, diff, Diff_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Diff expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, DiffFormatEmailOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffFormatEmailOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: diff */
  git_diff * native_diff = (mrb_nil_p(diff) ? NULL : mruby_unbox_git_diff(diff));

  /* Unbox param: opts */
  const git_diff_format_email_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_diff_format_email_options(opts));

  /* Invocation */
  int native_return_value = git_diff_format_email(native_out, native_diff, native_opts);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_format_email_init_options */
/* sha: 772f6f76d4267ea72e53581586a696b4d5ccebd405779c4d7bfd9086904f3169 */
#if BIND_git_diff_format_email_init_options_FUNCTION
#define git_diff_format_email_init_options_REQUIRED_ARGC 2
#define git_diff_format_email_init_options_OPTIONAL_ARGC 0
/* git_diff_format_email_init_options
 *
 * Parameters:
 * - opts: git_diff_format_email_options *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_format_email_init_options(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, DiffFormatEmailOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffFormatEmailOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_diff_format_email_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_diff_format_email_options(opts));

  /* Invocation */
  int native_return_value = git_diff_format_email_init_options(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_free */
/* sha: f6f815e87023d5045c47584d10bb5f8e350a07e56e79fbff577f71bf763c62b3 */
#if BIND_git_diff_free_FUNCTION
#define git_diff_free_REQUIRED_ARGC 1
#define git_diff_free_OPTIONAL_ARGC 0
/* git_diff_free
 *
 * Parameters:
 * - diff: git_diff *
 * Return Type: void
 */
mrb_value
mrb_Git_git_diff_free(mrb_state* mrb, mrb_value self) {
  mrb_value diff;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &diff);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, diff, Diff_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Diff expected");
    return mrb_nil_value();
  }

  /* Unbox param: diff */
  git_diff * native_diff = (mrb_nil_p(diff) ? NULL : mruby_unbox_git_diff(diff));

  /* Invocation */
  git_diff_free(native_diff);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_get_delta */
/* sha: 255195e3f819c120797d923c670cfe25563181792797585cd535dd5bfdeb8bb9 */
#if BIND_git_diff_get_delta_FUNCTION
#define git_diff_get_delta_REQUIRED_ARGC 2
#define git_diff_get_delta_OPTIONAL_ARGC 0
/* git_diff_get_delta
 *
 * Parameters:
 * - diff: const git_diff *
 * - idx: size_t
 * Return Type: const git_diff_delta *
 */
mrb_value
mrb_Git_git_diff_get_delta(mrb_state* mrb, mrb_value self) {
  mrb_value diff;
  mrb_int native_idx;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &diff, &native_idx);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, diff, Diff_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Diff expected");
    return mrb_nil_value();
  }

  /* Unbox param: diff */
  const git_diff * native_diff = (mrb_nil_p(diff) ? NULL : mruby_unbox_git_diff(diff));

  /* Invocation */
  const git_diff_delta * native_return_value = git_diff_get_delta(native_diff, native_idx);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_diff_delta(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_get_stats */
/* sha: 5a069ae743830ccb28e762a73635f3277cd957e67eda261e73c57f8eea971008 */
#if BIND_git_diff_get_stats_FUNCTION
#define git_diff_get_stats_REQUIRED_ARGC 1
#define git_diff_get_stats_OPTIONAL_ARGC 0
/* git_diff_get_stats
 *
 * Parameters:
 * - diff: git_diff *
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_get_stats(mrb_state* mrb, mrb_value self) {
  git_diff_stats * native_out = NULL;
  mrb_value diff;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &diff);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, diff, Diff_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Diff expected");
    return mrb_nil_value();
  }

  /* Unbox param: diff */
  git_diff * native_diff = (mrb_nil_p(diff) ? NULL : mruby_unbox_git_diff(diff));

  /* Invocation */
  int native_return_value = git_diff_get_stats(&native_out, native_diff);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_diff_stats(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_index_to_index */
/* sha: cc3f4dd2828d744b92479d3870e5797421e8dc7fe48e9495f41d8183c8a1c884 */
#if BIND_git_diff_index_to_index_FUNCTION
#define git_diff_index_to_index_REQUIRED_ARGC 4
#define git_diff_index_to_index_OPTIONAL_ARGC 0
/* git_diff_index_to_index
 *
 * Parameters:
 * - repo: git_repository *
 * - old_index: git_index *
 * - new_index: git_index *
 * - opts: const git_diff_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_index_to_index(mrb_state* mrb, mrb_value self) {
  git_diff * native_diff = NULL;
  mrb_value repo;
  mrb_value old_index;
  mrb_value new_index;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &repo, &old_index, &new_index, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, old_index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, new_index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, DiffOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: old_index */
  git_index * native_old_index = (mrb_nil_p(old_index) ? NULL : mruby_unbox_git_index(old_index));

  /* Unbox param: new_index */
  git_index * native_new_index = (mrb_nil_p(new_index) ? NULL : mruby_unbox_git_index(new_index));

  /* Unbox param: opts */
  const git_diff_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_diff_options(opts));

  /* Invocation */
  int native_return_value = git_diff_index_to_index(&native_diff, native_repo, native_old_index, native_new_index, native_opts);

  /* Box out param: diff */
  mrb_value diff = native_diff == NULL ? mrb_nil_value() : mruby_giftwrap_git_diff(mrb, native_diff);

  return diff;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_index_to_workdir */
/* sha: 4bdf76cd679b4f0d48d16a8a80f357acf376160bc75ca298ce9708c6f2497289 */
#if BIND_git_diff_index_to_workdir_FUNCTION
#define git_diff_index_to_workdir_REQUIRED_ARGC 3
#define git_diff_index_to_workdir_OPTIONAL_ARGC 0
/* git_diff_index_to_workdir
 *
 * Parameters:
 * - repo: git_repository *
 * - index: git_index *
 * - opts: const git_diff_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_index_to_workdir(mrb_state* mrb, mrb_value self) {
  git_diff * native_diff = NULL;
  mrb_value repo;
  mrb_value index;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &repo, &index, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, DiffOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Unbox param: opts */
  const git_diff_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_diff_options(opts));

  /* Invocation */
  int native_return_value = git_diff_index_to_workdir(&native_diff, native_repo, native_index, native_opts);

  /* Box out param: diff */
  mrb_value diff = native_diff == NULL ? mrb_nil_value() : mruby_giftwrap_git_diff(mrb, native_diff);

  return diff;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_init_options */
/* sha: 354383395ca007489f8877a4bb9e3bfbfd73c49f5c001d8b90944c5c9d302a44 */
#if BIND_git_diff_init_options_FUNCTION
#define git_diff_init_options_REQUIRED_ARGC 2
#define git_diff_init_options_OPTIONAL_ARGC 0
/* git_diff_init_options
 *
 * Parameters:
 * - opts: git_diff_options *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_init_options(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, DiffOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_diff_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_diff_options(opts));

  /* Invocation */
  int native_return_value = git_diff_init_options(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_is_sorted_icase */
/* sha: 4a115e31f28304972488de9df56263a34a13507231a645153897a7e15efdcd96 */
#if BIND_git_diff_is_sorted_icase_FUNCTION
#define git_diff_is_sorted_icase_REQUIRED_ARGC 1
#define git_diff_is_sorted_icase_OPTIONAL_ARGC 0
/* git_diff_is_sorted_icase
 *
 * Parameters:
 * - diff: const git_diff *
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_is_sorted_icase(mrb_state* mrb, mrb_value self) {
  mrb_value diff;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &diff);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, diff, Diff_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Diff expected");
    return mrb_nil_value();
  }

  /* Unbox param: diff */
  const git_diff * native_diff = (mrb_nil_p(diff) ? NULL : mruby_unbox_git_diff(diff));

  /* Invocation */
  int native_return_value = git_diff_is_sorted_icase(native_diff);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_merge */
/* sha: 1d399ae0571d1126483d288e5717ca9bd5aeecd24c20627d1079e11e5f983480 */
#if BIND_git_diff_merge_FUNCTION
#define git_diff_merge_REQUIRED_ARGC 2
#define git_diff_merge_OPTIONAL_ARGC 0
/* git_diff_merge
 *
 * Parameters:
 * - onto: git_diff *
 * - from: const git_diff *
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_merge(mrb_state* mrb, mrb_value self) {
  mrb_value onto;
  mrb_value from;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &onto, &from);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, onto, Diff_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Diff expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, from, Diff_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Diff expected");
    return mrb_nil_value();
  }

  /* Unbox param: onto */
  git_diff * native_onto = (mrb_nil_p(onto) ? NULL : mruby_unbox_git_diff(onto));

  /* Unbox param: from */
  const git_diff * native_from = (mrb_nil_p(from) ? NULL : mruby_unbox_git_diff(from));

  /* Invocation */
  int native_return_value = git_diff_merge(native_onto, native_from);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_num_deltas */
/* sha: db2c239b77d134d473a5d0790203d710782060c0efe455ec61e3defa47d0cbbc */
#if BIND_git_diff_num_deltas_FUNCTION
#define git_diff_num_deltas_REQUIRED_ARGC 1
#define git_diff_num_deltas_OPTIONAL_ARGC 0
/* git_diff_num_deltas
 *
 * Parameters:
 * - diff: const git_diff *
 * Return Type: size_t
 */
mrb_value
mrb_Git_git_diff_num_deltas(mrb_state* mrb, mrb_value self) {
  mrb_value diff;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &diff);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, diff, Diff_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Diff expected");
    return mrb_nil_value();
  }

  /* Unbox param: diff */
  const git_diff * native_diff = (mrb_nil_p(diff) ? NULL : mruby_unbox_git_diff(diff));

  /* Invocation */
  size_t native_return_value = git_diff_num_deltas(native_diff);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_num_deltas_of_type */
/* sha: c96fa9701c14d76bc8605d01bb2c1ef96de6d1b7c20cfffe4c56832c69192077 */
#if BIND_git_diff_num_deltas_of_type_FUNCTION
#define git_diff_num_deltas_of_type_REQUIRED_ARGC 2
#define git_diff_num_deltas_of_type_OPTIONAL_ARGC 0
/* git_diff_num_deltas_of_type
 *
 * Parameters:
 * - diff: const git_diff *
 * - type: git_delta_t
 * Return Type: size_t
 */
mrb_value
mrb_Git_git_diff_num_deltas_of_type(mrb_state* mrb, mrb_value self) {
  mrb_value diff;
  mrb_int native_type;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &diff, &native_type);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, diff, Diff_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Diff expected");
    return mrb_nil_value();
  }

  /* Unbox param: diff */
  const git_diff * native_diff = (mrb_nil_p(diff) ? NULL : mruby_unbox_git_diff(diff));

  /* Invocation */
  size_t native_return_value = git_diff_num_deltas_of_type(native_diff, native_type);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_print */
/* sha: b0e1a4c07686fba2531988faf0cc97331a76103f1f0c1dc1242f45542a62ebcc */
#if BIND_git_diff_print_FUNCTION
#define git_diff_print_REQUIRED_ARGC 4
#define git_diff_print_OPTIONAL_ARGC 0
/* git_diff_print
 *
 * Parameters:
 * - diff: git_diff *
 * - format: git_diff_format_t
 * - print_cb: git_diff_line_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_print(mrb_state* mrb, mrb_value self) {
  mrb_value diff;
  mrb_int native_format;
  mrb_value print_cb;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "oioo", &diff, &native_format, &print_cb, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, diff, Diff_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Diff expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_diff_line_cb(print_cb);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: diff */
  git_diff * native_diff = (mrb_nil_p(diff) ? NULL : mruby_unbox_git_diff(diff));

  /* Unbox param: print_cb */
  git_diff_line_cb native_print_cb = TODO_mruby_unbox_git_diff_line_cb(print_cb);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_diff_print(native_diff, native_format, native_print_cb, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_stats_deletions */
/* sha: 42017efb31f26c77a09c7ddb857975ceccf22ee2f53db875f55ae0313b44c8da */
#if BIND_git_diff_stats_deletions_FUNCTION
#define git_diff_stats_deletions_REQUIRED_ARGC 1
#define git_diff_stats_deletions_OPTIONAL_ARGC 0
/* git_diff_stats_deletions
 *
 * Parameters:
 * - stats: const git_diff_stats *
 * Return Type: size_t
 */
mrb_value
mrb_Git_git_diff_stats_deletions(mrb_state* mrb, mrb_value self) {
  mrb_value stats;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &stats);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, stats, DiffStats_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffStats expected");
    return mrb_nil_value();
  }

  /* Unbox param: stats */
  const git_diff_stats * native_stats = (mrb_nil_p(stats) ? NULL : mruby_unbox_git_diff_stats(stats));

  /* Invocation */
  size_t native_return_value = git_diff_stats_deletions(native_stats);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_stats_files_changed */
/* sha: 7865699faa2836a35302f73089f5511cc5d22e103714a01a5dc5666ce9016c09 */
#if BIND_git_diff_stats_files_changed_FUNCTION
#define git_diff_stats_files_changed_REQUIRED_ARGC 1
#define git_diff_stats_files_changed_OPTIONAL_ARGC 0
/* git_diff_stats_files_changed
 *
 * Parameters:
 * - stats: const git_diff_stats *
 * Return Type: size_t
 */
mrb_value
mrb_Git_git_diff_stats_files_changed(mrb_state* mrb, mrb_value self) {
  mrb_value stats;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &stats);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, stats, DiffStats_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffStats expected");
    return mrb_nil_value();
  }

  /* Unbox param: stats */
  const git_diff_stats * native_stats = (mrb_nil_p(stats) ? NULL : mruby_unbox_git_diff_stats(stats));

  /* Invocation */
  size_t native_return_value = git_diff_stats_files_changed(native_stats);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_stats_free */
/* sha: 6390bba07f449701ebacdf6f9a4cd204cb0c7b2a72cddf77d39426b39bc8f3bc */
#if BIND_git_diff_stats_free_FUNCTION
#define git_diff_stats_free_REQUIRED_ARGC 1
#define git_diff_stats_free_OPTIONAL_ARGC 0
/* git_diff_stats_free
 *
 * Parameters:
 * - stats: git_diff_stats *
 * Return Type: void
 */
mrb_value
mrb_Git_git_diff_stats_free(mrb_state* mrb, mrb_value self) {
  mrb_value stats;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &stats);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, stats, DiffStats_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffStats expected");
    return mrb_nil_value();
  }

  /* Unbox param: stats */
  git_diff_stats * native_stats = (mrb_nil_p(stats) ? NULL : mruby_unbox_git_diff_stats(stats));

  /* Invocation */
  git_diff_stats_free(native_stats);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_stats_insertions */
/* sha: 0ccdefb5bd24b438163dedc04f62939d573d5ffc8e7dda8a7ce78292b6329409 */
#if BIND_git_diff_stats_insertions_FUNCTION
#define git_diff_stats_insertions_REQUIRED_ARGC 1
#define git_diff_stats_insertions_OPTIONAL_ARGC 0
/* git_diff_stats_insertions
 *
 * Parameters:
 * - stats: const git_diff_stats *
 * Return Type: size_t
 */
mrb_value
mrb_Git_git_diff_stats_insertions(mrb_state* mrb, mrb_value self) {
  mrb_value stats;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &stats);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, stats, DiffStats_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffStats expected");
    return mrb_nil_value();
  }

  /* Unbox param: stats */
  const git_diff_stats * native_stats = (mrb_nil_p(stats) ? NULL : mruby_unbox_git_diff_stats(stats));

  /* Invocation */
  size_t native_return_value = git_diff_stats_insertions(native_stats);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_stats_to_buf */
/* sha: 51406e59997558c3621aee0fd025e9e711da2dcdf5227713ab74d9d2c8f689f2 */
#if BIND_git_diff_stats_to_buf_FUNCTION
#define git_diff_stats_to_buf_REQUIRED_ARGC 3
#define git_diff_stats_to_buf_OPTIONAL_ARGC 0
/* git_diff_stats_to_buf
 *
 * Parameters:
 * - stats: const git_diff_stats *
 * - format: git_diff_stats_format_t
 * - width: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_stats_to_buf(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value stats;
  mrb_int native_format;
  mrb_int native_width;

  /* Fetch the args */
  mrb_get_args(mrb, "oii", &stats, &native_format, &native_width);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, stats, DiffStats_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffStats expected");
    return mrb_nil_value();
  }

  /* Unbox param: stats */
  const git_diff_stats * native_stats = (mrb_nil_p(stats) ? NULL : mruby_unbox_git_diff_stats(stats));

  /* Invocation */
  int native_return_value = git_diff_stats_to_buf(native_out, native_stats, native_format, native_width);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_status_char */
/* sha: 978e6fe5505548057a593db4b367cf58c06055874f7fc6358698eeceab1e4c84 */
#if BIND_git_diff_status_char_FUNCTION
#define git_diff_status_char_REQUIRED_ARGC 1
#define git_diff_status_char_OPTIONAL_ARGC 0
/* git_diff_status_char
 *
 * Parameters:
 * - status: git_delta_t
 * Return Type: char
 */
mrb_value
mrb_Git_git_diff_status_char(mrb_state* mrb, mrb_value self) {
  mrb_int native_status;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_status);

  /* Invocation */
  char native_return_value = git_diff_status_char(native_status);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_tree_to_index */
/* sha: 0586acc04a48b882e71c926b240c9c803ff6e09484a71fe9eb4a9c13c9931dcd */
#if BIND_git_diff_tree_to_index_FUNCTION
#define git_diff_tree_to_index_REQUIRED_ARGC 4
#define git_diff_tree_to_index_OPTIONAL_ARGC 0
/* git_diff_tree_to_index
 *
 * Parameters:
 * - repo: git_repository *
 * - old_tree: git_tree *
 * - index: git_index *
 * - opts: const git_diff_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_tree_to_index(mrb_state* mrb, mrb_value self) {
  git_diff * native_diff = NULL;
  mrb_value repo;
  mrb_value old_tree;
  mrb_value index;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &repo, &old_tree, &index, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, old_tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, DiffOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: old_tree */
  git_tree * native_old_tree = (mrb_nil_p(old_tree) ? NULL : mruby_unbox_git_tree(old_tree));

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Unbox param: opts */
  const git_diff_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_diff_options(opts));

  /* Invocation */
  int native_return_value = git_diff_tree_to_index(&native_diff, native_repo, native_old_tree, native_index, native_opts);

  /* Box out param: diff */
  mrb_value diff = native_diff == NULL ? mrb_nil_value() : mruby_giftwrap_git_diff(mrb, native_diff);

  return diff;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_tree_to_tree */
/* sha: 27f3019f210bdb548305e56250f2e83ead6f59241250604419a4b54e79db2c53 */
#if BIND_git_diff_tree_to_tree_FUNCTION
#define git_diff_tree_to_tree_REQUIRED_ARGC 4
#define git_diff_tree_to_tree_OPTIONAL_ARGC 0
/* git_diff_tree_to_tree
 *
 * Parameters:
 * - repo: git_repository *
 * - old_tree: git_tree *
 * - new_tree: git_tree *
 * - opts: const git_diff_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_tree_to_tree(mrb_state* mrb, mrb_value self) {
  git_diff * native_diff = NULL;
  mrb_value repo;
  mrb_value old_tree;
  mrb_value new_tree;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &repo, &old_tree, &new_tree, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, old_tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, new_tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, DiffOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: old_tree */
  git_tree * native_old_tree = (mrb_nil_p(old_tree) ? NULL : mruby_unbox_git_tree(old_tree));

  /* Unbox param: new_tree */
  git_tree * native_new_tree = (mrb_nil_p(new_tree) ? NULL : mruby_unbox_git_tree(new_tree));

  /* Unbox param: opts */
  const git_diff_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_diff_options(opts));

  /* Invocation */
  int native_return_value = git_diff_tree_to_tree(&native_diff, native_repo, native_old_tree, native_new_tree, native_opts);

  /* Box out param: diff */
  mrb_value diff = native_diff == NULL ? mrb_nil_value() : mruby_giftwrap_git_diff(mrb, native_diff);

  return diff;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_tree_to_workdir */
/* sha: b3b280a398572df33b3c73d1080e6482f5f77bbe842c652e30774906273b4315 */
#if BIND_git_diff_tree_to_workdir_FUNCTION
#define git_diff_tree_to_workdir_REQUIRED_ARGC 3
#define git_diff_tree_to_workdir_OPTIONAL_ARGC 0
/* git_diff_tree_to_workdir
 *
 * Parameters:
 * - repo: git_repository *
 * - old_tree: git_tree *
 * - opts: const git_diff_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_tree_to_workdir(mrb_state* mrb, mrb_value self) {
  git_diff * native_diff = NULL;
  mrb_value repo;
  mrb_value old_tree;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &repo, &old_tree, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, old_tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, DiffOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: old_tree */
  git_tree * native_old_tree = (mrb_nil_p(old_tree) ? NULL : mruby_unbox_git_tree(old_tree));

  /* Unbox param: opts */
  const git_diff_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_diff_options(opts));

  /* Invocation */
  int native_return_value = git_diff_tree_to_workdir(&native_diff, native_repo, native_old_tree, native_opts);

  /* Box out param: diff */
  mrb_value diff = native_diff == NULL ? mrb_nil_value() : mruby_giftwrap_git_diff(mrb, native_diff);

  return diff;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_diff_tree_to_workdir_with_index */
/* sha: 2edf7dd5a57eed662bf450e40d2179235220c7ecd93a6c770e6c6df384c1e7a1 */
#if BIND_git_diff_tree_to_workdir_with_index_FUNCTION
#define git_diff_tree_to_workdir_with_index_REQUIRED_ARGC 3
#define git_diff_tree_to_workdir_with_index_OPTIONAL_ARGC 0
/* git_diff_tree_to_workdir_with_index
 *
 * Parameters:
 * - repo: git_repository *
 * - old_tree: git_tree *
 * - opts: const git_diff_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_diff_tree_to_workdir_with_index(mrb_state* mrb, mrb_value self) {
  git_diff * native_diff = NULL;
  mrb_value repo;
  mrb_value old_tree;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &repo, &old_tree, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, old_tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, DiffOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: old_tree */
  git_tree * native_old_tree = (mrb_nil_p(old_tree) ? NULL : mruby_unbox_git_tree(old_tree));

  /* Unbox param: opts */
  const git_diff_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_diff_options(opts));

  /* Invocation */
  int native_return_value = git_diff_tree_to_workdir_with_index(&native_diff, native_repo, native_old_tree, native_opts);

  /* Box out param: diff */
  mrb_value diff = native_diff == NULL ? mrb_nil_value() : mruby_giftwrap_git_diff(mrb, native_diff);

  return diff;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_fetch_init_options */
/* sha: 872b4b398fe0d5c70148aac03997c5c2316699af4da9f0c042205b00fc22a8b2 */
#if BIND_git_fetch_init_options_FUNCTION
#define git_fetch_init_options_REQUIRED_ARGC 2
#define git_fetch_init_options_OPTIONAL_ARGC 0
/* git_fetch_init_options
 *
 * Parameters:
 * - opts: git_fetch_options *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_fetch_init_options(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, FetchOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FetchOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_fetch_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_fetch_options(opts));

  /* Invocation */
  int native_return_value = git_fetch_init_options(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_filter_list_apply_to_blob */
/* sha: 4fdd7c46e75540a3e0a27ca0476793dad0012073a476a3ecffac14e0154eaac2 */
#if BIND_git_filter_list_apply_to_blob_FUNCTION
#define git_filter_list_apply_to_blob_REQUIRED_ARGC 2
#define git_filter_list_apply_to_blob_OPTIONAL_ARGC 0
/* git_filter_list_apply_to_blob
 *
 * Parameters:
 * - filters: git_filter_list *
 * - blob: git_blob *
 * Return Type: int
 */
mrb_value
mrb_Git_git_filter_list_apply_to_blob(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value filters;
  mrb_value blob;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &filters, &blob);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, filters, FilterList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FilterList expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, blob, Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blob expected");
    return mrb_nil_value();
  }

  /* Unbox param: filters */
  git_filter_list * native_filters = (mrb_nil_p(filters) ? NULL : mruby_unbox_git_filter_list(filters));

  /* Unbox param: blob */
  git_blob * native_blob = (mrb_nil_p(blob) ? NULL : mruby_unbox_git_blob(blob));

  /* Invocation */
  int native_return_value = git_filter_list_apply_to_blob(native_out, native_filters, native_blob);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_filter_list_apply_to_data */
/* sha: eac1062ca556ed17c0ee117fe52a91721e2b89e070b74c191ba6048ca017ce50 */
#if BIND_git_filter_list_apply_to_data_FUNCTION
#define git_filter_list_apply_to_data_REQUIRED_ARGC 2
#define git_filter_list_apply_to_data_OPTIONAL_ARGC 0
/* git_filter_list_apply_to_data
 *
 * Parameters:
 * - filters: git_filter_list *
 * - in: git_buf *
 * Return Type: int
 */
mrb_value
mrb_Git_git_filter_list_apply_to_data(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value filters;
  mrb_value in;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &filters, &in);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, filters, FilterList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FilterList expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, in, Buf_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Buf expected");
    return mrb_nil_value();
  }

  /* Unbox param: filters */
  git_filter_list * native_filters = (mrb_nil_p(filters) ? NULL : mruby_unbox_git_filter_list(filters));

  /* Unbox param: in */
  git_buf * native_in = mrb_nil_p(in) ? NULL : mruby_unbox_git_buf(in);

  /* Invocation */
  int native_return_value = git_filter_list_apply_to_data(native_out, native_filters, native_in);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_filter_list_apply_to_file */
/* sha: 1ce64e6cc58aa333e8718fc580dbe7b509c257c3a99914c94d84795f16ac2d20 */
#if BIND_git_filter_list_apply_to_file_FUNCTION
#define git_filter_list_apply_to_file_REQUIRED_ARGC 3
#define git_filter_list_apply_to_file_OPTIONAL_ARGC 0
/* git_filter_list_apply_to_file
 *
 * Parameters:
 * - filters: git_filter_list *
 * - repo: git_repository *
 * - path: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_filter_list_apply_to_file(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value filters;
  mrb_value repo;
  char * native_path = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooz", &filters, &repo, &native_path);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, filters, FilterList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FilterList expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: filters */
  git_filter_list * native_filters = (mrb_nil_p(filters) ? NULL : mruby_unbox_git_filter_list(filters));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_filter_list_apply_to_file(native_out, native_filters, native_repo, native_path);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_filter_list_contains */
/* sha: e898f98a0c0af9a6507bc2170647649aa402ceaf67335431bf2d7a1d13b969c4 */
#if BIND_git_filter_list_contains_FUNCTION
#define git_filter_list_contains_REQUIRED_ARGC 2
#define git_filter_list_contains_OPTIONAL_ARGC 0
/* git_filter_list_contains
 *
 * Parameters:
 * - filters: git_filter_list *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_filter_list_contains(mrb_state* mrb, mrb_value self) {
  mrb_value filters;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &filters, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, filters, FilterList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FilterList expected");
    return mrb_nil_value();
  }

  /* Unbox param: filters */
  git_filter_list * native_filters = (mrb_nil_p(filters) ? NULL : mruby_unbox_git_filter_list(filters));

  /* Invocation */
  int native_return_value = git_filter_list_contains(native_filters, native_name);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_filter_list_free */
/* sha: a0adc786d30126a9c5a887f00d0de7418320066a1ba3cb81890cf157f73c4071 */
#if BIND_git_filter_list_free_FUNCTION
#define git_filter_list_free_REQUIRED_ARGC 1
#define git_filter_list_free_OPTIONAL_ARGC 0
/* git_filter_list_free
 *
 * Parameters:
 * - filters: git_filter_list *
 * Return Type: void
 */
mrb_value
mrb_Git_git_filter_list_free(mrb_state* mrb, mrb_value self) {
  mrb_value filters;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &filters);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, filters, FilterList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FilterList expected");
    return mrb_nil_value();
  }

  /* Unbox param: filters */
  git_filter_list * native_filters = (mrb_nil_p(filters) ? NULL : mruby_unbox_git_filter_list(filters));

  /* Invocation */
  git_filter_list_free(native_filters);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_filter_list_load */
/* sha: dccfb4cb86d6e168b1e4c30f60b39f08c510b9beff53f9ed485ad1cdcaa962f7 */
#if BIND_git_filter_list_load_FUNCTION
#define git_filter_list_load_REQUIRED_ARGC 5
#define git_filter_list_load_OPTIONAL_ARGC 0
/* git_filter_list_load
 *
 * Parameters:
 * - repo: git_repository *
 * - blob: git_blob *
 * - path: const char *
 * - mode: git_filter_mode_t
 * - flags: uint32_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_filter_list_load(mrb_state* mrb, mrb_value self) {
  git_filter_list * native_filters = NULL;
  mrb_value repo;
  mrb_value blob;
  char * native_path = NULL;
  mrb_int native_mode;
  mrb_int native_flags;

  /* Fetch the args */
  mrb_get_args(mrb, "oozii", &repo, &blob, &native_path, &native_mode, &native_flags);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, blob, Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blob expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: blob */
  git_blob * native_blob = (mrb_nil_p(blob) ? NULL : mruby_unbox_git_blob(blob));

  /* Invocation */
  int native_return_value = git_filter_list_load(&native_filters, native_repo, native_blob, native_path, native_mode, native_flags);

  /* Box out param: filters */
  mrb_value filters = native_filters == NULL ? mrb_nil_value() : mruby_giftwrap_git_filter_list(mrb, native_filters);

  return filters;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_filter_list_stream_blob */
/* sha: 017df65d7624392407fcc5d5fde7b3832513a0e6f23628bdf42308fa5136def4 */
#if BIND_git_filter_list_stream_blob_FUNCTION
#define git_filter_list_stream_blob_REQUIRED_ARGC 3
#define git_filter_list_stream_blob_OPTIONAL_ARGC 0
/* git_filter_list_stream_blob
 *
 * Parameters:
 * - filters: git_filter_list *
 * - blob: git_blob *
 * - target: git_writestream *
 * Return Type: int
 */
mrb_value
mrb_Git_git_filter_list_stream_blob(mrb_state* mrb, mrb_value self) {
  mrb_value filters;
  mrb_value blob;
  mrb_value target;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &filters, &blob, &target);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, filters, FilterList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FilterList expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, blob, Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blob expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, target, Writestream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Writestream expected");
    return mrb_nil_value();
  }

  /* Unbox param: filters */
  git_filter_list * native_filters = (mrb_nil_p(filters) ? NULL : mruby_unbox_git_filter_list(filters));

  /* Unbox param: blob */
  git_blob * native_blob = (mrb_nil_p(blob) ? NULL : mruby_unbox_git_blob(blob));

  /* Unbox param: target */
  git_writestream * native_target = (mrb_nil_p(target) ? NULL : mruby_unbox_git_writestream(target));

  /* Invocation */
  int native_return_value = git_filter_list_stream_blob(native_filters, native_blob, native_target);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_filter_list_stream_data */
/* sha: 0b2caa45831a6d92f041ef080bbb2924874a0f624a1006f856adf1403d66fbb0 */
#if BIND_git_filter_list_stream_data_FUNCTION
#define git_filter_list_stream_data_REQUIRED_ARGC 3
#define git_filter_list_stream_data_OPTIONAL_ARGC 0
/* git_filter_list_stream_data
 *
 * Parameters:
 * - filters: git_filter_list *
 * - data: git_buf *
 * - target: git_writestream *
 * Return Type: int
 */
mrb_value
mrb_Git_git_filter_list_stream_data(mrb_state* mrb, mrb_value self) {
  mrb_value filters;
  mrb_value data;
  mrb_value target;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &filters, &data, &target);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, filters, FilterList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FilterList expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, data, Buf_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Buf expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, target, Writestream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Writestream expected");
    return mrb_nil_value();
  }

  /* Unbox param: filters */
  git_filter_list * native_filters = (mrb_nil_p(filters) ? NULL : mruby_unbox_git_filter_list(filters));

  /* Unbox param: data */
  git_buf * native_data = mrb_nil_p(data) ? NULL : mruby_unbox_git_buf(data);

  /* Unbox param: target */
  git_writestream * native_target = (mrb_nil_p(target) ? NULL : mruby_unbox_git_writestream(target));

  /* Invocation */
  int native_return_value = git_filter_list_stream_data(native_filters, native_data, native_target);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_filter_list_stream_file */
/* sha: 63e831ddc4b98a36eafdc0273b3378c4e05859b6fd4c6f7a941284894ef656af */
#if BIND_git_filter_list_stream_file_FUNCTION
#define git_filter_list_stream_file_REQUIRED_ARGC 4
#define git_filter_list_stream_file_OPTIONAL_ARGC 0
/* git_filter_list_stream_file
 *
 * Parameters:
 * - filters: git_filter_list *
 * - repo: git_repository *
 * - path: const char *
 * - target: git_writestream *
 * Return Type: int
 */
mrb_value
mrb_Git_git_filter_list_stream_file(mrb_state* mrb, mrb_value self) {
  mrb_value filters;
  mrb_value repo;
  char * native_path = NULL;
  mrb_value target;

  /* Fetch the args */
  mrb_get_args(mrb, "oozo", &filters, &repo, &native_path, &target);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, filters, FilterList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FilterList expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, target, Writestream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Writestream expected");
    return mrb_nil_value();
  }

  /* Unbox param: filters */
  git_filter_list * native_filters = (mrb_nil_p(filters) ? NULL : mruby_unbox_git_filter_list(filters));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: target */
  git_writestream * native_target = (mrb_nil_p(target) ? NULL : mruby_unbox_git_writestream(target));

  /* Invocation */
  int native_return_value = git_filter_list_stream_file(native_filters, native_repo, native_path, native_target);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_graph_ahead_behind */
/* sha: e0d351e606512f3d0598f2f9de858a2a8ab41fed1d7e568a65e613d5d0bf7561 */
#if BIND_git_graph_ahead_behind_FUNCTION
#define git_graph_ahead_behind_REQUIRED_ARGC 3
#define git_graph_ahead_behind_OPTIONAL_ARGC 0
/* git_graph_ahead_behind
 *
 * Parameters:
 * - repo: git_repository *
 * - local: const git_oid *
 * - upstream: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_graph_ahead_behind(mrb_state* mrb, mrb_value self) {
  mrb_value results = mrb_ary_new(mrb);
  int native_ahead;
  int native_behind;
  mrb_value repo;
  mrb_value local;
  mrb_value upstream;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &repo, &local, &upstream);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, local, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, upstream, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: local */
  const git_oid * native_local = (mrb_nil_p(local) ? NULL : mruby_unbox_git_oid(local));

  /* Unbox param: upstream */
  const git_oid * native_upstream = (mrb_nil_p(upstream) ? NULL : mruby_unbox_git_oid(upstream));

  /* Invocation */
  int native_return_value = git_graph_ahead_behind(&native_ahead, &native_behind, native_repo, native_local, native_upstream);

  /* Box out param: ahead */
  mrb_value ahead = mrb_fixnum_value(native_ahead);
  /* Box out param: behind */
  mrb_value behind = mrb_fixnum_value(native_behind);

  /* Add out params to results */
  mrb_ary_push(mrb, results, ahead);
  mrb_ary_push(mrb, results, behind);

  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_graph_descendant_of */
/* sha: ebeaaaee82411aba0c167212bb54220cebbf7516462342e036eff8ba25c62b77 */
#if BIND_git_graph_descendant_of_FUNCTION
#define git_graph_descendant_of_REQUIRED_ARGC 3
#define git_graph_descendant_of_OPTIONAL_ARGC 0
/* git_graph_descendant_of
 *
 * Parameters:
 * - repo: git_repository *
 * - commit: const git_oid *
 * - ancestor: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_graph_descendant_of(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value commit;
  mrb_value ancestor;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &repo, &commit, &ancestor);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, commit, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ancestor, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: commit */
  const git_oid * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_oid(commit));

  /* Unbox param: ancestor */
  const git_oid * native_ancestor = (mrb_nil_p(ancestor) ? NULL : mruby_unbox_git_oid(ancestor));

  /* Invocation */
  int native_return_value = git_graph_descendant_of(native_repo, native_commit, native_ancestor);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_ignore_add_rule */
/* sha: ebd99d17e0214bf8339bc0880da61c4787a9f07f22e89785e85ba9793a8ed76e */
#if BIND_git_ignore_add_rule_FUNCTION
#define git_ignore_add_rule_REQUIRED_ARGC 2
#define git_ignore_add_rule_OPTIONAL_ARGC 0
/* git_ignore_add_rule
 *
 * Parameters:
 * - repo: git_repository *
 * - rules: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_ignore_add_rule(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_rules = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_rules);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_ignore_add_rule(native_repo, native_rules);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_ignore_clear_internal_rules */
/* sha: 3d7f35e5482b2f7901793d3fa4d8364b628466b99ea1931baf3db24cb45a303e */
#if BIND_git_ignore_clear_internal_rules_FUNCTION
#define git_ignore_clear_internal_rules_REQUIRED_ARGC 1
#define git_ignore_clear_internal_rules_OPTIONAL_ARGC 0
/* git_ignore_clear_internal_rules
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_ignore_clear_internal_rules(mrb_state* mrb, mrb_value self) {
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_ignore_clear_internal_rules(native_repo);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_ignore_path_is_ignored */
/* sha: 2985c28f7f72d099ce04f01a725264e8a413e4deee3fe3d2c57709118f8a7137 */
#if BIND_git_ignore_path_is_ignored_FUNCTION
#define git_ignore_path_is_ignored_REQUIRED_ARGC 2
#define git_ignore_path_is_ignored_OPTIONAL_ARGC 0
/* git_ignore_path_is_ignored
 *
 * Parameters:
 * - repo: git_repository *
 * - path: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_ignore_path_is_ignored(mrb_state* mrb, mrb_value self) {
  int native_ignored;
  mrb_value repo;
  char * native_path = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_path);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_ignore_path_is_ignored(&native_ignored, native_repo, native_path);

  /* Box out param: ignored */
  mrb_value ignored = native_ignored == 0 ? mrb_false_value() : mrb_true_value();

  return ignored;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_add */
/* sha: c2d47e46671c80df549de3d2fbc547959fbf090b111a63be1173ff9aec5d033b */
#if BIND_git_index_add_FUNCTION
#define git_index_add_REQUIRED_ARGC 2
#define git_index_add_OPTIONAL_ARGC 0
/* git_index_add
 *
 * Parameters:
 * - index: git_index *
 * - source_entry: const git_index_entry *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_add(mrb_state* mrb, mrb_value self) {
  mrb_value index;
  mrb_value source_entry;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &index, &source_entry);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, source_entry, IndexEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "IndexEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Unbox param: source_entry */
  const git_index_entry * native_source_entry = (mrb_nil_p(source_entry) ? NULL : mruby_unbox_git_index_entry(source_entry));

  /* Invocation */
  int native_return_value = git_index_add(native_index, native_source_entry);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_add_all */
/* sha: 87d47da2ea5cfd8eb34df2d60bb78f32526d5484d71aece9166318a42bccdc0c */
#if BIND_git_index_add_all_FUNCTION
#define git_index_add_all_REQUIRED_ARGC 5
#define git_index_add_all_OPTIONAL_ARGC 0
/* git_index_add_all
 *
 * Parameters:
 * - index: git_index *
 * - pathspec: const git_strarray *
 * - flags: unsigned int
 * - callback: git_index_matched_path_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_add_all(mrb_state* mrb, mrb_value self) {
  mrb_value index;
  mrb_value pathspec;
  mrb_int native_flags;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ooioo", &index, &pathspec, &native_flags, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pathspec, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_char_PTR_COMMA_const_char_PTR_COMMA_void_PTR_RPAREN(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Unbox param: pathspec */
  const git_strarray * native_pathspec = (mrb_nil_p(pathspec) ? NULL : mruby_unbox_git_strarray(pathspec));

  /* Unbox param: callback */
  int (*native_callback)(const char *, const char *, void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_char_PTR_COMMA_const_char_PTR_COMMA_void_PTR_RPAREN(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_index_add_all(native_index, native_pathspec, native_flags, native_callback, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_add_bypath */
/* sha: 3054003e482a59b7801c3d590eb9937b8e04bb099cfca7c252bcc7b5dddafea6 */
#if BIND_git_index_add_bypath_FUNCTION
#define git_index_add_bypath_REQUIRED_ARGC 2
#define git_index_add_bypath_OPTIONAL_ARGC 0
/* git_index_add_bypath
 *
 * Parameters:
 * - index: git_index *
 * - path: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_add_bypath(mrb_state* mrb, mrb_value self) {
  mrb_value index;
  char * native_path = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &index, &native_path);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  int native_return_value = git_index_add_bypath(native_index, native_path);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_add_frombuffer */
/* sha: f910c431bce6d48d779054cf2a18eebb7b7241790face0d066d961978055f47b */
#if BIND_git_index_add_frombuffer_FUNCTION
#define git_index_add_frombuffer_REQUIRED_ARGC 4
#define git_index_add_frombuffer_OPTIONAL_ARGC 0
/* git_index_add_frombuffer
 *
 * Parameters:
 * - index: git_index *
 * - entry: const git_index_entry *
 * - buffer: const void *
 * - len: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_add_frombuffer(mrb_state* mrb, mrb_value self) {
  mrb_value index;
  mrb_value entry;
  mrb_value buffer;
  mrb_int native_len;

  /* Fetch the args */
  mrb_get_args(mrb, "oooi", &index, &entry, &buffer, &native_len);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, entry, IndexEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "IndexEntry expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(buffer);

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Unbox param: entry */
  const git_index_entry * native_entry = (mrb_nil_p(entry) ? NULL : mruby_unbox_git_index_entry(entry));

  /* Unbox param: buffer */
  const void * native_buffer = TODO_mruby_unbox_void_PTR(buffer);

  /* Invocation */
  int native_return_value = git_index_add_frombuffer(native_index, native_entry, native_buffer, native_len);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_caps */
/* sha: ce3ef212e6e5dde299d070354f6e549b1b81e19fdb33d13a53bae9fbf95a0b4a */
#if BIND_git_index_caps_FUNCTION
#define git_index_caps_REQUIRED_ARGC 1
#define git_index_caps_OPTIONAL_ARGC 0
/* git_index_caps
 *
 * Parameters:
 * - index: const git_index *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_caps(mrb_state* mrb, mrb_value self) {
  mrb_value index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  const git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  int native_return_value = git_index_caps(native_index);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_checksum */
/* sha: 355ede8d7103249710bf77ce90a6fd20d3aba270cae62bfddf86b1befecda868 */
#if BIND_git_index_checksum_FUNCTION
#define git_index_checksum_REQUIRED_ARGC 1
#define git_index_checksum_OPTIONAL_ARGC 0
/* git_index_checksum
 *
 * Parameters:
 * - index: git_index *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_index_checksum(mrb_state* mrb, mrb_value self) {
  mrb_value index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  const git_oid * native_return_value = git_index_checksum(native_index);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_clear */
/* sha: be148f61164d7a037c2e028953582d5d4df0aefd58462a27da1f94a91a0633e6 */
#if BIND_git_index_clear_FUNCTION
#define git_index_clear_REQUIRED_ARGC 1
#define git_index_clear_OPTIONAL_ARGC 0
/* git_index_clear
 *
 * Parameters:
 * - index: git_index *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_clear(mrb_state* mrb, mrb_value self) {
  mrb_value index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  int native_return_value = git_index_clear(native_index);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_conflict_add */
/* sha: 455a5f965981db61220a3a5d36ecf1dba186b219934b9c4ba46e95754a368d88 */
#if BIND_git_index_conflict_add_FUNCTION
#define git_index_conflict_add_REQUIRED_ARGC 4
#define git_index_conflict_add_OPTIONAL_ARGC 0
/* git_index_conflict_add
 *
 * Parameters:
 * - index: git_index *
 * - ancestor_entry: const git_index_entry *
 * - our_entry: const git_index_entry *
 * - their_entry: const git_index_entry *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_conflict_add(mrb_state* mrb, mrb_value self) {
  mrb_value index;
  mrb_value ancestor_entry;
  mrb_value our_entry;
  mrb_value their_entry;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &index, &ancestor_entry, &our_entry, &their_entry);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ancestor_entry, IndexEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "IndexEntry expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, our_entry, IndexEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "IndexEntry expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, their_entry, IndexEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "IndexEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Unbox param: ancestor_entry */
  const git_index_entry * native_ancestor_entry = (mrb_nil_p(ancestor_entry) ? NULL : mruby_unbox_git_index_entry(ancestor_entry));

  /* Unbox param: our_entry */
  const git_index_entry * native_our_entry = (mrb_nil_p(our_entry) ? NULL : mruby_unbox_git_index_entry(our_entry));

  /* Unbox param: their_entry */
  const git_index_entry * native_their_entry = (mrb_nil_p(their_entry) ? NULL : mruby_unbox_git_index_entry(their_entry));

  /* Invocation */
  int native_return_value = git_index_conflict_add(native_index, native_ancestor_entry, native_our_entry, native_their_entry);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_conflict_cleanup */
/* sha: 9ec162a03e466dea08397c58e5729307033fcb9fcf143a3c19ac84701b92c7ce */
#if BIND_git_index_conflict_cleanup_FUNCTION
#define git_index_conflict_cleanup_REQUIRED_ARGC 1
#define git_index_conflict_cleanup_OPTIONAL_ARGC 0
/* git_index_conflict_cleanup
 *
 * Parameters:
 * - index: git_index *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_conflict_cleanup(mrb_state* mrb, mrb_value self) {
  mrb_value index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  int native_return_value = git_index_conflict_cleanup(native_index);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_conflict_get */
/* sha: 172477821648fdf8a01ab87ffa16fd3068e98f07e98a03856aed04b3ae44b0b2 */
#if BIND_git_index_conflict_get_FUNCTION
#define git_index_conflict_get_REQUIRED_ARGC 2
#define git_index_conflict_get_OPTIONAL_ARGC 0
/* git_index_conflict_get
 *
 * Parameters:
 * - index: git_index *
 * - path: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_conflict_get(mrb_state* mrb, mrb_value self) {
  mrb_value results = mrb_ary_new(mrb);
  git_index_entry * native_ancestor_out = NULL;
  git_index_entry * native_our_out = NULL;
  git_index_entry * native_their_out = NULL;
  mrb_value index;
  char * native_path = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &index, &native_path);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  int native_return_value = git_index_conflict_get(&native_ancestor_out, &native_our_out, &native_their_out, native_index, native_path);

  /* Box out param: ancestor_out */
  mrb_value ancestor_out = mruby_box_git_index_entry(mrb, native_ancestor_out);
  /* Box out param: our_out */
  mrb_value our_out = mruby_box_git_index_entry(mrb, native_our_out);
  /* Box out param: their_out */
  mrb_value their_out = mruby_box_git_index_entry(mrb, native_their_out);

  /* Add out params to results */
  mrb_ary_push(mrb, results, ancestor_out);
  mrb_ary_push(mrb, results, our_out);
  mrb_ary_push(mrb, results, their_out);

  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_conflict_iterator_free */
/* sha: bd37efaba553213fd9b7d8fb3fa7901f241998a968fba0c7827a925c9fcaa1a0 */
#if BIND_git_index_conflict_iterator_free_FUNCTION
#define git_index_conflict_iterator_free_REQUIRED_ARGC 1
#define git_index_conflict_iterator_free_OPTIONAL_ARGC 0
/* git_index_conflict_iterator_free
 *
 * Parameters:
 * - iterator: git_index_conflict_iterator *
 * Return Type: void
 */
mrb_value
mrb_Git_git_index_conflict_iterator_free(mrb_state* mrb, mrb_value self) {
  mrb_value iterator;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &iterator);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, iterator, IndexConflictIterator_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "IndexConflictIterator expected");
    return mrb_nil_value();
  }

  /* Unbox param: iterator */
  git_index_conflict_iterator * native_iterator = (mrb_nil_p(iterator) ? NULL : mruby_unbox_git_index_conflict_iterator(iterator));

  /* Invocation */
  git_index_conflict_iterator_free(native_iterator);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_conflict_iterator_new */
/* sha: 775d6a9a1a07e5fa7636a9c06bd3a74e84203cd76a33fb66c341effc43f2145f */
#if BIND_git_index_conflict_iterator_new_FUNCTION
#define git_index_conflict_iterator_new_REQUIRED_ARGC 1
#define git_index_conflict_iterator_new_OPTIONAL_ARGC 0
/* git_index_conflict_iterator_new
 *
 * Parameters:
 * - index: git_index *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_conflict_iterator_new(mrb_state* mrb, mrb_value self) {
  git_index_conflict_iterator * native_iterator_out = NULL;
  mrb_value index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  int native_return_value = git_index_conflict_iterator_new(&native_iterator_out, native_index);

  /* Box out param: iterator_out */
  mrb_value iterator_out = native_iterator_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_index_conflict_iterator(mrb, native_iterator_out);

  return iterator_out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_conflict_next */
/* sha: e485d5a8f4874f4753abc07f0d74bb8aed38db1e7b43f166a8321c11bb467917 */
#if BIND_git_index_conflict_next_FUNCTION
#define git_index_conflict_next_REQUIRED_ARGC 1
#define git_index_conflict_next_OPTIONAL_ARGC 0
/* git_index_conflict_next
 *
 * Parameters:
 * - iterator: git_index_conflict_iterator *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_conflict_next(mrb_state* mrb, mrb_value self) {
  mrb_value results = mrb_ary_new(mrb);
  git_index_entry * native_ancestor_out = NULL;
  git_index_entry * native_our_out = NULL;
  git_index_entry * native_their_out = NULL;
  mrb_value iterator;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &iterator);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, iterator, IndexConflictIterator_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "IndexConflictIterator expected");
    return mrb_nil_value();
  }

  /* Unbox param: iterator */
  git_index_conflict_iterator * native_iterator = (mrb_nil_p(iterator) ? NULL : mruby_unbox_git_index_conflict_iterator(iterator));

  /* Invocation */
  int native_return_value = git_index_conflict_next(&native_ancestor_out, &native_our_out, &native_their_out, native_iterator);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  mrb_ary_push(mrb, results, return_value);
  
  /* Box out param: ancestor_out */
  mrb_value ancestor_out = mruby_box_git_index_entry(mrb, native_ancestor_out);
  /* Box out param: our_out */
  mrb_value our_out = mruby_box_git_index_entry(mrb, native_our_out);
  /* Box out param: their_out */
  mrb_value their_out = mruby_box_git_index_entry(mrb, native_their_out);

  /* Add out params to results */
  mrb_ary_push(mrb, results, ancestor_out);
  mrb_ary_push(mrb, results, our_out);
  mrb_ary_push(mrb, results, their_out);

  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_conflict_remove */
/* sha: a983a81a7e13f96fc81c44e507771c0ab301c648175c1fc4d73aba18e40b77c9 */
#if BIND_git_index_conflict_remove_FUNCTION
#define git_index_conflict_remove_REQUIRED_ARGC 2
#define git_index_conflict_remove_OPTIONAL_ARGC 0
/* git_index_conflict_remove
 *
 * Parameters:
 * - index: git_index *
 * - path: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_conflict_remove(mrb_state* mrb, mrb_value self) {
  mrb_value index;
  char * native_path = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &index, &native_path);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  int native_return_value = git_index_conflict_remove(native_index, native_path);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_entry_is_conflict */
/* sha: bbc2c57bbb3372fe04564e079e24414de673550fff345c3a07f6ece40c366819 */
#if BIND_git_index_entry_is_conflict_FUNCTION
#define git_index_entry_is_conflict_REQUIRED_ARGC 1
#define git_index_entry_is_conflict_OPTIONAL_ARGC 0
/* git_index_entry_is_conflict
 *
 * Parameters:
 * - entry: const git_index_entry *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_entry_is_conflict(mrb_state* mrb, mrb_value self) {
  mrb_value entry;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &entry);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, entry, IndexEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "IndexEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: entry */
  const git_index_entry * native_entry = (mrb_nil_p(entry) ? NULL : mruby_unbox_git_index_entry(entry));

  /* Invocation */
  int native_return_value = git_index_entry_is_conflict(native_entry);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_entry_stage */
/* sha: 51fc2508afae3484aa504b7f9d54c978008b88956395cc1c2f925b2297412bdb */
#if BIND_git_index_entry_stage_FUNCTION
#define git_index_entry_stage_REQUIRED_ARGC 1
#define git_index_entry_stage_OPTIONAL_ARGC 0
/* git_index_entry_stage
 *
 * Parameters:
 * - entry: const git_index_entry *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_entry_stage(mrb_state* mrb, mrb_value self) {
  mrb_value entry;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &entry);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, entry, IndexEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "IndexEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: entry */
  const git_index_entry * native_entry = (mrb_nil_p(entry) ? NULL : mruby_unbox_git_index_entry(entry));

  /* Invocation */
  int native_return_value = git_index_entry_stage(native_entry);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_entrycount */
/* sha: 77829fa183ee2edcce60da8f0e297776d83f428ff5b16a0b701adbbcd6e2d349 */
#if BIND_git_index_entrycount_FUNCTION
#define git_index_entrycount_REQUIRED_ARGC 1
#define git_index_entrycount_OPTIONAL_ARGC 0
/* git_index_entrycount
 *
 * Parameters:
 * - index: const git_index *
 * Return Type: size_t
 */
mrb_value
mrb_Git_git_index_entrycount(mrb_state* mrb, mrb_value self) {
  mrb_value index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  const git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  size_t native_return_value = git_index_entrycount(native_index);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_find */
/* sha: f1e9594599c5f2d6dd6c1507cd3a559e30c28cc15c8233d221a1587927f27a2f */
#if BIND_git_index_find_FUNCTION
#define git_index_find_REQUIRED_ARGC 2
#define git_index_find_OPTIONAL_ARGC 0
/* git_index_find
 *
 * Parameters:
 * - index: git_index *
 * - path: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_find(mrb_state* mrb, mrb_value self) {
  mrb_value results = mrb_ary_new(mrb);
  int native_at_pos;
  mrb_value index;
  char * native_path = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &index, &native_path);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  int native_return_value = git_index_find(&native_at_pos, native_index, native_path);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  mrb_ary_push(mrb, results, return_value);
  
  /* Box out param: at_pos */
  mrb_value at_pos = mrb_fixnum_value(native_at_pos);

  /* Add out params to results */
  mrb_ary_push(mrb, results, at_pos);

  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_find_prefix */
/* sha: 0ba7dd016fb346ef378192d68eb5d3a221727ba5519ebaa4497c0c108afcfb3b */
#if BIND_git_index_find_prefix_FUNCTION
#define git_index_find_prefix_REQUIRED_ARGC 2
#define git_index_find_prefix_OPTIONAL_ARGC 0
/* git_index_find_prefix
 *
 * Parameters:
 * - index: git_index *
 * - prefix: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_find_prefix(mrb_state* mrb, mrb_value self) {
  int native_at_pos;
  mrb_value index;
  char * native_prefix = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &index, &native_prefix);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  int native_return_value = git_index_find_prefix(&native_at_pos, native_index, native_prefix);

  /* Box out param: at_pos */
  mrb_value at_pos = mrb_fixnum_value(native_at_pos);

  return at_pos;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_free */
/* sha: 31cebb3d311bef4107f73ffe5836e7078aeb5b820d3f538cd3e2f4d752c3516e */
#if BIND_git_index_free_FUNCTION
#define git_index_free_REQUIRED_ARGC 1
#define git_index_free_OPTIONAL_ARGC 0
/* git_index_free
 *
 * Parameters:
 * - index: git_index *
 * Return Type: void
 */
mrb_value
mrb_Git_git_index_free(mrb_state* mrb, mrb_value self) {
  mrb_value index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  git_index_free(native_index);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_get_byindex */
/* sha: d5baec111cd0ee8f2b698c969ec075747c38274110b35d6d285076e102679bc4 */
#if BIND_git_index_get_byindex_FUNCTION
#define git_index_get_byindex_REQUIRED_ARGC 2
#define git_index_get_byindex_OPTIONAL_ARGC 0
/* git_index_get_byindex
 *
 * Parameters:
 * - index: git_index *
 * - n: size_t
 * Return Type: const git_index_entry *
 */
mrb_value
mrb_Git_git_index_get_byindex(mrb_state* mrb, mrb_value self) {
  mrb_value index;
  mrb_int native_n;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &index, &native_n);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  const git_index_entry * native_return_value = git_index_get_byindex(native_index, native_n);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_index_entry(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_get_bypath */
/* sha: 475633439a55e1fd01c9e8d3480af513d564f39cf355737560669651e451e45b */
#if BIND_git_index_get_bypath_FUNCTION
#define git_index_get_bypath_REQUIRED_ARGC 3
#define git_index_get_bypath_OPTIONAL_ARGC 0
/* git_index_get_bypath
 *
 * Parameters:
 * - index: git_index *
 * - path: const char *
 * - stage: int
 * Return Type: const git_index_entry *
 */
mrb_value
mrb_Git_git_index_get_bypath(mrb_state* mrb, mrb_value self) {
  mrb_value index;
  char * native_path = NULL;
  mrb_int native_stage;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &index, &native_path, &native_stage);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  const git_index_entry * native_return_value = git_index_get_bypath(native_index, native_path, native_stage);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_index_entry(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_has_conflicts */
/* sha: 181a191235ea22f7acb0106c9074c5efdd07038cdce2cdf106a0e79e15cc1d09 */
#if BIND_git_index_has_conflicts_FUNCTION
#define git_index_has_conflicts_REQUIRED_ARGC 1
#define git_index_has_conflicts_OPTIONAL_ARGC 0
/* git_index_has_conflicts
 *
 * Parameters:
 * - index: const git_index *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_has_conflicts(mrb_state* mrb, mrb_value self) {
  mrb_value index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  const git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  int native_return_value = git_index_has_conflicts(native_index);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_new */
/* sha: f7507dffa6cb8ce01fad62061cb925e7028678e4b4fd1a258e3ff11cb2108201 */
#if BIND_git_index_new_FUNCTION
#define git_index_new_REQUIRED_ARGC 0
#define git_index_new_OPTIONAL_ARGC 0
/* git_index_new
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_new(mrb_state* mrb, mrb_value self) {
  git_index * native_out = NULL;


  /* Invocation */
  int native_return_value = git_index_new(&native_out);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_index(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_open */
/* sha: 184a8892ec32f069fe3869945cf4efffe0c8a91f0bdd8ccd1fe99beabc1aca82 */
#if BIND_git_index_open_FUNCTION
#define git_index_open_REQUIRED_ARGC 1
#define git_index_open_OPTIONAL_ARGC 0
/* git_index_open
 *
 * Parameters:
 * - index_path: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_open(mrb_state* mrb, mrb_value self) {
  git_index * native_out = NULL;
  char * native_index_path = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_index_path);

  /* Invocation */
  int native_return_value = git_index_open(&native_out, native_index_path);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_index(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_owner */
/* sha: e1e82253a6ede8bc4e007f7e31fea73449a4d3f8d29b822f7eb02c86e368aeee */
#if BIND_git_index_owner_FUNCTION
#define git_index_owner_REQUIRED_ARGC 1
#define git_index_owner_OPTIONAL_ARGC 0
/* git_index_owner
 *
 * Parameters:
 * - index: const git_index *
 * Return Type: git_repository *
 */
mrb_value
mrb_Git_git_index_owner(mrb_state* mrb, mrb_value self) {
  mrb_value index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  const git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  git_repository * native_return_value = git_index_owner(native_index);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_repository(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_path */
/* sha: bfcad89b749dc1552d379a58033b736908f6c660eb423407c2f5124266c656b5 */
#if BIND_git_index_path_FUNCTION
#define git_index_path_REQUIRED_ARGC 1
#define git_index_path_OPTIONAL_ARGC 0
/* git_index_path
 *
 * Parameters:
 * - index: const git_index *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_index_path(mrb_state* mrb, mrb_value self) {
  mrb_value index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  const git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  const char * native_return_value = git_index_path(native_index);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_read */
/* sha: 64dac0d0067cb9d0406c21fb784be6bd1ca62d28b73f128d8eb1af6cd5b4348f */
#if BIND_git_index_read_FUNCTION
#define git_index_read_REQUIRED_ARGC 2
#define git_index_read_OPTIONAL_ARGC 0
/* git_index_read
 *
 * Parameters:
 * - index: git_index *
 * - force: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_read(mrb_state* mrb, mrb_value self) {
  mrb_value index;
  mrb_int native_force;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &index, &native_force);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  int native_return_value = git_index_read(native_index, native_force);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_read_tree */
/* sha: 3ab8f1d5fa965c4dd3bacc8ec364dcc63a30e49aad6c53037c75e5a12b02a3a5 */
#if BIND_git_index_read_tree_FUNCTION
#define git_index_read_tree_REQUIRED_ARGC 2
#define git_index_read_tree_OPTIONAL_ARGC 0
/* git_index_read_tree
 *
 * Parameters:
 * - index: git_index *
 * - tree: const git_tree *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_read_tree(mrb_state* mrb, mrb_value self) {
  mrb_value index;
  mrb_value tree;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &index, &tree);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Unbox param: tree */
  const git_tree * native_tree = (mrb_nil_p(tree) ? NULL : mruby_unbox_git_tree(tree));

  /* Invocation */
  int native_return_value = git_index_read_tree(native_index, native_tree);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_remove */
/* sha: ac4e4d870fabfee1f4861b032171762e70c87bfd39b669d3a74dbd5bee1c8a70 */
#if BIND_git_index_remove_FUNCTION
#define git_index_remove_REQUIRED_ARGC 3
#define git_index_remove_OPTIONAL_ARGC 0
/* git_index_remove
 *
 * Parameters:
 * - index: git_index *
 * - path: const char *
 * - stage: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_remove(mrb_state* mrb, mrb_value self) {
  mrb_value index;
  char * native_path = NULL;
  mrb_int native_stage;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &index, &native_path, &native_stage);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  int native_return_value = git_index_remove(native_index, native_path, native_stage);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_remove_all */
/* sha: be9e74e6b5bd4b1ed72beb6eb76e4324cf704316b76a5d9089e988d91ad716f9 */
#if BIND_git_index_remove_all_FUNCTION
#define git_index_remove_all_REQUIRED_ARGC 4
#define git_index_remove_all_OPTIONAL_ARGC 0
/* git_index_remove_all
 *
 * Parameters:
 * - index: git_index *
 * - pathspec: const git_strarray *
 * - callback: git_index_matched_path_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_remove_all(mrb_state* mrb, mrb_value self) {
  mrb_value index;
  mrb_value pathspec;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &index, &pathspec, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pathspec, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_char_PTR_COMMA_const_char_PTR_COMMA_void_PTR_RPAREN(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Unbox param: pathspec */
  const git_strarray * native_pathspec = (mrb_nil_p(pathspec) ? NULL : mruby_unbox_git_strarray(pathspec));

  /* Unbox param: callback */
  int (*native_callback)(const char *, const char *, void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_char_PTR_COMMA_const_char_PTR_COMMA_void_PTR_RPAREN(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_index_remove_all(native_index, native_pathspec, native_callback, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_remove_bypath */
/* sha: a3051837b24262564a95b73c2881b39de0833f2071e1b06d1e2c76aa3b3ed11c */
#if BIND_git_index_remove_bypath_FUNCTION
#define git_index_remove_bypath_REQUIRED_ARGC 2
#define git_index_remove_bypath_OPTIONAL_ARGC 0
/* git_index_remove_bypath
 *
 * Parameters:
 * - index: git_index *
 * - path: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_remove_bypath(mrb_state* mrb, mrb_value self) {
  mrb_value index;
  char * native_path = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &index, &native_path);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  int native_return_value = git_index_remove_bypath(native_index, native_path);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_remove_directory */
/* sha: 570851866a71e758b84f7038c415ee567774d1bfc9cee6ffced77c328f929079 */
#if BIND_git_index_remove_directory_FUNCTION
#define git_index_remove_directory_REQUIRED_ARGC 3
#define git_index_remove_directory_OPTIONAL_ARGC 0
/* git_index_remove_directory
 *
 * Parameters:
 * - index: git_index *
 * - dir: const char *
 * - stage: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_remove_directory(mrb_state* mrb, mrb_value self) {
  mrb_value index;
  char * native_dir = NULL;
  mrb_int native_stage;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &index, &native_dir, &native_stage);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  int native_return_value = git_index_remove_directory(native_index, native_dir, native_stage);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_set_caps */
/* sha: 87251d9191c9b38db01711b5330edd42552dbc1a4ce165ce7b866d3c1c068106 */
#if BIND_git_index_set_caps_FUNCTION
#define git_index_set_caps_REQUIRED_ARGC 2
#define git_index_set_caps_OPTIONAL_ARGC 0
/* git_index_set_caps
 *
 * Parameters:
 * - index: git_index *
 * - caps: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_set_caps(mrb_state* mrb, mrb_value self) {
  mrb_value index;
  mrb_int native_caps;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &index, &native_caps);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  int native_return_value = git_index_set_caps(native_index, native_caps);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_update_all */
/* sha: ae8d255b64d581e7f3735a42f852a9648cb68236cbe169f2fea4d08a6d2d0c6d */
#if BIND_git_index_update_all_FUNCTION
#define git_index_update_all_REQUIRED_ARGC 4
#define git_index_update_all_OPTIONAL_ARGC 0
/* git_index_update_all
 *
 * Parameters:
 * - index: git_index *
 * - pathspec: const git_strarray *
 * - callback: git_index_matched_path_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_update_all(mrb_state* mrb, mrb_value self) {
  mrb_value index;
  mrb_value pathspec;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &index, &pathspec, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pathspec, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_char_PTR_COMMA_const_char_PTR_COMMA_void_PTR_RPAREN(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Unbox param: pathspec */
  const git_strarray * native_pathspec = (mrb_nil_p(pathspec) ? NULL : mruby_unbox_git_strarray(pathspec));

  /* Unbox param: callback */
  int (*native_callback)(const char *, const char *, void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_char_PTR_COMMA_const_char_PTR_COMMA_void_PTR_RPAREN(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_index_update_all(native_index, native_pathspec, native_callback, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_write */
/* sha: c2a4e1a46b4319c2cca32eda74530f3090ea289bce81e4678794e70fee6b8cd4 */
#if BIND_git_index_write_FUNCTION
#define git_index_write_REQUIRED_ARGC 1
#define git_index_write_OPTIONAL_ARGC 0
/* git_index_write
 *
 * Parameters:
 * - index: git_index *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_write(mrb_state* mrb, mrb_value self) {
  mrb_value index;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  int native_return_value = git_index_write(native_index);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_write_tree */
/* sha: fd14fcdb8f93eb6b8b319657997137325ed52a87acaf0875712b269b2e343081 */
#if BIND_git_index_write_tree_FUNCTION
#define git_index_write_tree_REQUIRED_ARGC 2
#define git_index_write_tree_OPTIONAL_ARGC 0
/* git_index_write_tree
 *
 * Parameters:
 * - out: git_oid *
 * - index: git_index *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_write_tree(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value index;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &out, &index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Invocation */
  int native_return_value = git_index_write_tree(native_out, native_index);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_index_write_tree_to */
/* sha: 48fdf0aed141d140edc77442c05d6679d931b11cffa1ef150a01105cabf5ad8d */
#if BIND_git_index_write_tree_to_FUNCTION
#define git_index_write_tree_to_REQUIRED_ARGC 3
#define git_index_write_tree_to_OPTIONAL_ARGC 0
/* git_index_write_tree_to
 *
 * Parameters:
 * - out: git_oid *
 * - index: git_index *
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_index_write_tree_to(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value index;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &out, &index, &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_index_write_tree_to(native_out, native_index, native_repo);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_indexer_append */
/* sha: 9311d4ff4242026e21bb2ab832ce598c48f70a02a7d57b3e81aa5d55ec0362c7 */
#if BIND_git_indexer_append_FUNCTION
#define git_indexer_append_REQUIRED_ARGC 4
#define git_indexer_append_OPTIONAL_ARGC 0
/* git_indexer_append
 *
 * Parameters:
 * - idx: git_indexer *
 * - data: const void *
 * - size: size_t
 * - stats: git_transfer_progress *
 * Return Type: int
 */
mrb_value
mrb_Git_git_indexer_append(mrb_state* mrb, mrb_value self) {
  mrb_value idx;
  mrb_value data;
  mrb_int native_size;
  mrb_value stats;

  /* Fetch the args */
  mrb_get_args(mrb, "ooio", &idx, &data, &native_size, &stats);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, idx, Indexer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Indexer expected");
    return mrb_nil_value();
  }
  TODO_type_check_void_PTR(data);
  if (!mrb_obj_is_kind_of(mrb, stats, TransferProgress_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TransferProgress expected");
    return mrb_nil_value();
  }

  /* Unbox param: idx */
  git_indexer * native_idx = (mrb_nil_p(idx) ? NULL : mruby_unbox_git_indexer(idx));

  /* Unbox param: data */
  const void * native_data = TODO_mruby_unbox_void_PTR(data);

  /* Unbox param: stats */
  git_transfer_progress * native_stats = (mrb_nil_p(stats) ? NULL : mruby_unbox_git_transfer_progress(stats));

  /* Invocation */
  int native_return_value = git_indexer_append(native_idx, native_data, native_size, native_stats);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_indexer_commit */
/* sha: 6357bf0b3c460dde87109b46dd9bd69c474dab8b486d94d4ad14f25e29620e57 */
#if BIND_git_indexer_commit_FUNCTION
#define git_indexer_commit_REQUIRED_ARGC 2
#define git_indexer_commit_OPTIONAL_ARGC 0
/* git_indexer_commit
 *
 * Parameters:
 * - idx: git_indexer *
 * - stats: git_transfer_progress *
 * Return Type: int
 */
mrb_value
mrb_Git_git_indexer_commit(mrb_state* mrb, mrb_value self) {
  mrb_value idx;
  mrb_value stats;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &idx, &stats);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, idx, Indexer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Indexer expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, stats, TransferProgress_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TransferProgress expected");
    return mrb_nil_value();
  }

  /* Unbox param: idx */
  git_indexer * native_idx = (mrb_nil_p(idx) ? NULL : mruby_unbox_git_indexer(idx));

  /* Unbox param: stats */
  git_transfer_progress * native_stats = (mrb_nil_p(stats) ? NULL : mruby_unbox_git_transfer_progress(stats));

  /* Invocation */
  int native_return_value = git_indexer_commit(native_idx, native_stats);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_indexer_free */
/* sha: 45e7ad4538dc1c0c58d79af54e6adc841d009d62467005317ea048a241a05712 */
#if BIND_git_indexer_free_FUNCTION
#define git_indexer_free_REQUIRED_ARGC 1
#define git_indexer_free_OPTIONAL_ARGC 0
/* git_indexer_free
 *
 * Parameters:
 * - idx: git_indexer *
 * Return Type: void
 */
mrb_value
mrb_Git_git_indexer_free(mrb_state* mrb, mrb_value self) {
  mrb_value idx;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &idx);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, idx, Indexer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Indexer expected");
    return mrb_nil_value();
  }

  /* Unbox param: idx */
  git_indexer * native_idx = (mrb_nil_p(idx) ? NULL : mruby_unbox_git_indexer(idx));

  /* Invocation */
  git_indexer_free(native_idx);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_indexer_hash */
/* sha: 2b862ef1346219eddab419adebeba2e6d02dbdf5641ce8a72153a8812fd940fb */
#if BIND_git_indexer_hash_FUNCTION
#define git_indexer_hash_REQUIRED_ARGC 1
#define git_indexer_hash_OPTIONAL_ARGC 0
/* git_indexer_hash
 *
 * Parameters:
 * - idx: const git_indexer *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_indexer_hash(mrb_state* mrb, mrb_value self) {
  mrb_value idx;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &idx);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, idx, Indexer_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Indexer expected");
    return mrb_nil_value();
  }

  /* Unbox param: idx */
  const git_indexer * native_idx = (mrb_nil_p(idx) ? NULL : mruby_unbox_git_indexer(idx));

  /* Invocation */
  const git_oid * native_return_value = git_indexer_hash(native_idx);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_indexer_new */
/* sha: 297bdbb82dce036a00bb5a1c1b0369cb76c9e44075b5a2f5357fd26fd855bf31 */
#if BIND_git_indexer_new_FUNCTION
#define git_indexer_new_REQUIRED_ARGC 5
#define git_indexer_new_OPTIONAL_ARGC 0
/* git_indexer_new
 *
 * Parameters:
 * - path: const char *
 * - mode: unsigned int
 * - odb: git_odb *
 * - progress_cb: git_transfer_progress_cb
 * - progress_cb_payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_indexer_new(mrb_state* mrb, mrb_value self) {
  git_indexer * native_out = NULL;
  char * native_path = NULL;
  mrb_int native_mode;
  mrb_value odb;
  mrb_value progress_cb;
  mrb_value progress_cb_payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ziooo", &native_path, &native_mode, &odb, &progress_cb, &progress_cb_payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, odb, Odb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Odb expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_transfer_progress_cb(progress_cb);
  TODO_type_check_void_PTR(progress_cb_payload);

  /* Unbox param: odb */
  git_odb * native_odb = (mrb_nil_p(odb) ? NULL : mruby_unbox_git_odb(odb));

  /* Unbox param: progress_cb */
  git_transfer_progress_cb native_progress_cb = TODO_mruby_unbox_git_transfer_progress_cb(progress_cb);

  /* Unbox param: progress_cb_payload */
  void * native_progress_cb_payload = TODO_mruby_unbox_void_PTR(progress_cb_payload);

  /* Invocation */
  int native_return_value = git_indexer_new(&native_out, native_path, native_mode, native_odb, native_progress_cb, native_progress_cb_payload);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_indexer(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_libgit2_features */
/* sha: 1cc5838dc0128c4d9a089635132b498141d47d6857aec4d0901a025dc843dab7 */
#if BIND_git_libgit2_features_FUNCTION
#define git_libgit2_features_REQUIRED_ARGC 0
#define git_libgit2_features_OPTIONAL_ARGC 0
/* git_libgit2_features
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Git_git_libgit2_features(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int native_return_value = git_libgit2_features();

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_libgit2_init */
/* sha: fbbc2d6d3cc7da411af396e2453186f6a78255b67f82f96a3daa0192a399c06d */
#if BIND_git_libgit2_init_FUNCTION
#define git_libgit2_init_REQUIRED_ARGC 0
#define git_libgit2_init_OPTIONAL_ARGC 0
/* git_libgit2_init
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Git_git_libgit2_init(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int native_return_value = git_libgit2_init();

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_libgit2_opts */
/* sha: 095576f18f6107bce329fef016bde3016323d7b96bd55ae84f486562c57ce014 */
#if BIND_git_libgit2_opts_FUNCTION
#define git_libgit2_opts_REQUIRED_ARGC 1
#define git_libgit2_opts_OPTIONAL_ARGC 0
/* git_libgit2_opts
 *
 * Parameters:
 * - option: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_libgit2_opts(mrb_state* mrb, mrb_value self) {
  mrb_int native_option;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_option);

  /* Invocation */
  int native_return_value = git_libgit2_opts(native_option);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_libgit2_shutdown */
/* sha: d3a64c1e1cc286120f83e77f69c910398eccc812155522cf664d14fc4b714ae7 */
#if BIND_git_libgit2_shutdown_FUNCTION
#define git_libgit2_shutdown_REQUIRED_ARGC 0
#define git_libgit2_shutdown_OPTIONAL_ARGC 0
/* git_libgit2_shutdown
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Git_git_libgit2_shutdown(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  int native_return_value = git_libgit2_shutdown();

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_libgit2_version */
/* sha: 7ba7f67c94106c17beae372b35e858112d1403fc6ae715b849ae24e98feac8bd */
#if BIND_git_libgit2_version_FUNCTION
#define git_libgit2_version_REQUIRED_ARGC 0
#define git_libgit2_version_OPTIONAL_ARGC 0
/* git_libgit2_version
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_Git_git_libgit2_version(mrb_state* mrb, mrb_value self) {
  mrb_value results = mrb_ary_new(mrb);
  int native_major;
  int native_minor;
  int native_rev;


  /* Invocation */
  git_libgit2_version(&native_major, &native_minor, &native_rev);

  /* Box out param: major */
  mrb_value major = mrb_fixnum_value(native_major);
  /* Box out param: minor */
  mrb_value minor = mrb_fixnum_value(native_minor);
  /* Box out param: rev */
  mrb_value rev = mrb_fixnum_value(native_rev);

  /* Add out params to results */
  mrb_ary_push(mrb, results, major);
  mrb_ary_push(mrb, results, minor);
  mrb_ary_push(mrb, results, rev);

  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_merge */
/* sha: aadb5ff81a9d414c59ccf7d7c588e4848fcff59000d2dc33f7c52cfec28214dd */
#if BIND_git_merge_FUNCTION
#define git_merge_REQUIRED_ARGC 4
#define git_merge_OPTIONAL_ARGC 0
/* git_merge
 *
 * Parameters:
 * - repo: git_repository *
 * - their_heads_len: size_t
 * - merge_opts: const git_merge_options *
 * - checkout_opts: const git_checkout_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_merge(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  git_annotated_commit * native_their_heads = NULL;
  mrb_int native_their_heads_len;
  mrb_value merge_opts;
  mrb_value checkout_opts;

  /* Fetch the args */
  mrb_get_args(mrb, "oioo", &repo, &native_their_heads_len, &merge_opts, &checkout_opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, merge_opts, MergeOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MergeOptions expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, checkout_opts, CheckoutOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CheckoutOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: merge_opts */
  const git_merge_options * native_merge_opts = (mrb_nil_p(merge_opts) ? NULL : mruby_unbox_git_merge_options(merge_opts));

  /* Unbox param: checkout_opts */
  const git_checkout_options * native_checkout_opts = (mrb_nil_p(checkout_opts) ? NULL : mruby_unbox_git_checkout_options(checkout_opts));

  /* Invocation */
  int native_return_value = git_merge(native_repo, &native_their_heads, native_their_heads_len, native_merge_opts, native_checkout_opts);

  /* Box out param: their_heads */
  mrb_value their_heads = mruby_box_git_annotated_commit(mrb, native_their_heads);

  return their_heads;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_merge_analysis */
/* sha: 926ffa3436fbbba9cd375cecafab1a3842bb568a67437f9fd396df89824e5baa */
#if BIND_git_merge_analysis_FUNCTION
#define git_merge_analysis_REQUIRED_ARGC 2
#define git_merge_analysis_OPTIONAL_ARGC 0
/* git_merge_analysis
 *
 * Parameters:
 * - repo: git_repository *
 * - their_heads_len: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_merge_analysis(mrb_state* mrb, mrb_value self) {
  mrb_value results = mrb_ary_new(mrb);
  int native_analysis_out;
  int native_preference_out;
  mrb_value repo;
  git_annotated_commit * native_their_heads = NULL;
  mrb_int native_their_heads_len;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &repo, &native_their_heads_len);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_merge_analysis(&native_analysis_out, &native_preference_out, native_repo, &native_their_heads, native_their_heads_len);

  /* Box out param: analysis_out */
  mrb_value analysis_out = mrb_fixnum_value(native_analysis_out);
  /* Box out param: preference_out */
  mrb_value preference_out = mrb_fixnum_value(native_preference_out);
  /* Box out param: their_heads */
  mrb_value their_heads = mruby_box_git_annotated_commit(mrb, native_their_heads);

  /* Add out params to results */
  mrb_ary_push(mrb, results, analysis_out);
  mrb_ary_push(mrb, results, preference_out);
  mrb_ary_push(mrb, results, their_heads);

  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_merge_base */
/* sha: bd83ba66f6cfbe7c66d5ec8d36d2ce3851d102e061e5634cae1b10468a21aeef */
#if BIND_git_merge_base_FUNCTION
#define git_merge_base_REQUIRED_ARGC 4
#define git_merge_base_OPTIONAL_ARGC 0
/* git_merge_base
 *
 * Parameters:
 * - out: git_oid *
 * - repo: git_repository *
 * - one: const git_oid *
 * - two: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_merge_base(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value repo;
  mrb_value one;
  mrb_value two;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &out, &repo, &one, &two);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, one, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, two, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: one */
  const git_oid * native_one = (mrb_nil_p(one) ? NULL : mruby_unbox_git_oid(one));

  /* Unbox param: two */
  const git_oid * native_two = (mrb_nil_p(two) ? NULL : mruby_unbox_git_oid(two));

  /* Invocation */
  int native_return_value = git_merge_base(native_out, native_repo, native_one, native_two);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_merge_base_many */
/* sha: 61a5e279e40281185fe9ffa4298897bca65969734fafd3e64e6a6c8c15e5d22b */
#if BIND_git_merge_base_many_FUNCTION
#define git_merge_base_many_REQUIRED_ARGC 4
#define git_merge_base_many_OPTIONAL_ARGC 0
/* git_merge_base_many
 *
 * Parameters:
 * - out: git_oid *
 * - repo: git_repository *
 * - length: size_t
 * - input_array: const git_oid []
 * Return Type: int
 */
mrb_value
mrb_Git_git_merge_base_many(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value repo;
  mrb_int native_length;
  mrb_value input_array;

  /* Fetch the args */
  mrb_get_args(mrb, "ooio", &out, &repo, &native_length, &input_array);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_oid_[](input_array);

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: input_array */
  const git_oid [] native_input_array = TODO_mruby_unbox_git_oid_[](input_array);

  /* Invocation */
  int native_return_value = git_merge_base_many(native_out, native_repo, native_length, native_input_array);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_merge_base_octopus */
/* sha: 3d91fa171c93d899297babd2579785c63fdf4aecd5e4bf3e7c6480ccf6751df9 */
#if BIND_git_merge_base_octopus_FUNCTION
#define git_merge_base_octopus_REQUIRED_ARGC 4
#define git_merge_base_octopus_OPTIONAL_ARGC 0
/* git_merge_base_octopus
 *
 * Parameters:
 * - out: git_oid *
 * - repo: git_repository *
 * - length: size_t
 * - input_array: const git_oid []
 * Return Type: int
 */
mrb_value
mrb_Git_git_merge_base_octopus(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value repo;
  mrb_int native_length;
  mrb_value input_array;

  /* Fetch the args */
  mrb_get_args(mrb, "ooio", &out, &repo, &native_length, &input_array);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_oid_[](input_array);

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: input_array */
  const git_oid [] native_input_array = TODO_mruby_unbox_git_oid_[](input_array);

  /* Invocation */
  int native_return_value = git_merge_base_octopus(native_out, native_repo, native_length, native_input_array);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_merge_bases */
/* sha: 15c2b6dc49ffd952f39358799946768c70312735fb1ddf22f4569d9593dea9c9 */
#if BIND_git_merge_bases_FUNCTION
#define git_merge_bases_REQUIRED_ARGC 4
#define git_merge_bases_OPTIONAL_ARGC 0
/* git_merge_bases
 *
 * Parameters:
 * - out: git_oidarray *
 * - repo: git_repository *
 * - one: const git_oid *
 * - two: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_merge_bases(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value repo;
  mrb_value one;
  mrb_value two;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &out, &repo, &one, &two);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oidarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oidarray expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, one, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, two, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_oidarray * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oidarray(out));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: one */
  const git_oid * native_one = (mrb_nil_p(one) ? NULL : mruby_unbox_git_oid(one));

  /* Unbox param: two */
  const git_oid * native_two = (mrb_nil_p(two) ? NULL : mruby_unbox_git_oid(two));

  /* Invocation */
  int native_return_value = git_merge_bases(native_out, native_repo, native_one, native_two);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_merge_bases_many */
/* sha: 73dd7ac349dbea55278940235400c34615608b80c79d5cb17aaffb4e1ef9e62f */
#if BIND_git_merge_bases_many_FUNCTION
#define git_merge_bases_many_REQUIRED_ARGC 4
#define git_merge_bases_many_OPTIONAL_ARGC 0
/* git_merge_bases_many
 *
 * Parameters:
 * - out: git_oidarray *
 * - repo: git_repository *
 * - length: size_t
 * - input_array: const git_oid []
 * Return Type: int
 */
mrb_value
mrb_Git_git_merge_bases_many(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value repo;
  mrb_int native_length;
  mrb_value input_array;

  /* Fetch the args */
  mrb_get_args(mrb, "ooio", &out, &repo, &native_length, &input_array);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oidarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oidarray expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_oid_[](input_array);

  /* Unbox param: out */
  git_oidarray * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oidarray(out));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: input_array */
  const git_oid [] native_input_array = TODO_mruby_unbox_git_oid_[](input_array);

  /* Invocation */
  int native_return_value = git_merge_bases_many(native_out, native_repo, native_length, native_input_array);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_merge_commits */
/* sha: e8a1409729b724c88d1600b79db26e11c9dc561917db0fece0785f5707b38407 */
#if BIND_git_merge_commits_FUNCTION
#define git_merge_commits_REQUIRED_ARGC 4
#define git_merge_commits_OPTIONAL_ARGC 0
/* git_merge_commits
 *
 * Parameters:
 * - repo: git_repository *
 * - our_commit: const git_commit *
 * - their_commit: const git_commit *
 * - opts: const git_merge_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_merge_commits(mrb_state* mrb, mrb_value self) {
  git_index * native_out = NULL;
  mrb_value repo;
  mrb_value our_commit;
  mrb_value their_commit;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &repo, &our_commit, &their_commit, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, our_commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, their_commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, MergeOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MergeOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: our_commit */
  const git_commit * native_our_commit = (mrb_nil_p(our_commit) ? NULL : mruby_unbox_git_commit(our_commit));

  /* Unbox param: their_commit */
  const git_commit * native_their_commit = (mrb_nil_p(their_commit) ? NULL : mruby_unbox_git_commit(their_commit));

  /* Unbox param: opts */
  const git_merge_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_merge_options(opts));

  /* Invocation */
  int native_return_value = git_merge_commits(&native_out, native_repo, native_our_commit, native_their_commit, native_opts);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_index(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_merge_file */
/* sha: f577c8cf52c0f3c999b831e36d6f45d9c03aea586c0a182805be3ea0aed013d0 */
#if BIND_git_merge_file_FUNCTION
#define git_merge_file_REQUIRED_ARGC 5
#define git_merge_file_OPTIONAL_ARGC 0
/* git_merge_file
 *
 * Parameters:
 * - out: git_merge_file_result *
 * - ancestor: const git_merge_file_input *
 * - ours: const git_merge_file_input *
 * - theirs: const git_merge_file_input *
 * - opts: const git_merge_file_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_merge_file(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value ancestor;
  mrb_value ours;
  mrb_value theirs;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &out, &ancestor, &ours, &theirs, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, MergeFileResult_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MergeFileResult expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ancestor, MergeFileInput_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MergeFileInput expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ours, MergeFileInput_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MergeFileInput expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, theirs, MergeFileInput_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MergeFileInput expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, MergeFileOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MergeFileOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_merge_file_result * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_merge_file_result(out));

  /* Unbox param: ancestor */
  const git_merge_file_input * native_ancestor = (mrb_nil_p(ancestor) ? NULL : mruby_unbox_git_merge_file_input(ancestor));

  /* Unbox param: ours */
  const git_merge_file_input * native_ours = (mrb_nil_p(ours) ? NULL : mruby_unbox_git_merge_file_input(ours));

  /* Unbox param: theirs */
  const git_merge_file_input * native_theirs = (mrb_nil_p(theirs) ? NULL : mruby_unbox_git_merge_file_input(theirs));

  /* Unbox param: opts */
  const git_merge_file_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_merge_file_options(opts));

  /* Invocation */
  int native_return_value = git_merge_file(native_out, native_ancestor, native_ours, native_theirs, native_opts);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_merge_file_from_index */
/* sha: 9d82e4ca266356b32187291279dc4757a38ec2c02da727c4464b184697eb1efb */
#if BIND_git_merge_file_from_index_FUNCTION
#define git_merge_file_from_index_REQUIRED_ARGC 6
#define git_merge_file_from_index_OPTIONAL_ARGC 0
/* git_merge_file_from_index
 *
 * Parameters:
 * - out: git_merge_file_result *
 * - repo: git_repository *
 * - ancestor: const git_index_entry *
 * - ours: const git_index_entry *
 * - theirs: const git_index_entry *
 * - opts: const git_merge_file_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_merge_file_from_index(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value repo;
  mrb_value ancestor;
  mrb_value ours;
  mrb_value theirs;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "oooooo", &out, &repo, &ancestor, &ours, &theirs, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, MergeFileResult_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MergeFileResult expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ancestor, IndexEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "IndexEntry expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ours, IndexEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "IndexEntry expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, theirs, IndexEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "IndexEntry expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, MergeFileOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MergeFileOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_merge_file_result * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_merge_file_result(out));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: ancestor */
  const git_index_entry * native_ancestor = (mrb_nil_p(ancestor) ? NULL : mruby_unbox_git_index_entry(ancestor));

  /* Unbox param: ours */
  const git_index_entry * native_ours = (mrb_nil_p(ours) ? NULL : mruby_unbox_git_index_entry(ours));

  /* Unbox param: theirs */
  const git_index_entry * native_theirs = (mrb_nil_p(theirs) ? NULL : mruby_unbox_git_index_entry(theirs));

  /* Unbox param: opts */
  const git_merge_file_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_merge_file_options(opts));

  /* Invocation */
  int native_return_value = git_merge_file_from_index(native_out, native_repo, native_ancestor, native_ours, native_theirs, native_opts);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_merge_file_init_input */
/* sha: 546add0c81049277f99d3103cafd6816a1fcf73f4ac3c7f301776e3211b23395 */
#if BIND_git_merge_file_init_input_FUNCTION
#define git_merge_file_init_input_REQUIRED_ARGC 2
#define git_merge_file_init_input_OPTIONAL_ARGC 0
/* git_merge_file_init_input
 *
 * Parameters:
 * - opts: git_merge_file_input *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_merge_file_init_input(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, MergeFileInput_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MergeFileInput expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_merge_file_input * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_merge_file_input(opts));

  /* Invocation */
  int native_return_value = git_merge_file_init_input(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_merge_file_init_options */
/* sha: d204e507c3741bdb473db13f2f38fd9b9a2de36aee5a041546f08b45bbfe96af */
#if BIND_git_merge_file_init_options_FUNCTION
#define git_merge_file_init_options_REQUIRED_ARGC 2
#define git_merge_file_init_options_OPTIONAL_ARGC 0
/* git_merge_file_init_options
 *
 * Parameters:
 * - opts: git_merge_file_options *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_merge_file_init_options(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, MergeFileOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MergeFileOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_merge_file_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_merge_file_options(opts));

  /* Invocation */
  int native_return_value = git_merge_file_init_options(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_merge_file_result_free */
/* sha: 53eb515fbbfbb06bd11d3397e82d5b0587d0ee5942b5612eeb0c8ab63343ac53 */
#if BIND_git_merge_file_result_free_FUNCTION
#define git_merge_file_result_free_REQUIRED_ARGC 1
#define git_merge_file_result_free_OPTIONAL_ARGC 0
/* git_merge_file_result_free
 *
 * Parameters:
 * - result: git_merge_file_result *
 * Return Type: void
 */
mrb_value
mrb_Git_git_merge_file_result_free(mrb_state* mrb, mrb_value self) {
  mrb_value result;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &result);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, result, MergeFileResult_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MergeFileResult expected");
    return mrb_nil_value();
  }

  /* Unbox param: result */
  git_merge_file_result * native_result = (mrb_nil_p(result) ? NULL : mruby_unbox_git_merge_file_result(result));

  /* Invocation */
  git_merge_file_result_free(native_result);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_merge_init_options */
/* sha: 1de6c965735c851945f30d4aef8e2177b5de0c0c4b3952d6dad86a1a1eac6725 */
#if BIND_git_merge_init_options_FUNCTION
#define git_merge_init_options_REQUIRED_ARGC 2
#define git_merge_init_options_OPTIONAL_ARGC 0
/* git_merge_init_options
 *
 * Parameters:
 * - opts: git_merge_options *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_merge_init_options(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, MergeOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MergeOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_merge_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_merge_options(opts));

  /* Invocation */
  int native_return_value = git_merge_init_options(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_merge_trees */
/* sha: dd5054ce8cab32dae8f0c4f24d4e205e0cbb2ef8422021490cbb7c1e44a521b1 */
#if BIND_git_merge_trees_FUNCTION
#define git_merge_trees_REQUIRED_ARGC 5
#define git_merge_trees_OPTIONAL_ARGC 0
/* git_merge_trees
 *
 * Parameters:
 * - repo: git_repository *
 * - ancestor_tree: const git_tree *
 * - our_tree: const git_tree *
 * - their_tree: const git_tree *
 * - opts: const git_merge_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_merge_trees(mrb_state* mrb, mrb_value self) {
  git_index * native_out = NULL;
  mrb_value repo;
  mrb_value ancestor_tree;
  mrb_value our_tree;
  mrb_value their_tree;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &repo, &ancestor_tree, &our_tree, &their_tree, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ancestor_tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, our_tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, their_tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, MergeOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MergeOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: ancestor_tree */
  const git_tree * native_ancestor_tree = (mrb_nil_p(ancestor_tree) ? NULL : mruby_unbox_git_tree(ancestor_tree));

  /* Unbox param: our_tree */
  const git_tree * native_our_tree = (mrb_nil_p(our_tree) ? NULL : mruby_unbox_git_tree(our_tree));

  /* Unbox param: their_tree */
  const git_tree * native_their_tree = (mrb_nil_p(their_tree) ? NULL : mruby_unbox_git_tree(their_tree));

  /* Unbox param: opts */
  const git_merge_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_merge_options(opts));

  /* Invocation */
  int native_return_value = git_merge_trees(&native_out, native_repo, native_ancestor_tree, native_our_tree, native_their_tree, native_opts);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_index(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_message_prettify */
/* sha: 038a3c6d05e1c4e056a9d714b3a87aa33a33b3b3e673dfd0bb5faae36ad8d4a6 */
#if BIND_git_message_prettify_FUNCTION
#define git_message_prettify_REQUIRED_ARGC 3
#define git_message_prettify_OPTIONAL_ARGC 0
/* git_message_prettify
 *
 * Parameters:
 * - message: const char *
 * - strip_comments: int
 * - comment_char: char
 * Return Type: int
 */
mrb_value
mrb_Git_git_message_prettify(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  char * native_message = NULL;
  mrb_int native_strip_comments;
  mrb_int native_comment_char;

  /* Fetch the args */
  mrb_get_args(mrb, "zii", &native_message, &native_strip_comments, &native_comment_char);

  /* Invocation */
  int native_return_value = git_message_prettify(native_out, native_message, native_strip_comments, native_comment_char);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_note_author */
/* sha: 0daa74ce2fec286427cf02ff770be760d6d8122c44a4be1a6bc0b99dd1ec9f94 */
#if BIND_git_note_author_FUNCTION
#define git_note_author_REQUIRED_ARGC 1
#define git_note_author_OPTIONAL_ARGC 0
/* git_note_author
 *
 * Parameters:
 * - note: const git_note *
 * Return Type: const git_signature *
 */
mrb_value
mrb_Git_git_note_author(mrb_state* mrb, mrb_value self) {
  mrb_value note;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &note);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, note, Note_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Note expected");
    return mrb_nil_value();
  }

  /* Unbox param: note */
  const git_note * native_note = (mrb_nil_p(note) ? NULL : mruby_unbox_git_note(note));

  /* Invocation */
  const git_signature * native_return_value = git_note_author(native_note);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_signature(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_note_committer */
/* sha: 1a33fd5e73c06e604603d3509cd53682645df50a7aa14e477ecbed69c78ec410 */
#if BIND_git_note_committer_FUNCTION
#define git_note_committer_REQUIRED_ARGC 1
#define git_note_committer_OPTIONAL_ARGC 0
/* git_note_committer
 *
 * Parameters:
 * - note: const git_note *
 * Return Type: const git_signature *
 */
mrb_value
mrb_Git_git_note_committer(mrb_state* mrb, mrb_value self) {
  mrb_value note;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &note);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, note, Note_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Note expected");
    return mrb_nil_value();
  }

  /* Unbox param: note */
  const git_note * native_note = (mrb_nil_p(note) ? NULL : mruby_unbox_git_note(note));

  /* Invocation */
  const git_signature * native_return_value = git_note_committer(native_note);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_signature(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_note_create */
/* sha: 194a7e13aa167aea01e18070ef5087d98b830c2c69c745450676098e258f1f48 */
#if BIND_git_note_create_FUNCTION
#define git_note_create_REQUIRED_ARGC 8
#define git_note_create_OPTIONAL_ARGC 0
/* git_note_create
 *
 * Parameters:
 * - out: git_oid *
 * - repo: git_repository *
 * - notes_ref: const char *
 * - author: const git_signature *
 * - committer: const git_signature *
 * - oid: const git_oid *
 * - note: const char *
 * - force: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_note_create(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value repo;
  char * native_notes_ref = NULL;
  mrb_value author;
  mrb_value committer;
  mrb_value oid;
  char * native_note = NULL;
  mrb_int native_force;

  /* Fetch the args */
  mrb_get_args(mrb, "oozooozi", &out, &repo, &native_notes_ref, &author, &committer, &oid, &native_note, &native_force);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, author, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, committer, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, oid, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: author */
  const git_signature * native_author = (mrb_nil_p(author) ? NULL : mruby_unbox_git_signature(author));

  /* Unbox param: committer */
  const git_signature * native_committer = (mrb_nil_p(committer) ? NULL : mruby_unbox_git_signature(committer));

  /* Unbox param: oid */
  const git_oid * native_oid = (mrb_nil_p(oid) ? NULL : mruby_unbox_git_oid(oid));

  /* Invocation */
  int native_return_value = git_note_create(native_out, native_repo, native_notes_ref, native_author, native_committer, native_oid, native_note, native_force);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_note_default_ref */
/* sha: bdf808a028558bedcd6eedb0f39256edc409d448b5ff3a9179ad6ec1bc6bdb71 */
#if BIND_git_note_default_ref_FUNCTION
#define git_note_default_ref_REQUIRED_ARGC 1
#define git_note_default_ref_OPTIONAL_ARGC 0
/* git_note_default_ref
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_note_default_ref(mrb_state* mrb, mrb_value self) {
  int native_out;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_note_default_ref(&native_out, native_repo);

  /* Box out param: out */
  mrb_value out = mrb_fixnum_value(native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_note_foreach */
/* sha: 4e311efe795fc66a432db2d61195cd3850b03f774c30765483410e9ad93aa5ea */
#if BIND_git_note_foreach_FUNCTION
#define git_note_foreach_REQUIRED_ARGC 4
#define git_note_foreach_OPTIONAL_ARGC 0
/* git_note_foreach
 *
 * Parameters:
 * - repo: git_repository *
 * - notes_ref: const char *
 * - note_cb: git_note_foreach_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_note_foreach(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_notes_ref = NULL;
  mrb_value note_cb;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ozoo", &repo, &native_notes_ref, &note_cb, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_note_foreach_cb(note_cb);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: note_cb */
  git_note_foreach_cb native_note_cb = TODO_mruby_unbox_git_note_foreach_cb(note_cb);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_note_foreach(native_repo, native_notes_ref, native_note_cb, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_note_free */
/* sha: 372f3718f09a818cee2d91438719ed30f2a52300c08dbdfcc3a6d360fc24755b */
#if BIND_git_note_free_FUNCTION
#define git_note_free_REQUIRED_ARGC 1
#define git_note_free_OPTIONAL_ARGC 0
/* git_note_free
 *
 * Parameters:
 * - note: git_note *
 * Return Type: void
 */
mrb_value
mrb_Git_git_note_free(mrb_state* mrb, mrb_value self) {
  mrb_value note;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &note);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, note, Note_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Note expected");
    return mrb_nil_value();
  }

  /* Unbox param: note */
  git_note * native_note = (mrb_nil_p(note) ? NULL : mruby_unbox_git_note(note));

  /* Invocation */
  git_note_free(native_note);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_note_id */
/* sha: e5a07b7c2fc7e529b657f88bcc53d63cd065d68d8f7653bf5ea0534abd745099 */
#if BIND_git_note_id_FUNCTION
#define git_note_id_REQUIRED_ARGC 1
#define git_note_id_OPTIONAL_ARGC 0
/* git_note_id
 *
 * Parameters:
 * - note: const git_note *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_note_id(mrb_state* mrb, mrb_value self) {
  mrb_value note;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &note);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, note, Note_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Note expected");
    return mrb_nil_value();
  }

  /* Unbox param: note */
  const git_note * native_note = (mrb_nil_p(note) ? NULL : mruby_unbox_git_note(note));

  /* Invocation */
  const git_oid * native_return_value = git_note_id(native_note);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_note_iterator_free */
/* sha: ac53ef9fb28bf6d75e6710468a588faa92dbc374baf08fe58518598ef1c732f1 */
#if BIND_git_note_iterator_free_FUNCTION
#define git_note_iterator_free_REQUIRED_ARGC 1
#define git_note_iterator_free_OPTIONAL_ARGC 0
/* git_note_iterator_free
 *
 * Parameters:
 * - it: git_note_iterator *
 * Return Type: void
 */
mrb_value
mrb_Git_git_note_iterator_free(mrb_state* mrb, mrb_value self) {
  mrb_value it;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &it);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, it, NoteIterator_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "NoteIterator expected");
    return mrb_nil_value();
  }

  /* Unbox param: it */
  git_note_iterator * native_it = (mrb_nil_p(it) ? NULL : mruby_unbox_git_note_iterator(it));

  /* Invocation */
  git_note_iterator_free(native_it);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_note_iterator_new */
/* sha: 30d5bb6d1c82ef0d8e4f79046c2087c1a200c461efbb63305abbd800465def8a */
#if BIND_git_note_iterator_new_FUNCTION
#define git_note_iterator_new_REQUIRED_ARGC 2
#define git_note_iterator_new_OPTIONAL_ARGC 0
/* git_note_iterator_new
 *
 * Parameters:
 * - repo: git_repository *
 * - notes_ref: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_note_iterator_new(mrb_state* mrb, mrb_value self) {
  git_note_iterator * native_out = NULL;
  mrb_value repo;
  char * native_notes_ref = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_notes_ref);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_note_iterator_new(&native_out, native_repo, native_notes_ref);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_note_iterator(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_note_message */
/* sha: eca8d6bc3d6625be150ba0da2e6ef0b6a3141f4006165696e27827764906f769 */
#if BIND_git_note_message_FUNCTION
#define git_note_message_REQUIRED_ARGC 1
#define git_note_message_OPTIONAL_ARGC 0
/* git_note_message
 *
 * Parameters:
 * - note: const git_note *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_note_message(mrb_state* mrb, mrb_value self) {
  mrb_value note;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &note);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, note, Note_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Note expected");
    return mrb_nil_value();
  }

  /* Unbox param: note */
  const git_note * native_note = (mrb_nil_p(note) ? NULL : mruby_unbox_git_note(note));

  /* Invocation */
  const char * native_return_value = git_note_message(native_note);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_note_next */
/* sha: 8913b5f5726286aaa2a08704a2f3418c14dd068d2943305a8393b8b35300cb6f */
#if BIND_git_note_next_FUNCTION
#define git_note_next_REQUIRED_ARGC 3
#define git_note_next_OPTIONAL_ARGC 0
/* git_note_next
 *
 * Parameters:
 * - note_id: git_oid *
 * - annotated_id: git_oid *
 * - it: git_note_iterator *
 * Return Type: int
 */
mrb_value
mrb_Git_git_note_next(mrb_state* mrb, mrb_value self) {
  mrb_value note_id;
  mrb_value annotated_id;
  mrb_value it;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &note_id, &annotated_id, &it);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, note_id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, annotated_id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, it, NoteIterator_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "NoteIterator expected");
    return mrb_nil_value();
  }

  /* Unbox param: note_id */
  git_oid * native_note_id = (mrb_nil_p(note_id) ? NULL : mruby_unbox_git_oid(note_id));

  /* Unbox param: annotated_id */
  git_oid * native_annotated_id = (mrb_nil_p(annotated_id) ? NULL : mruby_unbox_git_oid(annotated_id));

  /* Unbox param: it */
  git_note_iterator * native_it = (mrb_nil_p(it) ? NULL : mruby_unbox_git_note_iterator(it));

  /* Invocation */
  int native_return_value = git_note_next(native_note_id, native_annotated_id, native_it);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_note_read */
/* sha: 8e52c30286bdd1d56e2a05781af8bfee9fa2c50b4d613c332d085beb64f26460 */
#if BIND_git_note_read_FUNCTION
#define git_note_read_REQUIRED_ARGC 3
#define git_note_read_OPTIONAL_ARGC 0
/* git_note_read
 *
 * Parameters:
 * - repo: git_repository *
 * - notes_ref: const char *
 * - oid: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_note_read(mrb_state* mrb, mrb_value self) {
  git_note * native_out = NULL;
  mrb_value repo;
  char * native_notes_ref = NULL;
  mrb_value oid;

  /* Fetch the args */
  mrb_get_args(mrb, "ozo", &repo, &native_notes_ref, &oid);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, oid, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: oid */
  const git_oid * native_oid = (mrb_nil_p(oid) ? NULL : mruby_unbox_git_oid(oid));

  /* Invocation */
  int native_return_value = git_note_read(&native_out, native_repo, native_notes_ref, native_oid);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_note(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_note_remove */
/* sha: e9f589c95b3600b16d4062576a853d425ef3aa5dc397928761d7f84d8af7d28e */
#if BIND_git_note_remove_FUNCTION
#define git_note_remove_REQUIRED_ARGC 5
#define git_note_remove_OPTIONAL_ARGC 0
/* git_note_remove
 *
 * Parameters:
 * - repo: git_repository *
 * - notes_ref: const char *
 * - author: const git_signature *
 * - committer: const git_signature *
 * - oid: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_note_remove(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_notes_ref = NULL;
  mrb_value author;
  mrb_value committer;
  mrb_value oid;

  /* Fetch the args */
  mrb_get_args(mrb, "ozooo", &repo, &native_notes_ref, &author, &committer, &oid);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, author, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, committer, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, oid, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: author */
  const git_signature * native_author = (mrb_nil_p(author) ? NULL : mruby_unbox_git_signature(author));

  /* Unbox param: committer */
  const git_signature * native_committer = (mrb_nil_p(committer) ? NULL : mruby_unbox_git_signature(committer));

  /* Unbox param: oid */
  const git_oid * native_oid = (mrb_nil_p(oid) ? NULL : mruby_unbox_git_oid(oid));

  /* Invocation */
  int native_return_value = git_note_remove(native_repo, native_notes_ref, native_author, native_committer, native_oid);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_object__size */
/* sha: 2f337ddd02ed2e1fb96336113391589002c5291be9a14cd904059eab3a2bdccf */
#if BIND_git_object__size_FUNCTION
#define git_object__size_REQUIRED_ARGC 1
#define git_object__size_OPTIONAL_ARGC 0
/* git_object__size
 *
 * Parameters:
 * - type: git_otype
 * Return Type: size_t
 */
mrb_value
mrb_Git_git_object__size(mrb_state* mrb, mrb_value self) {
  mrb_int native_type;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_type);

  /* Invocation */
  size_t native_return_value = git_object__size(native_type);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_object_dup */
/* sha: 6b8ed911a96c220d23c65e7dc57a44cbbbe6020e033a2233b9da5d83a15c3715 */
#if BIND_git_object_dup_FUNCTION
#define git_object_dup_REQUIRED_ARGC 1
#define git_object_dup_OPTIONAL_ARGC 0
/* git_object_dup
 *
 * Parameters:
 * - source: git_object *
 * Return Type: int
 */
mrb_value
mrb_Git_git_object_dup(mrb_state* mrb, mrb_value self) {
  git_object * native_dest = NULL;
  mrb_value source;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &source);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, source, Object_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Object expected");
    return mrb_nil_value();
  }

  /* Unbox param: source */
  git_object * native_source = (mrb_nil_p(source) ? NULL : mruby_unbox_git_object(source));

  /* Invocation */
  int native_return_value = git_object_dup(&native_dest, native_source);

  /* Box out param: dest */
  mrb_value dest = native_dest == NULL ? mrb_nil_value() : mruby_giftwrap_git_object(mrb, native_dest);

  return dest;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_object_free */
/* sha: 5427c3742242bf38f560b51a7eea80e525e35bbaaf793e8231140d7d11ff5085 */
#if BIND_git_object_free_FUNCTION
#define git_object_free_REQUIRED_ARGC 1
#define git_object_free_OPTIONAL_ARGC 0
/* git_object_free
 *
 * Parameters:
 * - object: git_object *
 * Return Type: void
 */
mrb_value
mrb_Git_git_object_free(mrb_state* mrb, mrb_value self) {
  mrb_value object;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &object);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, Object_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Object expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  git_object * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_git_object(object));

  /* Invocation */
  git_object_free(native_object);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_object_id */
/* sha: 58c787dab123f0a7caa6fe804adfe0f6a63dcfae5449bdb1c49a8268d6e635e0 */
#if BIND_git_object_id_FUNCTION
#define git_object_id_REQUIRED_ARGC 1
#define git_object_id_OPTIONAL_ARGC 0
/* git_object_id
 *
 * Parameters:
 * - obj: const git_object *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_object_id(mrb_state* mrb, mrb_value self) {
  mrb_value obj;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &obj);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, obj, Object_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Object expected");
    return mrb_nil_value();
  }

  /* Unbox param: obj */
  const git_object * native_obj = (mrb_nil_p(obj) ? NULL : mruby_unbox_git_object(obj));

  /* Invocation */
  const git_oid * native_return_value = git_object_id(native_obj);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_object_lookup */
/* sha: 07918ecab17104ff4686435e896a5b0435e083b5062607792c9cd918fd2c6f0c */
#if BIND_git_object_lookup_FUNCTION
#define git_object_lookup_REQUIRED_ARGC 3
#define git_object_lookup_OPTIONAL_ARGC 0
/* git_object_lookup
 *
 * Parameters:
 * - repo: git_repository *
 * - id: const git_oid *
 * - type: git_otype
 * Return Type: int
 */
mrb_value
mrb_Git_git_object_lookup(mrb_state* mrb, mrb_value self) {
  git_object * native_object = NULL;
  mrb_value repo;
  mrb_value id;
  mrb_int native_type;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &repo, &id, &native_type);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_object_lookup(&native_object, native_repo, native_id, native_type);

  /* Box out param: object */
  mrb_value object = native_object == NULL ? mrb_nil_value() : mruby_giftwrap_git_object(mrb, native_object);

  return object;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_object_lookup_bypath */
/* sha: 060b386e7f7703dcc84d3a1728513648f8d4ae22a9a133805c990997dea56625 */
#if BIND_git_object_lookup_bypath_FUNCTION
#define git_object_lookup_bypath_REQUIRED_ARGC 3
#define git_object_lookup_bypath_OPTIONAL_ARGC 0
/* git_object_lookup_bypath
 *
 * Parameters:
 * - treeish: const git_object *
 * - path: const char *
 * - type: git_otype
 * Return Type: int
 */
mrb_value
mrb_Git_git_object_lookup_bypath(mrb_state* mrb, mrb_value self) {
  git_object * native_out = NULL;
  mrb_value treeish;
  char * native_path = NULL;
  mrb_int native_type;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &treeish, &native_path, &native_type);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, treeish, Object_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Object expected");
    return mrb_nil_value();
  }

  /* Unbox param: treeish */
  const git_object * native_treeish = (mrb_nil_p(treeish) ? NULL : mruby_unbox_git_object(treeish));

  /* Invocation */
  int native_return_value = git_object_lookup_bypath(&native_out, native_treeish, native_path, native_type);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_object(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_object_lookup_prefix */
/* sha: 3376b5196e512c6586ba631f73f6f8fec153f25807016874648933511aaa12d2 */
#if BIND_git_object_lookup_prefix_FUNCTION
#define git_object_lookup_prefix_REQUIRED_ARGC 4
#define git_object_lookup_prefix_OPTIONAL_ARGC 0
/* git_object_lookup_prefix
 *
 * Parameters:
 * - repo: git_repository *
 * - id: const git_oid *
 * - len: size_t
 * - type: git_otype
 * Return Type: int
 */
mrb_value
mrb_Git_git_object_lookup_prefix(mrb_state* mrb, mrb_value self) {
  git_object * native_object_out = NULL;
  mrb_value repo;
  mrb_value id;
  mrb_int native_len;
  mrb_int native_type;

  /* Fetch the args */
  mrb_get_args(mrb, "ooii", &repo, &id, &native_len, &native_type);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_object_lookup_prefix(&native_object_out, native_repo, native_id, native_len, native_type);

  /* Box out param: object_out */
  mrb_value object_out = native_object_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_object(mrb, native_object_out);

  return object_out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_object_owner */
/* sha: 67db950c07461afdeca7e1a77ffa22c5b531a0bc7e70e5f667067054ee417873 */
#if BIND_git_object_owner_FUNCTION
#define git_object_owner_REQUIRED_ARGC 1
#define git_object_owner_OPTIONAL_ARGC 0
/* git_object_owner
 *
 * Parameters:
 * - obj: const git_object *
 * Return Type: git_repository *
 */
mrb_value
mrb_Git_git_object_owner(mrb_state* mrb, mrb_value self) {
  mrb_value obj;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &obj);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, obj, Object_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Object expected");
    return mrb_nil_value();
  }

  /* Unbox param: obj */
  const git_object * native_obj = (mrb_nil_p(obj) ? NULL : mruby_unbox_git_object(obj));

  /* Invocation */
  git_repository * native_return_value = git_object_owner(native_obj);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_repository(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_object_peel */
/* sha: 04c277391bb6ca0da8d7bc24b83200475c4135041321ec811211199b6be5cc78 */
#if BIND_git_object_peel_FUNCTION
#define git_object_peel_REQUIRED_ARGC 2
#define git_object_peel_OPTIONAL_ARGC 0
/* git_object_peel
 *
 * Parameters:
 * - object: const git_object *
 * - target_type: git_otype
 * Return Type: int
 */
mrb_value
mrb_Git_git_object_peel(mrb_state* mrb, mrb_value self) {
  git_object * native_peeled = NULL;
  mrb_value object;
  mrb_int native_target_type;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &object, &native_target_type);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, Object_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Object expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  const git_object * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_git_object(object));

  /* Invocation */
  int native_return_value = git_object_peel(&native_peeled, native_object, native_target_type);

  /* Box out param: peeled */
  mrb_value peeled = native_peeled == NULL ? mrb_nil_value() : mruby_giftwrap_git_object(mrb, native_peeled);

  return peeled;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_object_short_id */
/* sha: 9b0eabf9d4a8ad54a46b2eeef540bd4fc08669ba5d5d1eb156c4ffc4423366f4 */
#if BIND_git_object_short_id_FUNCTION
#define git_object_short_id_REQUIRED_ARGC 1
#define git_object_short_id_OPTIONAL_ARGC 0
/* git_object_short_id
 *
 * Parameters:
 * - obj: const git_object *
 * Return Type: int
 */
mrb_value
mrb_Git_git_object_short_id(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value obj;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &obj);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, obj, Object_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Object expected");
    return mrb_nil_value();
  }

  /* Unbox param: obj */
  const git_object * native_obj = (mrb_nil_p(obj) ? NULL : mruby_unbox_git_object(obj));

  /* Invocation */
  int native_return_value = git_object_short_id(native_out, native_obj);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_object_string2type */
/* sha: ea1788320dbcf63fbe0cd299c2176e50d6a14b6a20ef6e35c9b63a403c308926 */
#if BIND_git_object_string2type_FUNCTION
#define git_object_string2type_REQUIRED_ARGC 1
#define git_object_string2type_OPTIONAL_ARGC 0
/* git_object_string2type
 *
 * Parameters:
 * - str: const char *
 * Return Type: git_otype
 */
mrb_value
mrb_Git_git_object_string2type(mrb_state* mrb, mrb_value self) {
  char * native_str = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_str);

  /* Invocation */
  git_otype native_return_value = git_object_string2type(native_str);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_object_type */
/* sha: e43f56870b7b5acec49c27fb19d8b7f961150672be71e0a79139c753e189f008 */
#if BIND_git_object_type_FUNCTION
#define git_object_type_REQUIRED_ARGC 1
#define git_object_type_OPTIONAL_ARGC 0
/* git_object_type
 *
 * Parameters:
 * - obj: const git_object *
 * Return Type: git_otype
 */
mrb_value
mrb_Git_git_object_type(mrb_state* mrb, mrb_value self) {
  mrb_value obj;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &obj);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, obj, Object_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Object expected");
    return mrb_nil_value();
  }

  /* Unbox param: obj */
  const git_object * native_obj = (mrb_nil_p(obj) ? NULL : mruby_unbox_git_object(obj));

  /* Invocation */
  git_otype native_return_value = git_object_type(native_obj);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_object_type2string */
/* sha: 59300ea76612f5a68e843726e2939d66c5715f6a14abffb16999969c3153921e */
#if BIND_git_object_type2string_FUNCTION
#define git_object_type2string_REQUIRED_ARGC 1
#define git_object_type2string_OPTIONAL_ARGC 0
/* git_object_type2string
 *
 * Parameters:
 * - type: git_otype
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_object_type2string(mrb_state* mrb, mrb_value self) {
  mrb_int native_type;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_type);

  /* Invocation */
  const char * native_return_value = git_object_type2string(native_type);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_object_typeisloose */
/* sha: 06f1b1ab0ee424d1e6eb4ee2f888f3f7024d191d03609059eed5b9196c7f0aef */
#if BIND_git_object_typeisloose_FUNCTION
#define git_object_typeisloose_REQUIRED_ARGC 1
#define git_object_typeisloose_OPTIONAL_ARGC 0
/* git_object_typeisloose
 *
 * Parameters:
 * - type: git_otype
 * Return Type: int
 */
mrb_value
mrb_Git_git_object_typeisloose(mrb_state* mrb, mrb_value self) {
  mrb_int native_type;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_type);

  /* Invocation */
  int native_return_value = git_object_typeisloose(native_type);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_add_alternate */
/* sha: f21022670367dbcd66f1cf11290511e6b68a929cbbf713bba8523d67377ef922 */
#if BIND_git_odb_add_alternate_FUNCTION
#define git_odb_add_alternate_REQUIRED_ARGC 3
#define git_odb_add_alternate_OPTIONAL_ARGC 0
/* git_odb_add_alternate
 *
 * Parameters:
 * - odb: git_odb *
 * - backend: git_odb_backend *
 * - priority: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_add_alternate(mrb_state* mrb, mrb_value self) {
  mrb_value odb;
  mrb_value backend;
  mrb_int native_priority;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &odb, &backend, &native_priority);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, odb, Odb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Odb expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, backend, OdbBackend_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "OdbBackend expected");
    return mrb_nil_value();
  }

  /* Unbox param: odb */
  git_odb * native_odb = (mrb_nil_p(odb) ? NULL : mruby_unbox_git_odb(odb));

  /* Unbox param: backend */
  git_odb_backend * native_backend = (mrb_nil_p(backend) ? NULL : mruby_unbox_git_odb_backend(backend));

  /* Invocation */
  int native_return_value = git_odb_add_alternate(native_odb, native_backend, native_priority);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_add_backend */
/* sha: cca4aeb8b1e3eea0c62f904e4def6d03875a1e354643d191fc567d427ef71eef */
#if BIND_git_odb_add_backend_FUNCTION
#define git_odb_add_backend_REQUIRED_ARGC 3
#define git_odb_add_backend_OPTIONAL_ARGC 0
/* git_odb_add_backend
 *
 * Parameters:
 * - odb: git_odb *
 * - backend: git_odb_backend *
 * - priority: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_add_backend(mrb_state* mrb, mrb_value self) {
  mrb_value odb;
  mrb_value backend;
  mrb_int native_priority;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &odb, &backend, &native_priority);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, odb, Odb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Odb expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, backend, OdbBackend_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "OdbBackend expected");
    return mrb_nil_value();
  }

  /* Unbox param: odb */
  git_odb * native_odb = (mrb_nil_p(odb) ? NULL : mruby_unbox_git_odb(odb));

  /* Unbox param: backend */
  git_odb_backend * native_backend = (mrb_nil_p(backend) ? NULL : mruby_unbox_git_odb_backend(backend));

  /* Invocation */
  int native_return_value = git_odb_add_backend(native_odb, native_backend, native_priority);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_add_disk_alternate */
/* sha: e52aa204946821ed9c6192f74f1efea8ad6fcfa93a5e6914948a04c191df6988 */
#if BIND_git_odb_add_disk_alternate_FUNCTION
#define git_odb_add_disk_alternate_REQUIRED_ARGC 2
#define git_odb_add_disk_alternate_OPTIONAL_ARGC 0
/* git_odb_add_disk_alternate
 *
 * Parameters:
 * - odb: git_odb *
 * - path: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_add_disk_alternate(mrb_state* mrb, mrb_value self) {
  mrb_value odb;
  char * native_path = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &odb, &native_path);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, odb, Odb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Odb expected");
    return mrb_nil_value();
  }

  /* Unbox param: odb */
  git_odb * native_odb = (mrb_nil_p(odb) ? NULL : mruby_unbox_git_odb(odb));

  /* Invocation */
  int native_return_value = git_odb_add_disk_alternate(native_odb, native_path);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_backend_loose */
/* sha: c8550ef71b95a597b6d0ee5110d67ec35431eee450d664be343469c8a1e351b8 */
#if BIND_git_odb_backend_loose_FUNCTION
#define git_odb_backend_loose_REQUIRED_ARGC 5
#define git_odb_backend_loose_OPTIONAL_ARGC 0
/* git_odb_backend_loose
 *
 * Parameters:
 * - objects_dir: const char *
 * - compression_level: int
 * - do_fsync: int
 * - dir_mode: unsigned int
 * - file_mode: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_backend_loose(mrb_state* mrb, mrb_value self) {
  git_odb_backend * native_out = NULL;
  char * native_objects_dir = NULL;
  mrb_int native_compression_level;
  mrb_int native_do_fsync;
  mrb_int native_dir_mode;
  mrb_int native_file_mode;

  /* Fetch the args */
  mrb_get_args(mrb, "ziiii", &native_objects_dir, &native_compression_level, &native_do_fsync, &native_dir_mode, &native_file_mode);

  /* Invocation */
  int native_return_value = git_odb_backend_loose(&native_out, native_objects_dir, native_compression_level, native_do_fsync, native_dir_mode, native_file_mode);

  /* Box out param: out */
  mrb_value out = mruby_box_git_odb_backend(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_backend_one_pack */
/* sha: 0c95b208a3b26fb09fa0e829f9eb7f15d92c96ed08a802c3c6222a78f109b8dd */
#if BIND_git_odb_backend_one_pack_FUNCTION
#define git_odb_backend_one_pack_REQUIRED_ARGC 1
#define git_odb_backend_one_pack_OPTIONAL_ARGC 0
/* git_odb_backend_one_pack
 *
 * Parameters:
 * - index_file: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_backend_one_pack(mrb_state* mrb, mrb_value self) {
  git_odb_backend * native_out = NULL;
  char * native_index_file = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_index_file);

  /* Invocation */
  int native_return_value = git_odb_backend_one_pack(&native_out, native_index_file);

  /* Box out param: out */
  mrb_value out = mruby_box_git_odb_backend(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_backend_pack */
/* sha: 7c155840712a0667be4d50b773bb9458b25ea26db30abf16b5f87d884dc1087b */
#if BIND_git_odb_backend_pack_FUNCTION
#define git_odb_backend_pack_REQUIRED_ARGC 1
#define git_odb_backend_pack_OPTIONAL_ARGC 0
/* git_odb_backend_pack
 *
 * Parameters:
 * - objects_dir: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_backend_pack(mrb_state* mrb, mrb_value self) {
  git_odb_backend * native_out = NULL;
  char * native_objects_dir = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_objects_dir);

  /* Invocation */
  int native_return_value = git_odb_backend_pack(&native_out, native_objects_dir);

  /* Box out param: out */
  mrb_value out = mruby_box_git_odb_backend(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_exists */
/* sha: aa6a9afefea4799d15dfa51e3f0b471bc963a923c5d16b1f935939eac4003f8f */
#if BIND_git_odb_exists_FUNCTION
#define git_odb_exists_REQUIRED_ARGC 2
#define git_odb_exists_OPTIONAL_ARGC 0
/* git_odb_exists
 *
 * Parameters:
 * - db: git_odb *
 * - id: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_exists(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &db, &id);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Odb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Odb expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: db */
  git_odb * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_git_odb(db));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_odb_exists(native_db, native_id);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_exists_prefix */
/* sha: f8f1500b1261228891ca59024373a6f10ae8917ac930ed51cd6f5e7c5654fb08 */
#if BIND_git_odb_exists_prefix_FUNCTION
#define git_odb_exists_prefix_REQUIRED_ARGC 4
#define git_odb_exists_prefix_OPTIONAL_ARGC 0
/* git_odb_exists_prefix
 *
 * Parameters:
 * - out: git_oid *
 * - db: git_odb *
 * - short_id: const git_oid *
 * - len: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_exists_prefix(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value db;
  mrb_value short_id;
  mrb_int native_len;

  /* Fetch the args */
  mrb_get_args(mrb, "oooi", &out, &db, &short_id, &native_len);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, db, Odb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Odb expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, short_id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Unbox param: db */
  git_odb * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_git_odb(db));

  /* Unbox param: short_id */
  const git_oid * native_short_id = (mrb_nil_p(short_id) ? NULL : mruby_unbox_git_oid(short_id));

  /* Invocation */
  int native_return_value = git_odb_exists_prefix(native_out, native_db, native_short_id, native_len);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_foreach */
/* sha: 2d38b923c0bacf18ae2b9f99d90f27d2a405112af2994a68043f01e077340cb7 */
#if BIND_git_odb_foreach_FUNCTION
#define git_odb_foreach_REQUIRED_ARGC 3
#define git_odb_foreach_OPTIONAL_ARGC 0
/* git_odb_foreach
 *
 * Parameters:
 * - db: git_odb *
 * - cb: git_odb_foreach_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_foreach(mrb_state* mrb, mrb_value self) {
  mrb_value db;
  mrb_value cb;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &db, &cb, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Odb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Odb expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_odb_foreach_cb(cb);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: db */
  git_odb * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_git_odb(db));

  /* Unbox param: cb */
  git_odb_foreach_cb native_cb = TODO_mruby_unbox_git_odb_foreach_cb(cb);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_odb_foreach(native_db, native_cb, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_free */
/* sha: 40d7f2179d1aff990cd3034e21dbe07ece8927242ad3e356aa4ef4bbf7ac4ea9 */
#if BIND_git_odb_free_FUNCTION
#define git_odb_free_REQUIRED_ARGC 1
#define git_odb_free_OPTIONAL_ARGC 0
/* git_odb_free
 *
 * Parameters:
 * - db: git_odb *
 * Return Type: void
 */
mrb_value
mrb_Git_git_odb_free(mrb_state* mrb, mrb_value self) {
  mrb_value db;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &db);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Odb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Odb expected");
    return mrb_nil_value();
  }

  /* Unbox param: db */
  git_odb * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_git_odb(db));

  /* Invocation */
  git_odb_free(native_db);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_get_backend */
/* sha: ef7c13c32065dcf4f91c84a5533161dfa9e33e5a9c516141fe5f4bd6a6ecb7cd */
#if BIND_git_odb_get_backend_FUNCTION
#define git_odb_get_backend_REQUIRED_ARGC 2
#define git_odb_get_backend_OPTIONAL_ARGC 0
/* git_odb_get_backend
 *
 * Parameters:
 * - odb: git_odb *
 * - pos: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_get_backend(mrb_state* mrb, mrb_value self) {
  git_odb_backend * native_out = NULL;
  mrb_value odb;
  mrb_int native_pos;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &odb, &native_pos);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, odb, Odb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Odb expected");
    return mrb_nil_value();
  }

  /* Unbox param: odb */
  git_odb * native_odb = (mrb_nil_p(odb) ? NULL : mruby_unbox_git_odb(odb));

  /* Invocation */
  int native_return_value = git_odb_get_backend(&native_out, native_odb, native_pos);

  /* Box out param: out */
  mrb_value out = mruby_box_git_odb_backend(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_hash */
/* sha: 997049b1de747e35863ad363591024a9c57104d67d5cf5048457d984bc667b7e */
#if BIND_git_odb_hash_FUNCTION
#define git_odb_hash_REQUIRED_ARGC 3
#define git_odb_hash_OPTIONAL_ARGC 0
/* git_odb_hash
 *
 * Parameters:
 * - out: git_oid *
 * - data: const void *
 * - type: git_otype
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_hash(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value native_data;
  mrb_int native_type;

  /* Fetch the args */
  mrb_get_args(mrb, "oSi", &out, &native_data, &native_type);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Invocation */
  int native_return_value = git_odb_hash(native_out, RSTRING_PTR(native_data), RSTRING_LEN(native_data), native_type);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_hashfile */
/* sha: 65c0f90f0b06295570410ef9f4b6a037a2e4685dbc02f3031242cd10125e209a */
#if BIND_git_odb_hashfile_FUNCTION
#define git_odb_hashfile_REQUIRED_ARGC 3
#define git_odb_hashfile_OPTIONAL_ARGC 0
/* git_odb_hashfile
 *
 * Parameters:
 * - out: git_oid *
 * - path: const char *
 * - type: git_otype
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_hashfile(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  char * native_path = NULL;
  mrb_int native_type;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &out, &native_path, &native_type);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Invocation */
  int native_return_value = git_odb_hashfile(native_out, native_path, native_type);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_new */
/* sha: fde9ebeaab4154814fa25fac84a13af8f58925b680d4d743b9184bd1c2ce636d */
#if BIND_git_odb_new_FUNCTION
#define git_odb_new_REQUIRED_ARGC 0
#define git_odb_new_OPTIONAL_ARGC 0
/* git_odb_new
 *
 * Parameters: None
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_new(mrb_state* mrb, mrb_value self) {
  git_odb * native_out = NULL;


  /* Invocation */
  int native_return_value = git_odb_new(&native_out);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_odb(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_num_backends */
/* sha: baac9935e93e63e316c4f2c24b4c7fe671b26747e068859db23f09e89cd822bc */
#if BIND_git_odb_num_backends_FUNCTION
#define git_odb_num_backends_REQUIRED_ARGC 1
#define git_odb_num_backends_OPTIONAL_ARGC 0
/* git_odb_num_backends
 *
 * Parameters:
 * - odb: git_odb *
 * Return Type: size_t
 */
mrb_value
mrb_Git_git_odb_num_backends(mrb_state* mrb, mrb_value self) {
  mrb_value odb;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &odb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, odb, Odb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Odb expected");
    return mrb_nil_value();
  }

  /* Unbox param: odb */
  git_odb * native_odb = (mrb_nil_p(odb) ? NULL : mruby_unbox_git_odb(odb));

  /* Invocation */
  size_t native_return_value = git_odb_num_backends(native_odb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_object_data */
/* sha: 442e046b905ea756a96b8b37c3045b21764e8612962eaceba6f0ba41dd34226d */
#if BIND_git_odb_object_data_FUNCTION
#define git_odb_object_data_REQUIRED_ARGC 1
#define git_odb_object_data_OPTIONAL_ARGC 0
/* git_odb_object_data
 *
 * Parameters:
 * - object: git_odb_object *
 * Return Type: const void *
 */
mrb_value
mrb_Git_git_odb_object_data(mrb_state* mrb, mrb_value self) {
  mrb_value object;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &object);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, OdbObject_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "OdbObject expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  git_odb_object * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_git_odb_object(object));

  /* Invocation */
  const void * native_return_value = git_odb_object_data(native_object);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_void_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_object_dup */
/* sha: 7fd7f35290c057b7c915b5a94a6990fba18f1de42a005bd30d77bde96acee9aa */
#if BIND_git_odb_object_dup_FUNCTION
#define git_odb_object_dup_REQUIRED_ARGC 1
#define git_odb_object_dup_OPTIONAL_ARGC 0
/* git_odb_object_dup
 *
 * Parameters:
 * - source: git_odb_object *
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_object_dup(mrb_state* mrb, mrb_value self) {
  git_odb_object * native_dest = NULL;
  mrb_value source;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &source);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, source, OdbObject_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "OdbObject expected");
    return mrb_nil_value();
  }

  /* Unbox param: source */
  git_odb_object * native_source = (mrb_nil_p(source) ? NULL : mruby_unbox_git_odb_object(source));

  /* Invocation */
  int native_return_value = git_odb_object_dup(&native_dest, native_source);

  /* Box out param: dest */
  mrb_value dest = native_dest == NULL ? mrb_nil_value() : mruby_giftwrap_git_odb_object(mrb, native_dest);

  return dest;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_object_free */
/* sha: ca0bf73da4f3bb67e279423da438f1bddb2ce2f4e137cde2ee23196542447bd5 */
#if BIND_git_odb_object_free_FUNCTION
#define git_odb_object_free_REQUIRED_ARGC 1
#define git_odb_object_free_OPTIONAL_ARGC 0
/* git_odb_object_free
 *
 * Parameters:
 * - object: git_odb_object *
 * Return Type: void
 */
mrb_value
mrb_Git_git_odb_object_free(mrb_state* mrb, mrb_value self) {
  mrb_value object;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &object);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, OdbObject_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "OdbObject expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  git_odb_object * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_git_odb_object(object));

  /* Invocation */
  git_odb_object_free(native_object);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_object_id */
/* sha: 64c653fede90ff3da70e49deb4d2247c0fccb32a3b78aec0ff609244af05fa8b */
#if BIND_git_odb_object_id_FUNCTION
#define git_odb_object_id_REQUIRED_ARGC 1
#define git_odb_object_id_OPTIONAL_ARGC 0
/* git_odb_object_id
 *
 * Parameters:
 * - object: git_odb_object *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_odb_object_id(mrb_state* mrb, mrb_value self) {
  mrb_value object;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &object);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, OdbObject_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "OdbObject expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  git_odb_object * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_git_odb_object(object));

  /* Invocation */
  const git_oid * native_return_value = git_odb_object_id(native_object);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_object_size */
/* sha: 95ab40d649d21de94a8201a96545c74f58f373f09b6a7dcaa92fb55d9afbcfb3 */
#if BIND_git_odb_object_size_FUNCTION
#define git_odb_object_size_REQUIRED_ARGC 1
#define git_odb_object_size_OPTIONAL_ARGC 0
/* git_odb_object_size
 *
 * Parameters:
 * - object: git_odb_object *
 * Return Type: size_t
 */
mrb_value
mrb_Git_git_odb_object_size(mrb_state* mrb, mrb_value self) {
  mrb_value object;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &object);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, OdbObject_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "OdbObject expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  git_odb_object * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_git_odb_object(object));

  /* Invocation */
  size_t native_return_value = git_odb_object_size(native_object);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_object_type */
/* sha: 4ccb87e9a3d8024e083157461dbf44167087476e3e97185c15f044d06c15b9c7 */
#if BIND_git_odb_object_type_FUNCTION
#define git_odb_object_type_REQUIRED_ARGC 1
#define git_odb_object_type_OPTIONAL_ARGC 0
/* git_odb_object_type
 *
 * Parameters:
 * - object: git_odb_object *
 * Return Type: git_otype
 */
mrb_value
mrb_Git_git_odb_object_type(mrb_state* mrb, mrb_value self) {
  mrb_value object;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &object);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, object, OdbObject_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "OdbObject expected");
    return mrb_nil_value();
  }

  /* Unbox param: object */
  git_odb_object * native_object = (mrb_nil_p(object) ? NULL : mruby_unbox_git_odb_object(object));

  /* Invocation */
  git_otype native_return_value = git_odb_object_type(native_object);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_open */
/* sha: ec53c9972e73607db23734fee590671e4f4108ff7fc5ed56edb770476e34ff2c */
#if BIND_git_odb_open_FUNCTION
#define git_odb_open_REQUIRED_ARGC 1
#define git_odb_open_OPTIONAL_ARGC 0
/* git_odb_open
 *
 * Parameters:
 * - objects_dir: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_open(mrb_state* mrb, mrb_value self) {
  git_odb * native_out = NULL;
  char * native_objects_dir = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_objects_dir);

  /* Invocation */
  int native_return_value = git_odb_open(&native_out, native_objects_dir);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_odb(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_open_rstream */
/* sha: 53eaca9ed15d599148e70e6c4b52bc356ddcc5aa7bda143d3c22282fccefbf7a */
#if BIND_git_odb_open_rstream_FUNCTION
#define git_odb_open_rstream_REQUIRED_ARGC 2
#define git_odb_open_rstream_OPTIONAL_ARGC 0
/* git_odb_open_rstream
 *
 * Parameters:
 * - db: git_odb *
 * - oid: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_open_rstream(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_out = NULL;
  mrb_value db;
  mrb_value oid;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &db, &oid);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Odb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Odb expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, oid, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: db */
  git_odb * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_git_odb(db));

  /* Unbox param: oid */
  const git_oid * native_oid = (mrb_nil_p(oid) ? NULL : mruby_unbox_git_oid(oid));

  /* Invocation */
  int native_return_value = git_odb_open_rstream(&native_out, native_db, native_oid);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_odb_stream(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_open_wstream */
/* sha: 6e3a5550b02f2a9323d6eb5e77a51b4f65b751cd2b6267ffdc85bd2578a11a69 */
#if BIND_git_odb_open_wstream_FUNCTION
#define git_odb_open_wstream_REQUIRED_ARGC 3
#define git_odb_open_wstream_OPTIONAL_ARGC 0
/* git_odb_open_wstream
 *
 * Parameters:
 * - db: git_odb *
 * - size: git_off_t
 * - type: git_otype
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_open_wstream(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_out = NULL;
  mrb_value db;
  mrb_int native_size;
  mrb_int native_type;

  /* Fetch the args */
  mrb_get_args(mrb, "oii", &db, &native_size, &native_type);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Odb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Odb expected");
    return mrb_nil_value();
  }

  /* Unbox param: db */
  git_odb * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_git_odb(db));

  /* Invocation */
  int native_return_value = git_odb_open_wstream(&native_out, native_db, native_size, native_type);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_odb_stream(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_read */
/* sha: bc77403cb05136586e0951178b253e90a748ebfc9b8a033ef16b8bbdd983369c */
#if BIND_git_odb_read_FUNCTION
#define git_odb_read_REQUIRED_ARGC 2
#define git_odb_read_OPTIONAL_ARGC 0
/* git_odb_read
 *
 * Parameters:
 * - db: git_odb *
 * - id: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_read(mrb_state* mrb, mrb_value self) {
  git_odb_object * native_out = NULL;
  mrb_value db;
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &db, &id);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Odb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Odb expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: db */
  git_odb * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_git_odb(db));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_odb_read(&native_out, native_db, native_id);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_odb_object(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_read_header */
/* sha: 165c80e2dee84c2abcdf9b59534513b608f0065c6b0c500e22e08f482a9f3152 */
#if BIND_git_odb_read_header_FUNCTION
#define git_odb_read_header_REQUIRED_ARGC 2
#define git_odb_read_header_OPTIONAL_ARGC 0
/* git_odb_read_header
 *
 * Parameters:
 * - db: git_odb *
 * - id: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_read_header(mrb_state* mrb, mrb_value self) {
  mrb_value results = mrb_ary_new(mrb);
  int native_len_out;
  int native_type_out;
  mrb_value db;
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &db, &id);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Odb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Odb expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: db */
  git_odb * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_git_odb(db));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_odb_read_header(&native_len_out, &native_type_out, native_db, native_id);

  /* Box out param: len_out */
  mrb_value len_out = mrb_fixnum_value(native_len_out);
  /* Box out param: type_out */
  mrb_value type_out = mrb_fixnum_value(native_type_out);

  /* Add out params to results */
  mrb_ary_push(mrb, results, len_out);
  mrb_ary_push(mrb, results, type_out);

  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_read_prefix */
/* sha: ead4a924bd92526be25a5019f46db0cf53d3a86d3dbbbc999735a85c99c28252 */
#if BIND_git_odb_read_prefix_FUNCTION
#define git_odb_read_prefix_REQUIRED_ARGC 3
#define git_odb_read_prefix_OPTIONAL_ARGC 0
/* git_odb_read_prefix
 *
 * Parameters:
 * - db: git_odb *
 * - short_id: const git_oid *
 * - len: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_read_prefix(mrb_state* mrb, mrb_value self) {
  git_odb_object * native_out = NULL;
  mrb_value db;
  mrb_value short_id;
  mrb_int native_len;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &db, &short_id, &native_len);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Odb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Odb expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, short_id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: db */
  git_odb * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_git_odb(db));

  /* Unbox param: short_id */
  const git_oid * native_short_id = (mrb_nil_p(short_id) ? NULL : mruby_unbox_git_oid(short_id));

  /* Invocation */
  int native_return_value = git_odb_read_prefix(&native_out, native_db, native_short_id, native_len);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_odb_object(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_refresh */
/* sha: 9e0a76e7c958b612a11c356e4296ff1edee5c4b3dddbcd592640a05e269b5f8d */
#if BIND_git_odb_refresh_FUNCTION
#define git_odb_refresh_REQUIRED_ARGC 1
#define git_odb_refresh_OPTIONAL_ARGC 0
/* git_odb_refresh
 *
 * Parameters:
 * - db: struct git_odb *
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_refresh(mrb_state* mrb, mrb_value self) {
  mrb_value db;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &db);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Odb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Odb expected");
    return mrb_nil_value();
  }

  /* Unbox param: db */
  struct git_odb * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_git_odb(db));

  /* Invocation */
  int native_return_value = git_odb_refresh(native_db);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_stream_finalize_write */
/* sha: 6b39fc0f64f100578c9e86935be05228b83b4ab5fc198430855f9f7ae89a9c45 */
#if BIND_git_odb_stream_finalize_write_FUNCTION
#define git_odb_stream_finalize_write_REQUIRED_ARGC 2
#define git_odb_stream_finalize_write_OPTIONAL_ARGC 0
/* git_odb_stream_finalize_write
 *
 * Parameters:
 * - out: git_oid *
 * - stream: git_odb_stream *
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_stream_finalize_write(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value stream;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &out, &stream);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, stream, OdbStream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "OdbStream expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Unbox param: stream */
  git_odb_stream * native_stream = (mrb_nil_p(stream) ? NULL : mruby_unbox_git_odb_stream(stream));

  /* Invocation */
  int native_return_value = git_odb_stream_finalize_write(native_out, native_stream);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_stream_free */
/* sha: e1570153dfc20f29b7fbc1f47d31a0bb51499a60cf30ae80ad65abbb83065b55 */
#if BIND_git_odb_stream_free_FUNCTION
#define git_odb_stream_free_REQUIRED_ARGC 1
#define git_odb_stream_free_OPTIONAL_ARGC 0
/* git_odb_stream_free
 *
 * Parameters:
 * - stream: git_odb_stream *
 * Return Type: void
 */
mrb_value
mrb_Git_git_odb_stream_free(mrb_state* mrb, mrb_value self) {
  mrb_value stream;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &stream);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, stream, OdbStream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "OdbStream expected");
    return mrb_nil_value();
  }

  /* Unbox param: stream */
  git_odb_stream * native_stream = (mrb_nil_p(stream) ? NULL : mruby_unbox_git_odb_stream(stream));

  /* Invocation */
  git_odb_stream_free(native_stream);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_stream_read */
/* sha: 4df4e85822e890b6ac780ce14879c058ca3fd7387cfab8689116363a7635cf94 */
#if BIND_git_odb_stream_read_FUNCTION
#define git_odb_stream_read_REQUIRED_ARGC 3
#define git_odb_stream_read_OPTIONAL_ARGC 0
/* git_odb_stream_read
 *
 * Parameters:
 * - stream: git_odb_stream *
 * - buffer: char *
 * - len: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_stream_read(mrb_state* mrb, mrb_value self) {
  mrb_value stream;
  mrb_value buffer;
  mrb_int native_len;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &stream, &buffer, &native_len);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, stream, OdbStream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "OdbStream expected");
    return mrb_nil_value();
  }
  TODO_type_check_char_PTR(buffer);

  /* Unbox param: stream */
  git_odb_stream * native_stream = (mrb_nil_p(stream) ? NULL : mruby_unbox_git_odb_stream(stream));

  /* Unbox param: buffer */
  char * native_buffer = TODO_mruby_unbox_char_PTR(buffer);

  /* Invocation */
  int native_return_value = git_odb_stream_read(native_stream, native_buffer, native_len);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_stream_write */
/* sha: 8612b8676bca80fee64dcc9dd114a319c2bbadb1224de33e7dfebf5be07ac67e */
#if BIND_git_odb_stream_write_FUNCTION
#define git_odb_stream_write_REQUIRED_ARGC 3
#define git_odb_stream_write_OPTIONAL_ARGC 0
/* git_odb_stream_write
 *
 * Parameters:
 * - stream: git_odb_stream *
 * - buffer: const char *
 * - len: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_stream_write(mrb_state* mrb, mrb_value self) {
  mrb_value stream;
  char * native_buffer = NULL;
  mrb_int native_len;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &stream, &native_buffer, &native_len);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, stream, OdbStream_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "OdbStream expected");
    return mrb_nil_value();
  }

  /* Unbox param: stream */
  git_odb_stream * native_stream = (mrb_nil_p(stream) ? NULL : mruby_unbox_git_odb_stream(stream));

  /* Invocation */
  int native_return_value = git_odb_stream_write(native_stream, native_buffer, native_len);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_write */
/* sha: 5af3e01158e77ed16c5d6eb201969cde3f3e91a3c466d7e68342f8698c1e1a37 */
#if BIND_git_odb_write_FUNCTION
#define git_odb_write_REQUIRED_ARGC 4
#define git_odb_write_OPTIONAL_ARGC 0
/* git_odb_write
 *
 * Parameters:
 * - out: git_oid *
 * - odb: git_odb *
 * - data: const void *
 * - type: git_otype
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_write(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value odb;
  mrb_value native_data;
  mrb_int native_type;

  /* Fetch the args */
  mrb_get_args(mrb, "ooSi", &out, &odb, &native_data, &native_type);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, odb, Odb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Odb expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Unbox param: odb */
  git_odb * native_odb = (mrb_nil_p(odb) ? NULL : mruby_unbox_git_odb(odb));

  /* Invocation */
  int native_return_value = git_odb_write(native_out, native_odb, RSTRING_PTR(native_data), RSTRING_LEN(native_data), native_type);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_odb_write_pack */
/* sha: 1871419bc40df2ccdcba0cfd0441171f3e80d80e3ae4e78cb43750a91366a965 */
#if BIND_git_odb_write_pack_FUNCTION
#define git_odb_write_pack_REQUIRED_ARGC 3
#define git_odb_write_pack_OPTIONAL_ARGC 0
/* git_odb_write_pack
 *
 * Parameters:
 * - db: git_odb *
 * - progress_cb: git_transfer_progress_cb
 * - progress_payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_odb_write_pack(mrb_state* mrb, mrb_value self) {
  git_odb_writepack * native_out = NULL;
  mrb_value db;
  mrb_value progress_cb;
  mrb_value progress_payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &db, &progress_cb, &progress_payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, db, Odb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Odb expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_transfer_progress_cb(progress_cb);
  TODO_type_check_void_PTR(progress_payload);

  /* Unbox param: db */
  git_odb * native_db = (mrb_nil_p(db) ? NULL : mruby_unbox_git_odb(db));

  /* Unbox param: progress_cb */
  git_transfer_progress_cb native_progress_cb = TODO_mruby_unbox_git_transfer_progress_cb(progress_cb);

  /* Unbox param: progress_payload */
  void * native_progress_payload = TODO_mruby_unbox_void_PTR(progress_payload);

  /* Invocation */
  int native_return_value = git_odb_write_pack(&native_out, native_db, native_progress_cb, native_progress_payload);

  /* Box out param: out */
  mrb_value out = mruby_box_git_odb_writepack(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oid_cmp */
/* sha: e6081f769634e15c10e47ac8b7957350df24b1ff41e652025935f82494119f43 */
#if BIND_git_oid_cmp_FUNCTION
#define git_oid_cmp_REQUIRED_ARGC 2
#define git_oid_cmp_OPTIONAL_ARGC 0
/* git_oid_cmp
 *
 * Parameters:
 * - a: const git_oid *
 * - b: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_oid_cmp(mrb_state* mrb, mrb_value self) {
  mrb_value a;
  mrb_value b;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &a, &b);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, a, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, b, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: a */
  const git_oid * native_a = (mrb_nil_p(a) ? NULL : mruby_unbox_git_oid(a));

  /* Unbox param: b */
  const git_oid * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_git_oid(b));

  /* Invocation */
  int native_return_value = git_oid_cmp(native_a, native_b);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oid_cpy */
/* sha: a664a4ece1c45869005a235098cb3564ef59a0b0b4e5647070e027d79141eb19 */
#if BIND_git_oid_cpy_FUNCTION
#define git_oid_cpy_REQUIRED_ARGC 2
#define git_oid_cpy_OPTIONAL_ARGC 0
/* git_oid_cpy
 *
 * Parameters:
 * - out: git_oid *
 * - src: const git_oid *
 * Return Type: void
 */
mrb_value
mrb_Git_git_oid_cpy(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &out, &src);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, src, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Unbox param: src */
  const git_oid * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_git_oid(src));

  /* Invocation */
  git_oid_cpy(native_out, native_src);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oid_equal */
/* sha: 0861fb5a30578c99ebf6ad3cb3ff1067e138c5d34eeb61ee21448c11952140b2 */
#if BIND_git_oid_equal_FUNCTION
#define git_oid_equal_REQUIRED_ARGC 2
#define git_oid_equal_OPTIONAL_ARGC 0
/* git_oid_equal
 *
 * Parameters:
 * - a: const git_oid *
 * - b: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_oid_equal(mrb_state* mrb, mrb_value self) {
  mrb_value a;
  mrb_value b;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &a, &b);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, a, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, b, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: a */
  const git_oid * native_a = (mrb_nil_p(a) ? NULL : mruby_unbox_git_oid(a));

  /* Unbox param: b */
  const git_oid * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_git_oid(b));

  /* Invocation */
  int native_return_value = git_oid_equal(native_a, native_b);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oid_fmt */
/* sha: e1c9e85e260eb86bbacffe6fe9777cd52c31a7963cb90e95babecaf568b570b6 */
#if BIND_git_oid_fmt_FUNCTION
#define git_oid_fmt_REQUIRED_ARGC 2
#define git_oid_fmt_OPTIONAL_ARGC 0
/* git_oid_fmt
 *
 * Parameters:
 * - out: char *
 * - id: const git_oid *
 * Return Type: void
 */
mrb_value
mrb_Git_git_oid_fmt(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &out, &id);

  /* Type checking */
  TODO_type_check_char_PTR(out);
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  char * native_out = TODO_mruby_unbox_char_PTR(out);

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  git_oid_fmt(native_out, native_id);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oid_fromraw */
/* sha: 8bbd663e773875930750a622e55c12b21d7aa2db293fffe5890a83df76b056ac */
#if BIND_git_oid_fromraw_FUNCTION
#define git_oid_fromraw_REQUIRED_ARGC 2
#define git_oid_fromraw_OPTIONAL_ARGC 0
/* git_oid_fromraw
 *
 * Parameters:
 * - out: git_oid *
 * - raw: const unsigned char *
 * Return Type: void
 */
mrb_value
mrb_Git_git_oid_fromraw(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value raw;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &out, &raw);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  TODO_type_check_unsigned_char_PTR(raw);

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Unbox param: raw */
  const unsigned char * native_raw = TODO_mruby_unbox_unsigned_char_PTR(raw);

  /* Invocation */
  git_oid_fromraw(native_out, native_raw);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oid_fromstr */
/* sha: 4c185c9b15bf5c23913c7e15838ad74a95ae89c405e5f24912aec6c67d4d8d7c */
#if BIND_git_oid_fromstr_FUNCTION
#define git_oid_fromstr_REQUIRED_ARGC 2
#define git_oid_fromstr_OPTIONAL_ARGC 0
/* git_oid_fromstr
 *
 * Parameters:
 * - out: git_oid *
 * - str: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_oid_fromstr(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  char * native_str = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &out, &native_str);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Invocation */
  int native_return_value = git_oid_fromstr(native_out, native_str);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oid_fromstrn */
/* sha: d78ab7517a0712a66c364cf69290a221f4a9b503f2177d07d15d5d19eeee3c69 */
#if BIND_git_oid_fromstrn_FUNCTION
#define git_oid_fromstrn_REQUIRED_ARGC 3
#define git_oid_fromstrn_OPTIONAL_ARGC 0
/* git_oid_fromstrn
 *
 * Parameters:
 * - out: git_oid *
 * - str: const char *
 * - length: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_oid_fromstrn(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  char * native_str = NULL;
  mrb_int native_length;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &out, &native_str, &native_length);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Invocation */
  int native_return_value = git_oid_fromstrn(native_out, native_str, native_length);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oid_fromstrp */
/* sha: 1cbbe55bc82b6e09249aa93abb3127338a577dba51f0a743904d2c463c536fed */
#if BIND_git_oid_fromstrp_FUNCTION
#define git_oid_fromstrp_REQUIRED_ARGC 2
#define git_oid_fromstrp_OPTIONAL_ARGC 0
/* git_oid_fromstrp
 *
 * Parameters:
 * - out: git_oid *
 * - str: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_oid_fromstrp(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  char * native_str = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &out, &native_str);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Invocation */
  int native_return_value = git_oid_fromstrp(native_out, native_str);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oid_iszero */
/* sha: edfe48fd763ce117f55fa995466714344d8707367cc5d1d89726aa49759dc687 */
#if BIND_git_oid_iszero_FUNCTION
#define git_oid_iszero_REQUIRED_ARGC 1
#define git_oid_iszero_OPTIONAL_ARGC 0
/* git_oid_iszero
 *
 * Parameters:
 * - id: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_oid_iszero(mrb_state* mrb, mrb_value self) {
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &id);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_oid_iszero(native_id);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oid_ncmp */
/* sha: 301d65bfccb5de90d155136f8b0d30370cc3b7788e0281b7b71fca5785df9740 */
#if BIND_git_oid_ncmp_FUNCTION
#define git_oid_ncmp_REQUIRED_ARGC 3
#define git_oid_ncmp_OPTIONAL_ARGC 0
/* git_oid_ncmp
 *
 * Parameters:
 * - a: const git_oid *
 * - b: const git_oid *
 * - len: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_oid_ncmp(mrb_state* mrb, mrb_value self) {
  mrb_value a;
  mrb_value b;
  mrb_int native_len;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &a, &b, &native_len);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, a, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, b, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: a */
  const git_oid * native_a = (mrb_nil_p(a) ? NULL : mruby_unbox_git_oid(a));

  /* Unbox param: b */
  const git_oid * native_b = (mrb_nil_p(b) ? NULL : mruby_unbox_git_oid(b));

  /* Invocation */
  int native_return_value = git_oid_ncmp(native_a, native_b, native_len);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oid_nfmt */
/* sha: 8c1cd011c2e321db8a14844cbf90a4fa5c0cf20cf22de8081381e8d3a9b09a56 */
#if BIND_git_oid_nfmt_FUNCTION
#define git_oid_nfmt_REQUIRED_ARGC 3
#define git_oid_nfmt_OPTIONAL_ARGC 0
/* git_oid_nfmt
 *
 * Parameters:
 * - out: char *
 * - n: size_t
 * - id: const git_oid *
 * Return Type: void
 */
mrb_value
mrb_Git_git_oid_nfmt(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_int native_n;
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "oio", &out, &native_n, &id);

  /* Type checking */
  TODO_type_check_char_PTR(out);
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  char * native_out = TODO_mruby_unbox_char_PTR(out);

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  git_oid_nfmt(native_out, native_n, native_id);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oid_pathfmt */
/* sha: c1567f6b284628de2b172834a45fa1a3fab665cef942808b3f386af909e12af4 */
#if BIND_git_oid_pathfmt_FUNCTION
#define git_oid_pathfmt_REQUIRED_ARGC 2
#define git_oid_pathfmt_OPTIONAL_ARGC 0
/* git_oid_pathfmt
 *
 * Parameters:
 * - out: char *
 * - id: const git_oid *
 * Return Type: void
 */
mrb_value
mrb_Git_git_oid_pathfmt(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &out, &id);

  /* Type checking */
  TODO_type_check_char_PTR(out);
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  char * native_out = TODO_mruby_unbox_char_PTR(out);

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  git_oid_pathfmt(native_out, native_id);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oid_shorten_add */
/* sha: f3abfc9f10c0fcb45f1daacf5bee0e16aa4515c3814e9ec366e785fbe6ab4b82 */
#if BIND_git_oid_shorten_add_FUNCTION
#define git_oid_shorten_add_REQUIRED_ARGC 2
#define git_oid_shorten_add_OPTIONAL_ARGC 0
/* git_oid_shorten_add
 *
 * Parameters:
 * - os: git_oid_shorten *
 * - text_id: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_oid_shorten_add(mrb_state* mrb, mrb_value self) {
  mrb_value os;
  char * native_text_id = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &os, &native_text_id);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, os, OidShorten_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "OidShorten expected");
    return mrb_nil_value();
  }

  /* Unbox param: os */
  git_oid_shorten * native_os = (mrb_nil_p(os) ? NULL : mruby_unbox_git_oid_shorten(os));

  /* Invocation */
  int native_return_value = git_oid_shorten_add(native_os, native_text_id);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oid_shorten_free */
/* sha: 6fb199cbe6c340b6c0f0b10a34ae19802e566992a86b75b8dce4beae1c1866c1 */
#if BIND_git_oid_shorten_free_FUNCTION
#define git_oid_shorten_free_REQUIRED_ARGC 1
#define git_oid_shorten_free_OPTIONAL_ARGC 0
/* git_oid_shorten_free
 *
 * Parameters:
 * - os: git_oid_shorten *
 * Return Type: void
 */
mrb_value
mrb_Git_git_oid_shorten_free(mrb_state* mrb, mrb_value self) {
  mrb_value os;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &os);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, os, OidShorten_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "OidShorten expected");
    return mrb_nil_value();
  }

  /* Unbox param: os */
  git_oid_shorten * native_os = (mrb_nil_p(os) ? NULL : mruby_unbox_git_oid_shorten(os));

  /* Invocation */
  git_oid_shorten_free(native_os);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oid_shorten_new */
/* sha: 853ecf5ce92a98333fede8de7f0f59c06bb46f58fce59fa0208fbf2717af09b8 */
#if BIND_git_oid_shorten_new_FUNCTION
#define git_oid_shorten_new_REQUIRED_ARGC 1
#define git_oid_shorten_new_OPTIONAL_ARGC 0
/* git_oid_shorten_new
 *
 * Parameters:
 * - min_length: size_t
 * Return Type: git_oid_shorten *
 */
mrb_value
mrb_Git_git_oid_shorten_new(mrb_state* mrb, mrb_value self) {
  mrb_int native_min_length;

  /* Fetch the args */
  mrb_get_args(mrb, "i", &native_min_length);

  /* Invocation */
  git_oid_shorten * native_return_value = git_oid_shorten_new(native_min_length);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid_shorten(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oid_strcmp */
/* sha: b1908cd85711d18bcf772b71976ea194252b97376599f19ab6e1dee9b1b456fc */
#if BIND_git_oid_strcmp_FUNCTION
#define git_oid_strcmp_REQUIRED_ARGC 2
#define git_oid_strcmp_OPTIONAL_ARGC 0
/* git_oid_strcmp
 *
 * Parameters:
 * - id: const git_oid *
 * - str: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_oid_strcmp(mrb_state* mrb, mrb_value self) {
  mrb_value id;
  char * native_str = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &id, &native_str);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_oid_strcmp(native_id, native_str);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oid_streq */
/* sha: 6de24b67ab7673ac7b8fe5da0c920bdaf8176528d14854f33d22aa6cf1815ea9 */
#if BIND_git_oid_streq_FUNCTION
#define git_oid_streq_REQUIRED_ARGC 2
#define git_oid_streq_OPTIONAL_ARGC 0
/* git_oid_streq
 *
 * Parameters:
 * - id: const git_oid *
 * - str: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_oid_streq(mrb_state* mrb, mrb_value self) {
  mrb_value id;
  char * native_str = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &id, &native_str);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_oid_streq(native_id, native_str);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oid_tostr */
/* sha: 9b3a40569b07978f1eca44a1cc77d88f304b0b43972d5b44dfe79658aa0b5cb1 */
#if BIND_git_oid_tostr_FUNCTION
#define git_oid_tostr_REQUIRED_ARGC 3
#define git_oid_tostr_OPTIONAL_ARGC 0
/* git_oid_tostr
 *
 * Parameters:
 * - out: char *
 * - n: size_t
 * - id: const git_oid *
 * Return Type: char *
 */
mrb_value
mrb_Git_git_oid_tostr(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_int native_n;
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "oio", &out, &native_n, &id);

  /* Type checking */
  TODO_type_check_char_PTR(out);
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  char * native_out = TODO_mruby_unbox_char_PTR(out);

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  char * native_return_value = git_oid_tostr(native_out, native_n, native_id);

  /* Box the return value */
  mrb_value return_value = TODO_mruby_box_char_PTR(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oid_tostr_s */
/* sha: 294f6daa9bd7f78340fdfe2e05d0eae804ca4be74ae1afc86149fcf56941d2bf */
#if BIND_git_oid_tostr_s_FUNCTION
#define git_oid_tostr_s_REQUIRED_ARGC 1
#define git_oid_tostr_s_OPTIONAL_ARGC 0
/* git_oid_tostr_s
 *
 * Parameters:
 * - oid: const git_oid *
 * Return Type: char *
 */
mrb_value
mrb_Git_git_oid_tostr_s(mrb_state* mrb, mrb_value self) {
  mrb_value oid;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &oid);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, oid, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: oid */
  const git_oid * native_oid = (mrb_nil_p(oid) ? NULL : mruby_unbox_git_oid(oid));

  /* Invocation */
  char * native_return_value = git_oid_tostr_s(native_oid);

  /* Box the return value */
  mrb_value return_value = native_return_value ==  NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_oidarray_free */
/* sha: 35c7f747de2e2c384802374182b756b3d3ede52c21d5e69083288f1c3d64e113 */
#if BIND_git_oidarray_free_FUNCTION
#define git_oidarray_free_REQUIRED_ARGC 1
#define git_oidarray_free_OPTIONAL_ARGC 0
/* git_oidarray_free
 *
 * Parameters:
 * - array: git_oidarray *
 * Return Type: void
 */
mrb_value
mrb_Git_git_oidarray_free(mrb_state* mrb, mrb_value self) {
  mrb_value array;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &array);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, array, Oidarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oidarray expected");
    return mrb_nil_value();
  }

  /* Unbox param: array */
  git_oidarray * native_array = (mrb_nil_p(array) ? NULL : mruby_unbox_git_oidarray(array));

  /* Invocation */
  git_oidarray_free(native_array);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_packbuilder_foreach */
/* sha: 63777da6de247c72ae961dd2fbce759926f4d5bd116a89e05098b952eb18b0eb */
#if BIND_git_packbuilder_foreach_FUNCTION
#define git_packbuilder_foreach_REQUIRED_ARGC 3
#define git_packbuilder_foreach_OPTIONAL_ARGC 0
/* git_packbuilder_foreach
 *
 * Parameters:
 * - pb: git_packbuilder *
 * - cb: git_packbuilder_foreach_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_packbuilder_foreach(mrb_state* mrb, mrb_value self) {
  mrb_value pb;
  mrb_value cb;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &pb, &cb, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pb, Packbuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Packbuilder expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_packbuilder_foreach_cb(cb);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: pb */
  git_packbuilder * native_pb = (mrb_nil_p(pb) ? NULL : mruby_unbox_git_packbuilder(pb));

  /* Unbox param: cb */
  git_packbuilder_foreach_cb native_cb = TODO_mruby_unbox_git_packbuilder_foreach_cb(cb);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_packbuilder_foreach(native_pb, native_cb, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_packbuilder_free */
/* sha: 32a3cd8534f8c2d93ef23a7de451cb03cc291c74abd7f5f825aa537986fbd662 */
#if BIND_git_packbuilder_free_FUNCTION
#define git_packbuilder_free_REQUIRED_ARGC 1
#define git_packbuilder_free_OPTIONAL_ARGC 0
/* git_packbuilder_free
 *
 * Parameters:
 * - pb: git_packbuilder *
 * Return Type: void
 */
mrb_value
mrb_Git_git_packbuilder_free(mrb_state* mrb, mrb_value self) {
  mrb_value pb;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pb, Packbuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Packbuilder expected");
    return mrb_nil_value();
  }

  /* Unbox param: pb */
  git_packbuilder * native_pb = (mrb_nil_p(pb) ? NULL : mruby_unbox_git_packbuilder(pb));

  /* Invocation */
  git_packbuilder_free(native_pb);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_packbuilder_hash */
/* sha: 6222b3b3c3dc6d0c75dcd68da5074b30dbcfc5b25d720e5dba15e2d122d52d30 */
#if BIND_git_packbuilder_hash_FUNCTION
#define git_packbuilder_hash_REQUIRED_ARGC 1
#define git_packbuilder_hash_OPTIONAL_ARGC 0
/* git_packbuilder_hash
 *
 * Parameters:
 * - pb: git_packbuilder *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_packbuilder_hash(mrb_state* mrb, mrb_value self) {
  mrb_value pb;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pb, Packbuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Packbuilder expected");
    return mrb_nil_value();
  }

  /* Unbox param: pb */
  git_packbuilder * native_pb = (mrb_nil_p(pb) ? NULL : mruby_unbox_git_packbuilder(pb));

  /* Invocation */
  const git_oid * native_return_value = git_packbuilder_hash(native_pb);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_packbuilder_insert */
/* sha: 50c0246e2735cfd6ccc20f3efa67e75f474c736a92afb5e6801ea29a4aef5952 */
#if BIND_git_packbuilder_insert_FUNCTION
#define git_packbuilder_insert_REQUIRED_ARGC 3
#define git_packbuilder_insert_OPTIONAL_ARGC 0
/* git_packbuilder_insert
 *
 * Parameters:
 * - pb: git_packbuilder *
 * - id: const git_oid *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_packbuilder_insert(mrb_state* mrb, mrb_value self) {
  mrb_value pb;
  mrb_value id;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooz", &pb, &id, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pb, Packbuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Packbuilder expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: pb */
  git_packbuilder * native_pb = (mrb_nil_p(pb) ? NULL : mruby_unbox_git_packbuilder(pb));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_packbuilder_insert(native_pb, native_id, native_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_packbuilder_insert_commit */
/* sha: 8283587d1c0fad280e9a9a80309c51a96e48945c078d2bfd75b08b94e40e0e25 */
#if BIND_git_packbuilder_insert_commit_FUNCTION
#define git_packbuilder_insert_commit_REQUIRED_ARGC 2
#define git_packbuilder_insert_commit_OPTIONAL_ARGC 0
/* git_packbuilder_insert_commit
 *
 * Parameters:
 * - pb: git_packbuilder *
 * - id: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_packbuilder_insert_commit(mrb_state* mrb, mrb_value self) {
  mrb_value pb;
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &pb, &id);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pb, Packbuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Packbuilder expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: pb */
  git_packbuilder * native_pb = (mrb_nil_p(pb) ? NULL : mruby_unbox_git_packbuilder(pb));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_packbuilder_insert_commit(native_pb, native_id);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_packbuilder_insert_recur */
/* sha: 3fdc0fa43c758264ddd60e4ba3114f0d15599f1a0a7d7d18b4151f5c14a6575b */
#if BIND_git_packbuilder_insert_recur_FUNCTION
#define git_packbuilder_insert_recur_REQUIRED_ARGC 3
#define git_packbuilder_insert_recur_OPTIONAL_ARGC 0
/* git_packbuilder_insert_recur
 *
 * Parameters:
 * - pb: git_packbuilder *
 * - id: const git_oid *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_packbuilder_insert_recur(mrb_state* mrb, mrb_value self) {
  mrb_value pb;
  mrb_value id;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooz", &pb, &id, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pb, Packbuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Packbuilder expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: pb */
  git_packbuilder * native_pb = (mrb_nil_p(pb) ? NULL : mruby_unbox_git_packbuilder(pb));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_packbuilder_insert_recur(native_pb, native_id, native_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_packbuilder_insert_tree */
/* sha: ee5564971ee25fa13941cd40d3a62fd090809201f61d86336c02fc943b534809 */
#if BIND_git_packbuilder_insert_tree_FUNCTION
#define git_packbuilder_insert_tree_REQUIRED_ARGC 2
#define git_packbuilder_insert_tree_OPTIONAL_ARGC 0
/* git_packbuilder_insert_tree
 *
 * Parameters:
 * - pb: git_packbuilder *
 * - id: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_packbuilder_insert_tree(mrb_state* mrb, mrb_value self) {
  mrb_value pb;
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &pb, &id);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pb, Packbuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Packbuilder expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: pb */
  git_packbuilder * native_pb = (mrb_nil_p(pb) ? NULL : mruby_unbox_git_packbuilder(pb));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_packbuilder_insert_tree(native_pb, native_id);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_packbuilder_insert_walk */
/* sha: 1566dcc813b0d3357c0f442965fed4bbf3e878170d023b9bd3f07b0308646ee6 */
#if BIND_git_packbuilder_insert_walk_FUNCTION
#define git_packbuilder_insert_walk_REQUIRED_ARGC 2
#define git_packbuilder_insert_walk_OPTIONAL_ARGC 0
/* git_packbuilder_insert_walk
 *
 * Parameters:
 * - pb: git_packbuilder *
 * - walk: git_revwalk *
 * Return Type: int
 */
mrb_value
mrb_Git_git_packbuilder_insert_walk(mrb_state* mrb, mrb_value self) {
  mrb_value pb;
  mrb_value walk;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &pb, &walk);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pb, Packbuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Packbuilder expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, walk, Revwalk_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Revwalk expected");
    return mrb_nil_value();
  }

  /* Unbox param: pb */
  git_packbuilder * native_pb = (mrb_nil_p(pb) ? NULL : mruby_unbox_git_packbuilder(pb));

  /* Unbox param: walk */
  git_revwalk * native_walk = (mrb_nil_p(walk) ? NULL : mruby_unbox_git_revwalk(walk));

  /* Invocation */
  int native_return_value = git_packbuilder_insert_walk(native_pb, native_walk);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_packbuilder_new */
/* sha: 84ec79eb321bdd213514f22d005b42b9e1201d3df608aec340dd4e3fd97315fe */
#if BIND_git_packbuilder_new_FUNCTION
#define git_packbuilder_new_REQUIRED_ARGC 1
#define git_packbuilder_new_OPTIONAL_ARGC 0
/* git_packbuilder_new
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_packbuilder_new(mrb_state* mrb, mrb_value self) {
  git_packbuilder * native_out = NULL;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_packbuilder_new(&native_out, native_repo);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_packbuilder(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_packbuilder_object_count */
/* sha: 6fa512ffc813b674dbbf194486d284f6d89a604ff1aa603e244912060ff6566f */
#if BIND_git_packbuilder_object_count_FUNCTION
#define git_packbuilder_object_count_REQUIRED_ARGC 1
#define git_packbuilder_object_count_OPTIONAL_ARGC 0
/* git_packbuilder_object_count
 *
 * Parameters:
 * - pb: git_packbuilder *
 * Return Type: uint32_t
 */
mrb_value
mrb_Git_git_packbuilder_object_count(mrb_state* mrb, mrb_value self) {
  mrb_value pb;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pb, Packbuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Packbuilder expected");
    return mrb_nil_value();
  }

  /* Unbox param: pb */
  git_packbuilder * native_pb = (mrb_nil_p(pb) ? NULL : mruby_unbox_git_packbuilder(pb));

  /* Invocation */
  uint32_t native_return_value = git_packbuilder_object_count(native_pb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_packbuilder_set_callbacks */
/* sha: c6b152a0257a86ea472a60ccf60d56c87002ae30d28cbc2bc6cb392cb7e71098 */
#if BIND_git_packbuilder_set_callbacks_FUNCTION
#define git_packbuilder_set_callbacks_REQUIRED_ARGC 3
#define git_packbuilder_set_callbacks_OPTIONAL_ARGC 0
/* git_packbuilder_set_callbacks
 *
 * Parameters:
 * - pb: git_packbuilder *
 * - progress_cb: git_packbuilder_progress
 * - progress_cb_payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_packbuilder_set_callbacks(mrb_state* mrb, mrb_value self) {
  mrb_value pb;
  mrb_value progress_cb;
  mrb_value progress_cb_payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &pb, &progress_cb, &progress_cb_payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pb, Packbuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Packbuilder expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_packbuilder_progress(progress_cb);
  TODO_type_check_void_PTR(progress_cb_payload);

  /* Unbox param: pb */
  git_packbuilder * native_pb = (mrb_nil_p(pb) ? NULL : mruby_unbox_git_packbuilder(pb));

  /* Unbox param: progress_cb */
  git_packbuilder_progress native_progress_cb = TODO_mruby_unbox_git_packbuilder_progress(progress_cb);

  /* Unbox param: progress_cb_payload */
  void * native_progress_cb_payload = TODO_mruby_unbox_void_PTR(progress_cb_payload);

  /* Invocation */
  int native_return_value = git_packbuilder_set_callbacks(native_pb, native_progress_cb, native_progress_cb_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_packbuilder_set_threads */
/* sha: ec57b8ddb9882fa7218ce80510133a558538565a45fc1bd814bdf5d59f6f135c */
#if BIND_git_packbuilder_set_threads_FUNCTION
#define git_packbuilder_set_threads_REQUIRED_ARGC 2
#define git_packbuilder_set_threads_OPTIONAL_ARGC 0
/* git_packbuilder_set_threads
 *
 * Parameters:
 * - pb: git_packbuilder *
 * - n: unsigned int
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_git_packbuilder_set_threads(mrb_state* mrb, mrb_value self) {
  mrb_value pb;
  mrb_int native_n;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &pb, &native_n);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pb, Packbuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Packbuilder expected");
    return mrb_nil_value();
  }

  /* Unbox param: pb */
  git_packbuilder * native_pb = (mrb_nil_p(pb) ? NULL : mruby_unbox_git_packbuilder(pb));

  /* Invocation */
  unsigned int native_return_value = git_packbuilder_set_threads(native_pb, native_n);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_packbuilder_write */
/* sha: 8d8a208cfae5ef05bd93d9d7569255aa239ae63a4a75b0512c056d28ffeba2cb */
#if BIND_git_packbuilder_write_FUNCTION
#define git_packbuilder_write_REQUIRED_ARGC 5
#define git_packbuilder_write_OPTIONAL_ARGC 0
/* git_packbuilder_write
 *
 * Parameters:
 * - pb: git_packbuilder *
 * - path: const char *
 * - mode: unsigned int
 * - progress_cb: git_transfer_progress_cb
 * - progress_cb_payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_packbuilder_write(mrb_state* mrb, mrb_value self) {
  mrb_value pb;
  char * native_path = NULL;
  mrb_int native_mode;
  mrb_value progress_cb;
  mrb_value progress_cb_payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ozioo", &pb, &native_path, &native_mode, &progress_cb, &progress_cb_payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pb, Packbuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Packbuilder expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_transfer_progress_cb(progress_cb);
  TODO_type_check_void_PTR(progress_cb_payload);

  /* Unbox param: pb */
  git_packbuilder * native_pb = (mrb_nil_p(pb) ? NULL : mruby_unbox_git_packbuilder(pb));

  /* Unbox param: progress_cb */
  git_transfer_progress_cb native_progress_cb = TODO_mruby_unbox_git_transfer_progress_cb(progress_cb);

  /* Unbox param: progress_cb_payload */
  void * native_progress_cb_payload = TODO_mruby_unbox_void_PTR(progress_cb_payload);

  /* Invocation */
  int native_return_value = git_packbuilder_write(native_pb, native_path, native_mode, native_progress_cb, native_progress_cb_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_packbuilder_write_buf */
/* sha: 8d2fef8d1fc47d2001500d3c20f63ed1d9923fb934b9c801e1e2c9fd346df3b9 */
#if BIND_git_packbuilder_write_buf_FUNCTION
#define git_packbuilder_write_buf_REQUIRED_ARGC 2
#define git_packbuilder_write_buf_OPTIONAL_ARGC 0
/* git_packbuilder_write_buf
 *
 * Parameters:
 * - buf: git_buf *
 * - pb: git_packbuilder *
 * Return Type: int
 */
mrb_value
mrb_Git_git_packbuilder_write_buf(mrb_state* mrb, mrb_value self) {
  mrb_value buf;
  mrb_value pb;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &buf, &pb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, buf, Buf_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Buf expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pb, Packbuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Packbuilder expected");
    return mrb_nil_value();
  }

  /* Unbox param: buf */
  git_buf * native_buf = mrb_nil_p(buf) ? NULL : mruby_unbox_git_buf(buf);

  /* Unbox param: pb */
  git_packbuilder * native_pb = (mrb_nil_p(pb) ? NULL : mruby_unbox_git_packbuilder(pb));

  /* Invocation */
  int native_return_value = git_packbuilder_write_buf(native_buf, native_pb);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_packbuilder_written */
/* sha: a47e95eb7336dc43814006c9d5276e974e8d238ccbafa0614043121ceea8aa35 */
#if BIND_git_packbuilder_written_FUNCTION
#define git_packbuilder_written_REQUIRED_ARGC 1
#define git_packbuilder_written_OPTIONAL_ARGC 0
/* git_packbuilder_written
 *
 * Parameters:
 * - pb: git_packbuilder *
 * Return Type: uint32_t
 */
mrb_value
mrb_Git_git_packbuilder_written(mrb_state* mrb, mrb_value self) {
  mrb_value pb;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pb, Packbuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Packbuilder expected");
    return mrb_nil_value();
  }

  /* Unbox param: pb */
  git_packbuilder * native_pb = (mrb_nil_p(pb) ? NULL : mruby_unbox_git_packbuilder(pb));

  /* Invocation */
  uint32_t native_return_value = git_packbuilder_written(native_pb);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_patch_free */
/* sha: 76b331b62b1325fbc15c2eb271270dcc2783698d8e9a9181939866c60839592e */
#if BIND_git_patch_free_FUNCTION
#define git_patch_free_REQUIRED_ARGC 1
#define git_patch_free_OPTIONAL_ARGC 0
/* git_patch_free
 *
 * Parameters:
 * - patch: git_patch *
 * Return Type: void
 */
mrb_value
mrb_Git_git_patch_free(mrb_state* mrb, mrb_value self) {
  mrb_value patch;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &patch);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, patch, Patch_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Patch expected");
    return mrb_nil_value();
  }

  /* Unbox param: patch */
  git_patch * native_patch = (mrb_nil_p(patch) ? NULL : mruby_unbox_git_patch(patch));

  /* Invocation */
  git_patch_free(native_patch);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_patch_from_blob_and_buffer */
/* sha: bdd5d524e64adb7117b3887e9d1fb670765cadf79901f7a48d07cc5f58ee1144 */
#if BIND_git_patch_from_blob_and_buffer_FUNCTION
#define git_patch_from_blob_and_buffer_REQUIRED_ARGC 6
#define git_patch_from_blob_and_buffer_OPTIONAL_ARGC 0
/* git_patch_from_blob_and_buffer
 *
 * Parameters:
 * - old_blob: const git_blob *
 * - old_as_path: const char *
 * - buffer: const char *
 * - buffer_len: size_t
 * - buffer_as_path: const char *
 * - opts: const git_diff_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_patch_from_blob_and_buffer(mrb_state* mrb, mrb_value self) {
  git_patch * native_out = NULL;
  mrb_value old_blob;
  char * native_old_as_path = NULL;
  char * native_buffer = NULL;
  mrb_int native_buffer_len;
  char * native_buffer_as_path = NULL;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "ozzizo", &old_blob, &native_old_as_path, &native_buffer, &native_buffer_len, &native_buffer_as_path, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, old_blob, Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blob expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, DiffOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: old_blob */
  const git_blob * native_old_blob = (mrb_nil_p(old_blob) ? NULL : mruby_unbox_git_blob(old_blob));

  /* Unbox param: opts */
  const git_diff_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_diff_options(opts));

  /* Invocation */
  int native_return_value = git_patch_from_blob_and_buffer(&native_out, native_old_blob, native_old_as_path, native_buffer, native_buffer_len, native_buffer_as_path, native_opts);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_patch(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_patch_from_blobs */
/* sha: a6acf0e1b1bfc0c923f730162b00b8c4c827d012670ba79818a2909d7229094f */
#if BIND_git_patch_from_blobs_FUNCTION
#define git_patch_from_blobs_REQUIRED_ARGC 5
#define git_patch_from_blobs_OPTIONAL_ARGC 0
/* git_patch_from_blobs
 *
 * Parameters:
 * - old_blob: const git_blob *
 * - old_as_path: const char *
 * - new_blob: const git_blob *
 * - new_as_path: const char *
 * - opts: const git_diff_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_patch_from_blobs(mrb_state* mrb, mrb_value self) {
  git_patch * native_out = NULL;
  mrb_value old_blob;
  char * native_old_as_path = NULL;
  mrb_value new_blob;
  char * native_new_as_path = NULL;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "ozozo", &old_blob, &native_old_as_path, &new_blob, &native_new_as_path, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, old_blob, Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blob expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, new_blob, Blob_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Blob expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, DiffOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: old_blob */
  const git_blob * native_old_blob = (mrb_nil_p(old_blob) ? NULL : mruby_unbox_git_blob(old_blob));

  /* Unbox param: new_blob */
  const git_blob * native_new_blob = (mrb_nil_p(new_blob) ? NULL : mruby_unbox_git_blob(new_blob));

  /* Unbox param: opts */
  const git_diff_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_diff_options(opts));

  /* Invocation */
  int native_return_value = git_patch_from_blobs(&native_out, native_old_blob, native_old_as_path, native_new_blob, native_new_as_path, native_opts);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_patch(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_patch_from_buffers */
/* sha: 326aa5210bab052c500e480bfdaed495c4746d8e540521cb46fda91e101398a0 */
#if BIND_git_patch_from_buffers_FUNCTION
#define git_patch_from_buffers_REQUIRED_ARGC 7
#define git_patch_from_buffers_OPTIONAL_ARGC 0
/* git_patch_from_buffers
 *
 * Parameters:
 * - old_buffer: const void *
 * - old_len: size_t
 * - old_as_path: const char *
 * - new_buffer: const char *
 * - new_len: size_t
 * - new_as_path: const char *
 * - opts: const git_diff_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_patch_from_buffers(mrb_state* mrb, mrb_value self) {
  git_patch * native_out = NULL;
  mrb_value old_buffer;
  mrb_int native_old_len;
  char * native_old_as_path = NULL;
  char * native_new_buffer = NULL;
  mrb_int native_new_len;
  char * native_new_as_path = NULL;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "oizzizo", &old_buffer, &native_old_len, &native_old_as_path, &native_new_buffer, &native_new_len, &native_new_as_path, &opts);

  /* Type checking */
  TODO_type_check_void_PTR(old_buffer);
  if (!mrb_obj_is_kind_of(mrb, opts, DiffOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: old_buffer */
  const void * native_old_buffer = TODO_mruby_unbox_void_PTR(old_buffer);

  /* Unbox param: opts */
  const git_diff_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_diff_options(opts));

  /* Invocation */
  int native_return_value = git_patch_from_buffers(&native_out, native_old_buffer, native_old_len, native_old_as_path, native_new_buffer, native_new_len, native_new_as_path, native_opts);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_patch(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_patch_from_diff */
/* sha: 4d332677fc2a07c462dca1073d247ff271a09f74357c6e7ed2c8d7c6c5cc858f */
#if BIND_git_patch_from_diff_FUNCTION
#define git_patch_from_diff_REQUIRED_ARGC 2
#define git_patch_from_diff_OPTIONAL_ARGC 0
/* git_patch_from_diff
 *
 * Parameters:
 * - diff: git_diff *
 * - idx: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_patch_from_diff(mrb_state* mrb, mrb_value self) {
  git_patch * native_out = NULL;
  mrb_value diff;
  mrb_int native_idx;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &diff, &native_idx);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, diff, Diff_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Diff expected");
    return mrb_nil_value();
  }

  /* Unbox param: diff */
  git_diff * native_diff = (mrb_nil_p(diff) ? NULL : mruby_unbox_git_diff(diff));

  /* Invocation */
  int native_return_value = git_patch_from_diff(&native_out, native_diff, native_idx);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_patch(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_patch_get_delta */
/* sha: 69d50173badee25fc3d2380acd154dfa1832401385aa745c89e2915aaf8299bf */
#if BIND_git_patch_get_delta_FUNCTION
#define git_patch_get_delta_REQUIRED_ARGC 1
#define git_patch_get_delta_OPTIONAL_ARGC 0
/* git_patch_get_delta
 *
 * Parameters:
 * - patch: const git_patch *
 * Return Type: const git_diff_delta *
 */
mrb_value
mrb_Git_git_patch_get_delta(mrb_state* mrb, mrb_value self) {
  mrb_value patch;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &patch);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, patch, Patch_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Patch expected");
    return mrb_nil_value();
  }

  /* Unbox param: patch */
  const git_patch * native_patch = (mrb_nil_p(patch) ? NULL : mruby_unbox_git_patch(patch));

  /* Invocation */
  const git_diff_delta * native_return_value = git_patch_get_delta(native_patch);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_diff_delta(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_patch_get_hunk */
/* sha: 371ec9a6f1127472738836ad6158ee017a5aa9d02df22212709821f8ae616e27 */
#if BIND_git_patch_get_hunk_FUNCTION
#define git_patch_get_hunk_REQUIRED_ARGC 2
#define git_patch_get_hunk_OPTIONAL_ARGC 0
/* git_patch_get_hunk
 *
 * Parameters:
 * - patch: git_patch *
 * - hunk_idx: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_patch_get_hunk(mrb_state* mrb, mrb_value self) {
  mrb_value results = mrb_ary_new(mrb);
  git_diff_hunk * native_out = NULL;
  int native_lines_in_hunk;
  mrb_value patch;
  mrb_int native_hunk_idx;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &patch, &native_hunk_idx);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, patch, Patch_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Patch expected");
    return mrb_nil_value();
  }

  /* Unbox param: patch */
  git_patch * native_patch = (mrb_nil_p(patch) ? NULL : mruby_unbox_git_patch(patch));

  /* Invocation */
  int native_return_value = git_patch_get_hunk(&native_out, &native_lines_in_hunk, native_patch, native_hunk_idx);

  /* Box out param: out */
  mrb_value out = mruby_box_git_diff_hunk(mrb, native_out);
  /* Box out param: lines_in_hunk */
  mrb_value lines_in_hunk = mrb_fixnum_value(native_lines_in_hunk);

  /* Add out params to results */
  mrb_ary_push(mrb, results, out);
  mrb_ary_push(mrb, results, lines_in_hunk);

  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_patch_get_line_in_hunk */
/* sha: fc204fe395aaa94e279399a17a4667f0c8bb3694f4f0039a7433ada71a735bef */
#if BIND_git_patch_get_line_in_hunk_FUNCTION
#define git_patch_get_line_in_hunk_REQUIRED_ARGC 3
#define git_patch_get_line_in_hunk_OPTIONAL_ARGC 0
/* git_patch_get_line_in_hunk
 *
 * Parameters:
 * - patch: git_patch *
 * - hunk_idx: size_t
 * - line_of_hunk: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_patch_get_line_in_hunk(mrb_state* mrb, mrb_value self) {
  git_diff_line * native_out = NULL;
  mrb_value patch;
  mrb_int native_hunk_idx;
  mrb_int native_line_of_hunk;

  /* Fetch the args */
  mrb_get_args(mrb, "oii", &patch, &native_hunk_idx, &native_line_of_hunk);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, patch, Patch_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Patch expected");
    return mrb_nil_value();
  }

  /* Unbox param: patch */
  git_patch * native_patch = (mrb_nil_p(patch) ? NULL : mruby_unbox_git_patch(patch));

  /* Invocation */
  int native_return_value = git_patch_get_line_in_hunk(&native_out, native_patch, native_hunk_idx, native_line_of_hunk);

  /* Box out param: out */
  mrb_value out = mruby_box_git_diff_line(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_patch_line_stats */
/* sha: 0468b3b564516da9a0b15a7c83914c2d63523cc99a5fc29e9756257727be3ec0 */
#if BIND_git_patch_line_stats_FUNCTION
#define git_patch_line_stats_REQUIRED_ARGC 1
#define git_patch_line_stats_OPTIONAL_ARGC 0
/* git_patch_line_stats
 *
 * Parameters:
 * - patch: const git_patch *
 * Return Type: int
 */
mrb_value
mrb_Git_git_patch_line_stats(mrb_state* mrb, mrb_value self) {
  mrb_value results = mrb_ary_new(mrb);
  int native_total_context;
  int native_total_additions;
  int native_total_deletions;
  mrb_value patch;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &patch);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, patch, Patch_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Patch expected");
    return mrb_nil_value();
  }

  /* Unbox param: patch */
  const git_patch * native_patch = (mrb_nil_p(patch) ? NULL : mruby_unbox_git_patch(patch));

  /* Invocation */
  int native_return_value = git_patch_line_stats(&native_total_context, &native_total_additions, &native_total_deletions, native_patch);

  /* Box out param: total_context */
  mrb_value total_context = mrb_fixnum_value(native_total_context);
  /* Box out param: total_additions */
  mrb_value total_additions = mrb_fixnum_value(native_total_additions);
  /* Box out param: total_deletions */
  mrb_value total_deletions = mrb_fixnum_value(native_total_deletions);

  /* Add out params to results */
  mrb_ary_push(mrb, results, total_context);
  mrb_ary_push(mrb, results, total_additions);
  mrb_ary_push(mrb, results, total_deletions);

  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_patch_num_hunks */
/* sha: af6d6afaa094c0a712fb0ca2d281866c908ce19851b490353d0aa03110c2dd6e */
#if BIND_git_patch_num_hunks_FUNCTION
#define git_patch_num_hunks_REQUIRED_ARGC 1
#define git_patch_num_hunks_OPTIONAL_ARGC 0
/* git_patch_num_hunks
 *
 * Parameters:
 * - patch: const git_patch *
 * Return Type: size_t
 */
mrb_value
mrb_Git_git_patch_num_hunks(mrb_state* mrb, mrb_value self) {
  mrb_value patch;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &patch);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, patch, Patch_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Patch expected");
    return mrb_nil_value();
  }

  /* Unbox param: patch */
  const git_patch * native_patch = (mrb_nil_p(patch) ? NULL : mruby_unbox_git_patch(patch));

  /* Invocation */
  size_t native_return_value = git_patch_num_hunks(native_patch);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_patch_num_lines_in_hunk */
/* sha: 2d845dce6aeb876e7759b5aabca752dccb82af9589ce413f7afc7797097cf3b0 */
#if BIND_git_patch_num_lines_in_hunk_FUNCTION
#define git_patch_num_lines_in_hunk_REQUIRED_ARGC 2
#define git_patch_num_lines_in_hunk_OPTIONAL_ARGC 0
/* git_patch_num_lines_in_hunk
 *
 * Parameters:
 * - patch: const git_patch *
 * - hunk_idx: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_patch_num_lines_in_hunk(mrb_state* mrb, mrb_value self) {
  mrb_value patch;
  mrb_int native_hunk_idx;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &patch, &native_hunk_idx);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, patch, Patch_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Patch expected");
    return mrb_nil_value();
  }

  /* Unbox param: patch */
  const git_patch * native_patch = (mrb_nil_p(patch) ? NULL : mruby_unbox_git_patch(patch));

  /* Invocation */
  int native_return_value = git_patch_num_lines_in_hunk(native_patch, native_hunk_idx);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_patch_print */
/* sha: 547f2791d8bcbb1ec7940d555202a765c740180ed0300b316e493145c9ace1d3 */
#if BIND_git_patch_print_FUNCTION
#define git_patch_print_REQUIRED_ARGC 3
#define git_patch_print_OPTIONAL_ARGC 0
/* git_patch_print
 *
 * Parameters:
 * - patch: git_patch *
 * - print_cb: git_diff_line_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_patch_print(mrb_state* mrb, mrb_value self) {
  mrb_value patch;
  mrb_value print_cb;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &patch, &print_cb, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, patch, Patch_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Patch expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_diff_line_cb(print_cb);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: patch */
  git_patch * native_patch = (mrb_nil_p(patch) ? NULL : mruby_unbox_git_patch(patch));

  /* Unbox param: print_cb */
  git_diff_line_cb native_print_cb = TODO_mruby_unbox_git_diff_line_cb(print_cb);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_patch_print(native_patch, native_print_cb, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_patch_size */
/* sha: f7c61742d6a34a841ac8cd2c2177406c87244000b46dbb44a14a3483f0857bc5 */
#if BIND_git_patch_size_FUNCTION
#define git_patch_size_REQUIRED_ARGC 4
#define git_patch_size_OPTIONAL_ARGC 0
/* git_patch_size
 *
 * Parameters:
 * - patch: git_patch *
 * - include_context: int
 * - include_hunk_headers: int
 * - include_file_headers: int
 * Return Type: size_t
 */
mrb_value
mrb_Git_git_patch_size(mrb_state* mrb, mrb_value self) {
  mrb_value patch;
  mrb_int native_include_context;
  mrb_int native_include_hunk_headers;
  mrb_int native_include_file_headers;

  /* Fetch the args */
  mrb_get_args(mrb, "oiii", &patch, &native_include_context, &native_include_hunk_headers, &native_include_file_headers);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, patch, Patch_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Patch expected");
    return mrb_nil_value();
  }

  /* Unbox param: patch */
  git_patch * native_patch = (mrb_nil_p(patch) ? NULL : mruby_unbox_git_patch(patch));

  /* Invocation */
  size_t native_return_value = git_patch_size(native_patch, native_include_context, native_include_hunk_headers, native_include_file_headers);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_patch_to_buf */
/* sha: 4523103f82a9ddb32fee3f5922c43a722958ad0207d7d96ccc350a7637834c74 */
#if BIND_git_patch_to_buf_FUNCTION
#define git_patch_to_buf_REQUIRED_ARGC 1
#define git_patch_to_buf_OPTIONAL_ARGC 0
/* git_patch_to_buf
 *
 * Parameters:
 * - patch: git_patch *
 * Return Type: int
 */
mrb_value
mrb_Git_git_patch_to_buf(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value patch;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &patch);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, patch, Patch_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Patch expected");
    return mrb_nil_value();
  }

  /* Unbox param: patch */
  git_patch * native_patch = (mrb_nil_p(patch) ? NULL : mruby_unbox_git_patch(patch));

  /* Invocation */
  int native_return_value = git_patch_to_buf(native_out, native_patch);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_pathspec_free */
/* sha: bf3ff835398fe96c7c0bdb57ce8fd45b632bf53a3e803c97c42251e35a4ea225 */
#if BIND_git_pathspec_free_FUNCTION
#define git_pathspec_free_REQUIRED_ARGC 1
#define git_pathspec_free_OPTIONAL_ARGC 0
/* git_pathspec_free
 *
 * Parameters:
 * - ps: git_pathspec *
 * Return Type: void
 */
mrb_value
mrb_Git_git_pathspec_free(mrb_state* mrb, mrb_value self) {
  mrb_value ps;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ps);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ps, Pathspec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Pathspec expected");
    return mrb_nil_value();
  }

  /* Unbox param: ps */
  git_pathspec * native_ps = (mrb_nil_p(ps) ? NULL : mruby_unbox_git_pathspec(ps));

  /* Invocation */
  git_pathspec_free(native_ps);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_pathspec_match_diff */
/* sha: b6c0a4b68a001972b3115e811d846d2ff67a7bc0834c929b70dcd2c2f5cbe133 */
#if BIND_git_pathspec_match_diff_FUNCTION
#define git_pathspec_match_diff_REQUIRED_ARGC 3
#define git_pathspec_match_diff_OPTIONAL_ARGC 0
/* git_pathspec_match_diff
 *
 * Parameters:
 * - diff: git_diff *
 * - flags: uint32_t
 * - ps: git_pathspec *
 * Return Type: int
 */
mrb_value
mrb_Git_git_pathspec_match_diff(mrb_state* mrb, mrb_value self) {
  git_pathspec_match_list * native_out = NULL;
  mrb_value diff;
  mrb_int native_flags;
  mrb_value ps;

  /* Fetch the args */
  mrb_get_args(mrb, "oio", &diff, &native_flags, &ps);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, diff, Diff_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Diff expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ps, Pathspec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Pathspec expected");
    return mrb_nil_value();
  }

  /* Unbox param: diff */
  git_diff * native_diff = (mrb_nil_p(diff) ? NULL : mruby_unbox_git_diff(diff));

  /* Unbox param: ps */
  git_pathspec * native_ps = (mrb_nil_p(ps) ? NULL : mruby_unbox_git_pathspec(ps));

  /* Invocation */
  int native_return_value = git_pathspec_match_diff(&native_out, native_diff, native_flags, native_ps);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_pathspec_match_list(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_pathspec_match_index */
/* sha: 37aa0596c5fca52e0b61090d54dabd95739536e9fac5a047209d2ba15cbc2fa5 */
#if BIND_git_pathspec_match_index_FUNCTION
#define git_pathspec_match_index_REQUIRED_ARGC 3
#define git_pathspec_match_index_OPTIONAL_ARGC 0
/* git_pathspec_match_index
 *
 * Parameters:
 * - index: git_index *
 * - flags: uint32_t
 * - ps: git_pathspec *
 * Return Type: int
 */
mrb_value
mrb_Git_git_pathspec_match_index(mrb_state* mrb, mrb_value self) {
  git_pathspec_match_list * native_out = NULL;
  mrb_value index;
  mrb_int native_flags;
  mrb_value ps;

  /* Fetch the args */
  mrb_get_args(mrb, "oio", &index, &native_flags, &ps);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ps, Pathspec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Pathspec expected");
    return mrb_nil_value();
  }

  /* Unbox param: index */
  git_index * native_index = (mrb_nil_p(index) ? NULL : mruby_unbox_git_index(index));

  /* Unbox param: ps */
  git_pathspec * native_ps = (mrb_nil_p(ps) ? NULL : mruby_unbox_git_pathspec(ps));

  /* Invocation */
  int native_return_value = git_pathspec_match_index(&native_out, native_index, native_flags, native_ps);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_pathspec_match_list(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_pathspec_match_list_diff_entry */
/* sha: fc7b30138a3fc0a822d5066bc847bdda309de111d00c22405841e2e3c9a96871 */
#if BIND_git_pathspec_match_list_diff_entry_FUNCTION
#define git_pathspec_match_list_diff_entry_REQUIRED_ARGC 2
#define git_pathspec_match_list_diff_entry_OPTIONAL_ARGC 0
/* git_pathspec_match_list_diff_entry
 *
 * Parameters:
 * - m: const git_pathspec_match_list *
 * - pos: size_t
 * Return Type: const git_diff_delta *
 */
mrb_value
mrb_Git_git_pathspec_match_list_diff_entry(mrb_state* mrb, mrb_value self) {
  mrb_value m;
  mrb_int native_pos;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &m, &native_pos);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, PathspecMatchList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "PathspecMatchList expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  const git_pathspec_match_list * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_git_pathspec_match_list(m));

  /* Invocation */
  const git_diff_delta * native_return_value = git_pathspec_match_list_diff_entry(native_m, native_pos);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_diff_delta(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_pathspec_match_list_entry */
/* sha: f0778e6d53e08a312b8010e4ae0aedf79a5edfbfdac1dcf343af1154f4bac404 */
#if BIND_git_pathspec_match_list_entry_FUNCTION
#define git_pathspec_match_list_entry_REQUIRED_ARGC 2
#define git_pathspec_match_list_entry_OPTIONAL_ARGC 0
/* git_pathspec_match_list_entry
 *
 * Parameters:
 * - m: const git_pathspec_match_list *
 * - pos: size_t
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_pathspec_match_list_entry(mrb_state* mrb, mrb_value self) {
  mrb_value m;
  mrb_int native_pos;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &m, &native_pos);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, PathspecMatchList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "PathspecMatchList expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  const git_pathspec_match_list * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_git_pathspec_match_list(m));

  /* Invocation */
  const char * native_return_value = git_pathspec_match_list_entry(native_m, native_pos);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_pathspec_match_list_entrycount */
/* sha: 9a1c9400b752a1f614104799c72ca48eab7f99cdc156980a17d0bf7534179d00 */
#if BIND_git_pathspec_match_list_entrycount_FUNCTION
#define git_pathspec_match_list_entrycount_REQUIRED_ARGC 1
#define git_pathspec_match_list_entrycount_OPTIONAL_ARGC 0
/* git_pathspec_match_list_entrycount
 *
 * Parameters:
 * - m: const git_pathspec_match_list *
 * Return Type: size_t
 */
mrb_value
mrb_Git_git_pathspec_match_list_entrycount(mrb_state* mrb, mrb_value self) {
  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, PathspecMatchList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "PathspecMatchList expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  const git_pathspec_match_list * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_git_pathspec_match_list(m));

  /* Invocation */
  size_t native_return_value = git_pathspec_match_list_entrycount(native_m);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_pathspec_match_list_failed_entry */
/* sha: b22ddb1f7f2b98e98ff0c4e483365ca60447bff1d9edc4bc6d0f9174a20cf8b6 */
#if BIND_git_pathspec_match_list_failed_entry_FUNCTION
#define git_pathspec_match_list_failed_entry_REQUIRED_ARGC 2
#define git_pathspec_match_list_failed_entry_OPTIONAL_ARGC 0
/* git_pathspec_match_list_failed_entry
 *
 * Parameters:
 * - m: const git_pathspec_match_list *
 * - pos: size_t
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_pathspec_match_list_failed_entry(mrb_state* mrb, mrb_value self) {
  mrb_value m;
  mrb_int native_pos;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &m, &native_pos);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, PathspecMatchList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "PathspecMatchList expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  const git_pathspec_match_list * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_git_pathspec_match_list(m));

  /* Invocation */
  const char * native_return_value = git_pathspec_match_list_failed_entry(native_m, native_pos);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_pathspec_match_list_failed_entrycount */
/* sha: 182266ff44d509afe74eb66b5d4ceb20302faad82592b2c12d16262e2c73f2e5 */
#if BIND_git_pathspec_match_list_failed_entrycount_FUNCTION
#define git_pathspec_match_list_failed_entrycount_REQUIRED_ARGC 1
#define git_pathspec_match_list_failed_entrycount_OPTIONAL_ARGC 0
/* git_pathspec_match_list_failed_entrycount
 *
 * Parameters:
 * - m: const git_pathspec_match_list *
 * Return Type: size_t
 */
mrb_value
mrb_Git_git_pathspec_match_list_failed_entrycount(mrb_state* mrb, mrb_value self) {
  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, PathspecMatchList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "PathspecMatchList expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  const git_pathspec_match_list * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_git_pathspec_match_list(m));

  /* Invocation */
  size_t native_return_value = git_pathspec_match_list_failed_entrycount(native_m);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_pathspec_match_list_free */
/* sha: 9f679386a147294278d80c0855213b49909f48a45ca76c2265d16a446e15ebdd */
#if BIND_git_pathspec_match_list_free_FUNCTION
#define git_pathspec_match_list_free_REQUIRED_ARGC 1
#define git_pathspec_match_list_free_OPTIONAL_ARGC 0
/* git_pathspec_match_list_free
 *
 * Parameters:
 * - m: git_pathspec_match_list *
 * Return Type: void
 */
mrb_value
mrb_Git_git_pathspec_match_list_free(mrb_state* mrb, mrb_value self) {
  mrb_value m;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &m);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, m, PathspecMatchList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "PathspecMatchList expected");
    return mrb_nil_value();
  }

  /* Unbox param: m */
  git_pathspec_match_list * native_m = (mrb_nil_p(m) ? NULL : mruby_unbox_git_pathspec_match_list(m));

  /* Invocation */
  git_pathspec_match_list_free(native_m);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_pathspec_match_tree */
/* sha: bed472e71be4ea5d2e0165a6c037b8d031b1c5e2b9d00a9a220e9cfacf355eff */
#if BIND_git_pathspec_match_tree_FUNCTION
#define git_pathspec_match_tree_REQUIRED_ARGC 3
#define git_pathspec_match_tree_OPTIONAL_ARGC 0
/* git_pathspec_match_tree
 *
 * Parameters:
 * - tree: git_tree *
 * - flags: uint32_t
 * - ps: git_pathspec *
 * Return Type: int
 */
mrb_value
mrb_Git_git_pathspec_match_tree(mrb_state* mrb, mrb_value self) {
  git_pathspec_match_list * native_out = NULL;
  mrb_value tree;
  mrb_int native_flags;
  mrb_value ps;

  /* Fetch the args */
  mrb_get_args(mrb, "oio", &tree, &native_flags, &ps);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ps, Pathspec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Pathspec expected");
    return mrb_nil_value();
  }

  /* Unbox param: tree */
  git_tree * native_tree = (mrb_nil_p(tree) ? NULL : mruby_unbox_git_tree(tree));

  /* Unbox param: ps */
  git_pathspec * native_ps = (mrb_nil_p(ps) ? NULL : mruby_unbox_git_pathspec(ps));

  /* Invocation */
  int native_return_value = git_pathspec_match_tree(&native_out, native_tree, native_flags, native_ps);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_pathspec_match_list(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_pathspec_match_workdir */
/* sha: a730dd6bd230d54242a03ac5ed2bb039e22751aca7bb2d7edc5cc6950899d4b7 */
#if BIND_git_pathspec_match_workdir_FUNCTION
#define git_pathspec_match_workdir_REQUIRED_ARGC 3
#define git_pathspec_match_workdir_OPTIONAL_ARGC 0
/* git_pathspec_match_workdir
 *
 * Parameters:
 * - repo: git_repository *
 * - flags: uint32_t
 * - ps: git_pathspec *
 * Return Type: int
 */
mrb_value
mrb_Git_git_pathspec_match_workdir(mrb_state* mrb, mrb_value self) {
  git_pathspec_match_list * native_out = NULL;
  mrb_value repo;
  mrb_int native_flags;
  mrb_value ps;

  /* Fetch the args */
  mrb_get_args(mrb, "oio", &repo, &native_flags, &ps);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ps, Pathspec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Pathspec expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: ps */
  git_pathspec * native_ps = (mrb_nil_p(ps) ? NULL : mruby_unbox_git_pathspec(ps));

  /* Invocation */
  int native_return_value = git_pathspec_match_workdir(&native_out, native_repo, native_flags, native_ps);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_pathspec_match_list(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_pathspec_matches_path */
/* sha: 3cd416aeec5b9ddf4164f7f263fd2fa86475bebf76dbeb62156f023f25d3ae98 */
#if BIND_git_pathspec_matches_path_FUNCTION
#define git_pathspec_matches_path_REQUIRED_ARGC 3
#define git_pathspec_matches_path_OPTIONAL_ARGC 0
/* git_pathspec_matches_path
 *
 * Parameters:
 * - ps: const git_pathspec *
 * - flags: uint32_t
 * - path: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_pathspec_matches_path(mrb_state* mrb, mrb_value self) {
  mrb_value ps;
  mrb_int native_flags;
  char * native_path = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oiz", &ps, &native_flags, &native_path);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ps, Pathspec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Pathspec expected");
    return mrb_nil_value();
  }

  /* Unbox param: ps */
  const git_pathspec * native_ps = (mrb_nil_p(ps) ? NULL : mruby_unbox_git_pathspec(ps));

  /* Invocation */
  int native_return_value = git_pathspec_matches_path(native_ps, native_flags, native_path);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_pathspec_new */
/* sha: a80766c85f899b9c1a9a9d10fc70c916862af9b546902ee0211749224852570e */
#if BIND_git_pathspec_new_FUNCTION
#define git_pathspec_new_REQUIRED_ARGC 1
#define git_pathspec_new_OPTIONAL_ARGC 0
/* git_pathspec_new
 *
 * Parameters:
 * - pathspec: const git_strarray *
 * Return Type: int
 */
mrb_value
mrb_Git_git_pathspec_new(mrb_state* mrb, mrb_value self) {
  git_pathspec * native_out = NULL;
  mrb_value pathspec;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &pathspec);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, pathspec, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }

  /* Unbox param: pathspec */
  const git_strarray * native_pathspec = (mrb_nil_p(pathspec) ? NULL : mruby_unbox_git_strarray(pathspec));

  /* Invocation */
  int native_return_value = git_pathspec_new(&native_out, native_pathspec);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_pathspec(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_push_init_options */
/* sha: 676308cfb7b06ab4388f57e246486d016511b2e697db19e81432f4907ef7f0ef */
#if BIND_git_push_init_options_FUNCTION
#define git_push_init_options_REQUIRED_ARGC 2
#define git_push_init_options_OPTIONAL_ARGC 0
/* git_push_init_options
 *
 * Parameters:
 * - opts: git_push_options *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_push_init_options(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, PushOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "PushOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_push_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_push_options(opts));

  /* Invocation */
  int native_return_value = git_push_init_options(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_rebase_abort */
/* sha: 527f92e019dd1cc06751b445848a163eceda256c69a9f76289ae2d0ecb6181ba */
#if BIND_git_rebase_abort_FUNCTION
#define git_rebase_abort_REQUIRED_ARGC 1
#define git_rebase_abort_OPTIONAL_ARGC 0
/* git_rebase_abort
 *
 * Parameters:
 * - rebase: git_rebase *
 * Return Type: int
 */
mrb_value
mrb_Git_git_rebase_abort(mrb_state* mrb, mrb_value self) {
  mrb_value rebase;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rebase);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, rebase, Rebase_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Rebase expected");
    return mrb_nil_value();
  }

  /* Unbox param: rebase */
  git_rebase * native_rebase = (mrb_nil_p(rebase) ? NULL : mruby_unbox_git_rebase(rebase));

  /* Invocation */
  int native_return_value = git_rebase_abort(native_rebase);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_rebase_commit */
/* sha: dd6d3d32869500a1fd40c0cf730490847a62c17abdae0c107951e808f837610b */
#if BIND_git_rebase_commit_FUNCTION
#define git_rebase_commit_REQUIRED_ARGC 6
#define git_rebase_commit_OPTIONAL_ARGC 0
/* git_rebase_commit
 *
 * Parameters:
 * - id: git_oid *
 * - rebase: git_rebase *
 * - author: const git_signature *
 * - committer: const git_signature *
 * - message_encoding: const char *
 * - message: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_rebase_commit(mrb_state* mrb, mrb_value self) {
  mrb_value id;
  mrb_value rebase;
  mrb_value author;
  mrb_value committer;
  char * native_message_encoding = NULL;
  char * native_message = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oooozz", &id, &rebase, &author, &committer, &native_message_encoding, &native_message);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, rebase, Rebase_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Rebase expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, author, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, committer, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }

  /* Unbox param: id */
  git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Unbox param: rebase */
  git_rebase * native_rebase = (mrb_nil_p(rebase) ? NULL : mruby_unbox_git_rebase(rebase));

  /* Unbox param: author */
  const git_signature * native_author = (mrb_nil_p(author) ? NULL : mruby_unbox_git_signature(author));

  /* Unbox param: committer */
  const git_signature * native_committer = (mrb_nil_p(committer) ? NULL : mruby_unbox_git_signature(committer));

  /* Invocation */
  int native_return_value = git_rebase_commit(native_id, native_rebase, native_author, native_committer, native_message_encoding, native_message);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_rebase_finish */
/* sha: a59b0ed0caf5c1306983dbfad1b6d1f1f1f509d8fc5c3993b0f0e31c1272d13b */
#if BIND_git_rebase_finish_FUNCTION
#define git_rebase_finish_REQUIRED_ARGC 2
#define git_rebase_finish_OPTIONAL_ARGC 0
/* git_rebase_finish
 *
 * Parameters:
 * - rebase: git_rebase *
 * - signature: const git_signature *
 * Return Type: int
 */
mrb_value
mrb_Git_git_rebase_finish(mrb_state* mrb, mrb_value self) {
  mrb_value rebase;
  mrb_value signature;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &rebase, &signature);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, rebase, Rebase_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Rebase expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, signature, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }

  /* Unbox param: rebase */
  git_rebase * native_rebase = (mrb_nil_p(rebase) ? NULL : mruby_unbox_git_rebase(rebase));

  /* Unbox param: signature */
  const git_signature * native_signature = (mrb_nil_p(signature) ? NULL : mruby_unbox_git_signature(signature));

  /* Invocation */
  int native_return_value = git_rebase_finish(native_rebase, native_signature);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_rebase_free */
/* sha: aac40d5a7b183951a5d66d35a3c197e654487fee9c4995352442bc99cedc5399 */
#if BIND_git_rebase_free_FUNCTION
#define git_rebase_free_REQUIRED_ARGC 1
#define git_rebase_free_OPTIONAL_ARGC 0
/* git_rebase_free
 *
 * Parameters:
 * - rebase: git_rebase *
 * Return Type: void
 */
mrb_value
mrb_Git_git_rebase_free(mrb_state* mrb, mrb_value self) {
  mrb_value rebase;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rebase);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, rebase, Rebase_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Rebase expected");
    return mrb_nil_value();
  }

  /* Unbox param: rebase */
  git_rebase * native_rebase = (mrb_nil_p(rebase) ? NULL : mruby_unbox_git_rebase(rebase));

  /* Invocation */
  git_rebase_free(native_rebase);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_rebase_init */
/* sha: a76f27dc6324721f60fa359e903e68730256e61a8645b67fd5fb425cc2128460 */
#if BIND_git_rebase_init_FUNCTION
#define git_rebase_init_REQUIRED_ARGC 5
#define git_rebase_init_OPTIONAL_ARGC 0
/* git_rebase_init
 *
 * Parameters:
 * - repo: git_repository *
 * - branch: const git_annotated_commit *
 * - upstream: const git_annotated_commit *
 * - onto: const git_annotated_commit *
 * - opts: const git_rebase_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_rebase_init(mrb_state* mrb, mrb_value self) {
  git_rebase * native_out = NULL;
  mrb_value repo;
  mrb_value branch;
  mrb_value upstream;
  mrb_value onto;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "ooooo", &repo, &branch, &upstream, &onto, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, branch, AnnotatedCommit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "AnnotatedCommit expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, upstream, AnnotatedCommit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "AnnotatedCommit expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, onto, AnnotatedCommit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "AnnotatedCommit expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, RebaseOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RebaseOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: branch */
  const git_annotated_commit * native_branch = (mrb_nil_p(branch) ? NULL : mruby_unbox_git_annotated_commit(branch));

  /* Unbox param: upstream */
  const git_annotated_commit * native_upstream = (mrb_nil_p(upstream) ? NULL : mruby_unbox_git_annotated_commit(upstream));

  /* Unbox param: onto */
  const git_annotated_commit * native_onto = (mrb_nil_p(onto) ? NULL : mruby_unbox_git_annotated_commit(onto));

  /* Unbox param: opts */
  const git_rebase_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_rebase_options(opts));

  /* Invocation */
  int native_return_value = git_rebase_init(&native_out, native_repo, native_branch, native_upstream, native_onto, native_opts);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_rebase(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_rebase_init_options */
/* sha: 04f2c64fab0d21527d07e9bf0a7ac4aca50f1871691475a326318086fbe22676 */
#if BIND_git_rebase_init_options_FUNCTION
#define git_rebase_init_options_REQUIRED_ARGC 2
#define git_rebase_init_options_OPTIONAL_ARGC 0
/* git_rebase_init_options
 *
 * Parameters:
 * - opts: git_rebase_options *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_rebase_init_options(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, RebaseOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RebaseOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_rebase_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_rebase_options(opts));

  /* Invocation */
  int native_return_value = git_rebase_init_options(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_rebase_next */
/* sha: 904f6b1f044963bbb8829029fcafc59ff63d04b0524a33936d89649754a3624c */
#if BIND_git_rebase_next_FUNCTION
#define git_rebase_next_REQUIRED_ARGC 1
#define git_rebase_next_OPTIONAL_ARGC 0
/* git_rebase_next
 *
 * Parameters:
 * - rebase: git_rebase *
 * Return Type: int
 */
mrb_value
mrb_Git_git_rebase_next(mrb_state* mrb, mrb_value self) {
  git_rebase_operation * native_operation = NULL;
  mrb_value rebase;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rebase);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, rebase, Rebase_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Rebase expected");
    return mrb_nil_value();
  }

  /* Unbox param: rebase */
  git_rebase * native_rebase = (mrb_nil_p(rebase) ? NULL : mruby_unbox_git_rebase(rebase));

  /* Invocation */
  int native_return_value = git_rebase_next(&native_operation, native_rebase);

  /* Box out param: operation */
  mrb_value operation = mruby_box_git_rebase_operation(mrb, native_operation);

  return operation;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_rebase_open */
/* sha: 5c3ca88b139ec116e27801d08bb2d63f26706a0897aaec0243a06dba68bad2c4 */
#if BIND_git_rebase_open_FUNCTION
#define git_rebase_open_REQUIRED_ARGC 2
#define git_rebase_open_OPTIONAL_ARGC 0
/* git_rebase_open
 *
 * Parameters:
 * - repo: git_repository *
 * - opts: const git_rebase_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_rebase_open(mrb_state* mrb, mrb_value self) {
  git_rebase * native_out = NULL;
  mrb_value repo;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &repo, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, RebaseOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RebaseOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: opts */
  const git_rebase_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_rebase_options(opts));

  /* Invocation */
  int native_return_value = git_rebase_open(&native_out, native_repo, native_opts);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_rebase(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_rebase_operation_byindex */
/* sha: ec0fc1bec5d09da32f2b12e0ed5323eb8e0864f17a3afe46ca82e040520c17cc */
#if BIND_git_rebase_operation_byindex_FUNCTION
#define git_rebase_operation_byindex_REQUIRED_ARGC 2
#define git_rebase_operation_byindex_OPTIONAL_ARGC 0
/* git_rebase_operation_byindex
 *
 * Parameters:
 * - rebase: git_rebase *
 * - idx: size_t
 * Return Type: git_rebase_operation *
 */
mrb_value
mrb_Git_git_rebase_operation_byindex(mrb_state* mrb, mrb_value self) {
  mrb_value rebase;
  mrb_int native_idx;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &rebase, &native_idx);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, rebase, Rebase_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Rebase expected");
    return mrb_nil_value();
  }

  /* Unbox param: rebase */
  git_rebase * native_rebase = (mrb_nil_p(rebase) ? NULL : mruby_unbox_git_rebase(rebase));

  /* Invocation */
  git_rebase_operation * native_return_value = git_rebase_operation_byindex(native_rebase, native_idx);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_rebase_operation(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_rebase_operation_current */
/* sha: cf6162c1a9d45cded86d10b42c7c31b86d61f512f4cd723da45745b58f8dc5ec */
#if BIND_git_rebase_operation_current_FUNCTION
#define git_rebase_operation_current_REQUIRED_ARGC 1
#define git_rebase_operation_current_OPTIONAL_ARGC 0
/* git_rebase_operation_current
 *
 * Parameters:
 * - rebase: git_rebase *
 * Return Type: size_t
 */
mrb_value
mrb_Git_git_rebase_operation_current(mrb_state* mrb, mrb_value self) {
  mrb_value rebase;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rebase);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, rebase, Rebase_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Rebase expected");
    return mrb_nil_value();
  }

  /* Unbox param: rebase */
  git_rebase * native_rebase = (mrb_nil_p(rebase) ? NULL : mruby_unbox_git_rebase(rebase));

  /* Invocation */
  size_t native_return_value = git_rebase_operation_current(native_rebase);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_rebase_operation_entrycount */
/* sha: ffc4e655dee236c79089d4c558577f9e750a3036b39f843b6da671706db6afa1 */
#if BIND_git_rebase_operation_entrycount_FUNCTION
#define git_rebase_operation_entrycount_REQUIRED_ARGC 1
#define git_rebase_operation_entrycount_OPTIONAL_ARGC 0
/* git_rebase_operation_entrycount
 *
 * Parameters:
 * - rebase: git_rebase *
 * Return Type: size_t
 */
mrb_value
mrb_Git_git_rebase_operation_entrycount(mrb_state* mrb, mrb_value self) {
  mrb_value rebase;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &rebase);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, rebase, Rebase_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Rebase expected");
    return mrb_nil_value();
  }

  /* Unbox param: rebase */
  git_rebase * native_rebase = (mrb_nil_p(rebase) ? NULL : mruby_unbox_git_rebase(rebase));

  /* Invocation */
  size_t native_return_value = git_rebase_operation_entrycount(native_rebase);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_refdb_compress */
/* sha: 27baeff2154a75179c59f368fb446aeb467e3c65d6a603a88d90b37469aaf41f */
#if BIND_git_refdb_compress_FUNCTION
#define git_refdb_compress_REQUIRED_ARGC 1
#define git_refdb_compress_OPTIONAL_ARGC 0
/* git_refdb_compress
 *
 * Parameters:
 * - refdb: git_refdb *
 * Return Type: int
 */
mrb_value
mrb_Git_git_refdb_compress(mrb_state* mrb, mrb_value self) {
  mrb_value refdb;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &refdb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, refdb, Refdb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Refdb expected");
    return mrb_nil_value();
  }

  /* Unbox param: refdb */
  git_refdb * native_refdb = (mrb_nil_p(refdb) ? NULL : mruby_unbox_git_refdb(refdb));

  /* Invocation */
  int native_return_value = git_refdb_compress(native_refdb);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_refdb_free */
/* sha: 424a13ce61e049e9664d062b41b3cc9a3bbfefc6d221cb9f279e703e43f84384 */
#if BIND_git_refdb_free_FUNCTION
#define git_refdb_free_REQUIRED_ARGC 1
#define git_refdb_free_OPTIONAL_ARGC 0
/* git_refdb_free
 *
 * Parameters:
 * - refdb: git_refdb *
 * Return Type: void
 */
mrb_value
mrb_Git_git_refdb_free(mrb_state* mrb, mrb_value self) {
  mrb_value refdb;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &refdb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, refdb, Refdb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Refdb expected");
    return mrb_nil_value();
  }

  /* Unbox param: refdb */
  git_refdb * native_refdb = (mrb_nil_p(refdb) ? NULL : mruby_unbox_git_refdb(refdb));

  /* Invocation */
  git_refdb_free(native_refdb);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_refdb_new */
/* sha: d8169b1bc6bedc49c6e19f5be8e1a29633cabe42a4b2b0d50fb0cd511d3ca0fa */
#if BIND_git_refdb_new_FUNCTION
#define git_refdb_new_REQUIRED_ARGC 1
#define git_refdb_new_OPTIONAL_ARGC 0
/* git_refdb_new
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_refdb_new(mrb_state* mrb, mrb_value self) {
  git_refdb * native_out = NULL;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_refdb_new(&native_out, native_repo);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_refdb(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_refdb_open */
/* sha: 9723845747901ec43d743642b8a323f7ad11bd9a4e913ce8573945af58248b23 */
#if BIND_git_refdb_open_FUNCTION
#define git_refdb_open_REQUIRED_ARGC 1
#define git_refdb_open_OPTIONAL_ARGC 0
/* git_refdb_open
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_refdb_open(mrb_state* mrb, mrb_value self) {
  git_refdb * native_out = NULL;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_refdb_open(&native_out, native_repo);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_refdb(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_cmp */
/* sha: e63d308eab0c43a841065a1475112b654567fdd9ad6ff0450634ec9eb4736892 */
#if BIND_git_reference_cmp_FUNCTION
#define git_reference_cmp_REQUIRED_ARGC 2
#define git_reference_cmp_OPTIONAL_ARGC 0
/* git_reference_cmp
 *
 * Parameters:
 * - ref1: const git_reference *
 * - ref2: const git_reference *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_cmp(mrb_state* mrb, mrb_value self) {
  mrb_value ref1;
  mrb_value ref2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &ref1, &ref2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref1, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, ref2, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref1 */
  const git_reference * native_ref1 = (mrb_nil_p(ref1) ? NULL : mruby_unbox_git_reference(ref1));

  /* Unbox param: ref2 */
  const git_reference * native_ref2 = (mrb_nil_p(ref2) ? NULL : mruby_unbox_git_reference(ref2));

  /* Invocation */
  int native_return_value = git_reference_cmp(native_ref1, native_ref2);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_create */
/* sha: 70aeb037274f742768572ab7f23be02a3c6e3708f645a84de69fa4a1ffc1e640 */
#if BIND_git_reference_create_FUNCTION
#define git_reference_create_REQUIRED_ARGC 5
#define git_reference_create_OPTIONAL_ARGC 0
/* git_reference_create
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * - id: const git_oid *
 * - force: int
 * - log_message: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_create(mrb_state* mrb, mrb_value self) {
  git_reference * native_out = NULL;
  mrb_value repo;
  char * native_name = NULL;
  mrb_value id;
  mrb_int native_force;
  char * native_log_message = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozoiz", &repo, &native_name, &id, &native_force, &native_log_message);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_reference_create(&native_out, native_repo, native_name, native_id, native_force, native_log_message);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_create_matching */
/* sha: 4b7235d480beb0593fa9f10906bc544740a02ec1d42057d823fa66fa54a40ada */
#if BIND_git_reference_create_matching_FUNCTION
#define git_reference_create_matching_REQUIRED_ARGC 6
#define git_reference_create_matching_OPTIONAL_ARGC 0
/* git_reference_create_matching
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * - id: const git_oid *
 * - force: int
 * - current_id: const git_oid *
 * - log_message: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_create_matching(mrb_state* mrb, mrb_value self) {
  git_reference * native_out = NULL;
  mrb_value repo;
  char * native_name = NULL;
  mrb_value id;
  mrb_int native_force;
  mrb_value current_id;
  char * native_log_message = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozoioz", &repo, &native_name, &id, &native_force, &current_id, &native_log_message);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, current_id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Unbox param: current_id */
  const git_oid * native_current_id = (mrb_nil_p(current_id) ? NULL : mruby_unbox_git_oid(current_id));

  /* Invocation */
  int native_return_value = git_reference_create_matching(&native_out, native_repo, native_name, native_id, native_force, native_current_id, native_log_message);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_delete */
/* sha: ffdf0906b427a8afe675a1acf40a31e60e8e93bb7beaed10513c2365cd01ff97 */
#if BIND_git_reference_delete_FUNCTION
#define git_reference_delete_REQUIRED_ARGC 1
#define git_reference_delete_OPTIONAL_ARGC 0
/* git_reference_delete
 *
 * Parameters:
 * - ref: git_reference *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_delete(mrb_state* mrb, mrb_value self) {
  mrb_value ref;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ref);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref */
  git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Invocation */
  int native_return_value = git_reference_delete(native_ref);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_dwim */
/* sha: 20b24b81601994d0d710e044a323b8df07b86268f2362af1af92ca48c04e4256 */
#if BIND_git_reference_dwim_FUNCTION
#define git_reference_dwim_REQUIRED_ARGC 2
#define git_reference_dwim_OPTIONAL_ARGC 0
/* git_reference_dwim
 *
 * Parameters:
 * - repo: git_repository *
 * - shorthand: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_dwim(mrb_state* mrb, mrb_value self) {
  git_reference * native_out = NULL;
  mrb_value repo;
  char * native_shorthand = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_shorthand);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_reference_dwim(&native_out, native_repo, native_shorthand);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_ensure_log */
/* sha: f3d92db177188c3fd72daf73c54fa3bf3268aa01657ce3f34371f573cdcb6e8c */
#if BIND_git_reference_ensure_log_FUNCTION
#define git_reference_ensure_log_REQUIRED_ARGC 2
#define git_reference_ensure_log_OPTIONAL_ARGC 0
/* git_reference_ensure_log
 *
 * Parameters:
 * - repo: git_repository *
 * - refname: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_ensure_log(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_refname = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_refname);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_reference_ensure_log(native_repo, native_refname);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_foreach */
/* sha: 1f9ff85d798823d6bccdc999b558b13fbdfc54895b024cb2608a6f6a1d9e080d */
#if BIND_git_reference_foreach_FUNCTION
#define git_reference_foreach_REQUIRED_ARGC 3
#define git_reference_foreach_OPTIONAL_ARGC 0
/* git_reference_foreach
 *
 * Parameters:
 * - repo: git_repository *
 * - callback: git_reference_foreach_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_foreach(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &repo, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_reference_foreach_cb(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: callback */
  git_reference_foreach_cb native_callback = TODO_mruby_unbox_git_reference_foreach_cb(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_reference_foreach(native_repo, native_callback, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_foreach_glob */
/* sha: 10cf58d536d8e10cf892b837832f0779ae1109110ac468465c06f7a5c7004de4 */
#if BIND_git_reference_foreach_glob_FUNCTION
#define git_reference_foreach_glob_REQUIRED_ARGC 4
#define git_reference_foreach_glob_OPTIONAL_ARGC 0
/* git_reference_foreach_glob
 *
 * Parameters:
 * - repo: git_repository *
 * - glob: const char *
 * - callback: git_reference_foreach_name_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_foreach_glob(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_glob = NULL;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ozoo", &repo, &native_glob, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_reference_foreach_name_cb(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: callback */
  git_reference_foreach_name_cb native_callback = TODO_mruby_unbox_git_reference_foreach_name_cb(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_reference_foreach_glob(native_repo, native_glob, native_callback, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_foreach_name */
/* sha: f0bb06764f178ed7814ceec83d92e0f932781af964b95ba8169f6643a4a10220 */
#if BIND_git_reference_foreach_name_FUNCTION
#define git_reference_foreach_name_REQUIRED_ARGC 3
#define git_reference_foreach_name_OPTIONAL_ARGC 0
/* git_reference_foreach_name
 *
 * Parameters:
 * - repo: git_repository *
 * - callback: git_reference_foreach_name_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_foreach_name(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &repo, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_reference_foreach_name_cb(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: callback */
  git_reference_foreach_name_cb native_callback = TODO_mruby_unbox_git_reference_foreach_name_cb(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_reference_foreach_name(native_repo, native_callback, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_free */
/* sha: 128e61c41f7e6e2441092437df966d5ca14cf4488193b34875351861b8ecc1c5 */
#if BIND_git_reference_free_FUNCTION
#define git_reference_free_REQUIRED_ARGC 1
#define git_reference_free_OPTIONAL_ARGC 0
/* git_reference_free
 *
 * Parameters:
 * - ref: git_reference *
 * Return Type: void
 */
mrb_value
mrb_Git_git_reference_free(mrb_state* mrb, mrb_value self) {
  mrb_value ref;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ref);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref */
  git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Invocation */
  git_reference_free(native_ref);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_has_log */
/* sha: 4957ece107cf12162333b54d5c877711d603bf644d037ee9bc73ab84f06d82df */
#if BIND_git_reference_has_log_FUNCTION
#define git_reference_has_log_REQUIRED_ARGC 2
#define git_reference_has_log_OPTIONAL_ARGC 0
/* git_reference_has_log
 *
 * Parameters:
 * - repo: git_repository *
 * - refname: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_has_log(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_refname = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_refname);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_reference_has_log(native_repo, native_refname);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_is_branch */
/* sha: a17c66763bd6e56d5e558fc5e79688ae89869a1f05286b3b79930def7e221b5c */
#if BIND_git_reference_is_branch_FUNCTION
#define git_reference_is_branch_REQUIRED_ARGC 1
#define git_reference_is_branch_OPTIONAL_ARGC 0
/* git_reference_is_branch
 *
 * Parameters:
 * - ref: const git_reference *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_is_branch(mrb_state* mrb, mrb_value self) {
  mrb_value ref;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ref);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref */
  const git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Invocation */
  int native_return_value = git_reference_is_branch(native_ref);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_is_note */
/* sha: 2199b99a17d8a9c3f9605d7f3c079cb5898862c08d006c8ce03578862a21b39c */
#if BIND_git_reference_is_note_FUNCTION
#define git_reference_is_note_REQUIRED_ARGC 1
#define git_reference_is_note_OPTIONAL_ARGC 0
/* git_reference_is_note
 *
 * Parameters:
 * - ref: const git_reference *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_is_note(mrb_state* mrb, mrb_value self) {
  mrb_value ref;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ref);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref */
  const git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Invocation */
  int native_return_value = git_reference_is_note(native_ref);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_is_remote */
/* sha: 324667ec5731c817463fe02bfe25d2771e22229fa5e7859c12441c923f94918b */
#if BIND_git_reference_is_remote_FUNCTION
#define git_reference_is_remote_REQUIRED_ARGC 1
#define git_reference_is_remote_OPTIONAL_ARGC 0
/* git_reference_is_remote
 *
 * Parameters:
 * - ref: const git_reference *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_is_remote(mrb_state* mrb, mrb_value self) {
  mrb_value ref;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ref);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref */
  const git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Invocation */
  int native_return_value = git_reference_is_remote(native_ref);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_is_tag */
/* sha: 3c49b8557e844c8dcfb3f24ed37d2afcdfbfbc25176b2b9e9636f2817b5b324d */
#if BIND_git_reference_is_tag_FUNCTION
#define git_reference_is_tag_REQUIRED_ARGC 1
#define git_reference_is_tag_OPTIONAL_ARGC 0
/* git_reference_is_tag
 *
 * Parameters:
 * - ref: const git_reference *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_is_tag(mrb_state* mrb, mrb_value self) {
  mrb_value ref;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ref);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref */
  const git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Invocation */
  int native_return_value = git_reference_is_tag(native_ref);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_is_valid_name */
/* sha: ac1ba452f211d45a4a847509129b3b55bdf5f3265608631d6cb87317a61726f5 */
#if BIND_git_reference_is_valid_name_FUNCTION
#define git_reference_is_valid_name_REQUIRED_ARGC 1
#define git_reference_is_valid_name_OPTIONAL_ARGC 0
/* git_reference_is_valid_name
 *
 * Parameters:
 * - refname: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_is_valid_name(mrb_state* mrb, mrb_value self) {
  char * native_refname = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_refname);

  /* Invocation */
  int native_return_value = git_reference_is_valid_name(native_refname);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_iterator_free */
/* sha: e285cfa8a59221072819a4d15f1e535d258bebce610cda72fa5131b8c072d089 */
#if BIND_git_reference_iterator_free_FUNCTION
#define git_reference_iterator_free_REQUIRED_ARGC 1
#define git_reference_iterator_free_OPTIONAL_ARGC 0
/* git_reference_iterator_free
 *
 * Parameters:
 * - iter: git_reference_iterator *
 * Return Type: void
 */
mrb_value
mrb_Git_git_reference_iterator_free(mrb_state* mrb, mrb_value self) {
  mrb_value iter;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &iter);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, iter, ReferenceIterator_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ReferenceIterator expected");
    return mrb_nil_value();
  }

  /* Unbox param: iter */
  git_reference_iterator * native_iter = (mrb_nil_p(iter) ? NULL : mruby_unbox_git_reference_iterator(iter));

  /* Invocation */
  git_reference_iterator_free(native_iter);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_iterator_glob_new */
/* sha: c3d46d6231dd8a751accec64b5075136e9d9c5ba63c884d743d01cf2a1f147c0 */
#if BIND_git_reference_iterator_glob_new_FUNCTION
#define git_reference_iterator_glob_new_REQUIRED_ARGC 2
#define git_reference_iterator_glob_new_OPTIONAL_ARGC 0
/* git_reference_iterator_glob_new
 *
 * Parameters:
 * - repo: git_repository *
 * - glob: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_iterator_glob_new(mrb_state* mrb, mrb_value self) {
  git_reference_iterator * native_out = NULL;
  mrb_value repo;
  char * native_glob = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_glob);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_reference_iterator_glob_new(&native_out, native_repo, native_glob);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference_iterator(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_iterator_new */
/* sha: 7d63de37e6d88f2aebf2a040b949e416c3a04db0dc642fcb2d079793dd83fb39 */
#if BIND_git_reference_iterator_new_FUNCTION
#define git_reference_iterator_new_REQUIRED_ARGC 1
#define git_reference_iterator_new_OPTIONAL_ARGC 0
/* git_reference_iterator_new
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_iterator_new(mrb_state* mrb, mrb_value self) {
  git_reference_iterator * native_out = NULL;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_reference_iterator_new(&native_out, native_repo);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference_iterator(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_list */
/* sha: b675afbbf849036f0587ec0734d0b5efc927ef092ce3cc64324c18659f253d31 */
#if BIND_git_reference_list_FUNCTION
#define git_reference_list_REQUIRED_ARGC 2
#define git_reference_list_OPTIONAL_ARGC 0
/* git_reference_list
 *
 * Parameters:
 * - array: git_strarray *
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_list(mrb_state* mrb, mrb_value self) {
  mrb_value array;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &array, &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, array, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: array */
  git_strarray * native_array = (mrb_nil_p(array) ? NULL : mruby_unbox_git_strarray(array));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_reference_list(native_array, native_repo);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_lookup */
/* sha: a9c6ddbffd9ff62f74081caa3a50585d1220aee425ab007b6f6b94192c4959e3 */
#if BIND_git_reference_lookup_FUNCTION
#define git_reference_lookup_REQUIRED_ARGC 2
#define git_reference_lookup_OPTIONAL_ARGC 0
/* git_reference_lookup
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_lookup(mrb_state* mrb, mrb_value self) {
  git_reference * native_out = NULL;
  mrb_value repo;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_reference_lookup(&native_out, native_repo, native_name);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_name */
/* sha: 05b295baa93d9545997212f9efb17b82bcb255de62f376cbe12e126864d0e98b */
#if BIND_git_reference_name_FUNCTION
#define git_reference_name_REQUIRED_ARGC 1
#define git_reference_name_OPTIONAL_ARGC 0
/* git_reference_name
 *
 * Parameters:
 * - ref: const git_reference *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_reference_name(mrb_state* mrb, mrb_value self) {
  mrb_value ref;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ref);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref */
  const git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Invocation */
  const char * native_return_value = git_reference_name(native_ref);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_name_to_id */
/* sha: 70fede8bbc0329f6a01bbb130bf77fbe510dc973de230fb400b14a675c130a8a */
#if BIND_git_reference_name_to_id_FUNCTION
#define git_reference_name_to_id_REQUIRED_ARGC 3
#define git_reference_name_to_id_OPTIONAL_ARGC 0
/* git_reference_name_to_id
 *
 * Parameters:
 * - out: git_oid *
 * - repo: git_repository *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_name_to_id(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value repo;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooz", &out, &repo, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_reference_name_to_id(native_out, native_repo, native_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_next */
/* sha: b7ec74ee0d29d74a06ca3951ecf041c8fe44d36f7bdc9cdbc402ff8a97753b17 */
#if BIND_git_reference_next_FUNCTION
#define git_reference_next_REQUIRED_ARGC 1
#define git_reference_next_OPTIONAL_ARGC 0
/* git_reference_next
 *
 * Parameters:
 * - iter: git_reference_iterator *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_next(mrb_state* mrb, mrb_value self) {
  git_reference * native_out = NULL;
  mrb_value iter;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &iter);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, iter, ReferenceIterator_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ReferenceIterator expected");
    return mrb_nil_value();
  }

  /* Unbox param: iter */
  git_reference_iterator * native_iter = (mrb_nil_p(iter) ? NULL : mruby_unbox_git_reference_iterator(iter));

  /* Invocation */
  int native_return_value = git_reference_next(&native_out, native_iter);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_next_name */
/* sha: cfc940bc4a5ca39c3b1a27eb3788c297d2a68967e28f286a68552ddd0f2168e3 */
#if BIND_git_reference_next_name_FUNCTION
#define git_reference_next_name_REQUIRED_ARGC 1
#define git_reference_next_name_OPTIONAL_ARGC 0
/* git_reference_next_name
 *
 * Parameters:
 * - iter: git_reference_iterator *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_next_name(mrb_state* mrb, mrb_value self) {
  char * native_out = NULL;
  mrb_value iter;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &iter);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, iter, ReferenceIterator_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ReferenceIterator expected");
    return mrb_nil_value();
  }

  /* Unbox param: iter */
  git_reference_iterator * native_iter = (mrb_nil_p(iter) ? NULL : mruby_unbox_git_reference_iterator(iter));

  /* Invocation */
  int native_return_value = git_reference_next_name(&native_out, native_iter);

  /* Box out param: out */
  mrb_value out = native_out ==  NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_normalize_name */
/* sha: 390d6de229d6109e6550920e5157370a4ff4cf3858e90b12e343ab9b3e6b3749 */
#if BIND_git_reference_normalize_name_FUNCTION
#define git_reference_normalize_name_REQUIRED_ARGC 4
#define git_reference_normalize_name_OPTIONAL_ARGC 0
/* git_reference_normalize_name
 *
 * Parameters:
 * - buffer_out: char *
 * - buffer_size: size_t
 * - name: const char *
 * - flags: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_normalize_name(mrb_state* mrb, mrb_value self) {
  mrb_value buffer_out;
  mrb_int native_buffer_size;
  char * native_name = NULL;
  mrb_int native_flags;

  /* Fetch the args */
  mrb_get_args(mrb, "oizi", &buffer_out, &native_buffer_size, &native_name, &native_flags);

  /* Type checking */
  TODO_type_check_char_PTR(buffer_out);

  /* Unbox param: buffer_out */
  char * native_buffer_out = TODO_mruby_unbox_char_PTR(buffer_out);

  /* Invocation */
  int native_return_value = git_reference_normalize_name(native_buffer_out, native_buffer_size, native_name, native_flags);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_owner */
/* sha: 8bdf2641ad6bef2663a1839f835206cf538dbfdfdc97d415b268519eae38bf9a */
#if BIND_git_reference_owner_FUNCTION
#define git_reference_owner_REQUIRED_ARGC 1
#define git_reference_owner_OPTIONAL_ARGC 0
/* git_reference_owner
 *
 * Parameters:
 * - ref: const git_reference *
 * Return Type: git_repository *
 */
mrb_value
mrb_Git_git_reference_owner(mrb_state* mrb, mrb_value self) {
  mrb_value ref;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ref);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref */
  const git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Invocation */
  git_repository * native_return_value = git_reference_owner(native_ref);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_repository(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_peel */
/* sha: a27ecb8d314e236e0c620a86c296da829059b157cf956cc74eb19e73ce031798 */
#if BIND_git_reference_peel_FUNCTION
#define git_reference_peel_REQUIRED_ARGC 2
#define git_reference_peel_OPTIONAL_ARGC 0
/* git_reference_peel
 *
 * Parameters:
 * - ref: git_reference *
 * - type: git_otype
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_peel(mrb_state* mrb, mrb_value self) {
  git_object * native_out = NULL;
  mrb_value ref;
  mrb_int native_type;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &ref, &native_type);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref */
  git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Invocation */
  int native_return_value = git_reference_peel(&native_out, native_ref, native_type);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_object(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_remove */
/* sha: 0e85b0acf5074a73e7de82c677378335c00c2d3b3c7041ae56f4a20250d74203 */
#if BIND_git_reference_remove_FUNCTION
#define git_reference_remove_REQUIRED_ARGC 2
#define git_reference_remove_OPTIONAL_ARGC 0
/* git_reference_remove
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_remove(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_reference_remove(native_repo, native_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_rename */
/* sha: dd0f2a39c423132c607bdf90df7739a106502ea9c0ff431cdd779150cf74190b */
#if BIND_git_reference_rename_FUNCTION
#define git_reference_rename_REQUIRED_ARGC 4
#define git_reference_rename_OPTIONAL_ARGC 0
/* git_reference_rename
 *
 * Parameters:
 * - ref: git_reference *
 * - new_name: const char *
 * - force: int
 * - log_message: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_rename(mrb_state* mrb, mrb_value self) {
  git_reference * native_new_ref = NULL;
  mrb_value ref;
  char * native_new_name = NULL;
  mrb_int native_force;
  char * native_log_message = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oziz", &ref, &native_new_name, &native_force, &native_log_message);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref */
  git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Invocation */
  int native_return_value = git_reference_rename(&native_new_ref, native_ref, native_new_name, native_force, native_log_message);

  /* Box out param: new_ref */
  mrb_value new_ref = native_new_ref == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference(mrb, native_new_ref);

  return new_ref;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_resolve */
/* sha: 28303d624b46970bee296abdf1248609446d1c2f6749a15e5ac5ae23da8ce951 */
#if BIND_git_reference_resolve_FUNCTION
#define git_reference_resolve_REQUIRED_ARGC 1
#define git_reference_resolve_OPTIONAL_ARGC 0
/* git_reference_resolve
 *
 * Parameters:
 * - ref: const git_reference *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_resolve(mrb_state* mrb, mrb_value self) {
  git_reference * native_out = NULL;
  mrb_value ref;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ref);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref */
  const git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Invocation */
  int native_return_value = git_reference_resolve(&native_out, native_ref);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_set_target */
/* sha: 5e7975cd2cc801e3727226ff2a1bfea98a4d0dfea6dea37b2db184c20e968073 */
#if BIND_git_reference_set_target_FUNCTION
#define git_reference_set_target_REQUIRED_ARGC 3
#define git_reference_set_target_OPTIONAL_ARGC 0
/* git_reference_set_target
 *
 * Parameters:
 * - ref: git_reference *
 * - id: const git_oid *
 * - log_message: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_set_target(mrb_state* mrb, mrb_value self) {
  git_reference * native_out = NULL;
  mrb_value ref;
  mrb_value id;
  char * native_log_message = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooz", &ref, &id, &native_log_message);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref */
  git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_reference_set_target(&native_out, native_ref, native_id, native_log_message);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_shorthand */
/* sha: ec09b0964ebccf032de7b0f54b18ed0f6d20ee6ba570fe3321682d8c083b235e */
#if BIND_git_reference_shorthand_FUNCTION
#define git_reference_shorthand_REQUIRED_ARGC 1
#define git_reference_shorthand_OPTIONAL_ARGC 0
/* git_reference_shorthand
 *
 * Parameters:
 * - ref: const git_reference *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_reference_shorthand(mrb_state* mrb, mrb_value self) {
  mrb_value ref;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ref);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref */
  const git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Invocation */
  const char * native_return_value = git_reference_shorthand(native_ref);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_symbolic_create */
/* sha: 86f0d31a9f0f89da132649abdc3173401a7814a8bbd7ada38deacef73de63058 */
#if BIND_git_reference_symbolic_create_FUNCTION
#define git_reference_symbolic_create_REQUIRED_ARGC 5
#define git_reference_symbolic_create_OPTIONAL_ARGC 0
/* git_reference_symbolic_create
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * - target: const char *
 * - force: int
 * - log_message: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_symbolic_create(mrb_state* mrb, mrb_value self) {
  git_reference * native_out = NULL;
  mrb_value repo;
  char * native_name = NULL;
  char * native_target = NULL;
  mrb_int native_force;
  char * native_log_message = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozziz", &repo, &native_name, &native_target, &native_force, &native_log_message);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_reference_symbolic_create(&native_out, native_repo, native_name, native_target, native_force, native_log_message);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_symbolic_create_matching */
/* sha: 390dd8d6465859c6aae3af009c7392bc3e4ed6d9fb3fe43634598cf9efeea83f */
#if BIND_git_reference_symbolic_create_matching_FUNCTION
#define git_reference_symbolic_create_matching_REQUIRED_ARGC 6
#define git_reference_symbolic_create_matching_OPTIONAL_ARGC 0
/* git_reference_symbolic_create_matching
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * - target: const char *
 * - force: int
 * - current_value: const char *
 * - log_message: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_symbolic_create_matching(mrb_state* mrb, mrb_value self) {
  git_reference * native_out = NULL;
  mrb_value repo;
  char * native_name = NULL;
  char * native_target = NULL;
  mrb_int native_force;
  char * native_current_value = NULL;
  char * native_log_message = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozzizz", &repo, &native_name, &native_target, &native_force, &native_current_value, &native_log_message);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_reference_symbolic_create_matching(&native_out, native_repo, native_name, native_target, native_force, native_current_value, native_log_message);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_symbolic_set_target */
/* sha: fc2a6b226059c2546f518e165f937484278c5d107c7cce7d24d0cbd3e30650bc */
#if BIND_git_reference_symbolic_set_target_FUNCTION
#define git_reference_symbolic_set_target_REQUIRED_ARGC 3
#define git_reference_symbolic_set_target_OPTIONAL_ARGC 0
/* git_reference_symbolic_set_target
 *
 * Parameters:
 * - ref: git_reference *
 * - target: const char *
 * - log_message: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reference_symbolic_set_target(mrb_state* mrb, mrb_value self) {
  git_reference * native_out = NULL;
  mrb_value ref;
  char * native_target = NULL;
  char * native_log_message = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozz", &ref, &native_target, &native_log_message);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref */
  git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Invocation */
  int native_return_value = git_reference_symbolic_set_target(&native_out, native_ref, native_target, native_log_message);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_symbolic_target */
/* sha: 5729e9239b98317e5e490b48450984be82ccc9336204ad066ad33fa810de7a5a */
#if BIND_git_reference_symbolic_target_FUNCTION
#define git_reference_symbolic_target_REQUIRED_ARGC 1
#define git_reference_symbolic_target_OPTIONAL_ARGC 0
/* git_reference_symbolic_target
 *
 * Parameters:
 * - ref: const git_reference *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_reference_symbolic_target(mrb_state* mrb, mrb_value self) {
  mrb_value ref;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ref);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref */
  const git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Invocation */
  const char * native_return_value = git_reference_symbolic_target(native_ref);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_target */
/* sha: 064292dc06951b25778ce09bcbc25887d365e887c127d89bb86dcf44b68b2571 */
#if BIND_git_reference_target_FUNCTION
#define git_reference_target_REQUIRED_ARGC 1
#define git_reference_target_OPTIONAL_ARGC 0
/* git_reference_target
 *
 * Parameters:
 * - ref: const git_reference *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_reference_target(mrb_state* mrb, mrb_value self) {
  mrb_value ref;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ref);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref */
  const git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Invocation */
  const git_oid * native_return_value = git_reference_target(native_ref);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_target_peel */
/* sha: 8437bf881541d62a307d06547e44e3405bee86bcf8ffeb01fbf66a9e1acd97f1 */
#if BIND_git_reference_target_peel_FUNCTION
#define git_reference_target_peel_REQUIRED_ARGC 1
#define git_reference_target_peel_OPTIONAL_ARGC 0
/* git_reference_target_peel
 *
 * Parameters:
 * - ref: const git_reference *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_reference_target_peel(mrb_state* mrb, mrb_value self) {
  mrb_value ref;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ref);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref */
  const git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Invocation */
  const git_oid * native_return_value = git_reference_target_peel(native_ref);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reference_type */
/* sha: d56db66d0d25b896e5ecb50c97b2eaf52a69d92ae64787fe0df39ffcc43b61e0 */
#if BIND_git_reference_type_FUNCTION
#define git_reference_type_REQUIRED_ARGC 1
#define git_reference_type_OPTIONAL_ARGC 0
/* git_reference_type
 *
 * Parameters:
 * - ref: const git_reference *
 * Return Type: git_ref_t
 */
mrb_value
mrb_Git_git_reference_type(mrb_state* mrb, mrb_value self) {
  mrb_value ref;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &ref);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, ref, Reference_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reference expected");
    return mrb_nil_value();
  }

  /* Unbox param: ref */
  const git_reference * native_ref = (mrb_nil_p(ref) ? NULL : mruby_unbox_git_reference(ref));

  /* Invocation */
  git_ref_t native_return_value = git_reference_type(native_ref);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reflog_append */
/* sha: 1fcec97d2bc82340f5c3ef4aad7d68e0be27e20fa3d57895a06a3721d8f86681 */
#if BIND_git_reflog_append_FUNCTION
#define git_reflog_append_REQUIRED_ARGC 4
#define git_reflog_append_OPTIONAL_ARGC 0
/* git_reflog_append
 *
 * Parameters:
 * - reflog: git_reflog *
 * - id: const git_oid *
 * - committer: const git_signature *
 * - msg: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reflog_append(mrb_state* mrb, mrb_value self) {
  mrb_value reflog;
  mrb_value id;
  mrb_value committer;
  char * native_msg = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oooz", &reflog, &id, &committer, &native_msg);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, reflog, Reflog_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reflog expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, committer, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }

  /* Unbox param: reflog */
  git_reflog * native_reflog = (mrb_nil_p(reflog) ? NULL : mruby_unbox_git_reflog(reflog));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Unbox param: committer */
  const git_signature * native_committer = (mrb_nil_p(committer) ? NULL : mruby_unbox_git_signature(committer));

  /* Invocation */
  int native_return_value = git_reflog_append(native_reflog, native_id, native_committer, native_msg);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reflog_delete */
/* sha: 349f30cef5508d333a24982d724ffbc8e635e66a4ff0b4ce8113a13cf5d2774e */
#if BIND_git_reflog_delete_FUNCTION
#define git_reflog_delete_REQUIRED_ARGC 2
#define git_reflog_delete_OPTIONAL_ARGC 0
/* git_reflog_delete
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reflog_delete(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_reflog_delete(native_repo, native_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reflog_drop */
/* sha: 2269af1b2aa6890d75f82f444b34f3624e7f9c4c804bdf7e23ea85fb1fb67b3e */
#if BIND_git_reflog_drop_FUNCTION
#define git_reflog_drop_REQUIRED_ARGC 3
#define git_reflog_drop_OPTIONAL_ARGC 0
/* git_reflog_drop
 *
 * Parameters:
 * - reflog: git_reflog *
 * - idx: size_t
 * - rewrite_previous_entry: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_reflog_drop(mrb_state* mrb, mrb_value self) {
  mrb_value reflog;
  mrb_int native_idx;
  mrb_int native_rewrite_previous_entry;

  /* Fetch the args */
  mrb_get_args(mrb, "oii", &reflog, &native_idx, &native_rewrite_previous_entry);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, reflog, Reflog_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reflog expected");
    return mrb_nil_value();
  }

  /* Unbox param: reflog */
  git_reflog * native_reflog = (mrb_nil_p(reflog) ? NULL : mruby_unbox_git_reflog(reflog));

  /* Invocation */
  int native_return_value = git_reflog_drop(native_reflog, native_idx, native_rewrite_previous_entry);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reflog_entry_byindex */
/* sha: b80377c6dce9ae8f43c7bde448c77a1db0c84b4acfe5cd16763ef6cb3e7aea66 */
#if BIND_git_reflog_entry_byindex_FUNCTION
#define git_reflog_entry_byindex_REQUIRED_ARGC 2
#define git_reflog_entry_byindex_OPTIONAL_ARGC 0
/* git_reflog_entry_byindex
 *
 * Parameters:
 * - reflog: const git_reflog *
 * - idx: size_t
 * Return Type: const git_reflog_entry *
 */
mrb_value
mrb_Git_git_reflog_entry_byindex(mrb_state* mrb, mrb_value self) {
  mrb_value reflog;
  mrb_int native_idx;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &reflog, &native_idx);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, reflog, Reflog_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reflog expected");
    return mrb_nil_value();
  }

  /* Unbox param: reflog */
  const git_reflog * native_reflog = (mrb_nil_p(reflog) ? NULL : mruby_unbox_git_reflog(reflog));

  /* Invocation */
  const git_reflog_entry * native_return_value = git_reflog_entry_byindex(native_reflog, native_idx);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_reflog_entry(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reflog_entry_committer */
/* sha: 30aecfb4911f3a543d642893b0a5abeecc0d35125f6d54b0673c035d6687e3c9 */
#if BIND_git_reflog_entry_committer_FUNCTION
#define git_reflog_entry_committer_REQUIRED_ARGC 1
#define git_reflog_entry_committer_OPTIONAL_ARGC 0
/* git_reflog_entry_committer
 *
 * Parameters:
 * - entry: const git_reflog_entry *
 * Return Type: const git_signature *
 */
mrb_value
mrb_Git_git_reflog_entry_committer(mrb_state* mrb, mrb_value self) {
  mrb_value entry;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &entry);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, entry, ReflogEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ReflogEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: entry */
  const git_reflog_entry * native_entry = (mrb_nil_p(entry) ? NULL : mruby_unbox_git_reflog_entry(entry));

  /* Invocation */
  const git_signature * native_return_value = git_reflog_entry_committer(native_entry);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_signature(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reflog_entry_id_new */
/* sha: a15346bdc3926e516d6931003ed649d3c1c03382268037aac9889b71921628d9 */
#if BIND_git_reflog_entry_id_new_FUNCTION
#define git_reflog_entry_id_new_REQUIRED_ARGC 1
#define git_reflog_entry_id_new_OPTIONAL_ARGC 0
/* git_reflog_entry_id_new
 *
 * Parameters:
 * - entry: const git_reflog_entry *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_reflog_entry_id_new(mrb_state* mrb, mrb_value self) {
  mrb_value entry;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &entry);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, entry, ReflogEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ReflogEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: entry */
  const git_reflog_entry * native_entry = (mrb_nil_p(entry) ? NULL : mruby_unbox_git_reflog_entry(entry));

  /* Invocation */
  const git_oid * native_return_value = git_reflog_entry_id_new(native_entry);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reflog_entry_id_old */
/* sha: 70b18790d3ad4a58a7195211a29dd3bf96577f701cc97f9cc870e22986412956 */
#if BIND_git_reflog_entry_id_old_FUNCTION
#define git_reflog_entry_id_old_REQUIRED_ARGC 1
#define git_reflog_entry_id_old_OPTIONAL_ARGC 0
/* git_reflog_entry_id_old
 *
 * Parameters:
 * - entry: const git_reflog_entry *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_reflog_entry_id_old(mrb_state* mrb, mrb_value self) {
  mrb_value entry;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &entry);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, entry, ReflogEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ReflogEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: entry */
  const git_reflog_entry * native_entry = (mrb_nil_p(entry) ? NULL : mruby_unbox_git_reflog_entry(entry));

  /* Invocation */
  const git_oid * native_return_value = git_reflog_entry_id_old(native_entry);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reflog_entry_message */
/* sha: 2bcd630b9f276097bbb254d8c3ea25e89e90bd3c8ad10d568398329ce62920cb */
#if BIND_git_reflog_entry_message_FUNCTION
#define git_reflog_entry_message_REQUIRED_ARGC 1
#define git_reflog_entry_message_OPTIONAL_ARGC 0
/* git_reflog_entry_message
 *
 * Parameters:
 * - entry: const git_reflog_entry *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_reflog_entry_message(mrb_state* mrb, mrb_value self) {
  mrb_value entry;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &entry);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, entry, ReflogEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "ReflogEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: entry */
  const git_reflog_entry * native_entry = (mrb_nil_p(entry) ? NULL : mruby_unbox_git_reflog_entry(entry));

  /* Invocation */
  const char * native_return_value = git_reflog_entry_message(native_entry);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reflog_entrycount */
/* sha: 6058f43eb6160fa05195a85ef01b9c13907ace3aa678990855772af1ac7d8c5a */
#if BIND_git_reflog_entrycount_FUNCTION
#define git_reflog_entrycount_REQUIRED_ARGC 1
#define git_reflog_entrycount_OPTIONAL_ARGC 0
/* git_reflog_entrycount
 *
 * Parameters:
 * - reflog: git_reflog *
 * Return Type: size_t
 */
mrb_value
mrb_Git_git_reflog_entrycount(mrb_state* mrb, mrb_value self) {
  mrb_value reflog;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &reflog);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, reflog, Reflog_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reflog expected");
    return mrb_nil_value();
  }

  /* Unbox param: reflog */
  git_reflog * native_reflog = (mrb_nil_p(reflog) ? NULL : mruby_unbox_git_reflog(reflog));

  /* Invocation */
  size_t native_return_value = git_reflog_entrycount(native_reflog);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reflog_free */
/* sha: 37acbfe82d591233d01e68e3922869ae21a6e94d837e3bf72a1153eb93c87b33 */
#if BIND_git_reflog_free_FUNCTION
#define git_reflog_free_REQUIRED_ARGC 1
#define git_reflog_free_OPTIONAL_ARGC 0
/* git_reflog_free
 *
 * Parameters:
 * - reflog: git_reflog *
 * Return Type: void
 */
mrb_value
mrb_Git_git_reflog_free(mrb_state* mrb, mrb_value self) {
  mrb_value reflog;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &reflog);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, reflog, Reflog_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reflog expected");
    return mrb_nil_value();
  }

  /* Unbox param: reflog */
  git_reflog * native_reflog = (mrb_nil_p(reflog) ? NULL : mruby_unbox_git_reflog(reflog));

  /* Invocation */
  git_reflog_free(native_reflog);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reflog_read */
/* sha: e9a7909d8bfe06305cc9a4b64d3d6196ed8e9e03dcf7bd9cd1c330af9be96390 */
#if BIND_git_reflog_read_FUNCTION
#define git_reflog_read_REQUIRED_ARGC 2
#define git_reflog_read_OPTIONAL_ARGC 0
/* git_reflog_read
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reflog_read(mrb_state* mrb, mrb_value self) {
  git_reflog * native_out = NULL;
  mrb_value repo;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_reflog_read(&native_out, native_repo, native_name);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reflog(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reflog_rename */
/* sha: 58065dec046e729784935269613cb3e3c2d83dc8d6f972f55389bc3e8f792659 */
#if BIND_git_reflog_rename_FUNCTION
#define git_reflog_rename_REQUIRED_ARGC 3
#define git_reflog_rename_OPTIONAL_ARGC 0
/* git_reflog_rename
 *
 * Parameters:
 * - repo: git_repository *
 * - old_name: const char *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reflog_rename(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_old_name = NULL;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozz", &repo, &native_old_name, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_reflog_rename(native_repo, native_old_name, native_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reflog_write */
/* sha: b2d7ae8c37df25909a2ef8c8c00e434d60e9c79a8cb307bdb78c01bb97bf35ce */
#if BIND_git_reflog_write_FUNCTION
#define git_reflog_write_REQUIRED_ARGC 1
#define git_reflog_write_OPTIONAL_ARGC 0
/* git_reflog_write
 *
 * Parameters:
 * - reflog: git_reflog *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reflog_write(mrb_state* mrb, mrb_value self) {
  mrb_value reflog;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &reflog);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, reflog, Reflog_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reflog expected");
    return mrb_nil_value();
  }

  /* Unbox param: reflog */
  git_reflog * native_reflog = (mrb_nil_p(reflog) ? NULL : mruby_unbox_git_reflog(reflog));

  /* Invocation */
  int native_return_value = git_reflog_write(native_reflog);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_refspec_direction */
/* sha: 5c3320d99c939bfb590ea115066a2746bab43083d9b0a232ed112bd57c8569d8 */
#if BIND_git_refspec_direction_FUNCTION
#define git_refspec_direction_REQUIRED_ARGC 1
#define git_refspec_direction_OPTIONAL_ARGC 0
/* git_refspec_direction
 *
 * Parameters:
 * - spec: const git_refspec *
 * Return Type: git_direction
 */
mrb_value
mrb_Git_git_refspec_direction(mrb_state* mrb, mrb_value self) {
  mrb_value spec;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &spec);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, spec, Refspec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Refspec expected");
    return mrb_nil_value();
  }

  /* Unbox param: spec */
  const git_refspec * native_spec = (mrb_nil_p(spec) ? NULL : mruby_unbox_git_refspec(spec));

  /* Invocation */
  git_direction native_return_value = git_refspec_direction(native_spec);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_refspec_dst */
/* sha: c911c03db0542e9ea2453a371cb288d51f5f84351eb8164aeab954b0dc7ac461 */
#if BIND_git_refspec_dst_FUNCTION
#define git_refspec_dst_REQUIRED_ARGC 1
#define git_refspec_dst_OPTIONAL_ARGC 0
/* git_refspec_dst
 *
 * Parameters:
 * - refspec: const git_refspec *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_refspec_dst(mrb_state* mrb, mrb_value self) {
  mrb_value refspec;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &refspec);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, refspec, Refspec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Refspec expected");
    return mrb_nil_value();
  }

  /* Unbox param: refspec */
  const git_refspec * native_refspec = (mrb_nil_p(refspec) ? NULL : mruby_unbox_git_refspec(refspec));

  /* Invocation */
  const char * native_return_value = git_refspec_dst(native_refspec);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_refspec_dst_matches */
/* sha: c406e52831f01b538cbfdb304ada95f1424aa2e20935af94b1b02989a53964e4 */
#if BIND_git_refspec_dst_matches_FUNCTION
#define git_refspec_dst_matches_REQUIRED_ARGC 2
#define git_refspec_dst_matches_OPTIONAL_ARGC 0
/* git_refspec_dst_matches
 *
 * Parameters:
 * - refspec: const git_refspec *
 * - refname: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_refspec_dst_matches(mrb_state* mrb, mrb_value self) {
  mrb_value refspec;
  char * native_refname = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &refspec, &native_refname);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, refspec, Refspec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Refspec expected");
    return mrb_nil_value();
  }

  /* Unbox param: refspec */
  const git_refspec * native_refspec = (mrb_nil_p(refspec) ? NULL : mruby_unbox_git_refspec(refspec));

  /* Invocation */
  int native_return_value = git_refspec_dst_matches(native_refspec, native_refname);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_refspec_force */
/* sha: d9f865f5a70216b07975536111f4376626ab7599077fa61a4010958449cfba0a */
#if BIND_git_refspec_force_FUNCTION
#define git_refspec_force_REQUIRED_ARGC 1
#define git_refspec_force_OPTIONAL_ARGC 0
/* git_refspec_force
 *
 * Parameters:
 * - refspec: const git_refspec *
 * Return Type: int
 */
mrb_value
mrb_Git_git_refspec_force(mrb_state* mrb, mrb_value self) {
  mrb_value refspec;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &refspec);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, refspec, Refspec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Refspec expected");
    return mrb_nil_value();
  }

  /* Unbox param: refspec */
  const git_refspec * native_refspec = (mrb_nil_p(refspec) ? NULL : mruby_unbox_git_refspec(refspec));

  /* Invocation */
  int native_return_value = git_refspec_force(native_refspec);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_refspec_rtransform */
/* sha: 587d98fa1dcbeeafd681848559ab5f3da61248271230bb1cb634ba7c5bfc556d */
#if BIND_git_refspec_rtransform_FUNCTION
#define git_refspec_rtransform_REQUIRED_ARGC 2
#define git_refspec_rtransform_OPTIONAL_ARGC 0
/* git_refspec_rtransform
 *
 * Parameters:
 * - spec: const git_refspec *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_refspec_rtransform(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value spec;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &spec, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, spec, Refspec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Refspec expected");
    return mrb_nil_value();
  }

  /* Unbox param: spec */
  const git_refspec * native_spec = (mrb_nil_p(spec) ? NULL : mruby_unbox_git_refspec(spec));

  /* Invocation */
  int native_return_value = git_refspec_rtransform(native_out, native_spec, native_name);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_refspec_src */
/* sha: ab77aaed716f657f8e95ebe98e6cd16fafcaf6d44c77550e4c5af19ddebd576a */
#if BIND_git_refspec_src_FUNCTION
#define git_refspec_src_REQUIRED_ARGC 1
#define git_refspec_src_OPTIONAL_ARGC 0
/* git_refspec_src
 *
 * Parameters:
 * - refspec: const git_refspec *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_refspec_src(mrb_state* mrb, mrb_value self) {
  mrb_value refspec;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &refspec);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, refspec, Refspec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Refspec expected");
    return mrb_nil_value();
  }

  /* Unbox param: refspec */
  const git_refspec * native_refspec = (mrb_nil_p(refspec) ? NULL : mruby_unbox_git_refspec(refspec));

  /* Invocation */
  const char * native_return_value = git_refspec_src(native_refspec);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_refspec_src_matches */
/* sha: e16ae06f5e0b62281ead54448156c98cdebeaca089adb9a0be97751a8e38e833 */
#if BIND_git_refspec_src_matches_FUNCTION
#define git_refspec_src_matches_REQUIRED_ARGC 2
#define git_refspec_src_matches_OPTIONAL_ARGC 0
/* git_refspec_src_matches
 *
 * Parameters:
 * - refspec: const git_refspec *
 * - refname: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_refspec_src_matches(mrb_state* mrb, mrb_value self) {
  mrb_value refspec;
  char * native_refname = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &refspec, &native_refname);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, refspec, Refspec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Refspec expected");
    return mrb_nil_value();
  }

  /* Unbox param: refspec */
  const git_refspec * native_refspec = (mrb_nil_p(refspec) ? NULL : mruby_unbox_git_refspec(refspec));

  /* Invocation */
  int native_return_value = git_refspec_src_matches(native_refspec, native_refname);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_refspec_string */
/* sha: 420a36f9fe44f661f91ee2eb04c97cc07fe051834a0480b43e0cd9967970a83d */
#if BIND_git_refspec_string_FUNCTION
#define git_refspec_string_REQUIRED_ARGC 1
#define git_refspec_string_OPTIONAL_ARGC 0
/* git_refspec_string
 *
 * Parameters:
 * - refspec: const git_refspec *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_refspec_string(mrb_state* mrb, mrb_value self) {
  mrb_value refspec;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &refspec);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, refspec, Refspec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Refspec expected");
    return mrb_nil_value();
  }

  /* Unbox param: refspec */
  const git_refspec * native_refspec = (mrb_nil_p(refspec) ? NULL : mruby_unbox_git_refspec(refspec));

  /* Invocation */
  const char * native_return_value = git_refspec_string(native_refspec);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_refspec_transform */
/* sha: 9fa4886d81e8ef709214de65b840621413a557e8307c06cba965dffe0ec2f9cd */
#if BIND_git_refspec_transform_FUNCTION
#define git_refspec_transform_REQUIRED_ARGC 2
#define git_refspec_transform_OPTIONAL_ARGC 0
/* git_refspec_transform
 *
 * Parameters:
 * - spec: const git_refspec *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_refspec_transform(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value spec;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &spec, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, spec, Refspec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Refspec expected");
    return mrb_nil_value();
  }

  /* Unbox param: spec */
  const git_refspec * native_spec = (mrb_nil_p(spec) ? NULL : mruby_unbox_git_refspec(spec));

  /* Invocation */
  int native_return_value = git_refspec_transform(native_out, native_spec, native_name);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_add_fetch */
/* sha: 79c20c955def1a47246e9fda493c6f73b3ce681b71ff223a11f4ac9883ab9a03 */
#if BIND_git_remote_add_fetch_FUNCTION
#define git_remote_add_fetch_REQUIRED_ARGC 3
#define git_remote_add_fetch_OPTIONAL_ARGC 0
/* git_remote_add_fetch
 *
 * Parameters:
 * - repo: git_repository *
 * - remote: const char *
 * - refspec: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_add_fetch(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_remote = NULL;
  char * native_refspec = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozz", &repo, &native_remote, &native_refspec);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_remote_add_fetch(native_repo, native_remote, native_refspec);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_add_push */
/* sha: 70a0b76bbd1cbb41483c5691dd29adf1acd685ff572fecdf7ce1be8e884887fe */
#if BIND_git_remote_add_push_FUNCTION
#define git_remote_add_push_REQUIRED_ARGC 3
#define git_remote_add_push_OPTIONAL_ARGC 0
/* git_remote_add_push
 *
 * Parameters:
 * - repo: git_repository *
 * - remote: const char *
 * - refspec: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_add_push(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_remote = NULL;
  char * native_refspec = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozz", &repo, &native_remote, &native_refspec);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_remote_add_push(native_repo, native_remote, native_refspec);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_autotag */
/* sha: bbd8c5cbd61532e3ed6f634920e28a25daa42a761bbc31f3282ec45bbc07b57f */
#if BIND_git_remote_autotag_FUNCTION
#define git_remote_autotag_REQUIRED_ARGC 1
#define git_remote_autotag_OPTIONAL_ARGC 0
/* git_remote_autotag
 *
 * Parameters:
 * - remote: const git_remote *
 * Return Type: git_remote_autotag_option_t
 */
mrb_value
mrb_Git_git_remote_autotag(mrb_state* mrb, mrb_value self) {
  mrb_value remote;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &remote);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  const git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Invocation */
  git_remote_autotag_option_t native_return_value = git_remote_autotag(native_remote);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_connect */
/* sha: 1b50281f77fbb20321e23933897f87322754dcb8a466e03747e2355a827bf326 */
#if BIND_git_remote_connect_FUNCTION
#define git_remote_connect_REQUIRED_ARGC 4
#define git_remote_connect_OPTIONAL_ARGC 0
/* git_remote_connect
 *
 * Parameters:
 * - remote: git_remote *
 * - direction: git_direction
 * - callbacks: const git_remote_callbacks *
 * - custom_headers: const git_strarray *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_connect(mrb_state* mrb, mrb_value self) {
  mrb_value remote;
  mrb_int native_direction;
  mrb_value callbacks;
  mrb_value custom_headers;

  /* Fetch the args */
  mrb_get_args(mrb, "oioo", &remote, &native_direction, &callbacks, &custom_headers);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, callbacks, RemoteCallbacks_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RemoteCallbacks expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, custom_headers, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Unbox param: callbacks */
  const git_remote_callbacks * native_callbacks = (mrb_nil_p(callbacks) ? NULL : mruby_unbox_git_remote_callbacks(callbacks));

  /* Unbox param: custom_headers */
  const git_strarray * native_custom_headers = (mrb_nil_p(custom_headers) ? NULL : mruby_unbox_git_strarray(custom_headers));

  /* Invocation */
  int native_return_value = git_remote_connect(native_remote, native_direction, native_callbacks, native_custom_headers);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_connected */
/* sha: cd8e34ae5e5bea2f51db56f0dcbe1bb6c04fefc643d466a7d6c511838d1cdd9e */
#if BIND_git_remote_connected_FUNCTION
#define git_remote_connected_REQUIRED_ARGC 1
#define git_remote_connected_OPTIONAL_ARGC 0
/* git_remote_connected
 *
 * Parameters:
 * - remote: const git_remote *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_connected(mrb_state* mrb, mrb_value self) {
  mrb_value remote;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &remote);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  const git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Invocation */
  int native_return_value = git_remote_connected(native_remote);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_create */
/* sha: 21ffca0709de2c989a8e932ee77cf489d08572bc0e22fc26b03fd7772c07bc6a */
#if BIND_git_remote_create_FUNCTION
#define git_remote_create_REQUIRED_ARGC 3
#define git_remote_create_OPTIONAL_ARGC 0
/* git_remote_create
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * - url: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_create(mrb_state* mrb, mrb_value self) {
  git_remote * native_out = NULL;
  mrb_value repo;
  char * native_name = NULL;
  char * native_url = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozz", &repo, &native_name, &native_url);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_remote_create(&native_out, native_repo, native_name, native_url);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_remote(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_create_anonymous */
/* sha: 32e8345ebf0b8a354af6fcd559f207ca47843c6ec72f188d27cfb66f141fe5a0 */
#if BIND_git_remote_create_anonymous_FUNCTION
#define git_remote_create_anonymous_REQUIRED_ARGC 2
#define git_remote_create_anonymous_OPTIONAL_ARGC 0
/* git_remote_create_anonymous
 *
 * Parameters:
 * - repo: git_repository *
 * - url: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_create_anonymous(mrb_state* mrb, mrb_value self) {
  git_remote * native_out = NULL;
  mrb_value repo;
  char * native_url = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_url);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_remote_create_anonymous(&native_out, native_repo, native_url);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_remote(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_create_with_fetchspec */
/* sha: 01aa64e803c0e770929ee604bdadbe3682f6a378bd6219c82cbdac4719dac2ca */
#if BIND_git_remote_create_with_fetchspec_FUNCTION
#define git_remote_create_with_fetchspec_REQUIRED_ARGC 4
#define git_remote_create_with_fetchspec_OPTIONAL_ARGC 0
/* git_remote_create_with_fetchspec
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * - url: const char *
 * - fetch: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_create_with_fetchspec(mrb_state* mrb, mrb_value self) {
  git_remote * native_out = NULL;
  mrb_value repo;
  char * native_name = NULL;
  char * native_url = NULL;
  char * native_fetch = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozzz", &repo, &native_name, &native_url, &native_fetch);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_remote_create_with_fetchspec(&native_out, native_repo, native_name, native_url, native_fetch);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_remote(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_default_branch */
/* sha: dcb6a6eea1d61e32487765d256c598b0d12b4870d4643f3b16a8c6ed933ddda8 */
#if BIND_git_remote_default_branch_FUNCTION
#define git_remote_default_branch_REQUIRED_ARGC 1
#define git_remote_default_branch_OPTIONAL_ARGC 0
/* git_remote_default_branch
 *
 * Parameters:
 * - remote: git_remote *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_default_branch(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value remote;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &remote);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Invocation */
  int native_return_value = git_remote_default_branch(native_out, native_remote);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_delete */
/* sha: 8ef575f95737d1d58534059f8ed9c8e490da7c34bcca519fdbfe975c357530ce */
#if BIND_git_remote_delete_FUNCTION
#define git_remote_delete_REQUIRED_ARGC 2
#define git_remote_delete_OPTIONAL_ARGC 0
/* git_remote_delete
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_delete(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_remote_delete(native_repo, native_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_disconnect */
/* sha: 58f2c5af0ca974bf027ddb52549fea5f57f5b32bf401e9ebce2721a7d674b3a9 */
#if BIND_git_remote_disconnect_FUNCTION
#define git_remote_disconnect_REQUIRED_ARGC 1
#define git_remote_disconnect_OPTIONAL_ARGC 0
/* git_remote_disconnect
 *
 * Parameters:
 * - remote: git_remote *
 * Return Type: void
 */
mrb_value
mrb_Git_git_remote_disconnect(mrb_state* mrb, mrb_value self) {
  mrb_value remote;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &remote);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Invocation */
  git_remote_disconnect(native_remote);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_download */
/* sha: a55b2b908d26f3126ed5086f65fe52fafd9fee4a0114ea289d17f5ece40a57cf */
#if BIND_git_remote_download_FUNCTION
#define git_remote_download_REQUIRED_ARGC 3
#define git_remote_download_OPTIONAL_ARGC 0
/* git_remote_download
 *
 * Parameters:
 * - remote: git_remote *
 * - refspecs: const git_strarray *
 * - opts: const git_fetch_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_download(mrb_state* mrb, mrb_value self) {
  mrb_value remote;
  mrb_value refspecs;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &remote, &refspecs, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, refspecs, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, FetchOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FetchOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Unbox param: refspecs */
  const git_strarray * native_refspecs = (mrb_nil_p(refspecs) ? NULL : mruby_unbox_git_strarray(refspecs));

  /* Unbox param: opts */
  const git_fetch_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_fetch_options(opts));

  /* Invocation */
  int native_return_value = git_remote_download(native_remote, native_refspecs, native_opts);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_dup */
/* sha: 62f4dc8f73d0ac19f8a3e6f8ba37df48ce5ffe84b05cc8a8beaf659b1b2e51f9 */
#if BIND_git_remote_dup_FUNCTION
#define git_remote_dup_REQUIRED_ARGC 1
#define git_remote_dup_OPTIONAL_ARGC 0
/* git_remote_dup
 *
 * Parameters:
 * - source: git_remote *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_dup(mrb_state* mrb, mrb_value self) {
  git_remote * native_dest = NULL;
  mrb_value source;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &source);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, source, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }

  /* Unbox param: source */
  git_remote * native_source = (mrb_nil_p(source) ? NULL : mruby_unbox_git_remote(source));

  /* Invocation */
  int native_return_value = git_remote_dup(&native_dest, native_source);

  /* Box out param: dest */
  mrb_value dest = native_dest == NULL ? mrb_nil_value() : mruby_giftwrap_git_remote(mrb, native_dest);

  return dest;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_fetch */
/* sha: ed89602376496806702470ade94f62dcb7b64bf2086eac7d1ccffe6ed2616162 */
#if BIND_git_remote_fetch_FUNCTION
#define git_remote_fetch_REQUIRED_ARGC 4
#define git_remote_fetch_OPTIONAL_ARGC 0
/* git_remote_fetch
 *
 * Parameters:
 * - remote: git_remote *
 * - refspecs: const git_strarray *
 * - opts: const git_fetch_options *
 * - reflog_message: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_fetch(mrb_state* mrb, mrb_value self) {
  mrb_value remote;
  mrb_value refspecs;
  mrb_value opts;
  char * native_reflog_message = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oooz", &remote, &refspecs, &opts, &native_reflog_message);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, refspecs, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, FetchOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FetchOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Unbox param: refspecs */
  const git_strarray * native_refspecs = (mrb_nil_p(refspecs) ? NULL : mruby_unbox_git_strarray(refspecs));

  /* Unbox param: opts */
  const git_fetch_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_fetch_options(opts));

  /* Invocation */
  int native_return_value = git_remote_fetch(native_remote, native_refspecs, native_opts, native_reflog_message);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_free */
/* sha: dfbbe4198662f3dc3d15f38a81c477fb4310c7e35202143626cb34b40ab8c026 */
#if BIND_git_remote_free_FUNCTION
#define git_remote_free_REQUIRED_ARGC 1
#define git_remote_free_OPTIONAL_ARGC 0
/* git_remote_free
 *
 * Parameters:
 * - remote: git_remote *
 * Return Type: void
 */
mrb_value
mrb_Git_git_remote_free(mrb_state* mrb, mrb_value self) {
  mrb_value remote;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &remote);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Invocation */
  git_remote_free(native_remote);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_get_fetch_refspecs */
/* sha: 16f61f6633b7128ab2692560bf954d57a5108f456b4710400b175856f5f132b0 */
#if BIND_git_remote_get_fetch_refspecs_FUNCTION
#define git_remote_get_fetch_refspecs_REQUIRED_ARGC 2
#define git_remote_get_fetch_refspecs_OPTIONAL_ARGC 0
/* git_remote_get_fetch_refspecs
 *
 * Parameters:
 * - array: git_strarray *
 * - remote: const git_remote *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_get_fetch_refspecs(mrb_state* mrb, mrb_value self) {
  mrb_value array;
  mrb_value remote;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &array, &remote);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, array, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }

  /* Unbox param: array */
  git_strarray * native_array = (mrb_nil_p(array) ? NULL : mruby_unbox_git_strarray(array));

  /* Unbox param: remote */
  const git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Invocation */
  int native_return_value = git_remote_get_fetch_refspecs(native_array, native_remote);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_get_push_refspecs */
/* sha: acaa68cd268b4172f0b89a20f60252a1f9eb9cb1207e9aa8de064a1e699d7971 */
#if BIND_git_remote_get_push_refspecs_FUNCTION
#define git_remote_get_push_refspecs_REQUIRED_ARGC 2
#define git_remote_get_push_refspecs_OPTIONAL_ARGC 0
/* git_remote_get_push_refspecs
 *
 * Parameters:
 * - array: git_strarray *
 * - remote: const git_remote *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_get_push_refspecs(mrb_state* mrb, mrb_value self) {
  mrb_value array;
  mrb_value remote;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &array, &remote);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, array, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }

  /* Unbox param: array */
  git_strarray * native_array = (mrb_nil_p(array) ? NULL : mruby_unbox_git_strarray(array));

  /* Unbox param: remote */
  const git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Invocation */
  int native_return_value = git_remote_get_push_refspecs(native_array, native_remote);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_get_refspec */
/* sha: 02af21ea779549dae73de93bcd8e4a1ffa887ace6afca0faac0240fc511b73e8 */
#if BIND_git_remote_get_refspec_FUNCTION
#define git_remote_get_refspec_REQUIRED_ARGC 2
#define git_remote_get_refspec_OPTIONAL_ARGC 0
/* git_remote_get_refspec
 *
 * Parameters:
 * - remote: const git_remote *
 * - n: size_t
 * Return Type: const git_refspec *
 */
mrb_value
mrb_Git_git_remote_get_refspec(mrb_state* mrb, mrb_value self) {
  mrb_value remote;
  mrb_int native_n;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &remote, &native_n);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  const git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Invocation */
  const git_refspec * native_return_value = git_remote_get_refspec(native_remote, native_n);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_refspec(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_init_callbacks */
/* sha: e744361df0ac26abc57ee80270f332ab0d4d8e23ff7f4790ad5062b0b21fa25a */
#if BIND_git_remote_init_callbacks_FUNCTION
#define git_remote_init_callbacks_REQUIRED_ARGC 2
#define git_remote_init_callbacks_OPTIONAL_ARGC 0
/* git_remote_init_callbacks
 *
 * Parameters:
 * - opts: git_remote_callbacks *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_init_callbacks(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, RemoteCallbacks_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RemoteCallbacks expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_remote_callbacks * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_remote_callbacks(opts));

  /* Invocation */
  int native_return_value = git_remote_init_callbacks(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_is_valid_name */
/* sha: d6e1f12aefd3f5f38096ae78cb100b0387dbcda3dc7fb8100dc49a2af1d1d0b0 */
#if BIND_git_remote_is_valid_name_FUNCTION
#define git_remote_is_valid_name_REQUIRED_ARGC 1
#define git_remote_is_valid_name_OPTIONAL_ARGC 0
/* git_remote_is_valid_name
 *
 * Parameters:
 * - remote_name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_is_valid_name(mrb_state* mrb, mrb_value self) {
  char * native_remote_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_remote_name);

  /* Invocation */
  int native_return_value = git_remote_is_valid_name(native_remote_name);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_list */
/* sha: 2535123b240421fdbfe109678525ec814f96eab920e0f084e944569f18c38db2 */
#if BIND_git_remote_list_FUNCTION
#define git_remote_list_REQUIRED_ARGC 2
#define git_remote_list_OPTIONAL_ARGC 0
/* git_remote_list
 *
 * Parameters:
 * - out: git_strarray *
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_list(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &out, &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_strarray * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_strarray(out));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_remote_list(native_out, native_repo);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_lookup */
/* sha: 7bf9e1199a1c65e76d4cafb306395193f52d6cf12da86528fcd4031821dd92bf */
#if BIND_git_remote_lookup_FUNCTION
#define git_remote_lookup_REQUIRED_ARGC 2
#define git_remote_lookup_OPTIONAL_ARGC 0
/* git_remote_lookup
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_lookup(mrb_state* mrb, mrb_value self) {
  git_remote * native_out = NULL;
  mrb_value repo;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_remote_lookup(&native_out, native_repo, native_name);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_remote(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_ls */
/* sha: 37fe3b9198bb754fafda8ea683ce2bb3845e0d60d86bde543e6086f26af22e7e */
#if BIND_git_remote_ls_FUNCTION
#define git_remote_ls_REQUIRED_ARGC 2
#define git_remote_ls_OPTIONAL_ARGC 0
/* git_remote_ls
 *
 * Parameters:
 * - out: const git_remote_head ***
 * - remote: git_remote *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_ls(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  int native_size;
  mrb_value remote;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &out, &remote);

  /* Type checking */
  TODO_type_check_git_remote_head_PTR_PTR_PTR(out);
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  const git_remote_head *** native_out = TODO_mruby_unbox_git_remote_head_PTR_PTR_PTR(out);

  /* Unbox param: remote */
  git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Invocation */
  int native_return_value = git_remote_ls(native_out, &native_size, native_remote);

  /* Box out param: size */
  mrb_value size = mrb_fixnum_value(native_size);

  return size;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_name */
/* sha: d77c09691cfed316276d3bde473c2da5b3030a0315913de7c91d4cd9fade2d35 */
#if BIND_git_remote_name_FUNCTION
#define git_remote_name_REQUIRED_ARGC 1
#define git_remote_name_OPTIONAL_ARGC 0
/* git_remote_name
 *
 * Parameters:
 * - remote: const git_remote *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_remote_name(mrb_state* mrb, mrb_value self) {
  mrb_value remote;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &remote);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  const git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Invocation */
  const char * native_return_value = git_remote_name(native_remote);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_owner */
/* sha: da6aa02801b5718200b6d3c3277931c96671ac4e249f43a6e10895b79043f24d */
#if BIND_git_remote_owner_FUNCTION
#define git_remote_owner_REQUIRED_ARGC 1
#define git_remote_owner_OPTIONAL_ARGC 0
/* git_remote_owner
 *
 * Parameters:
 * - remote: const git_remote *
 * Return Type: git_repository *
 */
mrb_value
mrb_Git_git_remote_owner(mrb_state* mrb, mrb_value self) {
  mrb_value remote;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &remote);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  const git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Invocation */
  git_repository * native_return_value = git_remote_owner(native_remote);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_repository(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_prune */
/* sha: 9f5e701deba659331a06021e36698feb9aaca0aee931d2d1873d5e4c56462900 */
#if BIND_git_remote_prune_FUNCTION
#define git_remote_prune_REQUIRED_ARGC 2
#define git_remote_prune_OPTIONAL_ARGC 0
/* git_remote_prune
 *
 * Parameters:
 * - remote: git_remote *
 * - callbacks: const git_remote_callbacks *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_prune(mrb_state* mrb, mrb_value self) {
  mrb_value remote;
  mrb_value callbacks;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &remote, &callbacks);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, callbacks, RemoteCallbacks_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RemoteCallbacks expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Unbox param: callbacks */
  const git_remote_callbacks * native_callbacks = (mrb_nil_p(callbacks) ? NULL : mruby_unbox_git_remote_callbacks(callbacks));

  /* Invocation */
  int native_return_value = git_remote_prune(native_remote, native_callbacks);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_prune_refs */
/* sha: 65116335714650e85bd450f369944d170238682d29cf136a799394349330e943 */
#if BIND_git_remote_prune_refs_FUNCTION
#define git_remote_prune_refs_REQUIRED_ARGC 1
#define git_remote_prune_refs_OPTIONAL_ARGC 0
/* git_remote_prune_refs
 *
 * Parameters:
 * - remote: const git_remote *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_prune_refs(mrb_state* mrb, mrb_value self) {
  mrb_value remote;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &remote);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  const git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Invocation */
  int native_return_value = git_remote_prune_refs(native_remote);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_push */
/* sha: 1033c35753332c55390d502f4542971cacd2b2523c3e0370f71e5a7bc8a83624 */
#if BIND_git_remote_push_FUNCTION
#define git_remote_push_REQUIRED_ARGC 3
#define git_remote_push_OPTIONAL_ARGC 0
/* git_remote_push
 *
 * Parameters:
 * - remote: git_remote *
 * - refspecs: const git_strarray *
 * - opts: const git_push_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_push(mrb_state* mrb, mrb_value self) {
  mrb_value remote;
  mrb_value refspecs;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &remote, &refspecs, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, refspecs, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, PushOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "PushOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Unbox param: refspecs */
  const git_strarray * native_refspecs = (mrb_nil_p(refspecs) ? NULL : mruby_unbox_git_strarray(refspecs));

  /* Unbox param: opts */
  const git_push_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_push_options(opts));

  /* Invocation */
  int native_return_value = git_remote_push(native_remote, native_refspecs, native_opts);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_pushurl */
/* sha: 4b52e0b378b8c44fe39be1c0456e991e11edcde8cc63767444ecb64183bdb602 */
#if BIND_git_remote_pushurl_FUNCTION
#define git_remote_pushurl_REQUIRED_ARGC 1
#define git_remote_pushurl_OPTIONAL_ARGC 0
/* git_remote_pushurl
 *
 * Parameters:
 * - remote: const git_remote *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_remote_pushurl(mrb_state* mrb, mrb_value self) {
  mrb_value remote;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &remote);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  const git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Invocation */
  const char * native_return_value = git_remote_pushurl(native_remote);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_refspec_count */
/* sha: 518506c97e0971614d325ae406a78e55a1b9fb4bb96be9a1b1a462f9ae920542 */
#if BIND_git_remote_refspec_count_FUNCTION
#define git_remote_refspec_count_REQUIRED_ARGC 1
#define git_remote_refspec_count_OPTIONAL_ARGC 0
/* git_remote_refspec_count
 *
 * Parameters:
 * - remote: const git_remote *
 * Return Type: size_t
 */
mrb_value
mrb_Git_git_remote_refspec_count(mrb_state* mrb, mrb_value self) {
  mrb_value remote;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &remote);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  const git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Invocation */
  size_t native_return_value = git_remote_refspec_count(native_remote);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_rename */
/* sha: cd7f47dd02ff0ea38a5a3c3e37b8de6b150d5b8ed12a956b31a557a2a06ab2a3 */
#if BIND_git_remote_rename_FUNCTION
#define git_remote_rename_REQUIRED_ARGC 4
#define git_remote_rename_OPTIONAL_ARGC 0
/* git_remote_rename
 *
 * Parameters:
 * - problems: git_strarray *
 * - repo: git_repository *
 * - name: const char *
 * - new_name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_rename(mrb_state* mrb, mrb_value self) {
  mrb_value problems;
  mrb_value repo;
  char * native_name = NULL;
  char * native_new_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oozz", &problems, &repo, &native_name, &native_new_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, problems, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: problems */
  git_strarray * native_problems = (mrb_nil_p(problems) ? NULL : mruby_unbox_git_strarray(problems));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_remote_rename(native_problems, native_repo, native_name, native_new_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_set_autotag */
/* sha: df095768131d530ef33d1b610e94b9477b8f7dd3c1969167686769dbfc294cde */
#if BIND_git_remote_set_autotag_FUNCTION
#define git_remote_set_autotag_REQUIRED_ARGC 3
#define git_remote_set_autotag_OPTIONAL_ARGC 0
/* git_remote_set_autotag
 *
 * Parameters:
 * - repo: git_repository *
 * - remote: const char *
 * - value: git_remote_autotag_option_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_set_autotag(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_remote = NULL;
  mrb_int native_value;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &repo, &native_remote, &native_value);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_remote_set_autotag(native_repo, native_remote, native_value);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_set_pushurl */
/* sha: 9452714ee7acc8d21e3f5ab7b9e3bc056b2ad447031ae3c9ac07d4750d88f300 */
#if BIND_git_remote_set_pushurl_FUNCTION
#define git_remote_set_pushurl_REQUIRED_ARGC 3
#define git_remote_set_pushurl_OPTIONAL_ARGC 0
/* git_remote_set_pushurl
 *
 * Parameters:
 * - repo: git_repository *
 * - remote: const char *
 * - url: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_set_pushurl(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_remote = NULL;
  char * native_url = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozz", &repo, &native_remote, &native_url);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_remote_set_pushurl(native_repo, native_remote, native_url);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_set_url */
/* sha: 54934931c02ed0dd14081619d9756d25c13117e1974bc31a3eaa7de3cf53923f */
#if BIND_git_remote_set_url_FUNCTION
#define git_remote_set_url_REQUIRED_ARGC 3
#define git_remote_set_url_OPTIONAL_ARGC 0
/* git_remote_set_url
 *
 * Parameters:
 * - repo: git_repository *
 * - remote: const char *
 * - url: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_set_url(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_remote = NULL;
  char * native_url = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozz", &repo, &native_remote, &native_url);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_remote_set_url(native_repo, native_remote, native_url);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_stats */
/* sha: b5bdf9dc2c97b5a86a5411694dd0422d350b900546de391dc360442fe35c8a70 */
#if BIND_git_remote_stats_FUNCTION
#define git_remote_stats_REQUIRED_ARGC 1
#define git_remote_stats_OPTIONAL_ARGC 0
/* git_remote_stats
 *
 * Parameters:
 * - remote: git_remote *
 * Return Type: const git_transfer_progress *
 */
mrb_value
mrb_Git_git_remote_stats(mrb_state* mrb, mrb_value self) {
  mrb_value remote;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &remote);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Invocation */
  const git_transfer_progress * native_return_value = git_remote_stats(native_remote);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_transfer_progress(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_stop */
/* sha: 635ac15a912f4c25b60879e1ebddc5ffcf5bf4b6e5fcdd2a8d415109fde804b7 */
#if BIND_git_remote_stop_FUNCTION
#define git_remote_stop_REQUIRED_ARGC 1
#define git_remote_stop_OPTIONAL_ARGC 0
/* git_remote_stop
 *
 * Parameters:
 * - remote: git_remote *
 * Return Type: void
 */
mrb_value
mrb_Git_git_remote_stop(mrb_state* mrb, mrb_value self) {
  mrb_value remote;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &remote);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Invocation */
  git_remote_stop(native_remote);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_update_tips */
/* sha: 59911ea316886867ea0175b244f371019dba69641a9d55eaa3e61fa0102a4802 */
#if BIND_git_remote_update_tips_FUNCTION
#define git_remote_update_tips_REQUIRED_ARGC 5
#define git_remote_update_tips_OPTIONAL_ARGC 0
/* git_remote_update_tips
 *
 * Parameters:
 * - remote: git_remote *
 * - callbacks: const git_remote_callbacks *
 * - update_fetchhead: int
 * - download_tags: git_remote_autotag_option_t
 * - reflog_message: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_update_tips(mrb_state* mrb, mrb_value self) {
  mrb_value remote;
  mrb_value callbacks;
  mrb_int native_update_fetchhead;
  mrb_int native_download_tags;
  char * native_reflog_message = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooiiz", &remote, &callbacks, &native_update_fetchhead, &native_download_tags, &native_reflog_message);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, callbacks, RemoteCallbacks_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RemoteCallbacks expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Unbox param: callbacks */
  const git_remote_callbacks * native_callbacks = (mrb_nil_p(callbacks) ? NULL : mruby_unbox_git_remote_callbacks(callbacks));

  /* Invocation */
  int native_return_value = git_remote_update_tips(native_remote, native_callbacks, native_update_fetchhead, native_download_tags, native_reflog_message);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_upload */
/* sha: 2917256fe834615ca4447911f3fd57a95500103987e933aeb5887f4988da5aa8 */
#if BIND_git_remote_upload_FUNCTION
#define git_remote_upload_REQUIRED_ARGC 3
#define git_remote_upload_OPTIONAL_ARGC 0
/* git_remote_upload
 *
 * Parameters:
 * - remote: git_remote *
 * - refspecs: const git_strarray *
 * - opts: const git_push_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_remote_upload(mrb_state* mrb, mrb_value self) {
  mrb_value remote;
  mrb_value refspecs;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &remote, &refspecs, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, refspecs, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, PushOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "PushOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Unbox param: refspecs */
  const git_strarray * native_refspecs = (mrb_nil_p(refspecs) ? NULL : mruby_unbox_git_strarray(refspecs));

  /* Unbox param: opts */
  const git_push_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_push_options(opts));

  /* Invocation */
  int native_return_value = git_remote_upload(native_remote, native_refspecs, native_opts);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_remote_url */
/* sha: b41eea3d5b787b6cc32d6a360d8248d4e1171ac054af5bfc06b2b800fc7f5564 */
#if BIND_git_remote_url_FUNCTION
#define git_remote_url_REQUIRED_ARGC 1
#define git_remote_url_OPTIONAL_ARGC 0
/* git_remote_url
 *
 * Parameters:
 * - remote: const git_remote *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_remote_url(mrb_state* mrb, mrb_value self) {
  mrb_value remote;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &remote);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, remote, Remote_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Remote expected");
    return mrb_nil_value();
  }

  /* Unbox param: remote */
  const git_remote * native_remote = (mrb_nil_p(remote) ? NULL : mruby_unbox_git_remote(remote));

  /* Invocation */
  const char * native_return_value = git_remote_url(native_remote);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_config */
/* sha: c8e49ff90fc788cf2bbb60caa1a6898ed4f5a98af5f3ddfda34094b88853fd7d */
#if BIND_git_repository_config_FUNCTION
#define git_repository_config_REQUIRED_ARGC 1
#define git_repository_config_OPTIONAL_ARGC 0
/* git_repository_config
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_config(mrb_state* mrb, mrb_value self) {
  git_config * native_out = NULL;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_config(&native_out, native_repo);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_config(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_config_snapshot */
/* sha: 6c350557f79dac63894257bdfbd0d6c276dca8150fe98e7f498d07b9228c8e3e */
#if BIND_git_repository_config_snapshot_FUNCTION
#define git_repository_config_snapshot_REQUIRED_ARGC 1
#define git_repository_config_snapshot_OPTIONAL_ARGC 0
/* git_repository_config_snapshot
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_config_snapshot(mrb_state* mrb, mrb_value self) {
  git_config * native_out = NULL;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_config_snapshot(&native_out, native_repo);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_config(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_detach_head */
/* sha: 460dedc343e44512d0b0eae257d0a8961262b12f880ec54653032a489b3c4bd1 */
#if BIND_git_repository_detach_head_FUNCTION
#define git_repository_detach_head_REQUIRED_ARGC 1
#define git_repository_detach_head_OPTIONAL_ARGC 0
/* git_repository_detach_head
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_detach_head(mrb_state* mrb, mrb_value self) {
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_detach_head(native_repo);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_discover */
/* sha: 67f89cfd8cc4e41612a2b7e803eb07887f49e65ed900281377374f36acd6b9c0 */
#if BIND_git_repository_discover_FUNCTION
#define git_repository_discover_REQUIRED_ARGC 3
#define git_repository_discover_OPTIONAL_ARGC 0
/* git_repository_discover
 *
 * Parameters:
 * - start_path: const char *
 * - across_fs: int
 * - ceiling_dirs: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_discover(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  char * native_start_path = NULL;
  mrb_int native_across_fs;
  char * native_ceiling_dirs = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ziz", &native_start_path, &native_across_fs, &native_ceiling_dirs);

  /* Invocation */
  int native_return_value = git_repository_discover(native_out, native_start_path, native_across_fs, native_ceiling_dirs);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_fetchhead_foreach */
/* sha: 3ef57a790fe9f488ab6d8c7c693dfcbaa30814e113644f90c470e9f45c430001 */
#if BIND_git_repository_fetchhead_foreach_FUNCTION
#define git_repository_fetchhead_foreach_REQUIRED_ARGC 3
#define git_repository_fetchhead_foreach_OPTIONAL_ARGC 0
/* git_repository_fetchhead_foreach
 *
 * Parameters:
 * - repo: git_repository *
 * - callback: git_repository_fetchhead_foreach_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_fetchhead_foreach(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &repo, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_repository_fetchhead_foreach_cb(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: callback */
  git_repository_fetchhead_foreach_cb native_callback = TODO_mruby_unbox_git_repository_fetchhead_foreach_cb(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_repository_fetchhead_foreach(native_repo, native_callback, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_free */
/* sha: 0b9e2daeeb2f198f45486ad4b9c0c5e7193e8a10a8227930403b06147e3732b6 */
#if BIND_git_repository_free_FUNCTION
#define git_repository_free_REQUIRED_ARGC 1
#define git_repository_free_OPTIONAL_ARGC 0
/* git_repository_free
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: void
 */
mrb_value
mrb_Git_git_repository_free(mrb_state* mrb, mrb_value self) {
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  git_repository_free(native_repo);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_get_namespace */
/* sha: d83bd5e8f93eab4b5a5dfefbe55140b8fc7f6775eac6a89c8e30da1a481f3460 */
#if BIND_git_repository_get_namespace_FUNCTION
#define git_repository_get_namespace_REQUIRED_ARGC 1
#define git_repository_get_namespace_OPTIONAL_ARGC 0
/* git_repository_get_namespace
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_repository_get_namespace(mrb_state* mrb, mrb_value self) {
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  const char * native_return_value = git_repository_get_namespace(native_repo);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_hashfile */
/* sha: d0ca6ea464bf231f38225a2fe19f3adeab9c2e760ab404b988ec9edaae177150 */
#if BIND_git_repository_hashfile_FUNCTION
#define git_repository_hashfile_REQUIRED_ARGC 5
#define git_repository_hashfile_OPTIONAL_ARGC 0
/* git_repository_hashfile
 *
 * Parameters:
 * - out: git_oid *
 * - repo: git_repository *
 * - path: const char *
 * - type: git_otype
 * - as_path: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_hashfile(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value repo;
  char * native_path = NULL;
  mrb_int native_type;
  char * native_as_path = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooziz", &out, &repo, &native_path, &native_type, &native_as_path);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_hashfile(native_out, native_repo, native_path, native_type, native_as_path);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_head */
/* sha: d0fdb7b8f702a8abf13e7f7be4f0b248261886ee1fe3ba2b147b408c1a3dacdd */
#if BIND_git_repository_head_FUNCTION
#define git_repository_head_REQUIRED_ARGC 1
#define git_repository_head_OPTIONAL_ARGC 0
/* git_repository_head
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_head(mrb_state* mrb, mrb_value self) {
  git_reference * native_out = NULL;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_head(&native_out, native_repo);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_head_detached */
/* sha: 831ca1435d5816f1055cac1183bfee1578a2f24e489fe4767b5ad5df992ab1a0 */
#if BIND_git_repository_head_detached_FUNCTION
#define git_repository_head_detached_REQUIRED_ARGC 1
#define git_repository_head_detached_OPTIONAL_ARGC 0
/* git_repository_head_detached
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_head_detached(mrb_state* mrb, mrb_value self) {
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_head_detached(native_repo);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_head_unborn */
/* sha: dc524de86915875485ae7ce2479080d3d789c8582b61c09e60722ee975edfe03 */
#if BIND_git_repository_head_unborn_FUNCTION
#define git_repository_head_unborn_REQUIRED_ARGC 1
#define git_repository_head_unborn_OPTIONAL_ARGC 0
/* git_repository_head_unborn
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_head_unborn(mrb_state* mrb, mrb_value self) {
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_head_unborn(native_repo);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_ident */
/* sha: c89be872283a3ddafc05815c51bb7efd0145d700573fe3b98e639f953258a085 */
#if BIND_git_repository_ident_FUNCTION
#define git_repository_ident_REQUIRED_ARGC 1
#define git_repository_ident_OPTIONAL_ARGC 0
/* git_repository_ident
 *
 * Parameters:
 * - repo: const git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_ident(mrb_state* mrb, mrb_value self) {
  mrb_value results = mrb_ary_new(mrb);
  char * native_name = NULL;
  char * native_email = NULL;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  const git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_ident(&native_name, &native_email, native_repo);

  /* Box out param: name */
  mrb_value name = native_name ==  NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_name);
  /* Box out param: email */
  mrb_value email = native_email ==  NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_email);

  /* Add out params to results */
  mrb_ary_push(mrb, results, name);
  mrb_ary_push(mrb, results, email);

  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_index */
/* sha: 606019b9887dcd7a571753afe5c85827905ebc225f5972091d02df4d89898a71 */
#if BIND_git_repository_index_FUNCTION
#define git_repository_index_REQUIRED_ARGC 1
#define git_repository_index_OPTIONAL_ARGC 0
/* git_repository_index
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_index(mrb_state* mrb, mrb_value self) {
  git_index * native_out = NULL;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_index(&native_out, native_repo);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_index(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_init */
/* sha: 7715b5970a6983ecc4f008d7cf049b64c14b21f783457a5b4fa993deeaded328 */
#if BIND_git_repository_init_FUNCTION
#define git_repository_init_REQUIRED_ARGC 2
#define git_repository_init_OPTIONAL_ARGC 0
/* git_repository_init
 *
 * Parameters:
 * - path: const char *
 * - is_bare: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_init(mrb_state* mrb, mrb_value self) {
  mrb_value results = mrb_ary_new(mrb);
  git_repository * native_out = NULL;
  char * native_path = NULL;
  mrb_value is_bare;
  int native_is_bare;

  /* Fetch the args */
  mrb_get_args(mrb, "zo", &native_path, &is_bare);
  
  native_is_bare = mrb_test(is_bare);

  /* Invocation */
  int native_return_value = git_repository_init(&native_out, native_path, native_is_bare);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  mrb_ary_push(mrb, results, return_value);
  
  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_repository(mrb, native_out);

  /* Add out params to results */
  mrb_ary_push(mrb, results, out);

  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_init_ext */
/* sha: 1fe283c8862a1cb59e70ffed1be989d78ff38d9bfc3a38933cde725b7f184b9c */
#if BIND_git_repository_init_ext_FUNCTION
#define git_repository_init_ext_REQUIRED_ARGC 2
#define git_repository_init_ext_OPTIONAL_ARGC 0
/* git_repository_init_ext
 *
 * Parameters:
 * - repo_path: const char *
 * - opts: git_repository_init_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_init_ext(mrb_state* mrb, mrb_value self) {
  git_repository * native_out = NULL;
  char * native_repo_path = NULL;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "zo", &native_repo_path, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, RepositoryInitOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RepositoryInitOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_repository_init_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_repository_init_options(opts));

  /* Invocation */
  int native_return_value = git_repository_init_ext(&native_out, native_repo_path, native_opts);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_repository(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_init_init_options */
/* sha: 789f7000316784a21c93f740208fbacefdc3a4d2b0d3a9d0e1e651645485ce80 */
#if BIND_git_repository_init_init_options_FUNCTION
#define git_repository_init_init_options_REQUIRED_ARGC 2
#define git_repository_init_init_options_OPTIONAL_ARGC 0
/* git_repository_init_init_options
 *
 * Parameters:
 * - opts: git_repository_init_options *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_init_init_options(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, RepositoryInitOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RepositoryInitOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_repository_init_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_repository_init_options(opts));

  /* Invocation */
  int native_return_value = git_repository_init_init_options(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_is_bare */
/* sha: 779b7d8874d292f5343ecd8ee1497be6cb09086391db0a913c806299a7bca431 */
#if BIND_git_repository_is_bare_FUNCTION
#define git_repository_is_bare_REQUIRED_ARGC 1
#define git_repository_is_bare_OPTIONAL_ARGC 0
/* git_repository_is_bare
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_is_bare(mrb_state* mrb, mrb_value self) {
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_is_bare(native_repo);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_is_empty */
/* sha: 9aa4bbe40dcbd1149b7a71420adaca27317c6b0cd92e1b1073285fc7c1c764f7 */
#if BIND_git_repository_is_empty_FUNCTION
#define git_repository_is_empty_REQUIRED_ARGC 1
#define git_repository_is_empty_OPTIONAL_ARGC 0
/* git_repository_is_empty
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_is_empty(mrb_state* mrb, mrb_value self) {
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_is_empty(native_repo);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_is_shallow */
/* sha: 6b8f2cc109f633d3bba86e0577923f469b4cdd3ed69cfcbfa7a4b9c27061f1d2 */
#if BIND_git_repository_is_shallow_FUNCTION
#define git_repository_is_shallow_REQUIRED_ARGC 1
#define git_repository_is_shallow_OPTIONAL_ARGC 0
/* git_repository_is_shallow
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_is_shallow(mrb_state* mrb, mrb_value self) {
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_is_shallow(native_repo);

  /* Box the return value */
  mrb_value return_value = mrb_bool_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_mergehead_foreach */
/* sha: f24b182017e6eddb28e59696ccd8d25b21aa89c31836f7cbdcae140ace22fcc3 */
#if BIND_git_repository_mergehead_foreach_FUNCTION
#define git_repository_mergehead_foreach_REQUIRED_ARGC 3
#define git_repository_mergehead_foreach_OPTIONAL_ARGC 0
/* git_repository_mergehead_foreach
 *
 * Parameters:
 * - repo: git_repository *
 * - callback: git_repository_mergehead_foreach_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_mergehead_foreach(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &repo, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_repository_mergehead_foreach_cb(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: callback */
  git_repository_mergehead_foreach_cb native_callback = TODO_mruby_unbox_git_repository_mergehead_foreach_cb(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_repository_mergehead_foreach(native_repo, native_callback, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_message */
/* sha: fb9a3e0fd1b2a7b47ba792f85d3cb93110595ae40579720b0b855b7cc55f5ad2 */
#if BIND_git_repository_message_FUNCTION
#define git_repository_message_REQUIRED_ARGC 1
#define git_repository_message_OPTIONAL_ARGC 0
/* git_repository_message
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_message(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_message(native_out, native_repo);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_message_remove */
/* sha: c968bcbfb57ea0361b73ac229725ca26d8e4a520e6c0b21a312056275e1ca468 */
#if BIND_git_repository_message_remove_FUNCTION
#define git_repository_message_remove_REQUIRED_ARGC 1
#define git_repository_message_remove_OPTIONAL_ARGC 0
/* git_repository_message_remove
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_message_remove(mrb_state* mrb, mrb_value self) {
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_message_remove(native_repo);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_odb */
/* sha: edce355da2a58a670f7edd08293cff2f2cc9cff3900105433367ca467112d94e */
#if BIND_git_repository_odb_FUNCTION
#define git_repository_odb_REQUIRED_ARGC 1
#define git_repository_odb_OPTIONAL_ARGC 0
/* git_repository_odb
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_odb(mrb_state* mrb, mrb_value self) {
  git_odb * native_out = NULL;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_odb(&native_out, native_repo);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_odb(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_open */
/* sha: df5f79b3d89c68e41ab532651e89182d2587ade256d2137859dc7f87f6bea9f6 */
#if BIND_git_repository_open_FUNCTION
#define git_repository_open_REQUIRED_ARGC 1
#define git_repository_open_OPTIONAL_ARGC 0
/* git_repository_open
 *
 * Parameters:
 * - path: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_open(mrb_state* mrb, mrb_value self) {
  git_repository * native_out = NULL;
  char * native_path = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_path);

  /* Invocation */
  int native_return_value = git_repository_open(&native_out, native_path);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_repository(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_open_bare */
/* sha: d3cf04dac6d0995d970c1e26b0dc1861c2b3fc4da500c9c46cbfcc190b45da06 */
#if BIND_git_repository_open_bare_FUNCTION
#define git_repository_open_bare_REQUIRED_ARGC 1
#define git_repository_open_bare_OPTIONAL_ARGC 0
/* git_repository_open_bare
 *
 * Parameters:
 * - bare_path: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_open_bare(mrb_state* mrb, mrb_value self) {
  git_repository * native_out = NULL;
  char * native_bare_path = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "z", &native_bare_path);

  /* Invocation */
  int native_return_value = git_repository_open_bare(&native_out, native_bare_path);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_repository(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_open_ext */
/* sha: a86c404cb877d9452cc66df45ae6b0632d624c7fd9f17159b1ac14aea32ee9df */
#if BIND_git_repository_open_ext_FUNCTION
#define git_repository_open_ext_REQUIRED_ARGC 2
#define git_repository_open_ext_OPTIONAL_ARGC 1
/* git_repository_open_ext
 *
 * Parameters:
 * - path: const char *
 * - flags: unsigned int
 * - ceiling_dirs: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_open_ext(mrb_state* mrb, mrb_value self) {
  mrb_value results = mrb_ary_new(mrb);
  git_repository * native_out = NULL;
  char * native_path = NULL;
  mrb_int native_flags;
  char * native_ceiling_dirs = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "zi|z", &native_path, &native_flags, &native_ceiling_dirs);

  /* Invocation */
  int native_return_value = git_repository_open_ext(&native_out, native_path, native_flags, native_ceiling_dirs);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  mrb_ary_push(mrb, results, return_value);
  
  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_repository(mrb, native_out);

  /* Add out params to results */
  mrb_ary_push(mrb, results, out);

  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_path */
/* sha: 88fa0935245a2190d257f38feef8cfae64952fbb870af4b43ff44ced4a0e6331 */
#if BIND_git_repository_path_FUNCTION
#define git_repository_path_REQUIRED_ARGC 1
#define git_repository_path_OPTIONAL_ARGC 0
/* git_repository_path
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_repository_path(mrb_state* mrb, mrb_value self) {
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  const char * native_return_value = git_repository_path(native_repo);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_refdb */
/* sha: 9da46feabb388f64e980ea6960896f4caf5e95c5de14ba3c1221b047a7eee8ed */
#if BIND_git_repository_refdb_FUNCTION
#define git_repository_refdb_REQUIRED_ARGC 1
#define git_repository_refdb_OPTIONAL_ARGC 0
/* git_repository_refdb
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_refdb(mrb_state* mrb, mrb_value self) {
  git_refdb * native_out = NULL;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_refdb(&native_out, native_repo);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_refdb(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_set_head */
/* sha: 940a3efd621c799d155e63aeae814c5dd487ea0f0af64b107008c1113b9f1b63 */
#if BIND_git_repository_set_head_FUNCTION
#define git_repository_set_head_REQUIRED_ARGC 2
#define git_repository_set_head_OPTIONAL_ARGC 0
/* git_repository_set_head
 *
 * Parameters:
 * - repo: git_repository *
 * - refname: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_set_head(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_refname = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_refname);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_set_head(native_repo, native_refname);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_set_head_detached */
/* sha: f2e5c4fb84d9e7a3cd498a31c75c9b784ef650318fc662f6213f69fd774efc31 */
#if BIND_git_repository_set_head_detached_FUNCTION
#define git_repository_set_head_detached_REQUIRED_ARGC 2
#define git_repository_set_head_detached_OPTIONAL_ARGC 0
/* git_repository_set_head_detached
 *
 * Parameters:
 * - repo: git_repository *
 * - commitish: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_set_head_detached(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value commitish;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &repo, &commitish);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, commitish, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: commitish */
  const git_oid * native_commitish = (mrb_nil_p(commitish) ? NULL : mruby_unbox_git_oid(commitish));

  /* Invocation */
  int native_return_value = git_repository_set_head_detached(native_repo, native_commitish);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_set_head_detached_from_annotated */
/* sha: 3a57d6fd516a4955d0eba4acf507cd458aa04658c708dd34f4cd3b13bfd3602b */
#if BIND_git_repository_set_head_detached_from_annotated_FUNCTION
#define git_repository_set_head_detached_from_annotated_REQUIRED_ARGC 2
#define git_repository_set_head_detached_from_annotated_OPTIONAL_ARGC 0
/* git_repository_set_head_detached_from_annotated
 *
 * Parameters:
 * - repo: git_repository *
 * - commitish: const git_annotated_commit *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_set_head_detached_from_annotated(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value commitish;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &repo, &commitish);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, commitish, AnnotatedCommit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "AnnotatedCommit expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: commitish */
  const git_annotated_commit * native_commitish = (mrb_nil_p(commitish) ? NULL : mruby_unbox_git_annotated_commit(commitish));

  /* Invocation */
  int native_return_value = git_repository_set_head_detached_from_annotated(native_repo, native_commitish);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_set_ident */
/* sha: f4d714c948d2afabfa2ae92cf3923aacae2e63925fb845e1a58ec6061354df5e */
#if BIND_git_repository_set_ident_FUNCTION
#define git_repository_set_ident_REQUIRED_ARGC 3
#define git_repository_set_ident_OPTIONAL_ARGC 0
/* git_repository_set_ident
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * - email: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_set_ident(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_name = NULL;
  char * native_email = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozz", &repo, &native_name, &native_email);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_set_ident(native_repo, native_name, native_email);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_set_namespace */
/* sha: 0510dd146c49396c48ecdd259a618cc424a6322ee031aca638b30e53c62dda1c */
#if BIND_git_repository_set_namespace_FUNCTION
#define git_repository_set_namespace_REQUIRED_ARGC 2
#define git_repository_set_namespace_OPTIONAL_ARGC 0
/* git_repository_set_namespace
 *
 * Parameters:
 * - repo: git_repository *
 * - nmspace: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_set_namespace(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_nmspace = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_nmspace);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_set_namespace(native_repo, native_nmspace);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_set_workdir */
/* sha: da711cb96ac5afb49e37b498968e2628b19c4054fabe95e1c4ce9b6088bb7fb6 */
#if BIND_git_repository_set_workdir_FUNCTION
#define git_repository_set_workdir_REQUIRED_ARGC 3
#define git_repository_set_workdir_OPTIONAL_ARGC 0
/* git_repository_set_workdir
 *
 * Parameters:
 * - repo: git_repository *
 * - workdir: const char *
 * - update_gitlink: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_set_workdir(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_workdir = NULL;
  mrb_int native_update_gitlink;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &repo, &native_workdir, &native_update_gitlink);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_set_workdir(native_repo, native_workdir, native_update_gitlink);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_state */
/* sha: fe390c57a2d0361409659bce8e2cde2d5db06a16bc9b4082966af3c0534b7740 */
#if BIND_git_repository_state_FUNCTION
#define git_repository_state_REQUIRED_ARGC 1
#define git_repository_state_OPTIONAL_ARGC 0
/* git_repository_state
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_state(mrb_state* mrb, mrb_value self) {
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_state(native_repo);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_state_cleanup */
/* sha: 679180dff0ed528f69c8c141fb6612e68d492fd20bc3a90a5a40637c20433eaa */
#if BIND_git_repository_state_cleanup_FUNCTION
#define git_repository_state_cleanup_REQUIRED_ARGC 1
#define git_repository_state_cleanup_OPTIONAL_ARGC 0
/* git_repository_state_cleanup
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_state_cleanup(mrb_state* mrb, mrb_value self) {
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_repository_state_cleanup(native_repo);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_workdir */
/* sha: f18c5e76df2aa2dc1907cc85a5276ad8d6be2608791716978933e74c1c3ea128 */
#if BIND_git_repository_workdir_FUNCTION
#define git_repository_workdir_REQUIRED_ARGC 1
#define git_repository_workdir_OPTIONAL_ARGC 0
/* git_repository_workdir
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_repository_workdir(mrb_state* mrb, mrb_value self) {
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  const char * native_return_value = git_repository_workdir(native_repo);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_repository_wrap_odb */
/* sha: 59eb11988a0636958ccf941b1055d689f5b49bdea3749ca72980a2707712cd5d */
#if BIND_git_repository_wrap_odb_FUNCTION
#define git_repository_wrap_odb_REQUIRED_ARGC 1
#define git_repository_wrap_odb_OPTIONAL_ARGC 0
/* git_repository_wrap_odb
 *
 * Parameters:
 * - odb: git_odb *
 * Return Type: int
 */
mrb_value
mrb_Git_git_repository_wrap_odb(mrb_state* mrb, mrb_value self) {
  git_repository * native_out = NULL;
  mrb_value odb;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &odb);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, odb, Odb_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Odb expected");
    return mrb_nil_value();
  }

  /* Unbox param: odb */
  git_odb * native_odb = (mrb_nil_p(odb) ? NULL : mruby_unbox_git_odb(odb));

  /* Invocation */
  int native_return_value = git_repository_wrap_odb(&native_out, native_odb);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_repository(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reset */
/* sha: 291fc6f7b26e548049c16b9cff800d3d89853baa751b94d1d3f434f9d670925b */
#if BIND_git_reset_FUNCTION
#define git_reset_REQUIRED_ARGC 4
#define git_reset_OPTIONAL_ARGC 0
/* git_reset
 *
 * Parameters:
 * - repo: git_repository *
 * - target: git_object *
 * - reset_type: git_reset_t
 * - checkout_opts: const git_checkout_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reset(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value target;
  mrb_int native_reset_type;
  mrb_value checkout_opts;

  /* Fetch the args */
  mrb_get_args(mrb, "ooio", &repo, &target, &native_reset_type, &checkout_opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, target, Object_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Object expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, checkout_opts, CheckoutOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CheckoutOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: target */
  git_object * native_target = (mrb_nil_p(target) ? NULL : mruby_unbox_git_object(target));

  /* Unbox param: checkout_opts */
  const git_checkout_options * native_checkout_opts = (mrb_nil_p(checkout_opts) ? NULL : mruby_unbox_git_checkout_options(checkout_opts));

  /* Invocation */
  int native_return_value = git_reset(native_repo, native_target, native_reset_type, native_checkout_opts);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reset_default */
/* sha: f2d890a1a8b88d58a439276f4371d263f399fd864488b7719bf3223ca54b2754 */
#if BIND_git_reset_default_FUNCTION
#define git_reset_default_REQUIRED_ARGC 3
#define git_reset_default_OPTIONAL_ARGC 0
/* git_reset_default
 *
 * Parameters:
 * - repo: git_repository *
 * - target: git_object *
 * - pathspecs: git_strarray *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reset_default(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value target;
  mrb_value pathspecs;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &repo, &target, &pathspecs);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, target, Object_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Object expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, pathspecs, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: target */
  git_object * native_target = (mrb_nil_p(target) ? NULL : mruby_unbox_git_object(target));

  /* Unbox param: pathspecs */
  git_strarray * native_pathspecs = (mrb_nil_p(pathspecs) ? NULL : mruby_unbox_git_strarray(pathspecs));

  /* Invocation */
  int native_return_value = git_reset_default(native_repo, native_target, native_pathspecs);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_reset_from_annotated */
/* sha: e30b6e3a1f0617dfce8941eb2cbb23723c46f6cbc6fe47bfa679924263f5129f */
#if BIND_git_reset_from_annotated_FUNCTION
#define git_reset_from_annotated_REQUIRED_ARGC 4
#define git_reset_from_annotated_OPTIONAL_ARGC 0
/* git_reset_from_annotated
 *
 * Parameters:
 * - repo: git_repository *
 * - commit: git_annotated_commit *
 * - reset_type: git_reset_t
 * - checkout_opts: const git_checkout_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_reset_from_annotated(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value commit;
  mrb_int native_reset_type;
  mrb_value checkout_opts;

  /* Fetch the args */
  mrb_get_args(mrb, "ooio", &repo, &commit, &native_reset_type, &checkout_opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, commit, AnnotatedCommit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "AnnotatedCommit expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, checkout_opts, CheckoutOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CheckoutOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: commit */
  git_annotated_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_annotated_commit(commit));

  /* Unbox param: checkout_opts */
  const git_checkout_options * native_checkout_opts = (mrb_nil_p(checkout_opts) ? NULL : mruby_unbox_git_checkout_options(checkout_opts));

  /* Invocation */
  int native_return_value = git_reset_from_annotated(native_repo, native_commit, native_reset_type, native_checkout_opts);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revert */
/* sha: 3e56522d815f42d3e16435ff2647cee90d4c47fb85d0e5ab3d90265ad12848a0 */
#if BIND_git_revert_FUNCTION
#define git_revert_REQUIRED_ARGC 3
#define git_revert_OPTIONAL_ARGC 0
/* git_revert
 *
 * Parameters:
 * - repo: git_repository *
 * - commit: git_commit *
 * - given_opts: const git_revert_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_revert(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value commit;
  mrb_value given_opts;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &repo, &commit, &given_opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, given_opts, RevertOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RevertOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: commit */
  git_commit * native_commit = (mrb_nil_p(commit) ? NULL : mruby_unbox_git_commit(commit));

  /* Unbox param: given_opts */
  const git_revert_options * native_given_opts = (mrb_nil_p(given_opts) ? NULL : mruby_unbox_git_revert_options(given_opts));

  /* Invocation */
  int native_return_value = git_revert(native_repo, native_commit, native_given_opts);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revert_commit */
/* sha: 5964aa821989aa4e52729fd5f80ee7dfe3c74ffb4dd808f4a11a5ad699ba03d2 */
#if BIND_git_revert_commit_FUNCTION
#define git_revert_commit_REQUIRED_ARGC 5
#define git_revert_commit_OPTIONAL_ARGC 0
/* git_revert_commit
 *
 * Parameters:
 * - repo: git_repository *
 * - revert_commit: git_commit *
 * - our_commit: git_commit *
 * - mainline: unsigned int
 * - merge_options: const git_merge_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_revert_commit(mrb_state* mrb, mrb_value self) {
  git_index * native_out = NULL;
  mrb_value repo;
  mrb_value revert_commit;
  mrb_value our_commit;
  mrb_int native_mainline;
  mrb_value merge_options;

  /* Fetch the args */
  mrb_get_args(mrb, "oooio", &repo, &revert_commit, &our_commit, &native_mainline, &merge_options);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, revert_commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, our_commit, Commit_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Commit expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, merge_options, MergeOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MergeOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: revert_commit */
  git_commit * native_revert_commit = (mrb_nil_p(revert_commit) ? NULL : mruby_unbox_git_commit(revert_commit));

  /* Unbox param: our_commit */
  git_commit * native_our_commit = (mrb_nil_p(our_commit) ? NULL : mruby_unbox_git_commit(our_commit));

  /* Unbox param: merge_options */
  const git_merge_options * native_merge_options = (mrb_nil_p(merge_options) ? NULL : mruby_unbox_git_merge_options(merge_options));

  /* Invocation */
  int native_return_value = git_revert_commit(&native_out, native_repo, native_revert_commit, native_our_commit, native_mainline, native_merge_options);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_index(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revert_init_options */
/* sha: 1a566d35838b00583a7e352af7b4d2d8ffa067aa6ca19184b1aef55ff396ad09 */
#if BIND_git_revert_init_options_FUNCTION
#define git_revert_init_options_REQUIRED_ARGC 2
#define git_revert_init_options_OPTIONAL_ARGC 0
/* git_revert_init_options
 *
 * Parameters:
 * - opts: git_revert_options *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_revert_init_options(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, RevertOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RevertOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_revert_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_revert_options(opts));

  /* Invocation */
  int native_return_value = git_revert_init_options(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revparse */
/* sha: 20d65f04dc10d94a811aa27c53939a46017af63b4d99a125e2873aefdbed98ed */
#if BIND_git_revparse_FUNCTION
#define git_revparse_REQUIRED_ARGC 3
#define git_revparse_OPTIONAL_ARGC 0
/* git_revparse
 *
 * Parameters:
 * - revspec: git_revspec *
 * - repo: git_repository *
 * - spec: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_revparse(mrb_state* mrb, mrb_value self) {
  mrb_value revspec;
  mrb_value repo;
  char * native_spec = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooz", &revspec, &repo, &native_spec);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, revspec, Revspec_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Revspec expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: revspec */
  git_revspec * native_revspec = (mrb_nil_p(revspec) ? NULL : mruby_unbox_git_revspec(revspec));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_revparse(native_revspec, native_repo, native_spec);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revparse_ext */
/* sha: 769da7594b4d713a29d28e58b88d95025600ab7fab4c176a3f007b5f21b3448c */
#if BIND_git_revparse_ext_FUNCTION
#define git_revparse_ext_REQUIRED_ARGC 2
#define git_revparse_ext_OPTIONAL_ARGC 0
/* git_revparse_ext
 *
 * Parameters:
 * - repo: git_repository *
 * - spec: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_revparse_ext(mrb_state* mrb, mrb_value self) {
  mrb_value results = mrb_ary_new(mrb);
  git_object * native_object_out = NULL;
  git_reference * native_reference_out = NULL;
  mrb_value repo;
  char * native_spec = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_spec);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_revparse_ext(&native_object_out, &native_reference_out, native_repo, native_spec);

  /* Box out param: object_out */
  mrb_value object_out = native_object_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_object(mrb, native_object_out);
  /* Box out param: reference_out */
  mrb_value reference_out = native_reference_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_reference(mrb, native_reference_out);

  /* Add out params to results */
  mrb_ary_push(mrb, results, object_out);
  mrb_ary_push(mrb, results, reference_out);

  return results;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revparse_single */
/* sha: 1a9fd180e1443c4a4c84e2558c8fc91185263bc00a87a498ab7416f6c6d54a0f */
#if BIND_git_revparse_single_FUNCTION
#define git_revparse_single_REQUIRED_ARGC 2
#define git_revparse_single_OPTIONAL_ARGC 0
/* git_revparse_single
 *
 * Parameters:
 * - repo: git_repository *
 * - spec: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_revparse_single(mrb_state* mrb, mrb_value self) {
  git_object * native_out = NULL;
  mrb_value repo;
  char * native_spec = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_spec);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_revparse_single(&native_out, native_repo, native_spec);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_object(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revwalk_add_hide_cb */
/* sha: 1d9dadacf27b583055209c3c4d13a0be31384d827dae30032e85b6beea8d37da */
#if BIND_git_revwalk_add_hide_cb_FUNCTION
#define git_revwalk_add_hide_cb_REQUIRED_ARGC 3
#define git_revwalk_add_hide_cb_OPTIONAL_ARGC 0
/* git_revwalk_add_hide_cb
 *
 * Parameters:
 * - walk: git_revwalk *
 * - hide_cb: git_revwalk_hide_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_revwalk_add_hide_cb(mrb_state* mrb, mrb_value self) {
  mrb_value walk;
  mrb_value hide_cb;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &walk, &hide_cb, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, walk, Revwalk_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Revwalk expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_revwalk_hide_cb(hide_cb);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: walk */
  git_revwalk * native_walk = (mrb_nil_p(walk) ? NULL : mruby_unbox_git_revwalk(walk));

  /* Unbox param: hide_cb */
  git_revwalk_hide_cb native_hide_cb = TODO_mruby_unbox_git_revwalk_hide_cb(hide_cb);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_revwalk_add_hide_cb(native_walk, native_hide_cb, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revwalk_free */
/* sha: 4a664613c18c06cb1e75cac0e83c3212b64cd5330a49c0568e2d295d0a46607f */
#if BIND_git_revwalk_free_FUNCTION
#define git_revwalk_free_REQUIRED_ARGC 1
#define git_revwalk_free_OPTIONAL_ARGC 0
/* git_revwalk_free
 *
 * Parameters:
 * - walk: git_revwalk *
 * Return Type: void
 */
mrb_value
mrb_Git_git_revwalk_free(mrb_state* mrb, mrb_value self) {
  mrb_value walk;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &walk);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, walk, Revwalk_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Revwalk expected");
    return mrb_nil_value();
  }

  /* Unbox param: walk */
  git_revwalk * native_walk = (mrb_nil_p(walk) ? NULL : mruby_unbox_git_revwalk(walk));

  /* Invocation */
  git_revwalk_free(native_walk);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revwalk_hide */
/* sha: dc06471b19218144d9eac6d8e1db23fc74c5d759ead40cbe88b42c2d5b94da92 */
#if BIND_git_revwalk_hide_FUNCTION
#define git_revwalk_hide_REQUIRED_ARGC 2
#define git_revwalk_hide_OPTIONAL_ARGC 0
/* git_revwalk_hide
 *
 * Parameters:
 * - walk: git_revwalk *
 * - commit_id: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_revwalk_hide(mrb_state* mrb, mrb_value self) {
  mrb_value walk;
  mrb_value commit_id;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &walk, &commit_id);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, walk, Revwalk_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Revwalk expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, commit_id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: walk */
  git_revwalk * native_walk = (mrb_nil_p(walk) ? NULL : mruby_unbox_git_revwalk(walk));

  /* Unbox param: commit_id */
  const git_oid * native_commit_id = (mrb_nil_p(commit_id) ? NULL : mruby_unbox_git_oid(commit_id));

  /* Invocation */
  int native_return_value = git_revwalk_hide(native_walk, native_commit_id);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revwalk_hide_glob */
/* sha: f544dd5a4fd00cee05e246de142cc519df3e3e75a7bd891d825e38cdcf020feb */
#if BIND_git_revwalk_hide_glob_FUNCTION
#define git_revwalk_hide_glob_REQUIRED_ARGC 2
#define git_revwalk_hide_glob_OPTIONAL_ARGC 0
/* git_revwalk_hide_glob
 *
 * Parameters:
 * - walk: git_revwalk *
 * - glob: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_revwalk_hide_glob(mrb_state* mrb, mrb_value self) {
  mrb_value walk;
  char * native_glob = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &walk, &native_glob);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, walk, Revwalk_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Revwalk expected");
    return mrb_nil_value();
  }

  /* Unbox param: walk */
  git_revwalk * native_walk = (mrb_nil_p(walk) ? NULL : mruby_unbox_git_revwalk(walk));

  /* Invocation */
  int native_return_value = git_revwalk_hide_glob(native_walk, native_glob);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revwalk_hide_head */
/* sha: b5ae4e4ed926f757420292cbd1dd43e730a933f82313802f2b4f1b1dd8946476 */
#if BIND_git_revwalk_hide_head_FUNCTION
#define git_revwalk_hide_head_REQUIRED_ARGC 1
#define git_revwalk_hide_head_OPTIONAL_ARGC 0
/* git_revwalk_hide_head
 *
 * Parameters:
 * - walk: git_revwalk *
 * Return Type: int
 */
mrb_value
mrb_Git_git_revwalk_hide_head(mrb_state* mrb, mrb_value self) {
  mrb_value walk;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &walk);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, walk, Revwalk_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Revwalk expected");
    return mrb_nil_value();
  }

  /* Unbox param: walk */
  git_revwalk * native_walk = (mrb_nil_p(walk) ? NULL : mruby_unbox_git_revwalk(walk));

  /* Invocation */
  int native_return_value = git_revwalk_hide_head(native_walk);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revwalk_hide_ref */
/* sha: e65bbd7ff98f3ac68a182efb48613aa32595729f630c1df7655bb3917bca00f1 */
#if BIND_git_revwalk_hide_ref_FUNCTION
#define git_revwalk_hide_ref_REQUIRED_ARGC 2
#define git_revwalk_hide_ref_OPTIONAL_ARGC 0
/* git_revwalk_hide_ref
 *
 * Parameters:
 * - walk: git_revwalk *
 * - refname: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_revwalk_hide_ref(mrb_state* mrb, mrb_value self) {
  mrb_value walk;
  char * native_refname = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &walk, &native_refname);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, walk, Revwalk_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Revwalk expected");
    return mrb_nil_value();
  }

  /* Unbox param: walk */
  git_revwalk * native_walk = (mrb_nil_p(walk) ? NULL : mruby_unbox_git_revwalk(walk));

  /* Invocation */
  int native_return_value = git_revwalk_hide_ref(native_walk, native_refname);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revwalk_new */
/* sha: f44426bedf0489c925316fe168eff4276bd6acee7119b69927626d82e76e3387 */
#if BIND_git_revwalk_new_FUNCTION
#define git_revwalk_new_REQUIRED_ARGC 1
#define git_revwalk_new_OPTIONAL_ARGC 0
/* git_revwalk_new
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_revwalk_new(mrb_state* mrb, mrb_value self) {
  git_revwalk * native_out = NULL;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_revwalk_new(&native_out, native_repo);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_revwalk(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revwalk_next */
/* sha: d9b41f88dcd2a04fe4d493354647584d57ed429cd0e7d21416dbcc60c1900071 */
#if BIND_git_revwalk_next_FUNCTION
#define git_revwalk_next_REQUIRED_ARGC 2
#define git_revwalk_next_OPTIONAL_ARGC 0
/* git_revwalk_next
 *
 * Parameters:
 * - out: git_oid *
 * - walk: git_revwalk *
 * Return Type: int
 */
mrb_value
mrb_Git_git_revwalk_next(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value walk;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &out, &walk);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, walk, Revwalk_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Revwalk expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Unbox param: walk */
  git_revwalk * native_walk = (mrb_nil_p(walk) ? NULL : mruby_unbox_git_revwalk(walk));

  /* Invocation */
  int native_return_value = git_revwalk_next(native_out, native_walk);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revwalk_push */
/* sha: 055f68f160a60eb6200758804fe4dce8b7167f6e29ffe106e5fc53df9ecca215 */
#if BIND_git_revwalk_push_FUNCTION
#define git_revwalk_push_REQUIRED_ARGC 2
#define git_revwalk_push_OPTIONAL_ARGC 0
/* git_revwalk_push
 *
 * Parameters:
 * - walk: git_revwalk *
 * - id: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_revwalk_push(mrb_state* mrb, mrb_value self) {
  mrb_value walk;
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &walk, &id);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, walk, Revwalk_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Revwalk expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: walk */
  git_revwalk * native_walk = (mrb_nil_p(walk) ? NULL : mruby_unbox_git_revwalk(walk));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_revwalk_push(native_walk, native_id);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revwalk_push_glob */
/* sha: 845e99c2fae66320d92cf3fd08445d4458dba002e86190531511d94619764c4f */
#if BIND_git_revwalk_push_glob_FUNCTION
#define git_revwalk_push_glob_REQUIRED_ARGC 2
#define git_revwalk_push_glob_OPTIONAL_ARGC 0
/* git_revwalk_push_glob
 *
 * Parameters:
 * - walk: git_revwalk *
 * - glob: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_revwalk_push_glob(mrb_state* mrb, mrb_value self) {
  mrb_value walk;
  char * native_glob = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &walk, &native_glob);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, walk, Revwalk_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Revwalk expected");
    return mrb_nil_value();
  }

  /* Unbox param: walk */
  git_revwalk * native_walk = (mrb_nil_p(walk) ? NULL : mruby_unbox_git_revwalk(walk));

  /* Invocation */
  int native_return_value = git_revwalk_push_glob(native_walk, native_glob);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revwalk_push_head */
/* sha: a320f1ff01cb06410a63a3246c80dc82130385ace8f88da27d4757c88d18590f */
#if BIND_git_revwalk_push_head_FUNCTION
#define git_revwalk_push_head_REQUIRED_ARGC 1
#define git_revwalk_push_head_OPTIONAL_ARGC 0
/* git_revwalk_push_head
 *
 * Parameters:
 * - walk: git_revwalk *
 * Return Type: int
 */
mrb_value
mrb_Git_git_revwalk_push_head(mrb_state* mrb, mrb_value self) {
  mrb_value walk;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &walk);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, walk, Revwalk_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Revwalk expected");
    return mrb_nil_value();
  }

  /* Unbox param: walk */
  git_revwalk * native_walk = (mrb_nil_p(walk) ? NULL : mruby_unbox_git_revwalk(walk));

  /* Invocation */
  int native_return_value = git_revwalk_push_head(native_walk);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revwalk_push_range */
/* sha: 5ac79d494e74c6bee9c3d4db33b7631cf76073be9d3cbcebca636b64de547bbb */
#if BIND_git_revwalk_push_range_FUNCTION
#define git_revwalk_push_range_REQUIRED_ARGC 2
#define git_revwalk_push_range_OPTIONAL_ARGC 0
/* git_revwalk_push_range
 *
 * Parameters:
 * - walk: git_revwalk *
 * - range: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_revwalk_push_range(mrb_state* mrb, mrb_value self) {
  mrb_value walk;
  char * native_range = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &walk, &native_range);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, walk, Revwalk_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Revwalk expected");
    return mrb_nil_value();
  }

  /* Unbox param: walk */
  git_revwalk * native_walk = (mrb_nil_p(walk) ? NULL : mruby_unbox_git_revwalk(walk));

  /* Invocation */
  int native_return_value = git_revwalk_push_range(native_walk, native_range);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revwalk_push_ref */
/* sha: 5a9b5cccc6b8e50aa5514aa0c7d2dccc4c9ebe9cb7de01ccedc112abf077c2e2 */
#if BIND_git_revwalk_push_ref_FUNCTION
#define git_revwalk_push_ref_REQUIRED_ARGC 2
#define git_revwalk_push_ref_OPTIONAL_ARGC 0
/* git_revwalk_push_ref
 *
 * Parameters:
 * - walk: git_revwalk *
 * - refname: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_revwalk_push_ref(mrb_state* mrb, mrb_value self) {
  mrb_value walk;
  char * native_refname = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &walk, &native_refname);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, walk, Revwalk_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Revwalk expected");
    return mrb_nil_value();
  }

  /* Unbox param: walk */
  git_revwalk * native_walk = (mrb_nil_p(walk) ? NULL : mruby_unbox_git_revwalk(walk));

  /* Invocation */
  int native_return_value = git_revwalk_push_ref(native_walk, native_refname);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revwalk_repository */
/* sha: c61a01ab4a78edb139d29f5b39b8533bbc0a8e8297382d7e940b96a070a22b62 */
#if BIND_git_revwalk_repository_FUNCTION
#define git_revwalk_repository_REQUIRED_ARGC 1
#define git_revwalk_repository_OPTIONAL_ARGC 0
/* git_revwalk_repository
 *
 * Parameters:
 * - walk: git_revwalk *
 * Return Type: git_repository *
 */
mrb_value
mrb_Git_git_revwalk_repository(mrb_state* mrb, mrb_value self) {
  mrb_value walk;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &walk);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, walk, Revwalk_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Revwalk expected");
    return mrb_nil_value();
  }

  /* Unbox param: walk */
  git_revwalk * native_walk = (mrb_nil_p(walk) ? NULL : mruby_unbox_git_revwalk(walk));

  /* Invocation */
  git_repository * native_return_value = git_revwalk_repository(native_walk);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_repository(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revwalk_reset */
/* sha: 86c7c20e4b187a5cd832a82bc67be2f23ad209c917c4bb3d0fc1f64cc9649942 */
#if BIND_git_revwalk_reset_FUNCTION
#define git_revwalk_reset_REQUIRED_ARGC 1
#define git_revwalk_reset_OPTIONAL_ARGC 0
/* git_revwalk_reset
 *
 * Parameters:
 * - walker: git_revwalk *
 * Return Type: void
 */
mrb_value
mrb_Git_git_revwalk_reset(mrb_state* mrb, mrb_value self) {
  mrb_value walker;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &walker);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, walker, Revwalk_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Revwalk expected");
    return mrb_nil_value();
  }

  /* Unbox param: walker */
  git_revwalk * native_walker = (mrb_nil_p(walker) ? NULL : mruby_unbox_git_revwalk(walker));

  /* Invocation */
  git_revwalk_reset(native_walker);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revwalk_simplify_first_parent */
/* sha: c447f9d3479e113a371fa48155a102fae443a05f0e93f090eb4accd02bc0a0e0 */
#if BIND_git_revwalk_simplify_first_parent_FUNCTION
#define git_revwalk_simplify_first_parent_REQUIRED_ARGC 1
#define git_revwalk_simplify_first_parent_OPTIONAL_ARGC 0
/* git_revwalk_simplify_first_parent
 *
 * Parameters:
 * - walk: git_revwalk *
 * Return Type: void
 */
mrb_value
mrb_Git_git_revwalk_simplify_first_parent(mrb_state* mrb, mrb_value self) {
  mrb_value walk;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &walk);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, walk, Revwalk_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Revwalk expected");
    return mrb_nil_value();
  }

  /* Unbox param: walk */
  git_revwalk * native_walk = (mrb_nil_p(walk) ? NULL : mruby_unbox_git_revwalk(walk));

  /* Invocation */
  git_revwalk_simplify_first_parent(native_walk);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_revwalk_sorting */
/* sha: 7c62402bdb3ae1ba635328f24d66dd8f4150d26e364c39b75485f86a0f3328f7 */
#if BIND_git_revwalk_sorting_FUNCTION
#define git_revwalk_sorting_REQUIRED_ARGC 2
#define git_revwalk_sorting_OPTIONAL_ARGC 0
/* git_revwalk_sorting
 *
 * Parameters:
 * - walk: git_revwalk *
 * - sort_mode: unsigned int
 * Return Type: void
 */
mrb_value
mrb_Git_git_revwalk_sorting(mrb_state* mrb, mrb_value self) {
  mrb_value walk;
  mrb_int native_sort_mode;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &walk, &native_sort_mode);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, walk, Revwalk_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Revwalk expected");
    return mrb_nil_value();
  }

  /* Unbox param: walk */
  git_revwalk * native_walk = (mrb_nil_p(walk) ? NULL : mruby_unbox_git_revwalk(walk));

  /* Invocation */
  git_revwalk_sorting(native_walk, native_sort_mode);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_signature_default */
/* sha: 0385d02c50271b514a8472eeb9e68b1f2d00839f24ff33060c97c18393008654 */
#if BIND_git_signature_default_FUNCTION
#define git_signature_default_REQUIRED_ARGC 1
#define git_signature_default_OPTIONAL_ARGC 0
/* git_signature_default
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_signature_default(mrb_state* mrb, mrb_value self) {
  git_signature * native_out = NULL;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_signature_default(&native_out, native_repo);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_signature(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_signature_dup */
/* sha: e9049356e5376dba3c477753055d48c199bfac3337f8d4b826cff9e488785e0f */
#if BIND_git_signature_dup_FUNCTION
#define git_signature_dup_REQUIRED_ARGC 1
#define git_signature_dup_OPTIONAL_ARGC 0
/* git_signature_dup
 *
 * Parameters:
 * - sig: const git_signature *
 * Return Type: int
 */
mrb_value
mrb_Git_git_signature_dup(mrb_state* mrb, mrb_value self) {
  git_signature * native_dest = NULL;
  mrb_value sig;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &sig);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, sig, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }

  /* Unbox param: sig */
  const git_signature * native_sig = (mrb_nil_p(sig) ? NULL : mruby_unbox_git_signature(sig));

  /* Invocation */
  int native_return_value = git_signature_dup(&native_dest, native_sig);

  /* Box out param: dest */
  mrb_value dest = native_dest == NULL ? mrb_nil_value() : mruby_giftwrap_git_signature(mrb, native_dest);

  return dest;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_signature_free */
/* sha: 05c158517a03633395b2736892296ee8481f59c4580d0561fe94f39592cc7a69 */
#if BIND_git_signature_free_FUNCTION
#define git_signature_free_REQUIRED_ARGC 1
#define git_signature_free_OPTIONAL_ARGC 0
/* git_signature_free
 *
 * Parameters:
 * - sig: git_signature *
 * Return Type: void
 */
mrb_value
mrb_Git_git_signature_free(mrb_state* mrb, mrb_value self) {
  mrb_value sig;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &sig);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, sig, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }

  /* Unbox param: sig */
  git_signature * native_sig = (mrb_nil_p(sig) ? NULL : mruby_unbox_git_signature(sig));

  /* Invocation */
  git_signature_free(native_sig);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_signature_new */
/* sha: da6c136b29775d8071d70769d6ed5f63457ee5dbfcdd546c4bca210f73d30241 */
#if BIND_git_signature_new_FUNCTION
#define git_signature_new_REQUIRED_ARGC 4
#define git_signature_new_OPTIONAL_ARGC 0
/* git_signature_new
 *
 * Parameters:
 * - name: const char *
 * - email: const char *
 * - time: git_time_t
 * - offset: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_signature_new(mrb_state* mrb, mrb_value self) {
  git_signature * native_out = NULL;
  char * native_name = NULL;
  char * native_email = NULL;
  mrb_int native_time;
  mrb_int native_offset;

  /* Fetch the args */
  mrb_get_args(mrb, "zzii", &native_name, &native_email, &native_time, &native_offset);

  /* Invocation */
  int native_return_value = git_signature_new(&native_out, native_name, native_email, native_time, native_offset);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_signature(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_signature_now */
/* sha: 9dddf0ef4c791841efc5be2db3484b634d0d0b39ed8e37da107c10896acbbabf */
#if BIND_git_signature_now_FUNCTION
#define git_signature_now_REQUIRED_ARGC 2
#define git_signature_now_OPTIONAL_ARGC 0
/* git_signature_now
 *
 * Parameters:
 * - name: const char *
 * - email: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_signature_now(mrb_state* mrb, mrb_value self) {
  git_signature * native_out = NULL;
  char * native_name = NULL;
  char * native_email = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "zz", &native_name, &native_email);

  /* Invocation */
  int native_return_value = git_signature_now(&native_out, native_name, native_email);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_signature(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_stash_apply */
/* sha: 438e60472f176993ed23d645bc7a14fcc4cc1579bf626ff55eb18651b4a63fb0 */
#if BIND_git_stash_apply_FUNCTION
#define git_stash_apply_REQUIRED_ARGC 3
#define git_stash_apply_OPTIONAL_ARGC 0
/* git_stash_apply
 *
 * Parameters:
 * - repo: git_repository *
 * - index: size_t
 * - options: const git_stash_apply_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_stash_apply(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_int native_index;
  mrb_value options;

  /* Fetch the args */
  mrb_get_args(mrb, "oio", &repo, &native_index, &options);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, options, StashApplyOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "StashApplyOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: options */
  const git_stash_apply_options * native_options = (mrb_nil_p(options) ? NULL : mruby_unbox_git_stash_apply_options(options));

  /* Invocation */
  int native_return_value = git_stash_apply(native_repo, native_index, native_options);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_stash_apply_init_options */
/* sha: a73de477ab87c26159ff97c05b506c562219c99f68849b69258e3b4e29ef821b */
#if BIND_git_stash_apply_init_options_FUNCTION
#define git_stash_apply_init_options_REQUIRED_ARGC 2
#define git_stash_apply_init_options_OPTIONAL_ARGC 0
/* git_stash_apply_init_options
 *
 * Parameters:
 * - opts: git_stash_apply_options *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_stash_apply_init_options(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, StashApplyOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "StashApplyOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_stash_apply_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_stash_apply_options(opts));

  /* Invocation */
  int native_return_value = git_stash_apply_init_options(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_stash_drop */
/* sha: 896993b47087218e7f68913656bf8af805d5b5ea486442dc2c803c0977a7f8e5 */
#if BIND_git_stash_drop_FUNCTION
#define git_stash_drop_REQUIRED_ARGC 2
#define git_stash_drop_OPTIONAL_ARGC 0
/* git_stash_drop
 *
 * Parameters:
 * - repo: git_repository *
 * - index: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_stash_drop(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_int native_index;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &repo, &native_index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_stash_drop(native_repo, native_index);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_stash_foreach */
/* sha: e82ff0473ee2aab001fad92d0d142d64549d137466ca2686b2d2b64c69498d3a */
#if BIND_git_stash_foreach_FUNCTION
#define git_stash_foreach_REQUIRED_ARGC 3
#define git_stash_foreach_OPTIONAL_ARGC 0
/* git_stash_foreach
 *
 * Parameters:
 * - repo: git_repository *
 * - callback: git_stash_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_stash_foreach(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &repo, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_stash_cb(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: callback */
  git_stash_cb native_callback = TODO_mruby_unbox_git_stash_cb(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_stash_foreach(native_repo, native_callback, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_stash_pop */
/* sha: dfaf67d2ee9c2907fcce444270e4c31a07e2d562852765577d0b78c2bfb055d1 */
#if BIND_git_stash_pop_FUNCTION
#define git_stash_pop_REQUIRED_ARGC 3
#define git_stash_pop_OPTIONAL_ARGC 0
/* git_stash_pop
 *
 * Parameters:
 * - repo: git_repository *
 * - index: size_t
 * - options: const git_stash_apply_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_stash_pop(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_int native_index;
  mrb_value options;

  /* Fetch the args */
  mrb_get_args(mrb, "oio", &repo, &native_index, &options);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, options, StashApplyOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "StashApplyOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: options */
  const git_stash_apply_options * native_options = (mrb_nil_p(options) ? NULL : mruby_unbox_git_stash_apply_options(options));

  /* Invocation */
  int native_return_value = git_stash_pop(native_repo, native_index, native_options);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_stash_save */
/* sha: 7cd8f5a63d15edd6fe1b90174285239202dec91177ef519336cb27c72fe82b3d */
#if BIND_git_stash_save_FUNCTION
#define git_stash_save_REQUIRED_ARGC 5
#define git_stash_save_OPTIONAL_ARGC 0
/* git_stash_save
 *
 * Parameters:
 * - out: git_oid *
 * - repo: git_repository *
 * - stasher: const git_signature *
 * - message: const char *
 * - flags: uint32_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_stash_save(mrb_state* mrb, mrb_value self) {
  mrb_value out;
  mrb_value repo;
  mrb_value stasher;
  char * native_message = NULL;
  mrb_int native_flags;

  /* Fetch the args */
  mrb_get_args(mrb, "ooozi", &out, &repo, &stasher, &native_message, &native_flags);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, out, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, stasher, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }

  /* Unbox param: out */
  git_oid * native_out = (mrb_nil_p(out) ? NULL : mruby_unbox_git_oid(out));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: stasher */
  const git_signature * native_stasher = (mrb_nil_p(stasher) ? NULL : mruby_unbox_git_signature(stasher));

  /* Invocation */
  int native_return_value = git_stash_save(native_out, native_repo, native_stasher, native_message, native_flags);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_status_byindex */
/* sha: 2c5a45b6d9881fb2e625bec9b700e5508d11870ffa88ebf59ca75e7ec6a7b428 */
#if BIND_git_status_byindex_FUNCTION
#define git_status_byindex_REQUIRED_ARGC 2
#define git_status_byindex_OPTIONAL_ARGC 0
/* git_status_byindex
 *
 * Parameters:
 * - statuslist: git_status_list *
 * - idx: size_t
 * Return Type: const git_status_entry *
 */
mrb_value
mrb_Git_git_status_byindex(mrb_state* mrb, mrb_value self) {
  mrb_value statuslist;
  mrb_int native_idx;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &statuslist, &native_idx);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, statuslist, StatusList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "StatusList expected");
    return mrb_nil_value();
  }

  /* Unbox param: statuslist */
  git_status_list * native_statuslist = (mrb_nil_p(statuslist) ? NULL : mruby_unbox_git_status_list(statuslist));

  /* Invocation */
  const git_status_entry * native_return_value = git_status_byindex(native_statuslist, native_idx);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_status_entry(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_status_file */
/* sha: b115b0a8c1fb25494d68afddbae75ea20d3eff008992557d7056487e4fe994d1 */
#if BIND_git_status_file_FUNCTION
#define git_status_file_REQUIRED_ARGC 2
#define git_status_file_OPTIONAL_ARGC 0
/* git_status_file
 *
 * Parameters:
 * - repo: git_repository *
 * - path: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_status_file(mrb_state* mrb, mrb_value self) {
  int native_status_flags;
  mrb_value repo;
  char * native_path = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_path);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_status_file(&native_status_flags, native_repo, native_path);

  /* Box out param: status_flags */
  mrb_value status_flags = mrb_fixnum_value(native_status_flags);

  return status_flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_status_foreach */
/* sha: 73fcfb390bd489ecfbb9ec2a0fdac8a8c8e9ced0580de832f385ed01e0dc6924 */
#if BIND_git_status_foreach_FUNCTION
#define git_status_foreach_REQUIRED_ARGC 3
#define git_status_foreach_OPTIONAL_ARGC 0
/* git_status_foreach
 *
 * Parameters:
 * - repo: git_repository *
 * - callback: git_status_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_status_foreach(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &repo, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_status_cb(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: callback */
  git_status_cb native_callback = TODO_mruby_unbox_git_status_cb(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_status_foreach(native_repo, native_callback, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_status_foreach_ext */
/* sha: 3a546379df81013087e91dcc5d53ce18385b1a69eda0d30cfa9055b1ef99fa7e */
#if BIND_git_status_foreach_ext_FUNCTION
#define git_status_foreach_ext_REQUIRED_ARGC 4
#define git_status_foreach_ext_OPTIONAL_ARGC 0
/* git_status_foreach_ext
 *
 * Parameters:
 * - repo: git_repository *
 * - opts: const git_status_options *
 * - callback: git_status_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_status_foreach_ext(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value opts;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "oooo", &repo, &opts, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, StatusOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "StatusOptions expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_status_cb(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: opts */
  const git_status_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_status_options(opts));

  /* Unbox param: callback */
  git_status_cb native_callback = TODO_mruby_unbox_git_status_cb(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_status_foreach_ext(native_repo, native_opts, native_callback, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_status_init_options */
/* sha: 6c7903b39ec0facb0f760f521bb9c04f0bcf311b397e5b3a4ad3eb59003e6bc0 */
#if BIND_git_status_init_options_FUNCTION
#define git_status_init_options_REQUIRED_ARGC 2
#define git_status_init_options_OPTIONAL_ARGC 0
/* git_status_init_options
 *
 * Parameters:
 * - opts: git_status_options *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_status_init_options(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, StatusOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "StatusOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_status_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_status_options(opts));

  /* Invocation */
  int native_return_value = git_status_init_options(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_status_list_entrycount */
/* sha: 4ee2413aaed3bc11d4fd5f786b50c10be874efed835ad0bece135aabc0c128c5 */
#if BIND_git_status_list_entrycount_FUNCTION
#define git_status_list_entrycount_REQUIRED_ARGC 1
#define git_status_list_entrycount_OPTIONAL_ARGC 0
/* git_status_list_entrycount
 *
 * Parameters:
 * - statuslist: git_status_list *
 * Return Type: size_t
 */
mrb_value
mrb_Git_git_status_list_entrycount(mrb_state* mrb, mrb_value self) {
  mrb_value statuslist;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &statuslist);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, statuslist, StatusList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "StatusList expected");
    return mrb_nil_value();
  }

  /* Unbox param: statuslist */
  git_status_list * native_statuslist = (mrb_nil_p(statuslist) ? NULL : mruby_unbox_git_status_list(statuslist));

  /* Invocation */
  size_t native_return_value = git_status_list_entrycount(native_statuslist);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_status_list_free */
/* sha: 9d5795f9018cb09f4958e19c8bb790b07b829d333eaa1bf42e656a338b49dbce */
#if BIND_git_status_list_free_FUNCTION
#define git_status_list_free_REQUIRED_ARGC 1
#define git_status_list_free_OPTIONAL_ARGC 0
/* git_status_list_free
 *
 * Parameters:
 * - statuslist: git_status_list *
 * Return Type: void
 */
mrb_value
mrb_Git_git_status_list_free(mrb_state* mrb, mrb_value self) {
  mrb_value statuslist;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &statuslist);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, statuslist, StatusList_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "StatusList expected");
    return mrb_nil_value();
  }

  /* Unbox param: statuslist */
  git_status_list * native_statuslist = (mrb_nil_p(statuslist) ? NULL : mruby_unbox_git_status_list(statuslist));

  /* Invocation */
  git_status_list_free(native_statuslist);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_status_list_new */
/* sha: a1532a4c5d88d056d78745e215e6853a46b1ed21871104befaee20f30a3b2a4e */
#if BIND_git_status_list_new_FUNCTION
#define git_status_list_new_REQUIRED_ARGC 2
#define git_status_list_new_OPTIONAL_ARGC 0
/* git_status_list_new
 *
 * Parameters:
 * - repo: git_repository *
 * - opts: const git_status_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_status_list_new(mrb_state* mrb, mrb_value self) {
  git_status_list * native_out = NULL;
  mrb_value repo;
  mrb_value opts;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &repo, &opts);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, opts, StatusOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "StatusOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: opts */
  const git_status_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_status_options(opts));

  /* Invocation */
  int native_return_value = git_status_list_new(&native_out, native_repo, native_opts);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_status_list(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_status_should_ignore */
/* sha: b3b5690e555e4e086d36e3985e8d98c924bed690eac4a4c9d994e91bf8def4a1 */
#if BIND_git_status_should_ignore_FUNCTION
#define git_status_should_ignore_REQUIRED_ARGC 3
#define git_status_should_ignore_OPTIONAL_ARGC 0
/* git_status_should_ignore
 *
 * Parameters:
 * - ignored: int *
 * - repo: git_repository *
 * - path: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_status_should_ignore(mrb_state* mrb, mrb_value self) {
  mrb_value ignored;
  mrb_value repo;
  char * native_path = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ooz", &ignored, &repo, &native_path);

  /* Type checking */
  TODO_type_check_int_PTR(ignored);
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: ignored */
  int * native_ignored = TODO_mruby_unbox_int_PTR(ignored);

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_status_should_ignore(native_ignored, native_repo, native_path);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_strarray_copy */
/* sha: 58e449b47a4d7cf4f40cf338431175a62492b826c643835b04487212b2c37e79 */
#if BIND_git_strarray_copy_FUNCTION
#define git_strarray_copy_REQUIRED_ARGC 2
#define git_strarray_copy_OPTIONAL_ARGC 0
/* git_strarray_copy
 *
 * Parameters:
 * - tgt: git_strarray *
 * - src: const git_strarray *
 * Return Type: int
 */
mrb_value
mrb_Git_git_strarray_copy(mrb_state* mrb, mrb_value self) {
  mrb_value tgt;
  mrb_value src;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &tgt, &src);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tgt, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, src, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }

  /* Unbox param: tgt */
  git_strarray * native_tgt = (mrb_nil_p(tgt) ? NULL : mruby_unbox_git_strarray(tgt));

  /* Unbox param: src */
  const git_strarray * native_src = (mrb_nil_p(src) ? NULL : mruby_unbox_git_strarray(src));

  /* Invocation */
  int native_return_value = git_strarray_copy(native_tgt, native_src);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_strarray_free */
/* sha: 6927ac6e8a7782d8295216aab1574d5922b4cbd1bd330f6ec03f1b1ea9f7ea99 */
#if BIND_git_strarray_free_FUNCTION
#define git_strarray_free_REQUIRED_ARGC 1
#define git_strarray_free_OPTIONAL_ARGC 0
/* git_strarray_free
 *
 * Parameters:
 * - array: git_strarray *
 * Return Type: void
 */
mrb_value
mrb_Git_git_strarray_free(mrb_state* mrb, mrb_value self) {
  mrb_value array;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &array);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, array, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }

  /* Unbox param: array */
  git_strarray * native_array = (mrb_nil_p(array) ? NULL : mruby_unbox_git_strarray(array));

  /* Invocation */
  git_strarray_free(native_array);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_add_finalize */
/* sha: c4105ef97af0b0875ddb8a4c3d5a28536fd8818f8e21c459abb61670c3d7f5e2 */
#if BIND_git_submodule_add_finalize_FUNCTION
#define git_submodule_add_finalize_REQUIRED_ARGC 1
#define git_submodule_add_finalize_OPTIONAL_ARGC 0
/* git_submodule_add_finalize
 *
 * Parameters:
 * - submodule: git_submodule *
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_add_finalize(mrb_state* mrb, mrb_value self) {
  mrb_value submodule;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &submodule);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Invocation */
  int native_return_value = git_submodule_add_finalize(native_submodule);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_add_setup */
/* sha: 5ba3068fec9e3b3ddb197ae3427480b11579e33be9cd0416f1fc6445e5e497d7 */
#if BIND_git_submodule_add_setup_FUNCTION
#define git_submodule_add_setup_REQUIRED_ARGC 4
#define git_submodule_add_setup_OPTIONAL_ARGC 0
/* git_submodule_add_setup
 *
 * Parameters:
 * - repo: git_repository *
 * - url: const char *
 * - path: const char *
 * - use_gitlink: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_add_setup(mrb_state* mrb, mrb_value self) {
  git_submodule * native_out = NULL;
  mrb_value repo;
  char * native_url = NULL;
  char * native_path = NULL;
  mrb_int native_use_gitlink;

  /* Fetch the args */
  mrb_get_args(mrb, "ozzi", &repo, &native_url, &native_path, &native_use_gitlink);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_submodule_add_setup(&native_out, native_repo, native_url, native_path, native_use_gitlink);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_submodule(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_add_to_index */
/* sha: adfa57c2ff8f2d67a676783c54ccdc983d951e960c36564b34f2512bc157fb97 */
#if BIND_git_submodule_add_to_index_FUNCTION
#define git_submodule_add_to_index_REQUIRED_ARGC 2
#define git_submodule_add_to_index_OPTIONAL_ARGC 0
/* git_submodule_add_to_index
 *
 * Parameters:
 * - submodule: git_submodule *
 * - write_index: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_add_to_index(mrb_state* mrb, mrb_value self) {
  mrb_value submodule;
  mrb_int native_write_index;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &submodule, &native_write_index);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Invocation */
  int native_return_value = git_submodule_add_to_index(native_submodule, native_write_index);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_branch */
/* sha: 24d87df887f95ae556a9673c95fc8e89d4c46fdec9608e0b250623676db362ae */
#if BIND_git_submodule_branch_FUNCTION
#define git_submodule_branch_REQUIRED_ARGC 1
#define git_submodule_branch_OPTIONAL_ARGC 0
/* git_submodule_branch
 *
 * Parameters:
 * - submodule: git_submodule *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_submodule_branch(mrb_state* mrb, mrb_value self) {
  mrb_value submodule;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &submodule);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Invocation */
  const char * native_return_value = git_submodule_branch(native_submodule);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_fetch_recurse_submodules */
/* sha: 8d6e9b1dc3eb43866f7d7791f88152a13946b38c27b0da3154cd19a46c0bad31 */
#if BIND_git_submodule_fetch_recurse_submodules_FUNCTION
#define git_submodule_fetch_recurse_submodules_REQUIRED_ARGC 1
#define git_submodule_fetch_recurse_submodules_OPTIONAL_ARGC 0
/* git_submodule_fetch_recurse_submodules
 *
 * Parameters:
 * - submodule: git_submodule *
 * Return Type: git_submodule_recurse_t
 */
mrb_value
mrb_Git_git_submodule_fetch_recurse_submodules(mrb_state* mrb, mrb_value self) {
  mrb_value submodule;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &submodule);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Invocation */
  git_submodule_recurse_t native_return_value = git_submodule_fetch_recurse_submodules(native_submodule);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_foreach */
/* sha: 9988fee3d92167ee614798cf04a4513620f81770611db9d3cf4ea3c62360eceb */
#if BIND_git_submodule_foreach_FUNCTION
#define git_submodule_foreach_REQUIRED_ARGC 3
#define git_submodule_foreach_OPTIONAL_ARGC 0
/* git_submodule_foreach
 *
 * Parameters:
 * - repo: git_repository *
 * - callback: git_submodule_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_foreach(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &repo, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_submodule_cb(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: callback */
  git_submodule_cb native_callback = TODO_mruby_unbox_git_submodule_cb(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_submodule_foreach(native_repo, native_callback, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_free */
/* sha: 500db70b425dcca1028ef1a584ce9d63987ae18a8c8c88979a456ec854e334ae */
#if BIND_git_submodule_free_FUNCTION
#define git_submodule_free_REQUIRED_ARGC 1
#define git_submodule_free_OPTIONAL_ARGC 0
/* git_submodule_free
 *
 * Parameters:
 * - submodule: git_submodule *
 * Return Type: void
 */
mrb_value
mrb_Git_git_submodule_free(mrb_state* mrb, mrb_value self) {
  mrb_value submodule;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &submodule);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Invocation */
  git_submodule_free(native_submodule);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_head_id */
/* sha: 271f50d5cc7a8c5decf9ac3d3ae5f24573f79da52fcf57d749cab80e35496ce4 */
#if BIND_git_submodule_head_id_FUNCTION
#define git_submodule_head_id_REQUIRED_ARGC 1
#define git_submodule_head_id_OPTIONAL_ARGC 0
/* git_submodule_head_id
 *
 * Parameters:
 * - submodule: git_submodule *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_submodule_head_id(mrb_state* mrb, mrb_value self) {
  mrb_value submodule;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &submodule);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Invocation */
  const git_oid * native_return_value = git_submodule_head_id(native_submodule);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_ignore */
/* sha: b8e5d91399950801775a25fb6701ebbb5c7914e8d057f4c315196460afcfa2fd */
#if BIND_git_submodule_ignore_FUNCTION
#define git_submodule_ignore_REQUIRED_ARGC 1
#define git_submodule_ignore_OPTIONAL_ARGC 0
/* git_submodule_ignore
 *
 * Parameters:
 * - submodule: git_submodule *
 * Return Type: git_submodule_ignore_t
 */
mrb_value
mrb_Git_git_submodule_ignore(mrb_state* mrb, mrb_value self) {
  mrb_value submodule;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &submodule);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Invocation */
  git_submodule_ignore_t native_return_value = git_submodule_ignore(native_submodule);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_index_id */
/* sha: 7e86e8c3c5f3d952f1cdbbdd34a5948fd618c3fe3c579d83ebd26a6c24c05844 */
#if BIND_git_submodule_index_id_FUNCTION
#define git_submodule_index_id_REQUIRED_ARGC 1
#define git_submodule_index_id_OPTIONAL_ARGC 0
/* git_submodule_index_id
 *
 * Parameters:
 * - submodule: git_submodule *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_submodule_index_id(mrb_state* mrb, mrb_value self) {
  mrb_value submodule;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &submodule);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Invocation */
  const git_oid * native_return_value = git_submodule_index_id(native_submodule);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_init */
/* sha: 43f8670a1c71666256d16eebf2020055139aff1a63687621a3226afd6283f963 */
#if BIND_git_submodule_init_FUNCTION
#define git_submodule_init_REQUIRED_ARGC 2
#define git_submodule_init_OPTIONAL_ARGC 0
/* git_submodule_init
 *
 * Parameters:
 * - submodule: git_submodule *
 * - overwrite: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_init(mrb_state* mrb, mrb_value self) {
  mrb_value submodule;
  mrb_int native_overwrite;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &submodule, &native_overwrite);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Invocation */
  int native_return_value = git_submodule_init(native_submodule, native_overwrite);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_location */
/* sha: b2b30c38618b2332d459da9f2b8351feb6c36a14b3a4110fb8775cde62bc2f19 */
#if BIND_git_submodule_location_FUNCTION
#define git_submodule_location_REQUIRED_ARGC 1
#define git_submodule_location_OPTIONAL_ARGC 0
/* git_submodule_location
 *
 * Parameters:
 * - submodule: git_submodule *
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_location(mrb_state* mrb, mrb_value self) {
  int native_location_status;
  mrb_value submodule;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &submodule);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Invocation */
  int native_return_value = git_submodule_location(&native_location_status, native_submodule);

  /* Box out param: location_status */
  mrb_value location_status = mrb_fixnum_value(native_location_status);

  return location_status;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_lookup */
/* sha: 6b9c60aa5ef228331b28cd8ee3d41767b6772d71a6abf748a3dc8e5f554ad5b0 */
#if BIND_git_submodule_lookup_FUNCTION
#define git_submodule_lookup_REQUIRED_ARGC 2
#define git_submodule_lookup_OPTIONAL_ARGC 0
/* git_submodule_lookup
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_lookup(mrb_state* mrb, mrb_value self) {
  git_submodule * native_out = NULL;
  mrb_value repo;
  char * native_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_submodule_lookup(&native_out, native_repo, native_name);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_submodule(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_name */
/* sha: 1a3d7ea776b60fe87e8d7470af67aba9df34664eb72e19e455b2c41b5fb552fc */
#if BIND_git_submodule_name_FUNCTION
#define git_submodule_name_REQUIRED_ARGC 1
#define git_submodule_name_OPTIONAL_ARGC 0
/* git_submodule_name
 *
 * Parameters:
 * - submodule: git_submodule *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_submodule_name(mrb_state* mrb, mrb_value self) {
  mrb_value submodule;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &submodule);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Invocation */
  const char * native_return_value = git_submodule_name(native_submodule);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_open */
/* sha: 262da25406db5eed7750155251942bb82984e5f86ead034a7b430fb89699b8c7 */
#if BIND_git_submodule_open_FUNCTION
#define git_submodule_open_REQUIRED_ARGC 1
#define git_submodule_open_OPTIONAL_ARGC 0
/* git_submodule_open
 *
 * Parameters:
 * - submodule: git_submodule *
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_open(mrb_state* mrb, mrb_value self) {
  git_repository * native_repo = NULL;
  mrb_value submodule;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &submodule);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Invocation */
  int native_return_value = git_submodule_open(&native_repo, native_submodule);

  /* Box out param: repo */
  mrb_value repo = native_repo == NULL ? mrb_nil_value() : mruby_giftwrap_git_repository(mrb, native_repo);

  return repo;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_owner */
/* sha: 2c8805dd7669c29ed5550cfe85b80535097c53525acee59af92cc79ba16e1886 */
#if BIND_git_submodule_owner_FUNCTION
#define git_submodule_owner_REQUIRED_ARGC 1
#define git_submodule_owner_OPTIONAL_ARGC 0
/* git_submodule_owner
 *
 * Parameters:
 * - submodule: git_submodule *
 * Return Type: git_repository *
 */
mrb_value
mrb_Git_git_submodule_owner(mrb_state* mrb, mrb_value self) {
  mrb_value submodule;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &submodule);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Invocation */
  git_repository * native_return_value = git_submodule_owner(native_submodule);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_repository(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_path */
/* sha: 8628bf020227abc6fb136daf841d89829b30332327585c21b58e5b0e530de9bb */
#if BIND_git_submodule_path_FUNCTION
#define git_submodule_path_REQUIRED_ARGC 1
#define git_submodule_path_OPTIONAL_ARGC 0
/* git_submodule_path
 *
 * Parameters:
 * - submodule: git_submodule *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_submodule_path(mrb_state* mrb, mrb_value self) {
  mrb_value submodule;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &submodule);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Invocation */
  const char * native_return_value = git_submodule_path(native_submodule);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_reload */
/* sha: 124208efb494a07003a6d31194b27e6c5c7d90cd1fb4559fdacd696b99613f20 */
#if BIND_git_submodule_reload_FUNCTION
#define git_submodule_reload_REQUIRED_ARGC 2
#define git_submodule_reload_OPTIONAL_ARGC 0
/* git_submodule_reload
 *
 * Parameters:
 * - submodule: git_submodule *
 * - force: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_reload(mrb_state* mrb, mrb_value self) {
  mrb_value submodule;
  mrb_int native_force;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &submodule, &native_force);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Invocation */
  int native_return_value = git_submodule_reload(native_submodule, native_force);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_repo_init */
/* sha: fd623892dc2c2318d02224a3cc47cface741b19cecd03e24c5bb44e8efd66b10 */
#if BIND_git_submodule_repo_init_FUNCTION
#define git_submodule_repo_init_REQUIRED_ARGC 2
#define git_submodule_repo_init_OPTIONAL_ARGC 0
/* git_submodule_repo_init
 *
 * Parameters:
 * - sm: const git_submodule *
 * - use_gitlink: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_repo_init(mrb_state* mrb, mrb_value self) {
  git_repository * native_out = NULL;
  mrb_value sm;
  mrb_int native_use_gitlink;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &sm, &native_use_gitlink);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, sm, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: sm */
  const git_submodule * native_sm = (mrb_nil_p(sm) ? NULL : mruby_unbox_git_submodule(sm));

  /* Invocation */
  int native_return_value = git_submodule_repo_init(&native_out, native_sm, native_use_gitlink);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_repository(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_resolve_url */
/* sha: e9b629a6d00c0c0c88c031faa468bbf415a9c080ce57acfeaa06dab5b6dd7831 */
#if BIND_git_submodule_resolve_url_FUNCTION
#define git_submodule_resolve_url_REQUIRED_ARGC 2
#define git_submodule_resolve_url_OPTIONAL_ARGC 0
/* git_submodule_resolve_url
 *
 * Parameters:
 * - repo: git_repository *
 * - url: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_resolve_url(mrb_state* mrb, mrb_value self) {
  git_buf * native_out = (git_buf*)calloc(1, sizeof(git_buf));
  mrb_value repo;
  char * native_url = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_url);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_submodule_resolve_url(native_out, native_repo, native_url);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_set_branch */
/* sha: 33d7d70c603224f3565027c072fbd762e74a97881e8dadfa14aed5947ab7740b */
#if BIND_git_submodule_set_branch_FUNCTION
#define git_submodule_set_branch_REQUIRED_ARGC 3
#define git_submodule_set_branch_OPTIONAL_ARGC 0
/* git_submodule_set_branch
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * - branch: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_set_branch(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_name = NULL;
  char * native_branch = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozz", &repo, &native_name, &native_branch);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_submodule_set_branch(native_repo, native_name, native_branch);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_set_fetch_recurse_submodules */
/* sha: d435d8644dcfebaf444ecf9daa7502ebfc13c90b5474fe332cd49fbf33edbec8 */
#if BIND_git_submodule_set_fetch_recurse_submodules_FUNCTION
#define git_submodule_set_fetch_recurse_submodules_REQUIRED_ARGC 3
#define git_submodule_set_fetch_recurse_submodules_OPTIONAL_ARGC 0
/* git_submodule_set_fetch_recurse_submodules
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * - fetch_recurse_submodules: git_submodule_recurse_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_set_fetch_recurse_submodules(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_name = NULL;
  mrb_int native_fetch_recurse_submodules;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &repo, &native_name, &native_fetch_recurse_submodules);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_submodule_set_fetch_recurse_submodules(native_repo, native_name, native_fetch_recurse_submodules);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_set_ignore */
/* sha: fea4aa820cff6f8724e8267ba15af565beec70954a08bea3c7e4f001fcab0171 */
#if BIND_git_submodule_set_ignore_FUNCTION
#define git_submodule_set_ignore_REQUIRED_ARGC 3
#define git_submodule_set_ignore_OPTIONAL_ARGC 0
/* git_submodule_set_ignore
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * - ignore: git_submodule_ignore_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_set_ignore(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_name = NULL;
  mrb_int native_ignore;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &repo, &native_name, &native_ignore);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_submodule_set_ignore(native_repo, native_name, native_ignore);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_set_update */
/* sha: 62c6bfbb75d8813bf3f6f77c1bb10a257c680ac42eb37edf971cb8654444f6fc */
#if BIND_git_submodule_set_update_FUNCTION
#define git_submodule_set_update_REQUIRED_ARGC 3
#define git_submodule_set_update_OPTIONAL_ARGC 0
/* git_submodule_set_update
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * - update: git_submodule_update_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_set_update(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_name = NULL;
  mrb_int native_update;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &repo, &native_name, &native_update);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_submodule_set_update(native_repo, native_name, native_update);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_set_url */
/* sha: e1b5978fc99933f2eba1984b02d8f8857ace41df9301e7184795b691de7b7f4b */
#if BIND_git_submodule_set_url_FUNCTION
#define git_submodule_set_url_REQUIRED_ARGC 3
#define git_submodule_set_url_OPTIONAL_ARGC 0
/* git_submodule_set_url
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * - url: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_set_url(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_name = NULL;
  char * native_url = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozz", &repo, &native_name, &native_url);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_submodule_set_url(native_repo, native_name, native_url);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_status */
/* sha: f67f1b29de7aaf1c93ee358e3487fbd1e0953888c28b587b2da9f9917f050607 */
#if BIND_git_submodule_status_FUNCTION
#define git_submodule_status_REQUIRED_ARGC 3
#define git_submodule_status_OPTIONAL_ARGC 0
/* git_submodule_status
 *
 * Parameters:
 * - repo: git_repository *
 * - name: const char *
 * - ignore: git_submodule_ignore_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_status(mrb_state* mrb, mrb_value self) {
  int native_status;
  mrb_value repo;
  char * native_name = NULL;
  mrb_int native_ignore;

  /* Fetch the args */
  mrb_get_args(mrb, "ozi", &repo, &native_name, &native_ignore);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_submodule_status(&native_status, native_repo, native_name, native_ignore);

  /* Box out param: status */
  mrb_value status = mrb_fixnum_value(native_status);

  return status;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_sync */
/* sha: f647a619d20e0075498980f1bc691697b70c2e52e1a0b08c27c2b060d1361901 */
#if BIND_git_submodule_sync_FUNCTION
#define git_submodule_sync_REQUIRED_ARGC 1
#define git_submodule_sync_OPTIONAL_ARGC 0
/* git_submodule_sync
 *
 * Parameters:
 * - submodule: git_submodule *
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_sync(mrb_state* mrb, mrb_value self) {
  mrb_value submodule;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &submodule);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Invocation */
  int native_return_value = git_submodule_sync(native_submodule);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_update */
/* sha: dcb15d0e5877954edbe1d4ac1e2980ea1a460f15b0fb6f1844f2289d57479d88 */
#if BIND_git_submodule_update_FUNCTION
#define git_submodule_update_REQUIRED_ARGC 3
#define git_submodule_update_OPTIONAL_ARGC 0
/* git_submodule_update
 *
 * Parameters:
 * - submodule: git_submodule *
 * - init: int
 * - options: git_submodule_update_options *
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_update(mrb_state* mrb, mrb_value self) {
  mrb_value submodule;
  mrb_int native_init;
  mrb_value options;

  /* Fetch the args */
  mrb_get_args(mrb, "oio", &submodule, &native_init, &options);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, options, SubmoduleUpdateOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SubmoduleUpdateOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Unbox param: options */
  git_submodule_update_options * native_options = (mrb_nil_p(options) ? NULL : mruby_unbox_git_submodule_update_options(options));

  /* Invocation */
  int native_return_value = git_submodule_update(native_submodule, native_init, native_options);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_update_init_options */
/* sha: 150d16b1c66094f2c526d5f71070418e9c1ff0c61ef6966a782788df17bfeaf9 */
#if BIND_git_submodule_update_init_options_FUNCTION
#define git_submodule_update_init_options_REQUIRED_ARGC 2
#define git_submodule_update_init_options_OPTIONAL_ARGC 0
/* git_submodule_update_init_options
 *
 * Parameters:
 * - opts: git_submodule_update_options *
 * - version: unsigned int
 * Return Type: int
 */
mrb_value
mrb_Git_git_submodule_update_init_options(mrb_state* mrb, mrb_value self) {
  mrb_value opts;
  mrb_int native_version;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &opts, &native_version);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, opts, SubmoduleUpdateOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "SubmoduleUpdateOptions expected");
    return mrb_nil_value();
  }

  /* Unbox param: opts */
  git_submodule_update_options * native_opts = (mrb_nil_p(opts) ? NULL : mruby_unbox_git_submodule_update_options(opts));

  /* Invocation */
  int native_return_value = git_submodule_update_init_options(native_opts, native_version);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_update_strategy */
/* sha: 0703ebb67562e0501491ef4c3c92b362473c014ffdfa6c6157fc0cc79f76a4a5 */
#if BIND_git_submodule_update_strategy_FUNCTION
#define git_submodule_update_strategy_REQUIRED_ARGC 1
#define git_submodule_update_strategy_OPTIONAL_ARGC 0
/* git_submodule_update_strategy
 *
 * Parameters:
 * - submodule: git_submodule *
 * Return Type: git_submodule_update_t
 */
mrb_value
mrb_Git_git_submodule_update_strategy(mrb_state* mrb, mrb_value self) {
  mrb_value submodule;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &submodule);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Invocation */
  git_submodule_update_t native_return_value = git_submodule_update_strategy(native_submodule);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_url */
/* sha: 90eeac5834c35dd599edc06df5496532e48e9b75a8aa8f6e5cc8d2d4d23eba38 */
#if BIND_git_submodule_url_FUNCTION
#define git_submodule_url_REQUIRED_ARGC 1
#define git_submodule_url_OPTIONAL_ARGC 0
/* git_submodule_url
 *
 * Parameters:
 * - submodule: git_submodule *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_submodule_url(mrb_state* mrb, mrb_value self) {
  mrb_value submodule;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &submodule);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Invocation */
  const char * native_return_value = git_submodule_url(native_submodule);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_submodule_wd_id */
/* sha: 841f2c3533833db847858f4e4cf36a5bec38edeb7f935e260706529bdbc65838 */
#if BIND_git_submodule_wd_id_FUNCTION
#define git_submodule_wd_id_REQUIRED_ARGC 1
#define git_submodule_wd_id_OPTIONAL_ARGC 0
/* git_submodule_wd_id
 *
 * Parameters:
 * - submodule: git_submodule *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_submodule_wd_id(mrb_state* mrb, mrb_value self) {
  mrb_value submodule;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &submodule);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, submodule, Submodule_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Submodule expected");
    return mrb_nil_value();
  }

  /* Unbox param: submodule */
  git_submodule * native_submodule = (mrb_nil_p(submodule) ? NULL : mruby_unbox_git_submodule(submodule));

  /* Invocation */
  const git_oid * native_return_value = git_submodule_wd_id(native_submodule);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_annotation_create */
/* sha: 671f25cd9fd3f24e9d841d4b2babbaad8006ffb11e7ac84468e9c1c102f6da36 */
#if BIND_git_tag_annotation_create_FUNCTION
#define git_tag_annotation_create_REQUIRED_ARGC 6
#define git_tag_annotation_create_OPTIONAL_ARGC 0
/* git_tag_annotation_create
 *
 * Parameters:
 * - oid: git_oid *
 * - repo: git_repository *
 * - tag_name: const char *
 * - target: const git_object *
 * - tagger: const git_signature *
 * - message: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_tag_annotation_create(mrb_state* mrb, mrb_value self) {
  mrb_value oid;
  mrb_value repo;
  char * native_tag_name = NULL;
  mrb_value target;
  mrb_value tagger;
  char * native_message = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oozooz", &oid, &repo, &native_tag_name, &target, &tagger, &native_message);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, oid, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, target, Object_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Object expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, tagger, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }

  /* Unbox param: oid */
  git_oid * native_oid = (mrb_nil_p(oid) ? NULL : mruby_unbox_git_oid(oid));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: target */
  const git_object * native_target = (mrb_nil_p(target) ? NULL : mruby_unbox_git_object(target));

  /* Unbox param: tagger */
  const git_signature * native_tagger = (mrb_nil_p(tagger) ? NULL : mruby_unbox_git_signature(tagger));

  /* Invocation */
  int native_return_value = git_tag_annotation_create(native_oid, native_repo, native_tag_name, native_target, native_tagger, native_message);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_create */
/* sha: a73d42c837e0f2c020c1364b0f7932b120ba28936f866487357c958030d8506e */
#if BIND_git_tag_create_FUNCTION
#define git_tag_create_REQUIRED_ARGC 7
#define git_tag_create_OPTIONAL_ARGC 0
/* git_tag_create
 *
 * Parameters:
 * - oid: git_oid *
 * - repo: git_repository *
 * - tag_name: const char *
 * - target: const git_object *
 * - tagger: const git_signature *
 * - message: const char *
 * - force: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_tag_create(mrb_state* mrb, mrb_value self) {
  mrb_value oid;
  mrb_value repo;
  char * native_tag_name = NULL;
  mrb_value target;
  mrb_value tagger;
  char * native_message = NULL;
  mrb_int native_force;

  /* Fetch the args */
  mrb_get_args(mrb, "oozoozi", &oid, &repo, &native_tag_name, &target, &tagger, &native_message, &native_force);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, oid, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, target, Object_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Object expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, tagger, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }

  /* Unbox param: oid */
  git_oid * native_oid = (mrb_nil_p(oid) ? NULL : mruby_unbox_git_oid(oid));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: target */
  const git_object * native_target = (mrb_nil_p(target) ? NULL : mruby_unbox_git_object(target));

  /* Unbox param: tagger */
  const git_signature * native_tagger = (mrb_nil_p(tagger) ? NULL : mruby_unbox_git_signature(tagger));

  /* Invocation */
  int native_return_value = git_tag_create(native_oid, native_repo, native_tag_name, native_target, native_tagger, native_message, native_force);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_create_frombuffer */
/* sha: a7ca89868d4eee0f3211393125c61f8f3f84834b35436d38cf1ad3f865cf9aeb */
#if BIND_git_tag_create_frombuffer_FUNCTION
#define git_tag_create_frombuffer_REQUIRED_ARGC 4
#define git_tag_create_frombuffer_OPTIONAL_ARGC 0
/* git_tag_create_frombuffer
 *
 * Parameters:
 * - oid: git_oid *
 * - repo: git_repository *
 * - buffer: const char *
 * - force: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_tag_create_frombuffer(mrb_state* mrb, mrb_value self) {
  mrb_value oid;
  mrb_value repo;
  char * native_buffer = NULL;
  mrb_int native_force;

  /* Fetch the args */
  mrb_get_args(mrb, "oozi", &oid, &repo, &native_buffer, &native_force);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, oid, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: oid */
  git_oid * native_oid = (mrb_nil_p(oid) ? NULL : mruby_unbox_git_oid(oid));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_tag_create_frombuffer(native_oid, native_repo, native_buffer, native_force);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_create_lightweight */
/* sha: 1abcff2062c68678998174df459f35afd51be7f5f6685e3bcb016fd67c7df7aa */
#if BIND_git_tag_create_lightweight_FUNCTION
#define git_tag_create_lightweight_REQUIRED_ARGC 5
#define git_tag_create_lightweight_OPTIONAL_ARGC 0
/* git_tag_create_lightweight
 *
 * Parameters:
 * - oid: git_oid *
 * - repo: git_repository *
 * - tag_name: const char *
 * - target: const git_object *
 * - force: int
 * Return Type: int
 */
mrb_value
mrb_Git_git_tag_create_lightweight(mrb_state* mrb, mrb_value self) {
  mrb_value oid;
  mrb_value repo;
  char * native_tag_name = NULL;
  mrb_value target;
  mrb_int native_force;

  /* Fetch the args */
  mrb_get_args(mrb, "oozoi", &oid, &repo, &native_tag_name, &target, &native_force);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, oid, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, target, Object_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Object expected");
    return mrb_nil_value();
  }

  /* Unbox param: oid */
  git_oid * native_oid = (mrb_nil_p(oid) ? NULL : mruby_unbox_git_oid(oid));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: target */
  const git_object * native_target = (mrb_nil_p(target) ? NULL : mruby_unbox_git_object(target));

  /* Invocation */
  int native_return_value = git_tag_create_lightweight(native_oid, native_repo, native_tag_name, native_target, native_force);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_delete */
/* sha: 4a51aeb50c3897021cbd0f712aecaad7322fbe04581c90c2659f9969031491a4 */
#if BIND_git_tag_delete_FUNCTION
#define git_tag_delete_REQUIRED_ARGC 2
#define git_tag_delete_OPTIONAL_ARGC 0
/* git_tag_delete
 *
 * Parameters:
 * - repo: git_repository *
 * - tag_name: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_tag_delete(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  char * native_tag_name = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &repo, &native_tag_name);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_tag_delete(native_repo, native_tag_name);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_foreach */
/* sha: 7a401f6c091da5b2460020e65f5fd0fd4cceadaff790bcc59fef6f8312514c0b */
#if BIND_git_tag_foreach_FUNCTION
#define git_tag_foreach_REQUIRED_ARGC 3
#define git_tag_foreach_OPTIONAL_ARGC 0
/* git_tag_foreach
 *
 * Parameters:
 * - repo: git_repository *
 * - callback: git_tag_foreach_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_tag_foreach(mrb_state* mrb, mrb_value self) {
  mrb_value repo;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &repo, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_tag_foreach_cb(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: callback */
  git_tag_foreach_cb native_callback = TODO_mruby_unbox_git_tag_foreach_cb(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_tag_foreach(native_repo, native_callback, native_payload);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_free */
/* sha: 052b5a2772be6b07bbf26a8b20e15abcf77ef5d91c0d62c2a3af4b5f56b05537 */
#if BIND_git_tag_free_FUNCTION
#define git_tag_free_REQUIRED_ARGC 1
#define git_tag_free_OPTIONAL_ARGC 0
/* git_tag_free
 *
 * Parameters:
 * - tag: git_tag *
 * Return Type: void
 */
mrb_value
mrb_Git_git_tag_free(mrb_state* mrb, mrb_value self) {
  mrb_value tag;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &tag);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tag, Tag_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tag expected");
    return mrb_nil_value();
  }

  /* Unbox param: tag */
  git_tag * native_tag = (mrb_nil_p(tag) ? NULL : mruby_unbox_git_tag(tag));

  /* Invocation */
  git_tag_free(native_tag);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_id */
/* sha: c32511f6ff9a3efe8b0ecbb4940b21e640736f0fde08ba13f9615ae39256052a */
#if BIND_git_tag_id_FUNCTION
#define git_tag_id_REQUIRED_ARGC 1
#define git_tag_id_OPTIONAL_ARGC 0
/* git_tag_id
 *
 * Parameters:
 * - tag: const git_tag *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_tag_id(mrb_state* mrb, mrb_value self) {
  mrb_value tag;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &tag);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tag, Tag_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tag expected");
    return mrb_nil_value();
  }

  /* Unbox param: tag */
  const git_tag * native_tag = (mrb_nil_p(tag) ? NULL : mruby_unbox_git_tag(tag));

  /* Invocation */
  const git_oid * native_return_value = git_tag_id(native_tag);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_list */
/* sha: abf9afded20d698b5cc2d2992ab0eca6ac24449bf6626c31dcb241a62834ceef */
#if BIND_git_tag_list_FUNCTION
#define git_tag_list_REQUIRED_ARGC 2
#define git_tag_list_OPTIONAL_ARGC 0
/* git_tag_list
 *
 * Parameters:
 * - tag_names: git_strarray *
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_tag_list(mrb_state* mrb, mrb_value self) {
  mrb_value tag_names;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &tag_names, &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tag_names, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: tag_names */
  git_strarray * native_tag_names = (mrb_nil_p(tag_names) ? NULL : mruby_unbox_git_strarray(tag_names));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_tag_list(native_tag_names, native_repo);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_list_match */
/* sha: f4d814cec2563e06935e924317a272c6b7768a4a9e12fbcb14ad6f3ecb001b75 */
#if BIND_git_tag_list_match_FUNCTION
#define git_tag_list_match_REQUIRED_ARGC 3
#define git_tag_list_match_OPTIONAL_ARGC 0
/* git_tag_list_match
 *
 * Parameters:
 * - tag_names: git_strarray *
 * - pattern: const char *
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_tag_list_match(mrb_state* mrb, mrb_value self) {
  mrb_value tag_names;
  char * native_pattern = NULL;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "ozo", &tag_names, &native_pattern, &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tag_names, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: tag_names */
  git_strarray * native_tag_names = (mrb_nil_p(tag_names) ? NULL : mruby_unbox_git_strarray(tag_names));

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_tag_list_match(native_tag_names, native_pattern, native_repo);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_lookup */
/* sha: a0084fa25747a450df230219db655af3690c8c1e80078ab1dc8b232400ce77db */
#if BIND_git_tag_lookup_FUNCTION
#define git_tag_lookup_REQUIRED_ARGC 2
#define git_tag_lookup_OPTIONAL_ARGC 0
/* git_tag_lookup
 *
 * Parameters:
 * - repo: git_repository *
 * - id: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_tag_lookup(mrb_state* mrb, mrb_value self) {
  git_tag * native_out = NULL;
  mrb_value repo;
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &repo, &id);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_tag_lookup(&native_out, native_repo, native_id);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_tag(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_lookup_prefix */
/* sha: c90aab5402abb5cc495c88081134122503f50ccb8a4f2aa4df15e7d77868eb28 */
#if BIND_git_tag_lookup_prefix_FUNCTION
#define git_tag_lookup_prefix_REQUIRED_ARGC 3
#define git_tag_lookup_prefix_OPTIONAL_ARGC 0
/* git_tag_lookup_prefix
 *
 * Parameters:
 * - repo: git_repository *
 * - id: const git_oid *
 * - len: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_tag_lookup_prefix(mrb_state* mrb, mrb_value self) {
  git_tag * native_out = NULL;
  mrb_value repo;
  mrb_value id;
  mrb_int native_len;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &repo, &id, &native_len);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_tag_lookup_prefix(&native_out, native_repo, native_id, native_len);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_tag(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_message */
/* sha: c4f9a8dfd1f427dfc83b1a7b89932496a73f616ad064c6ccf9fdf83d4a3cc8ce */
#if BIND_git_tag_message_FUNCTION
#define git_tag_message_REQUIRED_ARGC 1
#define git_tag_message_OPTIONAL_ARGC 0
/* git_tag_message
 *
 * Parameters:
 * - tag: const git_tag *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_tag_message(mrb_state* mrb, mrb_value self) {
  mrb_value tag;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &tag);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tag, Tag_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tag expected");
    return mrb_nil_value();
  }

  /* Unbox param: tag */
  const git_tag * native_tag = (mrb_nil_p(tag) ? NULL : mruby_unbox_git_tag(tag));

  /* Invocation */
  const char * native_return_value = git_tag_message(native_tag);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_name */
/* sha: 3ce6a2aa634632f444a234866aa4bc7a0d2c7a65f79d528e3cf01e33d7a9fdaa */
#if BIND_git_tag_name_FUNCTION
#define git_tag_name_REQUIRED_ARGC 1
#define git_tag_name_OPTIONAL_ARGC 0
/* git_tag_name
 *
 * Parameters:
 * - tag: const git_tag *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_tag_name(mrb_state* mrb, mrb_value self) {
  mrb_value tag;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &tag);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tag, Tag_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tag expected");
    return mrb_nil_value();
  }

  /* Unbox param: tag */
  const git_tag * native_tag = (mrb_nil_p(tag) ? NULL : mruby_unbox_git_tag(tag));

  /* Invocation */
  const char * native_return_value = git_tag_name(native_tag);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_owner */
/* sha: cdb7acb92cd7feec98eb4639ffc752aaebdce7432cacd9080377b18b753c6f57 */
#if BIND_git_tag_owner_FUNCTION
#define git_tag_owner_REQUIRED_ARGC 1
#define git_tag_owner_OPTIONAL_ARGC 0
/* git_tag_owner
 *
 * Parameters:
 * - tag: const git_tag *
 * Return Type: git_repository *
 */
mrb_value
mrb_Git_git_tag_owner(mrb_state* mrb, mrb_value self) {
  mrb_value tag;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &tag);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tag, Tag_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tag expected");
    return mrb_nil_value();
  }

  /* Unbox param: tag */
  const git_tag * native_tag = (mrb_nil_p(tag) ? NULL : mruby_unbox_git_tag(tag));

  /* Invocation */
  git_repository * native_return_value = git_tag_owner(native_tag);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_repository(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_peel */
/* sha: 09f3af14890c0ca28f4463936cead16a027653962ee57e67ff3ddc50b8c61bd5 */
#if BIND_git_tag_peel_FUNCTION
#define git_tag_peel_REQUIRED_ARGC 1
#define git_tag_peel_OPTIONAL_ARGC 0
/* git_tag_peel
 *
 * Parameters:
 * - tag: const git_tag *
 * Return Type: int
 */
mrb_value
mrb_Git_git_tag_peel(mrb_state* mrb, mrb_value self) {
  git_object * native_tag_target_out = NULL;
  mrb_value tag;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &tag);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tag, Tag_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tag expected");
    return mrb_nil_value();
  }

  /* Unbox param: tag */
  const git_tag * native_tag = (mrb_nil_p(tag) ? NULL : mruby_unbox_git_tag(tag));

  /* Invocation */
  int native_return_value = git_tag_peel(&native_tag_target_out, native_tag);

  /* Box out param: tag_target_out */
  mrb_value tag_target_out = native_tag_target_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_object(mrb, native_tag_target_out);

  return tag_target_out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_tagger */
/* sha: c837ab2c914bbb2701a0656ffddb7969f7b2add242bc6f483bbf2cface6d0890 */
#if BIND_git_tag_tagger_FUNCTION
#define git_tag_tagger_REQUIRED_ARGC 1
#define git_tag_tagger_OPTIONAL_ARGC 0
/* git_tag_tagger
 *
 * Parameters:
 * - tag: const git_tag *
 * Return Type: const git_signature *
 */
mrb_value
mrb_Git_git_tag_tagger(mrb_state* mrb, mrb_value self) {
  mrb_value tag;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &tag);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tag, Tag_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tag expected");
    return mrb_nil_value();
  }

  /* Unbox param: tag */
  const git_tag * native_tag = (mrb_nil_p(tag) ? NULL : mruby_unbox_git_tag(tag));

  /* Invocation */
  const git_signature * native_return_value = git_tag_tagger(native_tag);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_signature(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_target */
/* sha: c32fa6dc6bc8c082d8edc81d5815b559c880064e1380db2b4ac2f90b4a428a12 */
#if BIND_git_tag_target_FUNCTION
#define git_tag_target_REQUIRED_ARGC 1
#define git_tag_target_OPTIONAL_ARGC 0
/* git_tag_target
 *
 * Parameters:
 * - tag: const git_tag *
 * Return Type: int
 */
mrb_value
mrb_Git_git_tag_target(mrb_state* mrb, mrb_value self) {
  git_object * native_target_out = NULL;
  mrb_value tag;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &tag);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tag, Tag_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tag expected");
    return mrb_nil_value();
  }

  /* Unbox param: tag */
  const git_tag * native_tag = (mrb_nil_p(tag) ? NULL : mruby_unbox_git_tag(tag));

  /* Invocation */
  int native_return_value = git_tag_target(&native_target_out, native_tag);

  /* Box out param: target_out */
  mrb_value target_out = native_target_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_object(mrb, native_target_out);

  return target_out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_target_id */
/* sha: 17b36e87b8a238b13713361688a6b97051a0b8d355369cf28579b332a827776f */
#if BIND_git_tag_target_id_FUNCTION
#define git_tag_target_id_REQUIRED_ARGC 1
#define git_tag_target_id_OPTIONAL_ARGC 0
/* git_tag_target_id
 *
 * Parameters:
 * - tag: const git_tag *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_tag_target_id(mrb_state* mrb, mrb_value self) {
  mrb_value tag;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &tag);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tag, Tag_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tag expected");
    return mrb_nil_value();
  }

  /* Unbox param: tag */
  const git_tag * native_tag = (mrb_nil_p(tag) ? NULL : mruby_unbox_git_tag(tag));

  /* Invocation */
  const git_oid * native_return_value = git_tag_target_id(native_tag);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tag_target_type */
/* sha: 15db3e6518567a124504a4db8157e1baf72a5fbd927f27b3eb1f5c0cd3c2496b */
#if BIND_git_tag_target_type_FUNCTION
#define git_tag_target_type_REQUIRED_ARGC 1
#define git_tag_target_type_OPTIONAL_ARGC 0
/* git_tag_target_type
 *
 * Parameters:
 * - tag: const git_tag *
 * Return Type: git_otype
 */
mrb_value
mrb_Git_git_tag_target_type(mrb_state* mrb, mrb_value self) {
  mrb_value tag;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &tag);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tag, Tag_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tag expected");
    return mrb_nil_value();
  }

  /* Unbox param: tag */
  const git_tag * native_tag = (mrb_nil_p(tag) ? NULL : mruby_unbox_git_tag(tag));

  /* Invocation */
  git_otype native_return_value = git_tag_target_type(native_tag);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_trace_set */
/* sha: 98692ee73d44e1d854e2f4ca7c96908a8ed47329edcbe7992293ee3191816b88 */
#if BIND_git_trace_set_FUNCTION
#define git_trace_set_REQUIRED_ARGC 2
#define git_trace_set_OPTIONAL_ARGC 0
/* git_trace_set
 *
 * Parameters:
 * - level: git_trace_level_t
 * - cb: git_trace_callback
 * Return Type: int
 */
mrb_value
mrb_Git_git_trace_set(mrb_state* mrb, mrb_value self) {
  mrb_int native_level;
  mrb_value cb;

  /* Fetch the args */
  mrb_get_args(mrb, "io", &native_level, &cb);

  /* Type checking */
  TODO_type_check_git_trace_callback(cb);

  /* Unbox param: cb */
  git_trace_callback native_cb = TODO_mruby_unbox_git_trace_callback(cb);

  /* Invocation */
  int native_return_value = git_trace_set(native_level, native_cb);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_transaction_commit */
/* sha: 5187ba4b0f9f71f481c85ddf1f2fbcd94682858555c5b59f5ed2f0dbabd8b697 */
#if BIND_git_transaction_commit_FUNCTION
#define git_transaction_commit_REQUIRED_ARGC 1
#define git_transaction_commit_OPTIONAL_ARGC 0
/* git_transaction_commit
 *
 * Parameters:
 * - tx: git_transaction *
 * Return Type: int
 */
mrb_value
mrb_Git_git_transaction_commit(mrb_state* mrb, mrb_value self) {
  mrb_value tx;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &tx);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tx, Transaction_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Transaction expected");
    return mrb_nil_value();
  }

  /* Unbox param: tx */
  git_transaction * native_tx = (mrb_nil_p(tx) ? NULL : mruby_unbox_git_transaction(tx));

  /* Invocation */
  int native_return_value = git_transaction_commit(native_tx);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_transaction_free */
/* sha: 8d5000522bc4eef74bc023782b7100e54b64c10826ad1b890b215a6d8e8c3839 */
#if BIND_git_transaction_free_FUNCTION
#define git_transaction_free_REQUIRED_ARGC 1
#define git_transaction_free_OPTIONAL_ARGC 0
/* git_transaction_free
 *
 * Parameters:
 * - tx: git_transaction *
 * Return Type: void
 */
mrb_value
mrb_Git_git_transaction_free(mrb_state* mrb, mrb_value self) {
  mrb_value tx;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &tx);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tx, Transaction_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Transaction expected");
    return mrb_nil_value();
  }

  /* Unbox param: tx */
  git_transaction * native_tx = (mrb_nil_p(tx) ? NULL : mruby_unbox_git_transaction(tx));

  /* Invocation */
  git_transaction_free(native_tx);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_transaction_lock_ref */
/* sha: 856a25727cb2bb167a068d36482438a175e9d340035fd5d4f87477dfb97f23e0 */
#if BIND_git_transaction_lock_ref_FUNCTION
#define git_transaction_lock_ref_REQUIRED_ARGC 2
#define git_transaction_lock_ref_OPTIONAL_ARGC 0
/* git_transaction_lock_ref
 *
 * Parameters:
 * - tx: git_transaction *
 * - refname: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_transaction_lock_ref(mrb_state* mrb, mrb_value self) {
  mrb_value tx;
  char * native_refname = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &tx, &native_refname);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tx, Transaction_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Transaction expected");
    return mrb_nil_value();
  }

  /* Unbox param: tx */
  git_transaction * native_tx = (mrb_nil_p(tx) ? NULL : mruby_unbox_git_transaction(tx));

  /* Invocation */
  int native_return_value = git_transaction_lock_ref(native_tx, native_refname);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_transaction_new */
/* sha: 21e2fe72eb059314a50cace30cac52dbce7a6bf83fb9e991e4320d8eba79d94f */
#if BIND_git_transaction_new_FUNCTION
#define git_transaction_new_REQUIRED_ARGC 1
#define git_transaction_new_OPTIONAL_ARGC 0
/* git_transaction_new
 *
 * Parameters:
 * - repo: git_repository *
 * Return Type: int
 */
mrb_value
mrb_Git_git_transaction_new(mrb_state* mrb, mrb_value self) {
  git_transaction * native_out = NULL;
  mrb_value repo;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &repo);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Invocation */
  int native_return_value = git_transaction_new(&native_out, native_repo);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_transaction(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_transaction_remove */
/* sha: 149b939b1010e659fe0856f635c4e50958729d6bcf3d9a04eb012e8f65a5554d */
#if BIND_git_transaction_remove_FUNCTION
#define git_transaction_remove_REQUIRED_ARGC 2
#define git_transaction_remove_OPTIONAL_ARGC 0
/* git_transaction_remove
 *
 * Parameters:
 * - tx: git_transaction *
 * - refname: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_transaction_remove(mrb_state* mrb, mrb_value self) {
  mrb_value tx;
  char * native_refname = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &tx, &native_refname);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tx, Transaction_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Transaction expected");
    return mrb_nil_value();
  }

  /* Unbox param: tx */
  git_transaction * native_tx = (mrb_nil_p(tx) ? NULL : mruby_unbox_git_transaction(tx));

  /* Invocation */
  int native_return_value = git_transaction_remove(native_tx, native_refname);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_transaction_set_reflog */
/* sha: e04fcdbc32c789e778c07a107f5d1abf87008208617dc1b0f3f9c555195ef40f */
#if BIND_git_transaction_set_reflog_FUNCTION
#define git_transaction_set_reflog_REQUIRED_ARGC 3
#define git_transaction_set_reflog_OPTIONAL_ARGC 0
/* git_transaction_set_reflog
 *
 * Parameters:
 * - tx: git_transaction *
 * - refname: const char *
 * - reflog: const git_reflog *
 * Return Type: int
 */
mrb_value
mrb_Git_git_transaction_set_reflog(mrb_state* mrb, mrb_value self) {
  mrb_value tx;
  char * native_refname = NULL;
  mrb_value reflog;

  /* Fetch the args */
  mrb_get_args(mrb, "ozo", &tx, &native_refname, &reflog);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tx, Transaction_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Transaction expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, reflog, Reflog_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Reflog expected");
    return mrb_nil_value();
  }

  /* Unbox param: tx */
  git_transaction * native_tx = (mrb_nil_p(tx) ? NULL : mruby_unbox_git_transaction(tx));

  /* Unbox param: reflog */
  const git_reflog * native_reflog = (mrb_nil_p(reflog) ? NULL : mruby_unbox_git_reflog(reflog));

  /* Invocation */
  int native_return_value = git_transaction_set_reflog(native_tx, native_refname, native_reflog);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_transaction_set_symbolic_target */
/* sha: c0da148c264f1f15d2e859258445d06c3efc7aa351217e9896e7559af65fdf1e */
#if BIND_git_transaction_set_symbolic_target_FUNCTION
#define git_transaction_set_symbolic_target_REQUIRED_ARGC 5
#define git_transaction_set_symbolic_target_OPTIONAL_ARGC 0
/* git_transaction_set_symbolic_target
 *
 * Parameters:
 * - tx: git_transaction *
 * - refname: const char *
 * - target: const char *
 * - sig: const git_signature *
 * - msg: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_transaction_set_symbolic_target(mrb_state* mrb, mrb_value self) {
  mrb_value tx;
  char * native_refname = NULL;
  char * native_target = NULL;
  mrb_value sig;
  char * native_msg = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozzoz", &tx, &native_refname, &native_target, &sig, &native_msg);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tx, Transaction_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Transaction expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, sig, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }

  /* Unbox param: tx */
  git_transaction * native_tx = (mrb_nil_p(tx) ? NULL : mruby_unbox_git_transaction(tx));

  /* Unbox param: sig */
  const git_signature * native_sig = (mrb_nil_p(sig) ? NULL : mruby_unbox_git_signature(sig));

  /* Invocation */
  int native_return_value = git_transaction_set_symbolic_target(native_tx, native_refname, native_target, native_sig, native_msg);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_transaction_set_target */
/* sha: bbeab059af98443384fbba87b59ad170c704035ab12bb44e14c4496f3a7e9643 */
#if BIND_git_transaction_set_target_FUNCTION
#define git_transaction_set_target_REQUIRED_ARGC 5
#define git_transaction_set_target_OPTIONAL_ARGC 0
/* git_transaction_set_target
 *
 * Parameters:
 * - tx: git_transaction *
 * - refname: const char *
 * - target: const git_oid *
 * - sig: const git_signature *
 * - msg: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_transaction_set_target(mrb_state* mrb, mrb_value self) {
  mrb_value tx;
  char * native_refname = NULL;
  mrb_value target;
  mrb_value sig;
  char * native_msg = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "ozooz", &tx, &native_refname, &target, &sig, &native_msg);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tx, Transaction_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Transaction expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, target, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, sig, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }

  /* Unbox param: tx */
  git_transaction * native_tx = (mrb_nil_p(tx) ? NULL : mruby_unbox_git_transaction(tx));

  /* Unbox param: target */
  const git_oid * native_target = (mrb_nil_p(target) ? NULL : mruby_unbox_git_oid(target));

  /* Unbox param: sig */
  const git_signature * native_sig = (mrb_nil_p(sig) ? NULL : mruby_unbox_git_signature(sig));

  /* Invocation */
  int native_return_value = git_transaction_set_target(native_tx, native_refname, native_target, native_sig, native_msg);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_entry_byid */
/* sha: 8c9e6eef07d1cfaff3f1ab51953d666f17eeff46a863af28b0ef80685a79c74d */
#if BIND_git_tree_entry_byid_FUNCTION
#define git_tree_entry_byid_REQUIRED_ARGC 2
#define git_tree_entry_byid_OPTIONAL_ARGC 0
/* git_tree_entry_byid
 *
 * Parameters:
 * - tree: const git_tree *
 * - id: const git_oid *
 * Return Type: const git_tree_entry *
 */
mrb_value
mrb_Git_git_tree_entry_byid(mrb_state* mrb, mrb_value self) {
  mrb_value tree;
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &tree, &id);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: tree */
  const git_tree * native_tree = (mrb_nil_p(tree) ? NULL : mruby_unbox_git_tree(tree));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  const git_tree_entry * native_return_value = git_tree_entry_byid(native_tree, native_id);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_tree_entry(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_entry_byindex */
/* sha: 6b7931048fe5ad835e635f6830b956577abdb67f11ca10bc2cfaf5a96f071236 */
#if BIND_git_tree_entry_byindex_FUNCTION
#define git_tree_entry_byindex_REQUIRED_ARGC 2
#define git_tree_entry_byindex_OPTIONAL_ARGC 0
/* git_tree_entry_byindex
 *
 * Parameters:
 * - tree: const git_tree *
 * - idx: size_t
 * Return Type: const git_tree_entry *
 */
mrb_value
mrb_Git_git_tree_entry_byindex(mrb_state* mrb, mrb_value self) {
  mrb_value tree;
  mrb_int native_idx;

  /* Fetch the args */
  mrb_get_args(mrb, "oi", &tree, &native_idx);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }

  /* Unbox param: tree */
  const git_tree * native_tree = (mrb_nil_p(tree) ? NULL : mruby_unbox_git_tree(tree));

  /* Invocation */
  const git_tree_entry * native_return_value = git_tree_entry_byindex(native_tree, native_idx);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_tree_entry(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_entry_byname */
/* sha: e2897318c4af374cddf92afaad1877b4431c29305ad7a3ab31cdafddfee68c25 */
#if BIND_git_tree_entry_byname_FUNCTION
#define git_tree_entry_byname_REQUIRED_ARGC 2
#define git_tree_entry_byname_OPTIONAL_ARGC 0
/* git_tree_entry_byname
 *
 * Parameters:
 * - tree: const git_tree *
 * - filename: const char *
 * Return Type: const git_tree_entry *
 */
mrb_value
mrb_Git_git_tree_entry_byname(mrb_state* mrb, mrb_value self) {
  mrb_value tree;
  char * native_filename = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &tree, &native_filename);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }

  /* Unbox param: tree */
  const git_tree * native_tree = (mrb_nil_p(tree) ? NULL : mruby_unbox_git_tree(tree));

  /* Invocation */
  const git_tree_entry * native_return_value = git_tree_entry_byname(native_tree, native_filename);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_tree_entry(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_entry_bypath */
/* sha: cb2b12ae9e9d3ef31bf963cfc22c3c81218a46694c3690915cb0193becd9e5c8 */
#if BIND_git_tree_entry_bypath_FUNCTION
#define git_tree_entry_bypath_REQUIRED_ARGC 2
#define git_tree_entry_bypath_OPTIONAL_ARGC 0
/* git_tree_entry_bypath
 *
 * Parameters:
 * - root: const git_tree *
 * - path: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_tree_entry_bypath(mrb_state* mrb, mrb_value self) {
  git_tree_entry * native_out = NULL;
  mrb_value root;
  char * native_path = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &root, &native_path);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, root, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }

  /* Unbox param: root */
  const git_tree * native_root = (mrb_nil_p(root) ? NULL : mruby_unbox_git_tree(root));

  /* Invocation */
  int native_return_value = git_tree_entry_bypath(&native_out, native_root, native_path);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_tree_entry(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_entry_cmp */
/* sha: 2804fd727f9b2116638292104ce200dd65504f8f6c0ba43e3004c7f518d63877 */
#if BIND_git_tree_entry_cmp_FUNCTION
#define git_tree_entry_cmp_REQUIRED_ARGC 2
#define git_tree_entry_cmp_OPTIONAL_ARGC 0
/* git_tree_entry_cmp
 *
 * Parameters:
 * - e1: const git_tree_entry *
 * - e2: const git_tree_entry *
 * Return Type: int
 */
mrb_value
mrb_Git_git_tree_entry_cmp(mrb_state* mrb, mrb_value self) {
  mrb_value e1;
  mrb_value e2;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &e1, &e2);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, e1, TreeEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TreeEntry expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, e2, TreeEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TreeEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: e1 */
  const git_tree_entry * native_e1 = (mrb_nil_p(e1) ? NULL : mruby_unbox_git_tree_entry(e1));

  /* Unbox param: e2 */
  const git_tree_entry * native_e2 = (mrb_nil_p(e2) ? NULL : mruby_unbox_git_tree_entry(e2));

  /* Invocation */
  int native_return_value = git_tree_entry_cmp(native_e1, native_e2);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_entry_dup */
/* sha: 44b94bc5fe8d8f87192d3d4df8761b4b3be61b5b5fd8dcb99f170fdad713748c */
#if BIND_git_tree_entry_dup_FUNCTION
#define git_tree_entry_dup_REQUIRED_ARGC 1
#define git_tree_entry_dup_OPTIONAL_ARGC 0
/* git_tree_entry_dup
 *
 * Parameters:
 * - source: const git_tree_entry *
 * Return Type: int
 */
mrb_value
mrb_Git_git_tree_entry_dup(mrb_state* mrb, mrb_value self) {
  git_tree_entry * native_dest = NULL;
  mrb_value source;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &source);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, source, TreeEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TreeEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: source */
  const git_tree_entry * native_source = (mrb_nil_p(source) ? NULL : mruby_unbox_git_tree_entry(source));

  /* Invocation */
  int native_return_value = git_tree_entry_dup(&native_dest, native_source);

  /* Box out param: dest */
  mrb_value dest = native_dest == NULL ? mrb_nil_value() : mruby_giftwrap_git_tree_entry(mrb, native_dest);

  return dest;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_entry_filemode */
/* sha: 44ab0724911e8a41c53791713ecc3102374a417649ead6394b3b98856e9e3b10 */
#if BIND_git_tree_entry_filemode_FUNCTION
#define git_tree_entry_filemode_REQUIRED_ARGC 1
#define git_tree_entry_filemode_OPTIONAL_ARGC 0
/* git_tree_entry_filemode
 *
 * Parameters:
 * - entry: const git_tree_entry *
 * Return Type: git_filemode_t
 */
mrb_value
mrb_Git_git_tree_entry_filemode(mrb_state* mrb, mrb_value self) {
  mrb_value entry;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &entry);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, entry, TreeEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TreeEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: entry */
  const git_tree_entry * native_entry = (mrb_nil_p(entry) ? NULL : mruby_unbox_git_tree_entry(entry));

  /* Invocation */
  git_filemode_t native_return_value = git_tree_entry_filemode(native_entry);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_entry_filemode_raw */
/* sha: 549701e385b7862e3ae4ec8ca17182d1289957c9293d3491aa424f985f1d96ef */
#if BIND_git_tree_entry_filemode_raw_FUNCTION
#define git_tree_entry_filemode_raw_REQUIRED_ARGC 1
#define git_tree_entry_filemode_raw_OPTIONAL_ARGC 0
/* git_tree_entry_filemode_raw
 *
 * Parameters:
 * - entry: const git_tree_entry *
 * Return Type: git_filemode_t
 */
mrb_value
mrb_Git_git_tree_entry_filemode_raw(mrb_state* mrb, mrb_value self) {
  mrb_value entry;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &entry);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, entry, TreeEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TreeEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: entry */
  const git_tree_entry * native_entry = (mrb_nil_p(entry) ? NULL : mruby_unbox_git_tree_entry(entry));

  /* Invocation */
  git_filemode_t native_return_value = git_tree_entry_filemode_raw(native_entry);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_entry_free */
/* sha: 5e6cce9df0f46a0c5936b884fb061c69518df362f4d972f4ab050d874241b60b */
#if BIND_git_tree_entry_free_FUNCTION
#define git_tree_entry_free_REQUIRED_ARGC 1
#define git_tree_entry_free_OPTIONAL_ARGC 0
/* git_tree_entry_free
 *
 * Parameters:
 * - entry: git_tree_entry *
 * Return Type: void
 */
mrb_value
mrb_Git_git_tree_entry_free(mrb_state* mrb, mrb_value self) {
  mrb_value entry;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &entry);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, entry, TreeEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TreeEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: entry */
  git_tree_entry * native_entry = (mrb_nil_p(entry) ? NULL : mruby_unbox_git_tree_entry(entry));

  /* Invocation */
  git_tree_entry_free(native_entry);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_entry_id */
/* sha: 08a2fed5a60e489c1af03cac778d5dcb423e0a4f324cb0eb5d413161a4e0f7a5 */
#if BIND_git_tree_entry_id_FUNCTION
#define git_tree_entry_id_REQUIRED_ARGC 1
#define git_tree_entry_id_OPTIONAL_ARGC 0
/* git_tree_entry_id
 *
 * Parameters:
 * - entry: const git_tree_entry *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_tree_entry_id(mrb_state* mrb, mrb_value self) {
  mrb_value entry;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &entry);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, entry, TreeEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TreeEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: entry */
  const git_tree_entry * native_entry = (mrb_nil_p(entry) ? NULL : mruby_unbox_git_tree_entry(entry));

  /* Invocation */
  const git_oid * native_return_value = git_tree_entry_id(native_entry);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_entry_name */
/* sha: 86e7cc1296775d3be0b9f9357f49d038d1f6942afa3c5f2cc7bc82b284fee038 */
#if BIND_git_tree_entry_name_FUNCTION
#define git_tree_entry_name_REQUIRED_ARGC 1
#define git_tree_entry_name_OPTIONAL_ARGC 0
/* git_tree_entry_name
 *
 * Parameters:
 * - entry: const git_tree_entry *
 * Return Type: const char *
 */
mrb_value
mrb_Git_git_tree_entry_name(mrb_state* mrb, mrb_value self) {
  mrb_value entry;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &entry);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, entry, TreeEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TreeEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: entry */
  const git_tree_entry * native_entry = (mrb_nil_p(entry) ? NULL : mruby_unbox_git_tree_entry(entry));

  /* Invocation */
  const char * native_return_value = git_tree_entry_name(native_entry);

  /* Box the return value */
  mrb_value return_value = native_return_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_entry_to_object */
/* sha: 6cec69d188cc6804d4d268929afb606c83bd0160acf8d7d47df02b5332112908 */
#if BIND_git_tree_entry_to_object_FUNCTION
#define git_tree_entry_to_object_REQUIRED_ARGC 2
#define git_tree_entry_to_object_OPTIONAL_ARGC 0
/* git_tree_entry_to_object
 *
 * Parameters:
 * - repo: git_repository *
 * - entry: const git_tree_entry *
 * Return Type: int
 */
mrb_value
mrb_Git_git_tree_entry_to_object(mrb_state* mrb, mrb_value self) {
  git_object * native_object_out = NULL;
  mrb_value repo;
  mrb_value entry;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &repo, &entry);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, entry, TreeEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TreeEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: entry */
  const git_tree_entry * native_entry = (mrb_nil_p(entry) ? NULL : mruby_unbox_git_tree_entry(entry));

  /* Invocation */
  int native_return_value = git_tree_entry_to_object(&native_object_out, native_repo, native_entry);

  /* Box out param: object_out */
  mrb_value object_out = native_object_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_object(mrb, native_object_out);

  return object_out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_entry_type */
/* sha: 67f8b7b3660fe5268110cef6370c2d10800e7682123db8a8a5d8f1c894c3aa7f */
#if BIND_git_tree_entry_type_FUNCTION
#define git_tree_entry_type_REQUIRED_ARGC 1
#define git_tree_entry_type_OPTIONAL_ARGC 0
/* git_tree_entry_type
 *
 * Parameters:
 * - entry: const git_tree_entry *
 * Return Type: git_otype
 */
mrb_value
mrb_Git_git_tree_entry_type(mrb_state* mrb, mrb_value self) {
  mrb_value entry;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &entry);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, entry, TreeEntry_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "TreeEntry expected");
    return mrb_nil_value();
  }

  /* Unbox param: entry */
  const git_tree_entry * native_entry = (mrb_nil_p(entry) ? NULL : mruby_unbox_git_tree_entry(entry));

  /* Invocation */
  git_otype native_return_value = git_tree_entry_type(native_entry);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_entrycount */
/* sha: 0f137dd434ebc8185fbf3610b10df1b91531e9348ad74980fba524f7aa49b2c9 */
#if BIND_git_tree_entrycount_FUNCTION
#define git_tree_entrycount_REQUIRED_ARGC 1
#define git_tree_entrycount_OPTIONAL_ARGC 0
/* git_tree_entrycount
 *
 * Parameters:
 * - tree: const git_tree *
 * Return Type: size_t
 */
mrb_value
mrb_Git_git_tree_entrycount(mrb_state* mrb, mrb_value self) {
  mrb_value tree;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &tree);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }

  /* Unbox param: tree */
  const git_tree * native_tree = (mrb_nil_p(tree) ? NULL : mruby_unbox_git_tree(tree));

  /* Invocation */
  size_t native_return_value = git_tree_entrycount(native_tree);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_free */
/* sha: 589d938eaecbb0439e8104c8b80e67c68741926e0805c495aff47b7932fd6438 */
#if BIND_git_tree_free_FUNCTION
#define git_tree_free_REQUIRED_ARGC 1
#define git_tree_free_OPTIONAL_ARGC 0
/* git_tree_free
 *
 * Parameters:
 * - tree: git_tree *
 * Return Type: void
 */
mrb_value
mrb_Git_git_tree_free(mrb_state* mrb, mrb_value self) {
  mrb_value tree;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &tree);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }

  /* Unbox param: tree */
  git_tree * native_tree = (mrb_nil_p(tree) ? NULL : mruby_unbox_git_tree(tree));

  /* Invocation */
  git_tree_free(native_tree);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_id */
/* sha: 5c1fda02a429607a74b957ee496f403f9015a9bdb40388b4f074cb871a2a093c */
#if BIND_git_tree_id_FUNCTION
#define git_tree_id_REQUIRED_ARGC 1
#define git_tree_id_OPTIONAL_ARGC 0
/* git_tree_id
 *
 * Parameters:
 * - tree: const git_tree *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_git_tree_id(mrb_state* mrb, mrb_value self) {
  mrb_value tree;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &tree);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }

  /* Unbox param: tree */
  const git_tree * native_tree = (mrb_nil_p(tree) ? NULL : mruby_unbox_git_tree(tree));

  /* Invocation */
  const git_oid * native_return_value = git_tree_id(native_tree);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_lookup */
/* sha: 54ae088ea5cdffa0232e9d0021e90d71af0ac92954e635c6266b36c426bb25cc */
#if BIND_git_tree_lookup_FUNCTION
#define git_tree_lookup_REQUIRED_ARGC 2
#define git_tree_lookup_OPTIONAL_ARGC 0
/* git_tree_lookup
 *
 * Parameters:
 * - repo: git_repository *
 * - id: const git_oid *
 * Return Type: int
 */
mrb_value
mrb_Git_git_tree_lookup(mrb_state* mrb, mrb_value self) {
  git_tree * native_out = NULL;
  mrb_value repo;
  mrb_value id;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &repo, &id);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_tree_lookup(&native_out, native_repo, native_id);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_tree(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_lookup_prefix */
/* sha: 0eba031b2bfc43a5e5e18628c021e1080eda3f4fc34f6c54e994adaf5ff32709 */
#if BIND_git_tree_lookup_prefix_FUNCTION
#define git_tree_lookup_prefix_REQUIRED_ARGC 3
#define git_tree_lookup_prefix_OPTIONAL_ARGC 0
/* git_tree_lookup_prefix
 *
 * Parameters:
 * - repo: git_repository *
 * - id: const git_oid *
 * - len: size_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_tree_lookup_prefix(mrb_state* mrb, mrb_value self) {
  git_tree * native_out = NULL;
  mrb_value repo;
  mrb_value id;
  mrb_int native_len;

  /* Fetch the args */
  mrb_get_args(mrb, "ooi", &repo, &id, &native_len);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_tree_lookup_prefix(&native_out, native_repo, native_id, native_len);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_tree(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_owner */
/* sha: 6f022cbaa2c4812e98987ac81685e04ce87b3be89b41f1d9e288cd0bcffc88c3 */
#if BIND_git_tree_owner_FUNCTION
#define git_tree_owner_REQUIRED_ARGC 1
#define git_tree_owner_OPTIONAL_ARGC 0
/* git_tree_owner
 *
 * Parameters:
 * - tree: const git_tree *
 * Return Type: git_repository *
 */
mrb_value
mrb_Git_git_tree_owner(mrb_state* mrb, mrb_value self) {
  mrb_value tree;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &tree);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }

  /* Unbox param: tree */
  const git_tree * native_tree = (mrb_nil_p(tree) ? NULL : mruby_unbox_git_tree(tree));

  /* Invocation */
  git_repository * native_return_value = git_tree_owner(native_tree);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_repository(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_tree_walk */
/* sha: 8e3d2a60614806a6fcdc9ce101044de0967a9c66cc344ad84313dc64c940cfa0 */
#if BIND_git_tree_walk_FUNCTION
#define git_tree_walk_REQUIRED_ARGC 4
#define git_tree_walk_OPTIONAL_ARGC 0
/* git_tree_walk
 *
 * Parameters:
 * - tree: const git_tree *
 * - mode: git_treewalk_mode
 * - callback: git_treewalk_cb
 * - payload: void *
 * Return Type: int
 */
mrb_value
mrb_Git_git_tree_walk(mrb_state* mrb, mrb_value self) {
  mrb_value tree;
  mrb_int native_mode;
  mrb_value callback;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "oioo", &tree, &native_mode, &callback, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, tree, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_treewalk_cb(callback);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: tree */
  const git_tree * native_tree = (mrb_nil_p(tree) ? NULL : mruby_unbox_git_tree(tree));

  /* Unbox param: callback */
  git_treewalk_cb native_callback = TODO_mruby_unbox_git_treewalk_cb(callback);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  int native_return_value = git_tree_walk(native_tree, native_mode, native_callback, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_treebuilder_clear */
/* sha: 3fe286f018467237aac6ba902b27cf542eab63b1dbb1936947421fb6668946e1 */
#if BIND_git_treebuilder_clear_FUNCTION
#define git_treebuilder_clear_REQUIRED_ARGC 1
#define git_treebuilder_clear_OPTIONAL_ARGC 0
/* git_treebuilder_clear
 *
 * Parameters:
 * - bld: git_treebuilder *
 * Return Type: void
 */
mrb_value
mrb_Git_git_treebuilder_clear(mrb_state* mrb, mrb_value self) {
  mrb_value bld;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &bld);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, bld, Treebuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Treebuilder expected");
    return mrb_nil_value();
  }

  /* Unbox param: bld */
  git_treebuilder * native_bld = (mrb_nil_p(bld) ? NULL : mruby_unbox_git_treebuilder(bld));

  /* Invocation */
  git_treebuilder_clear(native_bld);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_treebuilder_entrycount */
/* sha: 43b6e9896bcae861f69a294ab6f4e6a82c69bd3aff3a0a128b256d8619442f52 */
#if BIND_git_treebuilder_entrycount_FUNCTION
#define git_treebuilder_entrycount_REQUIRED_ARGC 1
#define git_treebuilder_entrycount_OPTIONAL_ARGC 0
/* git_treebuilder_entrycount
 *
 * Parameters:
 * - bld: git_treebuilder *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_git_treebuilder_entrycount(mrb_state* mrb, mrb_value self) {
  mrb_value bld;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &bld);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, bld, Treebuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Treebuilder expected");
    return mrb_nil_value();
  }

  /* Unbox param: bld */
  git_treebuilder * native_bld = (mrb_nil_p(bld) ? NULL : mruby_unbox_git_treebuilder(bld));

  /* Invocation */
  unsigned int native_return_value = git_treebuilder_entrycount(native_bld);

  /* Box the return value */
  mrb_value return_value = mrb_fixnum_value(native_return_value);
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_treebuilder_filter */
/* sha: 722b45e83c9685f6055bc616faf69da775be2ab0179352c34c42078cd7f680e0 */
#if BIND_git_treebuilder_filter_FUNCTION
#define git_treebuilder_filter_REQUIRED_ARGC 3
#define git_treebuilder_filter_OPTIONAL_ARGC 0
/* git_treebuilder_filter
 *
 * Parameters:
 * - bld: git_treebuilder *
 * - filter: git_treebuilder_filter_cb
 * - payload: void *
 * Return Type: void
 */
mrb_value
mrb_Git_git_treebuilder_filter(mrb_state* mrb, mrb_value self) {
  mrb_value bld;
  mrb_value filter;
  mrb_value payload;

  /* Fetch the args */
  mrb_get_args(mrb, "ooo", &bld, &filter, &payload);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, bld, Treebuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Treebuilder expected");
    return mrb_nil_value();
  }
  TODO_type_check_git_treebuilder_filter_cb(filter);
  TODO_type_check_void_PTR(payload);

  /* Unbox param: bld */
  git_treebuilder * native_bld = (mrb_nil_p(bld) ? NULL : mruby_unbox_git_treebuilder(bld));

  /* Unbox param: filter */
  git_treebuilder_filter_cb native_filter = TODO_mruby_unbox_git_treebuilder_filter_cb(filter);

  /* Unbox param: payload */
  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  /* Invocation */
  git_treebuilder_filter(native_bld, native_filter, native_payload);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_treebuilder_free */
/* sha: c101f519dc85a10026fc4a2f3dd097d538550a4465257076886c38133fcf922b */
#if BIND_git_treebuilder_free_FUNCTION
#define git_treebuilder_free_REQUIRED_ARGC 1
#define git_treebuilder_free_OPTIONAL_ARGC 0
/* git_treebuilder_free
 *
 * Parameters:
 * - bld: git_treebuilder *
 * Return Type: void
 */
mrb_value
mrb_Git_git_treebuilder_free(mrb_state* mrb, mrb_value self) {
  mrb_value bld;

  /* Fetch the args */
  mrb_get_args(mrb, "o", &bld);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, bld, Treebuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Treebuilder expected");
    return mrb_nil_value();
  }

  /* Unbox param: bld */
  git_treebuilder * native_bld = (mrb_nil_p(bld) ? NULL : mruby_unbox_git_treebuilder(bld));

  /* Invocation */
  git_treebuilder_free(native_bld);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_treebuilder_get */
/* sha: 505e47f26d0f8c1fc1bce13e885bfe5467025e33cb20a16707e79473d15dce0a */
#if BIND_git_treebuilder_get_FUNCTION
#define git_treebuilder_get_REQUIRED_ARGC 2
#define git_treebuilder_get_OPTIONAL_ARGC 0
/* git_treebuilder_get
 *
 * Parameters:
 * - bld: git_treebuilder *
 * - filename: const char *
 * Return Type: const git_tree_entry *
 */
mrb_value
mrb_Git_git_treebuilder_get(mrb_state* mrb, mrb_value self) {
  mrb_value bld;
  char * native_filename = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &bld, &native_filename);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, bld, Treebuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Treebuilder expected");
    return mrb_nil_value();
  }

  /* Unbox param: bld */
  git_treebuilder * native_bld = (mrb_nil_p(bld) ? NULL : mruby_unbox_git_treebuilder(bld));

  /* Invocation */
  const git_tree_entry * native_return_value = git_treebuilder_get(native_bld, native_filename);

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_tree_entry(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_treebuilder_insert */
/* sha: ee1d409e09d6d3131bee542b5e6a7f6a08750049528e20d56447bd55230ed405 */
#if BIND_git_treebuilder_insert_FUNCTION
#define git_treebuilder_insert_REQUIRED_ARGC 4
#define git_treebuilder_insert_OPTIONAL_ARGC 0
/* git_treebuilder_insert
 *
 * Parameters:
 * - bld: git_treebuilder *
 * - filename: const char *
 * - id: const git_oid *
 * - filemode: git_filemode_t
 * Return Type: int
 */
mrb_value
mrb_Git_git_treebuilder_insert(mrb_state* mrb, mrb_value self) {
  git_tree_entry * native_out = NULL;
  mrb_value bld;
  char * native_filename = NULL;
  mrb_value id;
  mrb_int native_filemode;

  /* Fetch the args */
  mrb_get_args(mrb, "ozoi", &bld, &native_filename, &id, &native_filemode);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, bld, Treebuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Treebuilder expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  /* Unbox param: bld */
  git_treebuilder * native_bld = (mrb_nil_p(bld) ? NULL : mruby_unbox_git_treebuilder(bld));

  /* Unbox param: id */
  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Invocation */
  int native_return_value = git_treebuilder_insert(&native_out, native_bld, native_filename, native_id, native_filemode);

  /* Box out param: out */
  mrb_value out = mruby_box_git_tree_entry(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_treebuilder_new */
/* sha: 27711e22c1f1542e61bf692fc5c87adc1e3eab609bada2abf313d3c78e1ee46c */
#if BIND_git_treebuilder_new_FUNCTION
#define git_treebuilder_new_REQUIRED_ARGC 2
#define git_treebuilder_new_OPTIONAL_ARGC 0
/* git_treebuilder_new
 *
 * Parameters:
 * - repo: git_repository *
 * - source: const git_tree *
 * Return Type: int
 */
mrb_value
mrb_Git_git_treebuilder_new(mrb_state* mrb, mrb_value self) {
  git_treebuilder * native_out = NULL;
  mrb_value repo;
  mrb_value source;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &repo, &source);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, repo, Repository_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Repository expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, source, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }

  /* Unbox param: repo */
  git_repository * native_repo = (mrb_nil_p(repo) ? NULL : mruby_unbox_git_repository(repo));

  /* Unbox param: source */
  const git_tree * native_source = (mrb_nil_p(source) ? NULL : mruby_unbox_git_tree(source));

  /* Invocation */
  int native_return_value = git_treebuilder_new(&native_out, native_repo, native_source);

  /* Box out param: out */
  mrb_value out = native_out == NULL ? mrb_nil_value() : mruby_giftwrap_git_treebuilder(mrb, native_out);

  return out;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_treebuilder_remove */
/* sha: 264fc5864537d6873abf877dc747d1fc3fce5aef251de4b650b19b10294f6377 */
#if BIND_git_treebuilder_remove_FUNCTION
#define git_treebuilder_remove_REQUIRED_ARGC 2
#define git_treebuilder_remove_OPTIONAL_ARGC 0
/* git_treebuilder_remove
 *
 * Parameters:
 * - bld: git_treebuilder *
 * - filename: const char *
 * Return Type: int
 */
mrb_value
mrb_Git_git_treebuilder_remove(mrb_state* mrb, mrb_value self) {
  mrb_value bld;
  char * native_filename = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "oz", &bld, &native_filename);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, bld, Treebuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Treebuilder expected");
    return mrb_nil_value();
  }

  /* Unbox param: bld */
  git_treebuilder * native_bld = (mrb_nil_p(bld) ? NULL : mruby_unbox_git_treebuilder(bld));

  /* Invocation */
  int native_return_value = git_treebuilder_remove(native_bld, native_filename);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: git_treebuilder_write */
/* sha: 7269258024273149336fcaeab1338ed0d2fee5ba562d4ed2b71bf0176776029c */
#if BIND_git_treebuilder_write_FUNCTION
#define git_treebuilder_write_REQUIRED_ARGC 2
#define git_treebuilder_write_OPTIONAL_ARGC 0
/* git_treebuilder_write
 *
 * Parameters:
 * - id: git_oid *
 * - bld: git_treebuilder *
 * Return Type: int
 */
mrb_value
mrb_Git_git_treebuilder_write(mrb_state* mrb, mrb_value self) {
  mrb_value id;
  mrb_value bld;

  /* Fetch the args */
  mrb_get_args(mrb, "oo", &id, &bld);

  /* Type checking */
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }
  if (!mrb_obj_is_kind_of(mrb, bld, Treebuilder_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Treebuilder expected");
    return mrb_nil_value();
  }

  /* Unbox param: id */
  git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  /* Unbox param: bld */
  git_treebuilder * native_bld = (mrb_nil_p(bld) ? NULL : mruby_unbox_git_treebuilder(bld));

  /* Invocation */
  int native_return_value = git_treebuilder_write(native_id, native_bld);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: giterr_clear */
/* sha: f88efdc3ef04738822b48b7aa8af4c5f2040c2b9e1953ee98ae0390680f42e3a */
#if BIND_giterr_clear_FUNCTION
#define giterr_clear_REQUIRED_ARGC 0
#define giterr_clear_OPTIONAL_ARGC 0
/* giterr_clear
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_Git_giterr_clear(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  giterr_clear();

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: giterr_last */
/* sha: dcaf1211d8add052895d879e9ad87fa09aceb0a31ecdc6a53aa6e615faf19217 */
#if BIND_giterr_last_FUNCTION
#define giterr_last_REQUIRED_ARGC 0
#define giterr_last_OPTIONAL_ARGC 0
/* giterr_last
 *
 * Parameters: None
 * Return Type: const git_error *
 */
mrb_value
mrb_Git_giterr_last(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  const git_error * native_return_value = giterr_last();

  /* Box the return value */
  mrb_value return_value = (native_return_value == NULL ? mrb_nil_value() : mruby_box_git_error(mrb, native_return_value));
  
  return return_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: giterr_set_oom */
/* sha: d9aa95593a2e7e9fc83ee2ef2e99d484dfbc03ef4c309988b095ea68725bbc8b */
#if BIND_giterr_set_oom_FUNCTION
#define giterr_set_oom_REQUIRED_ARGC 0
#define giterr_set_oom_OPTIONAL_ARGC 0
/* giterr_set_oom
 *
 * Parameters: None
 * Return Type: void
 */
mrb_value
mrb_Git_giterr_set_oom(mrb_state* mrb, mrb_value self) {
  /* Invocation */
  giterr_set_oom();

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: giterr_set_str */
/* sha: 75b90fea1ffef69b929a521c6a47187fb536ab5290c48bda2d8f3a9e703573f9 */
#if BIND_giterr_set_str_FUNCTION
#define giterr_set_str_REQUIRED_ARGC 2
#define giterr_set_str_OPTIONAL_ARGC 0
/* giterr_set_str
 *
 * Parameters:
 * - error_class: int
 * - string: const char *
 * Return Type: void
 */
mrb_value
mrb_Git_giterr_set_str(mrb_state* mrb, mrb_value self) {
  mrb_int native_error_class;
  char * native_string = NULL;

  /* Fetch the args */
  mrb_get_args(mrb, "iz", &native_error_class, &native_string);

  /* Invocation */
  giterr_set_str(native_error_class, native_string);

  return mrb_nil_value();
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: imaxdiv */
/* sha: ddb792afe5b5fd82a0a55acc5708adf28546d069d99d56d5718f0ce773017319 */
#if BIND_imaxdiv_FUNCTION
#define imaxdiv_REQUIRED_ARGC 2
#define imaxdiv_OPTIONAL_ARGC 0
/* imaxdiv
 *
 * Parameters:
 * - numer: intmax_t
 * - denom: intmax_t
 * Return Type: int
 */
mrb_value
mrb_Git_imaxdiv(mrb_state* mrb, mrb_value self) {
  mrb_int native_numer;
  mrb_int native_denom;

  /* Fetch the args */
  mrb_get_args(mrb, "ii", &native_numer, &native_denom);

  /* Invocation */
  imaxdiv_t native_return_value = imaxdiv(native_numer, native_denom);
  
  /* TODO: box & return */
}
#endif
/* MRUBY_BINDING_END */


void mrb_mruby_git_gem_init(mrb_state* mrb) {
/* MRUBY_BINDING: pre_module_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
  
  struct RClass* Git_module = mrb_define_module(mrb, "Git");
  mruby_Git_define_macro_constants(mrb);
  mruby_Git_define_enum_constants(mrb);

/* MRUBY_BINDING: pre_class_initializations */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: class_initializations */
/* sha: 3bc4c761a5fe8b8ef2822567ea860258a93c5c8650c2090060c1bb1353ed5655 */
#if BIND_AnnotatedCommit_TYPE
  mrb_Git_AnnotatedCommit_init(mrb);
#endif
#if BIND_Blame_TYPE
  mrb_Git_Blame_init(mrb);
#endif
#if BIND_BlameHunk_TYPE
  mrb_Git_BlameHunk_init(mrb);
#endif
#if BIND_BlameOptions_TYPE
  mrb_Git_BlameOptions_init(mrb);
#endif
#if BIND_Blob_TYPE
  mrb_Git_Blob_init(mrb);
#endif
#if BIND_BranchIterator_TYPE
  mrb_Git_BranchIterator_init(mrb);
#endif
#if BIND_Buf_TYPE
  mrb_Git_Buf_init(mrb);
#endif
#if BIND_Cert_TYPE
  mrb_Git_Cert_init(mrb);
#endif
#if BIND_CertHostkey_TYPE
  mrb_Git_CertHostkey_init(mrb);
#endif
#if BIND_CertX509_TYPE
  mrb_Git_CertX509_init(mrb);
#endif
#if BIND_CheckoutOptions_TYPE
  mrb_Git_CheckoutOptions_init(mrb);
#endif
#if BIND_CheckoutPerfdata_TYPE
  mrb_Git_CheckoutPerfdata_init(mrb);
#endif
#if BIND_CherrypickOptions_TYPE
  mrb_Git_CherrypickOptions_init(mrb);
#endif
#if BIND_CloneOptions_TYPE
  mrb_Git_CloneOptions_init(mrb);
#endif
#if BIND_Commit_TYPE
  mrb_Git_Commit_init(mrb);
#endif
#if BIND_Config_TYPE
  mrb_Git_Config_init(mrb);
#endif
#if BIND_ConfigBackend_TYPE
  mrb_Git_ConfigBackend_init(mrb);
#endif
#if BIND_ConfigEntry_TYPE
  mrb_Git_ConfigEntry_init(mrb);
#endif
#if BIND_ConfigIterator_TYPE
  mrb_Git_ConfigIterator_init(mrb);
#endif
#if BIND_Cred_TYPE
  mrb_Git_Cred_init(mrb);
#endif
#if BIND_CredSshCustom_TYPE
  mrb_Git_CredSshCustom_init(mrb);
#endif
#if BIND_CredSshInteractive_TYPE
  mrb_Git_CredSshInteractive_init(mrb);
#endif
#if BIND_CredSshKey_TYPE
  mrb_Git_CredSshKey_init(mrb);
#endif
#if BIND_CredUsername_TYPE
  mrb_Git_CredUsername_init(mrb);
#endif
#if BIND_CredUserpassPayload_TYPE
  mrb_Git_CredUserpassPayload_init(mrb);
#endif
#if BIND_CredUserpassPlaintext_TYPE
  mrb_Git_CredUserpassPlaintext_init(mrb);
#endif
#if BIND_CvarMap_TYPE
  mrb_Git_CvarMap_init(mrb);
#endif
#if BIND_DescribeFormatOptions_TYPE
  mrb_Git_DescribeFormatOptions_init(mrb);
#endif
#if BIND_DescribeOptions_TYPE
  mrb_Git_DescribeOptions_init(mrb);
#endif
#if BIND_DescribeResult_TYPE
  mrb_Git_DescribeResult_init(mrb);
#endif
#if BIND_Diff_TYPE
  mrb_Git_Diff_init(mrb);
#endif
#if BIND_DiffBinary_TYPE
  mrb_Git_DiffBinary_init(mrb);
#endif
#if BIND_DiffBinaryFile_TYPE
  mrb_Git_DiffBinaryFile_init(mrb);
#endif
#if BIND_DiffDelta_TYPE
  mrb_Git_DiffDelta_init(mrb);
#endif
#if BIND_DiffFile_TYPE
  mrb_Git_DiffFile_init(mrb);
#endif
#if BIND_DiffFindOptions_TYPE
  mrb_Git_DiffFindOptions_init(mrb);
#endif
#if BIND_DiffFormatEmailOptions_TYPE
  mrb_Git_DiffFormatEmailOptions_init(mrb);
#endif
#if BIND_DiffHunk_TYPE
  mrb_Git_DiffHunk_init(mrb);
#endif
#if BIND_DiffLine_TYPE
  mrb_Git_DiffLine_init(mrb);
#endif
#if BIND_DiffOptions_TYPE
  mrb_Git_DiffOptions_init(mrb);
#endif
#if BIND_DiffSimilarityMetric_TYPE
  mrb_Git_DiffSimilarityMetric_init(mrb);
#endif
#if BIND_DiffStats_TYPE
  mrb_Git_DiffStats_init(mrb);
#endif
#if BIND_Error_TYPE
  mrb_Git_Error_init(mrb);
#endif
#if BIND_FetchOptions_TYPE
  mrb_Git_FetchOptions_init(mrb);
#endif
#if BIND_Filter_TYPE
  mrb_Git_Filter_init(mrb);
#endif
#if BIND_FilterList_TYPE
  mrb_Git_FilterList_init(mrb);
#endif
#if BIND_ImaxdivT_TYPE
  mrb_Git_ImaxdivT_init(mrb);
#endif
#if BIND_Index_TYPE
  mrb_Git_Index_init(mrb);
#endif
#if BIND_IndexConflictIterator_TYPE
  mrb_Git_IndexConflictIterator_init(mrb);
#endif
#if BIND_IndexEntry_TYPE
  mrb_Git_IndexEntry_init(mrb);
#endif
#if BIND_Indexer_TYPE
  mrb_Git_Indexer_init(mrb);
#endif
#if BIND_IndexTime_TYPE
  mrb_Git_IndexTime_init(mrb);
#endif
#if BIND_LIBSSH2SESSION_TYPE
  mrb_Git_LIBSSH2SESSION_init(mrb);
#endif
#if BIND_LIBSSH2USERAUTHKBDINTPROMPT_TYPE
  mrb_Git_LIBSSH2USERAUTHKBDINTPROMPT_init(mrb);
#endif
#if BIND_LIBSSH2USERAUTHKBDINTRESPONSE_TYPE
  mrb_Git_LIBSSH2USERAUTHKBDINTRESPONSE_init(mrb);
#endif
#if BIND_MergeFileInput_TYPE
  mrb_Git_MergeFileInput_init(mrb);
#endif
#if BIND_MergeFileOptions_TYPE
  mrb_Git_MergeFileOptions_init(mrb);
#endif
#if BIND_MergeFileResult_TYPE
  mrb_Git_MergeFileResult_init(mrb);
#endif
#if BIND_MergeOptions_TYPE
  mrb_Git_MergeOptions_init(mrb);
#endif
#if BIND_MergeResult_TYPE
  mrb_Git_MergeResult_init(mrb);
#endif
#if BIND_Note_TYPE
  mrb_Git_Note_init(mrb);
#endif
#if BIND_NoteIterator_TYPE
  mrb_Git_NoteIterator_init(mrb);
#endif
#if BIND_Object_TYPE
  mrb_Git_Object_init(mrb);
#endif
#if BIND_Odb_TYPE
  mrb_Git_Odb_init(mrb);
#endif
#if BIND_OdbBackend_TYPE
  mrb_Git_OdbBackend_init(mrb);
#endif
#if BIND_OdbObject_TYPE
  mrb_Git_OdbObject_init(mrb);
#endif
#if BIND_OdbStream_TYPE
  mrb_Git_OdbStream_init(mrb);
#endif
#if BIND_OdbWritepack_TYPE
  mrb_Git_OdbWritepack_init(mrb);
#endif
#if BIND_Oid_TYPE
  mrb_Git_Oid_init(mrb);
#endif
#if BIND_Oidarray_TYPE
  mrb_Git_Oidarray_init(mrb);
#endif
#if BIND_OidShorten_TYPE
  mrb_Git_OidShorten_init(mrb);
#endif
#if BIND_Packbuilder_TYPE
  mrb_Git_Packbuilder_init(mrb);
#endif
#if BIND_Patch_TYPE
  mrb_Git_Patch_init(mrb);
#endif
#if BIND_Pathspec_TYPE
  mrb_Git_Pathspec_init(mrb);
#endif
#if BIND_PathspecMatchList_TYPE
  mrb_Git_PathspecMatchList_init(mrb);
#endif
#if BIND_Push_TYPE
  mrb_Git_Push_init(mrb);
#endif
#if BIND_PushOptions_TYPE
  mrb_Git_PushOptions_init(mrb);
#endif
#if BIND_PushUpdate_TYPE
  mrb_Git_PushUpdate_init(mrb);
#endif
#if BIND_Rebase_TYPE
  mrb_Git_Rebase_init(mrb);
#endif
#if BIND_RebaseOperation_TYPE
  mrb_Git_RebaseOperation_init(mrb);
#endif
#if BIND_RebaseOptions_TYPE
  mrb_Git_RebaseOptions_init(mrb);
#endif
#if BIND_Refdb_TYPE
  mrb_Git_Refdb_init(mrb);
#endif
#if BIND_RefdbBackend_TYPE
  mrb_Git_RefdbBackend_init(mrb);
#endif
#if BIND_Reference_TYPE
  mrb_Git_Reference_init(mrb);
#endif
#if BIND_ReferenceIterator_TYPE
  mrb_Git_ReferenceIterator_init(mrb);
#endif
#if BIND_Reflog_TYPE
  mrb_Git_Reflog_init(mrb);
#endif
#if BIND_ReflogEntry_TYPE
  mrb_Git_ReflogEntry_init(mrb);
#endif
#if BIND_Refspec_TYPE
  mrb_Git_Refspec_init(mrb);
#endif
#if BIND_Remote_TYPE
  mrb_Git_Remote_init(mrb);
#endif
#if BIND_RemoteCallbacks_TYPE
  mrb_Git_RemoteCallbacks_init(mrb);
#endif
#if BIND_RemoteHead_TYPE
  mrb_Git_RemoteHead_init(mrb);
#endif
#if BIND_Repository_TYPE
  mrb_Git_Repository_init(mrb);
#endif
#if BIND_RepositoryInitOptions_TYPE
  mrb_Git_RepositoryInitOptions_init(mrb);
#endif
#if BIND_RevertOptions_TYPE
  mrb_Git_RevertOptions_init(mrb);
#endif
#if BIND_Revspec_TYPE
  mrb_Git_Revspec_init(mrb);
#endif
#if BIND_Revwalk_TYPE
  mrb_Git_Revwalk_init(mrb);
#endif
#if BIND_Signature_TYPE
  mrb_Git_Signature_init(mrb);
#endif
#if BIND_StashApplyOptions_TYPE
  mrb_Git_StashApplyOptions_init(mrb);
#endif
#if BIND_StatusEntry_TYPE
  mrb_Git_StatusEntry_init(mrb);
#endif
#if BIND_StatusList_TYPE
  mrb_Git_StatusList_init(mrb);
#endif
#if BIND_StatusOptions_TYPE
  mrb_Git_StatusOptions_init(mrb);
#endif
#if BIND_Strarray_TYPE
  mrb_Git_Strarray_init(mrb);
#endif
#if BIND_Submodule_TYPE
  mrb_Git_Submodule_init(mrb);
#endif
#if BIND_SubmoduleUpdateOptions_TYPE
  mrb_Git_SubmoduleUpdateOptions_init(mrb);
#endif
#if BIND_Tag_TYPE
  mrb_Git_Tag_init(mrb);
#endif
#if BIND_Time_TYPE
  mrb_Git_Time_init(mrb);
#endif
#if BIND_Transaction_TYPE
  mrb_Git_Transaction_init(mrb);
#endif
#if BIND_TransferProgress_TYPE
  mrb_Git_TransferProgress_init(mrb);
#endif
#if BIND_Transport_TYPE
  mrb_Git_Transport_init(mrb);
#endif
#if BIND_Tree_TYPE
  mrb_Git_Tree_init(mrb);
#endif
#if BIND_Treebuilder_TYPE
  mrb_Git_Treebuilder_init(mrb);
#endif
#if BIND_TreeEntry_TYPE
  mrb_Git_TreeEntry_init(mrb);
#endif
#if BIND_Writestream_TYPE
  mrb_Git_Writestream_init(mrb);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: pre_global_function_initializations */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: global_function_definitions */
/* sha: 402b5b64f2deed15d276bc184deef0adbc24147ec0ad3d39d6e577b0266fdabf */
  /*
   * Global Functions
   */
#if BIND_git_annotated_commit_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "annotated_commit_free", mrb_Git_git_annotated_commit_free, MRB_ARGS_ARG(git_annotated_commit_free_REQUIRED_ARGC, git_annotated_commit_free_OPTIONAL_ARGC));
#endif
#if BIND_git_annotated_commit_from_fetchhead_FUNCTION
  mrb_define_class_method(mrb, Git_module, "annotated_commit_from_fetchhead", mrb_Git_git_annotated_commit_from_fetchhead, MRB_ARGS_ARG(git_annotated_commit_from_fetchhead_REQUIRED_ARGC, git_annotated_commit_from_fetchhead_OPTIONAL_ARGC));
#endif
#if BIND_git_annotated_commit_from_ref_FUNCTION
  mrb_define_class_method(mrb, Git_module, "annotated_commit_from_ref", mrb_Git_git_annotated_commit_from_ref, MRB_ARGS_ARG(git_annotated_commit_from_ref_REQUIRED_ARGC, git_annotated_commit_from_ref_OPTIONAL_ARGC));
#endif
#if BIND_git_annotated_commit_from_revspec_FUNCTION
  mrb_define_class_method(mrb, Git_module, "annotated_commit_from_revspec", mrb_Git_git_annotated_commit_from_revspec, MRB_ARGS_ARG(git_annotated_commit_from_revspec_REQUIRED_ARGC, git_annotated_commit_from_revspec_OPTIONAL_ARGC));
#endif
#if BIND_git_annotated_commit_id_FUNCTION
  mrb_define_class_method(mrb, Git_module, "annotated_commit_id", mrb_Git_git_annotated_commit_id, MRB_ARGS_ARG(git_annotated_commit_id_REQUIRED_ARGC, git_annotated_commit_id_OPTIONAL_ARGC));
#endif
#if BIND_git_annotated_commit_lookup_FUNCTION
  mrb_define_class_method(mrb, Git_module, "annotated_commit_lookup", mrb_Git_git_annotated_commit_lookup, MRB_ARGS_ARG(git_annotated_commit_lookup_REQUIRED_ARGC, git_annotated_commit_lookup_OPTIONAL_ARGC));
#endif
#if BIND_git_attr_add_macro_FUNCTION
  mrb_define_class_method(mrb, Git_module, "attr_add_macro", mrb_Git_git_attr_add_macro, MRB_ARGS_ARG(git_attr_add_macro_REQUIRED_ARGC, git_attr_add_macro_OPTIONAL_ARGC));
#endif
#if BIND_git_attr_cache_flush_FUNCTION
  mrb_define_class_method(mrb, Git_module, "attr_cache_flush", mrb_Git_git_attr_cache_flush, MRB_ARGS_ARG(git_attr_cache_flush_REQUIRED_ARGC, git_attr_cache_flush_OPTIONAL_ARGC));
#endif
#if BIND_git_attr_foreach_FUNCTION
  mrb_define_class_method(mrb, Git_module, "attr_foreach", mrb_Git_git_attr_foreach, MRB_ARGS_ARG(git_attr_foreach_REQUIRED_ARGC, git_attr_foreach_OPTIONAL_ARGC));
#endif
#if BIND_git_attr_get_FUNCTION
  mrb_define_class_method(mrb, Git_module, "attr_get", mrb_Git_git_attr_get, MRB_ARGS_ARG(git_attr_get_REQUIRED_ARGC, git_attr_get_OPTIONAL_ARGC));
#endif
#if BIND_git_attr_get_many_FUNCTION
  mrb_define_class_method(mrb, Git_module, "attr_get_many", mrb_Git_git_attr_get_many, MRB_ARGS_ARG(git_attr_get_many_REQUIRED_ARGC, git_attr_get_many_OPTIONAL_ARGC));
#endif
#if BIND_git_attr_value_FUNCTION
  mrb_define_class_method(mrb, Git_module, "attr_value", mrb_Git_git_attr_value, MRB_ARGS_ARG(git_attr_value_REQUIRED_ARGC, git_attr_value_OPTIONAL_ARGC));
#endif
#if BIND_git_blame_buffer_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blame_buffer", mrb_Git_git_blame_buffer, MRB_ARGS_ARG(git_blame_buffer_REQUIRED_ARGC, git_blame_buffer_OPTIONAL_ARGC));
#endif
#if BIND_git_blame_file_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blame_file", mrb_Git_git_blame_file, MRB_ARGS_ARG(git_blame_file_REQUIRED_ARGC, git_blame_file_OPTIONAL_ARGC));
#endif
#if BIND_git_blame_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blame_free", mrb_Git_git_blame_free, MRB_ARGS_ARG(git_blame_free_REQUIRED_ARGC, git_blame_free_OPTIONAL_ARGC));
#endif
#if BIND_git_blame_get_hunk_byindex_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blame_get_hunk_byindex", mrb_Git_git_blame_get_hunk_byindex, MRB_ARGS_ARG(git_blame_get_hunk_byindex_REQUIRED_ARGC, git_blame_get_hunk_byindex_OPTIONAL_ARGC));
#endif
#if BIND_git_blame_get_hunk_byline_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blame_get_hunk_byline", mrb_Git_git_blame_get_hunk_byline, MRB_ARGS_ARG(git_blame_get_hunk_byline_REQUIRED_ARGC, git_blame_get_hunk_byline_OPTIONAL_ARGC));
#endif
#if BIND_git_blame_get_hunk_count_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blame_get_hunk_count", mrb_Git_git_blame_get_hunk_count, MRB_ARGS_ARG(git_blame_get_hunk_count_REQUIRED_ARGC, git_blame_get_hunk_count_OPTIONAL_ARGC));
#endif
#if BIND_git_blame_init_options_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blame_init_options", mrb_Git_git_blame_init_options, MRB_ARGS_ARG(git_blame_init_options_REQUIRED_ARGC, git_blame_init_options_OPTIONAL_ARGC));
#endif
#if BIND_git_blob_create_frombuffer_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blob_create_frombuffer", mrb_Git_git_blob_create_frombuffer, MRB_ARGS_ARG(git_blob_create_frombuffer_REQUIRED_ARGC, git_blob_create_frombuffer_OPTIONAL_ARGC));
#endif
#if BIND_git_blob_create_fromchunks_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blob_create_fromchunks", mrb_Git_git_blob_create_fromchunks, MRB_ARGS_ARG(git_blob_create_fromchunks_REQUIRED_ARGC, git_blob_create_fromchunks_OPTIONAL_ARGC));
#endif
#if BIND_git_blob_create_fromdisk_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blob_create_fromdisk", mrb_Git_git_blob_create_fromdisk, MRB_ARGS_ARG(git_blob_create_fromdisk_REQUIRED_ARGC, git_blob_create_fromdisk_OPTIONAL_ARGC));
#endif
#if BIND_git_blob_create_fromworkdir_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blob_create_fromworkdir", mrb_Git_git_blob_create_fromworkdir, MRB_ARGS_ARG(git_blob_create_fromworkdir_REQUIRED_ARGC, git_blob_create_fromworkdir_OPTIONAL_ARGC));
#endif
#if BIND_git_blob_filtered_content_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blob_filtered_content", mrb_Git_git_blob_filtered_content, MRB_ARGS_ARG(git_blob_filtered_content_REQUIRED_ARGC, git_blob_filtered_content_OPTIONAL_ARGC));
#endif
#if BIND_git_blob_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blob_free", mrb_Git_git_blob_free, MRB_ARGS_ARG(git_blob_free_REQUIRED_ARGC, git_blob_free_OPTIONAL_ARGC));
#endif
#if BIND_git_blob_id_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blob_id", mrb_Git_git_blob_id, MRB_ARGS_ARG(git_blob_id_REQUIRED_ARGC, git_blob_id_OPTIONAL_ARGC));
#endif
#if BIND_git_blob_is_binary_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blob_is_binary", mrb_Git_git_blob_is_binary, MRB_ARGS_ARG(git_blob_is_binary_REQUIRED_ARGC, git_blob_is_binary_OPTIONAL_ARGC));
#endif
#if BIND_git_blob_lookup_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blob_lookup", mrb_Git_git_blob_lookup, MRB_ARGS_ARG(git_blob_lookup_REQUIRED_ARGC, git_blob_lookup_OPTIONAL_ARGC));
#endif
#if BIND_git_blob_lookup_prefix_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blob_lookup_prefix", mrb_Git_git_blob_lookup_prefix, MRB_ARGS_ARG(git_blob_lookup_prefix_REQUIRED_ARGC, git_blob_lookup_prefix_OPTIONAL_ARGC));
#endif
#if BIND_git_blob_owner_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blob_owner", mrb_Git_git_blob_owner, MRB_ARGS_ARG(git_blob_owner_REQUIRED_ARGC, git_blob_owner_OPTIONAL_ARGC));
#endif
#if BIND_git_blob_rawcontent_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blob_rawcontent", mrb_Git_git_blob_rawcontent, MRB_ARGS_ARG(git_blob_rawcontent_REQUIRED_ARGC, git_blob_rawcontent_OPTIONAL_ARGC));
#endif
#if BIND_git_blob_rawsize_FUNCTION
  mrb_define_class_method(mrb, Git_module, "blob_rawsize", mrb_Git_git_blob_rawsize, MRB_ARGS_ARG(git_blob_rawsize_REQUIRED_ARGC, git_blob_rawsize_OPTIONAL_ARGC));
#endif
#if BIND_git_branch_create_FUNCTION
  mrb_define_class_method(mrb, Git_module, "branch_create", mrb_Git_git_branch_create, MRB_ARGS_ARG(git_branch_create_REQUIRED_ARGC, git_branch_create_OPTIONAL_ARGC));
#endif
#if BIND_git_branch_create_from_annotated_FUNCTION
  mrb_define_class_method(mrb, Git_module, "branch_create_from_annotated", mrb_Git_git_branch_create_from_annotated, MRB_ARGS_ARG(git_branch_create_from_annotated_REQUIRED_ARGC, git_branch_create_from_annotated_OPTIONAL_ARGC));
#endif
#if BIND_git_branch_delete_FUNCTION
  mrb_define_class_method(mrb, Git_module, "branch_delete", mrb_Git_git_branch_delete, MRB_ARGS_ARG(git_branch_delete_REQUIRED_ARGC, git_branch_delete_OPTIONAL_ARGC));
#endif
#if BIND_git_branch_is_head_FUNCTION
  mrb_define_class_method(mrb, Git_module, "branch_is_head", mrb_Git_git_branch_is_head, MRB_ARGS_ARG(git_branch_is_head_REQUIRED_ARGC, git_branch_is_head_OPTIONAL_ARGC));
#endif
#if BIND_git_branch_iterator_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "branch_iterator_free", mrb_Git_git_branch_iterator_free, MRB_ARGS_ARG(git_branch_iterator_free_REQUIRED_ARGC, git_branch_iterator_free_OPTIONAL_ARGC));
#endif
#if BIND_git_branch_iterator_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "branch_iterator_new", mrb_Git_git_branch_iterator_new, MRB_ARGS_ARG(git_branch_iterator_new_REQUIRED_ARGC, git_branch_iterator_new_OPTIONAL_ARGC));
#endif
#if BIND_git_branch_lookup_FUNCTION
  mrb_define_class_method(mrb, Git_module, "branch_lookup", mrb_Git_git_branch_lookup, MRB_ARGS_ARG(git_branch_lookup_REQUIRED_ARGC, git_branch_lookup_OPTIONAL_ARGC));
#endif
#if BIND_git_branch_move_FUNCTION
  mrb_define_class_method(mrb, Git_module, "branch_move", mrb_Git_git_branch_move, MRB_ARGS_ARG(git_branch_move_REQUIRED_ARGC, git_branch_move_OPTIONAL_ARGC));
#endif
#if BIND_git_branch_name_FUNCTION
  mrb_define_class_method(mrb, Git_module, "branch_name", mrb_Git_git_branch_name, MRB_ARGS_ARG(git_branch_name_REQUIRED_ARGC, git_branch_name_OPTIONAL_ARGC));
#endif
#if BIND_git_branch_next_FUNCTION
  mrb_define_class_method(mrb, Git_module, "branch_next", mrb_Git_git_branch_next, MRB_ARGS_ARG(git_branch_next_REQUIRED_ARGC, git_branch_next_OPTIONAL_ARGC));
#endif
#if BIND_git_branch_remote_name_FUNCTION
  mrb_define_class_method(mrb, Git_module, "branch_remote_name", mrb_Git_git_branch_remote_name, MRB_ARGS_ARG(git_branch_remote_name_REQUIRED_ARGC, git_branch_remote_name_OPTIONAL_ARGC));
#endif
#if BIND_git_branch_set_upstream_FUNCTION
  mrb_define_class_method(mrb, Git_module, "branch_set_upstream", mrb_Git_git_branch_set_upstream, MRB_ARGS_ARG(git_branch_set_upstream_REQUIRED_ARGC, git_branch_set_upstream_OPTIONAL_ARGC));
#endif
#if BIND_git_branch_upstream_FUNCTION
  mrb_define_class_method(mrb, Git_module, "branch_upstream", mrb_Git_git_branch_upstream, MRB_ARGS_ARG(git_branch_upstream_REQUIRED_ARGC, git_branch_upstream_OPTIONAL_ARGC));
#endif
#if BIND_git_branch_upstream_name_FUNCTION
  mrb_define_class_method(mrb, Git_module, "branch_upstream_name", mrb_Git_git_branch_upstream_name, MRB_ARGS_ARG(git_branch_upstream_name_REQUIRED_ARGC, git_branch_upstream_name_OPTIONAL_ARGC));
#endif
#if BIND_git_branch_upstream_remote_FUNCTION
  mrb_define_class_method(mrb, Git_module, "branch_upstream_remote", mrb_Git_git_branch_upstream_remote, MRB_ARGS_ARG(git_branch_upstream_remote_REQUIRED_ARGC, git_branch_upstream_remote_OPTIONAL_ARGC));
#endif
#if BIND_git_buf_contains_nul_FUNCTION
  mrb_define_class_method(mrb, Git_module, "buf_contains_nul", mrb_Git_git_buf_contains_nul, MRB_ARGS_ARG(git_buf_contains_nul_REQUIRED_ARGC, git_buf_contains_nul_OPTIONAL_ARGC));
#endif
#if BIND_git_buf_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "buf_free", mrb_Git_git_buf_free, MRB_ARGS_ARG(git_buf_free_REQUIRED_ARGC, git_buf_free_OPTIONAL_ARGC));
#endif
#if BIND_git_buf_grow_FUNCTION
  mrb_define_class_method(mrb, Git_module, "buf_grow", mrb_Git_git_buf_grow, MRB_ARGS_ARG(git_buf_grow_REQUIRED_ARGC, git_buf_grow_OPTIONAL_ARGC));
#endif
#if BIND_git_buf_is_binary_FUNCTION
  mrb_define_class_method(mrb, Git_module, "buf_is_binary", mrb_Git_git_buf_is_binary, MRB_ARGS_ARG(git_buf_is_binary_REQUIRED_ARGC, git_buf_is_binary_OPTIONAL_ARGC));
#endif
#if BIND_git_buf_set_FUNCTION
  mrb_define_class_method(mrb, Git_module, "buf_set", mrb_Git_git_buf_set, MRB_ARGS_ARG(git_buf_set_REQUIRED_ARGC, git_buf_set_OPTIONAL_ARGC));
#endif
#if BIND_git_checkout_head_FUNCTION
  mrb_define_class_method(mrb, Git_module, "checkout_head", mrb_Git_git_checkout_head, MRB_ARGS_ARG(git_checkout_head_REQUIRED_ARGC, git_checkout_head_OPTIONAL_ARGC));
#endif
#if BIND_git_checkout_index_FUNCTION
  mrb_define_class_method(mrb, Git_module, "checkout_index", mrb_Git_git_checkout_index, MRB_ARGS_ARG(git_checkout_index_REQUIRED_ARGC, git_checkout_index_OPTIONAL_ARGC));
#endif
#if BIND_git_checkout_init_options_FUNCTION
  mrb_define_class_method(mrb, Git_module, "checkout_init_options", mrb_Git_git_checkout_init_options, MRB_ARGS_ARG(git_checkout_init_options_REQUIRED_ARGC, git_checkout_init_options_OPTIONAL_ARGC));
#endif
#if BIND_git_checkout_tree_FUNCTION
  mrb_define_class_method(mrb, Git_module, "checkout_tree", mrb_Git_git_checkout_tree, MRB_ARGS_ARG(git_checkout_tree_REQUIRED_ARGC, git_checkout_tree_OPTIONAL_ARGC));
#endif
#if BIND_git_cherrypick_FUNCTION
  mrb_define_class_method(mrb, Git_module, "cherrypick", mrb_Git_git_cherrypick, MRB_ARGS_ARG(git_cherrypick_REQUIRED_ARGC, git_cherrypick_OPTIONAL_ARGC));
#endif
#if BIND_git_cherrypick_commit_FUNCTION
  mrb_define_class_method(mrb, Git_module, "cherrypick_commit", mrb_Git_git_cherrypick_commit, MRB_ARGS_ARG(git_cherrypick_commit_REQUIRED_ARGC, git_cherrypick_commit_OPTIONAL_ARGC));
#endif
#if BIND_git_cherrypick_init_options_FUNCTION
  mrb_define_class_method(mrb, Git_module, "cherrypick_init_options", mrb_Git_git_cherrypick_init_options, MRB_ARGS_ARG(git_cherrypick_init_options_REQUIRED_ARGC, git_cherrypick_init_options_OPTIONAL_ARGC));
#endif
#if BIND_git_clone_FUNCTION
  mrb_define_class_method(mrb, Git_module, "clone", mrb_Git_git_clone, MRB_ARGS_ARG(git_clone_REQUIRED_ARGC, git_clone_OPTIONAL_ARGC));
#endif
#if BIND_git_clone_init_options_FUNCTION
  mrb_define_class_method(mrb, Git_module, "clone_init_options", mrb_Git_git_clone_init_options, MRB_ARGS_ARG(git_clone_init_options_REQUIRED_ARGC, git_clone_init_options_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_amend_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_amend", mrb_Git_git_commit_amend, MRB_ARGS_ARG(git_commit_amend_REQUIRED_ARGC, git_commit_amend_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_author_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_author", mrb_Git_git_commit_author, MRB_ARGS_ARG(git_commit_author_REQUIRED_ARGC, git_commit_author_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_body_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_body", mrb_Git_git_commit_body, MRB_ARGS_ARG(git_commit_body_REQUIRED_ARGC, git_commit_body_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_committer_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_committer", mrb_Git_git_commit_committer, MRB_ARGS_ARG(git_commit_committer_REQUIRED_ARGC, git_commit_committer_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_create_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_create", mrb_Git_git_commit_create, MRB_ARGS_ARG(git_commit_create_REQUIRED_ARGC, git_commit_create_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_create_v_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_create_v", mrb_Git_git_commit_create_v, MRB_ARGS_ARG(git_commit_create_v_REQUIRED_ARGC, git_commit_create_v_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_free", mrb_Git_git_commit_free, MRB_ARGS_ARG(git_commit_free_REQUIRED_ARGC, git_commit_free_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_header_field_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_header_field", mrb_Git_git_commit_header_field, MRB_ARGS_ARG(git_commit_header_field_REQUIRED_ARGC, git_commit_header_field_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_id_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_id", mrb_Git_git_commit_id, MRB_ARGS_ARG(git_commit_id_REQUIRED_ARGC, git_commit_id_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_lookup_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_lookup", mrb_Git_git_commit_lookup, MRB_ARGS_ARG(git_commit_lookup_REQUIRED_ARGC, git_commit_lookup_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_lookup_prefix_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_lookup_prefix", mrb_Git_git_commit_lookup_prefix, MRB_ARGS_ARG(git_commit_lookup_prefix_REQUIRED_ARGC, git_commit_lookup_prefix_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_message_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_message", mrb_Git_git_commit_message, MRB_ARGS_ARG(git_commit_message_REQUIRED_ARGC, git_commit_message_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_message_encoding_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_message_encoding", mrb_Git_git_commit_message_encoding, MRB_ARGS_ARG(git_commit_message_encoding_REQUIRED_ARGC, git_commit_message_encoding_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_message_raw_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_message_raw", mrb_Git_git_commit_message_raw, MRB_ARGS_ARG(git_commit_message_raw_REQUIRED_ARGC, git_commit_message_raw_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_nth_gen_ancestor_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_nth_gen_ancestor", mrb_Git_git_commit_nth_gen_ancestor, MRB_ARGS_ARG(git_commit_nth_gen_ancestor_REQUIRED_ARGC, git_commit_nth_gen_ancestor_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_owner_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_owner", mrb_Git_git_commit_owner, MRB_ARGS_ARG(git_commit_owner_REQUIRED_ARGC, git_commit_owner_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_parent_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_parent", mrb_Git_git_commit_parent, MRB_ARGS_ARG(git_commit_parent_REQUIRED_ARGC, git_commit_parent_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_parent_id_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_parent_id", mrb_Git_git_commit_parent_id, MRB_ARGS_ARG(git_commit_parent_id_REQUIRED_ARGC, git_commit_parent_id_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_parentcount_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_parentcount", mrb_Git_git_commit_parentcount, MRB_ARGS_ARG(git_commit_parentcount_REQUIRED_ARGC, git_commit_parentcount_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_raw_header_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_raw_header", mrb_Git_git_commit_raw_header, MRB_ARGS_ARG(git_commit_raw_header_REQUIRED_ARGC, git_commit_raw_header_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_summary_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_summary", mrb_Git_git_commit_summary, MRB_ARGS_ARG(git_commit_summary_REQUIRED_ARGC, git_commit_summary_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_time_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_time", mrb_Git_git_commit_time, MRB_ARGS_ARG(git_commit_time_REQUIRED_ARGC, git_commit_time_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_time_offset_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_time_offset", mrb_Git_git_commit_time_offset, MRB_ARGS_ARG(git_commit_time_offset_REQUIRED_ARGC, git_commit_time_offset_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_tree_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_tree", mrb_Git_git_commit_tree, MRB_ARGS_ARG(git_commit_tree_REQUIRED_ARGC, git_commit_tree_OPTIONAL_ARGC));
#endif
#if BIND_git_commit_tree_id_FUNCTION
  mrb_define_class_method(mrb, Git_module, "commit_tree_id", mrb_Git_git_commit_tree_id, MRB_ARGS_ARG(git_commit_tree_id_REQUIRED_ARGC, git_commit_tree_id_OPTIONAL_ARGC));
#endif
#if BIND_git_config_add_file_ondisk_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_add_file_ondisk", mrb_Git_git_config_add_file_ondisk, MRB_ARGS_ARG(git_config_add_file_ondisk_REQUIRED_ARGC, git_config_add_file_ondisk_OPTIONAL_ARGC));
#endif
#if BIND_git_config_backend_foreach_match_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_backend_foreach_match", mrb_Git_git_config_backend_foreach_match, MRB_ARGS_ARG(git_config_backend_foreach_match_REQUIRED_ARGC, git_config_backend_foreach_match_OPTIONAL_ARGC));
#endif
#if BIND_git_config_delete_entry_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_delete_entry", mrb_Git_git_config_delete_entry, MRB_ARGS_ARG(git_config_delete_entry_REQUIRED_ARGC, git_config_delete_entry_OPTIONAL_ARGC));
#endif
#if BIND_git_config_delete_multivar_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_delete_multivar", mrb_Git_git_config_delete_multivar, MRB_ARGS_ARG(git_config_delete_multivar_REQUIRED_ARGC, git_config_delete_multivar_OPTIONAL_ARGC));
#endif
#if BIND_git_config_entry_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_entry_free", mrb_Git_git_config_entry_free, MRB_ARGS_ARG(git_config_entry_free_REQUIRED_ARGC, git_config_entry_free_OPTIONAL_ARGC));
#endif
#if BIND_git_config_find_global_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_find_global", mrb_Git_git_config_find_global, MRB_ARGS_ARG(git_config_find_global_REQUIRED_ARGC, git_config_find_global_OPTIONAL_ARGC));
#endif
#if BIND_git_config_find_programdata_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_find_programdata", mrb_Git_git_config_find_programdata, MRB_ARGS_ARG(git_config_find_programdata_REQUIRED_ARGC, git_config_find_programdata_OPTIONAL_ARGC));
#endif
#if BIND_git_config_find_system_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_find_system", mrb_Git_git_config_find_system, MRB_ARGS_ARG(git_config_find_system_REQUIRED_ARGC, git_config_find_system_OPTIONAL_ARGC));
#endif
#if BIND_git_config_find_xdg_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_find_xdg", mrb_Git_git_config_find_xdg, MRB_ARGS_ARG(git_config_find_xdg_REQUIRED_ARGC, git_config_find_xdg_OPTIONAL_ARGC));
#endif
#if BIND_git_config_foreach_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_foreach", mrb_Git_git_config_foreach, MRB_ARGS_ARG(git_config_foreach_REQUIRED_ARGC, git_config_foreach_OPTIONAL_ARGC));
#endif
#if BIND_git_config_foreach_match_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_foreach_match", mrb_Git_git_config_foreach_match, MRB_ARGS_ARG(git_config_foreach_match_REQUIRED_ARGC, git_config_foreach_match_OPTIONAL_ARGC));
#endif
#if BIND_git_config_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_free", mrb_Git_git_config_free, MRB_ARGS_ARG(git_config_free_REQUIRED_ARGC, git_config_free_OPTIONAL_ARGC));
#endif
#if BIND_git_config_get_bool_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_get_bool", mrb_Git_git_config_get_bool, MRB_ARGS_ARG(git_config_get_bool_REQUIRED_ARGC, git_config_get_bool_OPTIONAL_ARGC));
#endif
#if BIND_git_config_get_entry_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_get_entry", mrb_Git_git_config_get_entry, MRB_ARGS_ARG(git_config_get_entry_REQUIRED_ARGC, git_config_get_entry_OPTIONAL_ARGC));
#endif
#if BIND_git_config_get_int32_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_get_int32", mrb_Git_git_config_get_int32, MRB_ARGS_ARG(git_config_get_int32_REQUIRED_ARGC, git_config_get_int32_OPTIONAL_ARGC));
#endif
#if BIND_git_config_get_int64_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_get_int64", mrb_Git_git_config_get_int64, MRB_ARGS_ARG(git_config_get_int64_REQUIRED_ARGC, git_config_get_int64_OPTIONAL_ARGC));
#endif
#if BIND_git_config_get_mapped_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_get_mapped", mrb_Git_git_config_get_mapped, MRB_ARGS_ARG(git_config_get_mapped_REQUIRED_ARGC, git_config_get_mapped_OPTIONAL_ARGC));
#endif
#if BIND_git_config_get_multivar_foreach_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_get_multivar_foreach", mrb_Git_git_config_get_multivar_foreach, MRB_ARGS_ARG(git_config_get_multivar_foreach_REQUIRED_ARGC, git_config_get_multivar_foreach_OPTIONAL_ARGC));
#endif
#if BIND_git_config_get_path_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_get_path", mrb_Git_git_config_get_path, MRB_ARGS_ARG(git_config_get_path_REQUIRED_ARGC, git_config_get_path_OPTIONAL_ARGC));
#endif
#if BIND_git_config_get_string_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_get_string", mrb_Git_git_config_get_string, MRB_ARGS_ARG(git_config_get_string_REQUIRED_ARGC, git_config_get_string_OPTIONAL_ARGC));
#endif
#if BIND_git_config_get_string_buf_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_get_string_buf", mrb_Git_git_config_get_string_buf, MRB_ARGS_ARG(git_config_get_string_buf_REQUIRED_ARGC, git_config_get_string_buf_OPTIONAL_ARGC));
#endif
#if BIND_git_config_iterator_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_iterator_free", mrb_Git_git_config_iterator_free, MRB_ARGS_ARG(git_config_iterator_free_REQUIRED_ARGC, git_config_iterator_free_OPTIONAL_ARGC));
#endif
#if BIND_git_config_iterator_glob_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_iterator_glob_new", mrb_Git_git_config_iterator_glob_new, MRB_ARGS_ARG(git_config_iterator_glob_new_REQUIRED_ARGC, git_config_iterator_glob_new_OPTIONAL_ARGC));
#endif
#if BIND_git_config_iterator_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_iterator_new", mrb_Git_git_config_iterator_new, MRB_ARGS_ARG(git_config_iterator_new_REQUIRED_ARGC, git_config_iterator_new_OPTIONAL_ARGC));
#endif
#if BIND_git_config_lock_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_lock", mrb_Git_git_config_lock, MRB_ARGS_ARG(git_config_lock_REQUIRED_ARGC, git_config_lock_OPTIONAL_ARGC));
#endif
#if BIND_git_config_lookup_map_value_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_lookup_map_value", mrb_Git_git_config_lookup_map_value, MRB_ARGS_ARG(git_config_lookup_map_value_REQUIRED_ARGC, git_config_lookup_map_value_OPTIONAL_ARGC));
#endif
#if BIND_git_config_multivar_iterator_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_multivar_iterator_new", mrb_Git_git_config_multivar_iterator_new, MRB_ARGS_ARG(git_config_multivar_iterator_new_REQUIRED_ARGC, git_config_multivar_iterator_new_OPTIONAL_ARGC));
#endif
#if BIND_git_config_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_new", mrb_Git_git_config_new, MRB_ARGS_ARG(git_config_new_REQUIRED_ARGC, git_config_new_OPTIONAL_ARGC));
#endif
#if BIND_git_config_next_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_next", mrb_Git_git_config_next, MRB_ARGS_ARG(git_config_next_REQUIRED_ARGC, git_config_next_OPTIONAL_ARGC));
#endif
#if BIND_git_config_open_default_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_open_default", mrb_Git_git_config_open_default, MRB_ARGS_ARG(git_config_open_default_REQUIRED_ARGC, git_config_open_default_OPTIONAL_ARGC));
#endif
#if BIND_git_config_open_global_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_open_global", mrb_Git_git_config_open_global, MRB_ARGS_ARG(git_config_open_global_REQUIRED_ARGC, git_config_open_global_OPTIONAL_ARGC));
#endif
#if BIND_git_config_open_level_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_open_level", mrb_Git_git_config_open_level, MRB_ARGS_ARG(git_config_open_level_REQUIRED_ARGC, git_config_open_level_OPTIONAL_ARGC));
#endif
#if BIND_git_config_open_ondisk_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_open_ondisk", mrb_Git_git_config_open_ondisk, MRB_ARGS_ARG(git_config_open_ondisk_REQUIRED_ARGC, git_config_open_ondisk_OPTIONAL_ARGC));
#endif
#if BIND_git_config_parse_bool_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_parse_bool", mrb_Git_git_config_parse_bool, MRB_ARGS_ARG(git_config_parse_bool_REQUIRED_ARGC, git_config_parse_bool_OPTIONAL_ARGC));
#endif
#if BIND_git_config_parse_int32_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_parse_int32", mrb_Git_git_config_parse_int32, MRB_ARGS_ARG(git_config_parse_int32_REQUIRED_ARGC, git_config_parse_int32_OPTIONAL_ARGC));
#endif
#if BIND_git_config_parse_int64_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_parse_int64", mrb_Git_git_config_parse_int64, MRB_ARGS_ARG(git_config_parse_int64_REQUIRED_ARGC, git_config_parse_int64_OPTIONAL_ARGC));
#endif
#if BIND_git_config_parse_path_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_parse_path", mrb_Git_git_config_parse_path, MRB_ARGS_ARG(git_config_parse_path_REQUIRED_ARGC, git_config_parse_path_OPTIONAL_ARGC));
#endif
#if BIND_git_config_set_bool_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_set_bool", mrb_Git_git_config_set_bool, MRB_ARGS_ARG(git_config_set_bool_REQUIRED_ARGC, git_config_set_bool_OPTIONAL_ARGC));
#endif
#if BIND_git_config_set_int32_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_set_int32", mrb_Git_git_config_set_int32, MRB_ARGS_ARG(git_config_set_int32_REQUIRED_ARGC, git_config_set_int32_OPTIONAL_ARGC));
#endif
#if BIND_git_config_set_int64_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_set_int64", mrb_Git_git_config_set_int64, MRB_ARGS_ARG(git_config_set_int64_REQUIRED_ARGC, git_config_set_int64_OPTIONAL_ARGC));
#endif
#if BIND_git_config_set_multivar_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_set_multivar", mrb_Git_git_config_set_multivar, MRB_ARGS_ARG(git_config_set_multivar_REQUIRED_ARGC, git_config_set_multivar_OPTIONAL_ARGC));
#endif
#if BIND_git_config_set_string_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_set_string", mrb_Git_git_config_set_string, MRB_ARGS_ARG(git_config_set_string_REQUIRED_ARGC, git_config_set_string_OPTIONAL_ARGC));
#endif
#if BIND_git_config_snapshot_FUNCTION
  mrb_define_class_method(mrb, Git_module, "config_snapshot", mrb_Git_git_config_snapshot, MRB_ARGS_ARG(git_config_snapshot_REQUIRED_ARGC, git_config_snapshot_OPTIONAL_ARGC));
#endif
#if BIND_git_cred_default_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "cred_default_new", mrb_Git_git_cred_default_new, MRB_ARGS_ARG(git_cred_default_new_REQUIRED_ARGC, git_cred_default_new_OPTIONAL_ARGC));
#endif
#if BIND_git_cred_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "cred_free", mrb_Git_git_cred_free, MRB_ARGS_ARG(git_cred_free_REQUIRED_ARGC, git_cred_free_OPTIONAL_ARGC));
#endif
#if BIND_git_cred_has_username_FUNCTION
  mrb_define_class_method(mrb, Git_module, "cred_has_username", mrb_Git_git_cred_has_username, MRB_ARGS_ARG(git_cred_has_username_REQUIRED_ARGC, git_cred_has_username_OPTIONAL_ARGC));
#endif
#if BIND_git_cred_ssh_custom_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "cred_ssh_custom_new", mrb_Git_git_cred_ssh_custom_new, MRB_ARGS_ARG(git_cred_ssh_custom_new_REQUIRED_ARGC, git_cred_ssh_custom_new_OPTIONAL_ARGC));
#endif
#if BIND_git_cred_ssh_interactive_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "cred_ssh_interactive_new", mrb_Git_git_cred_ssh_interactive_new, MRB_ARGS_ARG(git_cred_ssh_interactive_new_REQUIRED_ARGC, git_cred_ssh_interactive_new_OPTIONAL_ARGC));
#endif
#if BIND_git_cred_ssh_key_from_agent_FUNCTION
  mrb_define_class_method(mrb, Git_module, "cred_ssh_key_from_agent", mrb_Git_git_cred_ssh_key_from_agent, MRB_ARGS_ARG(git_cred_ssh_key_from_agent_REQUIRED_ARGC, git_cred_ssh_key_from_agent_OPTIONAL_ARGC));
#endif
#if BIND_git_cred_ssh_key_memory_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "cred_ssh_key_memory_new", mrb_Git_git_cred_ssh_key_memory_new, MRB_ARGS_ARG(git_cred_ssh_key_memory_new_REQUIRED_ARGC, git_cred_ssh_key_memory_new_OPTIONAL_ARGC));
#endif
#if BIND_git_cred_ssh_key_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "cred_ssh_key_new", mrb_Git_git_cred_ssh_key_new, MRB_ARGS_ARG(git_cred_ssh_key_new_REQUIRED_ARGC, git_cred_ssh_key_new_OPTIONAL_ARGC));
#endif
#if BIND_git_cred_username_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "cred_username_new", mrb_Git_git_cred_username_new, MRB_ARGS_ARG(git_cred_username_new_REQUIRED_ARGC, git_cred_username_new_OPTIONAL_ARGC));
#endif
#if BIND_git_cred_userpass_FUNCTION
  mrb_define_class_method(mrb, Git_module, "cred_userpass", mrb_Git_git_cred_userpass, MRB_ARGS_ARG(git_cred_userpass_REQUIRED_ARGC, git_cred_userpass_OPTIONAL_ARGC));
#endif
#if BIND_git_cred_userpass_plaintext_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "cred_userpass_plaintext_new", mrb_Git_git_cred_userpass_plaintext_new, MRB_ARGS_ARG(git_cred_userpass_plaintext_new_REQUIRED_ARGC, git_cred_userpass_plaintext_new_OPTIONAL_ARGC));
#endif
#if BIND_git_describe_commit_FUNCTION
  mrb_define_class_method(mrb, Git_module, "describe_commit", mrb_Git_git_describe_commit, MRB_ARGS_ARG(git_describe_commit_REQUIRED_ARGC, git_describe_commit_OPTIONAL_ARGC));
#endif
#if BIND_git_describe_format_FUNCTION
  mrb_define_class_method(mrb, Git_module, "describe_format", mrb_Git_git_describe_format, MRB_ARGS_ARG(git_describe_format_REQUIRED_ARGC, git_describe_format_OPTIONAL_ARGC));
#endif
#if BIND_git_describe_init_format_options_FUNCTION
  mrb_define_class_method(mrb, Git_module, "describe_init_format_options", mrb_Git_git_describe_init_format_options, MRB_ARGS_ARG(git_describe_init_format_options_REQUIRED_ARGC, git_describe_init_format_options_OPTIONAL_ARGC));
#endif
#if BIND_git_describe_init_options_FUNCTION
  mrb_define_class_method(mrb, Git_module, "describe_init_options", mrb_Git_git_describe_init_options, MRB_ARGS_ARG(git_describe_init_options_REQUIRED_ARGC, git_describe_init_options_OPTIONAL_ARGC));
#endif
#if BIND_git_describe_result_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "describe_result_free", mrb_Git_git_describe_result_free, MRB_ARGS_ARG(git_describe_result_free_REQUIRED_ARGC, git_describe_result_free_OPTIONAL_ARGC));
#endif
#if BIND_git_describe_workdir_FUNCTION
  mrb_define_class_method(mrb, Git_module, "describe_workdir", mrb_Git_git_describe_workdir, MRB_ARGS_ARG(git_describe_workdir_REQUIRED_ARGC, git_describe_workdir_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_blob_to_buffer_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_blob_to_buffer", mrb_Git_git_diff_blob_to_buffer, MRB_ARGS_ARG(git_diff_blob_to_buffer_REQUIRED_ARGC, git_diff_blob_to_buffer_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_blobs_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_blobs", mrb_Git_git_diff_blobs, MRB_ARGS_ARG(git_diff_blobs_REQUIRED_ARGC, git_diff_blobs_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_buffers_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_buffers", mrb_Git_git_diff_buffers, MRB_ARGS_ARG(git_diff_buffers_REQUIRED_ARGC, git_diff_buffers_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_commit_as_email_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_commit_as_email", mrb_Git_git_diff_commit_as_email, MRB_ARGS_ARG(git_diff_commit_as_email_REQUIRED_ARGC, git_diff_commit_as_email_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_find_init_options_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_find_init_options", mrb_Git_git_diff_find_init_options, MRB_ARGS_ARG(git_diff_find_init_options_REQUIRED_ARGC, git_diff_find_init_options_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_find_similar_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_find_similar", mrb_Git_git_diff_find_similar, MRB_ARGS_ARG(git_diff_find_similar_REQUIRED_ARGC, git_diff_find_similar_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_foreach_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_foreach", mrb_Git_git_diff_foreach, MRB_ARGS_ARG(git_diff_foreach_REQUIRED_ARGC, git_diff_foreach_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_format_email_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_format_email", mrb_Git_git_diff_format_email, MRB_ARGS_ARG(git_diff_format_email_REQUIRED_ARGC, git_diff_format_email_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_format_email_init_options_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_format_email_init_options", mrb_Git_git_diff_format_email_init_options, MRB_ARGS_ARG(git_diff_format_email_init_options_REQUIRED_ARGC, git_diff_format_email_init_options_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_free", mrb_Git_git_diff_free, MRB_ARGS_ARG(git_diff_free_REQUIRED_ARGC, git_diff_free_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_get_delta_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_get_delta", mrb_Git_git_diff_get_delta, MRB_ARGS_ARG(git_diff_get_delta_REQUIRED_ARGC, git_diff_get_delta_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_get_stats_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_get_stats", mrb_Git_git_diff_get_stats, MRB_ARGS_ARG(git_diff_get_stats_REQUIRED_ARGC, git_diff_get_stats_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_index_to_index_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_index_to_index", mrb_Git_git_diff_index_to_index, MRB_ARGS_ARG(git_diff_index_to_index_REQUIRED_ARGC, git_diff_index_to_index_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_index_to_workdir_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_index_to_workdir", mrb_Git_git_diff_index_to_workdir, MRB_ARGS_ARG(git_diff_index_to_workdir_REQUIRED_ARGC, git_diff_index_to_workdir_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_init_options_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_init_options", mrb_Git_git_diff_init_options, MRB_ARGS_ARG(git_diff_init_options_REQUIRED_ARGC, git_diff_init_options_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_is_sorted_icase_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_is_sorted_icase", mrb_Git_git_diff_is_sorted_icase, MRB_ARGS_ARG(git_diff_is_sorted_icase_REQUIRED_ARGC, git_diff_is_sorted_icase_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_merge_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_merge", mrb_Git_git_diff_merge, MRB_ARGS_ARG(git_diff_merge_REQUIRED_ARGC, git_diff_merge_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_num_deltas_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_num_deltas", mrb_Git_git_diff_num_deltas, MRB_ARGS_ARG(git_diff_num_deltas_REQUIRED_ARGC, git_diff_num_deltas_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_num_deltas_of_type_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_num_deltas_of_type", mrb_Git_git_diff_num_deltas_of_type, MRB_ARGS_ARG(git_diff_num_deltas_of_type_REQUIRED_ARGC, git_diff_num_deltas_of_type_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_print_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_print", mrb_Git_git_diff_print, MRB_ARGS_ARG(git_diff_print_REQUIRED_ARGC, git_diff_print_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_stats_deletions_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_stats_deletions", mrb_Git_git_diff_stats_deletions, MRB_ARGS_ARG(git_diff_stats_deletions_REQUIRED_ARGC, git_diff_stats_deletions_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_stats_files_changed_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_stats_files_changed", mrb_Git_git_diff_stats_files_changed, MRB_ARGS_ARG(git_diff_stats_files_changed_REQUIRED_ARGC, git_diff_stats_files_changed_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_stats_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_stats_free", mrb_Git_git_diff_stats_free, MRB_ARGS_ARG(git_diff_stats_free_REQUIRED_ARGC, git_diff_stats_free_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_stats_insertions_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_stats_insertions", mrb_Git_git_diff_stats_insertions, MRB_ARGS_ARG(git_diff_stats_insertions_REQUIRED_ARGC, git_diff_stats_insertions_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_stats_to_buf_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_stats_to_buf", mrb_Git_git_diff_stats_to_buf, MRB_ARGS_ARG(git_diff_stats_to_buf_REQUIRED_ARGC, git_diff_stats_to_buf_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_status_char_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_status_char", mrb_Git_git_diff_status_char, MRB_ARGS_ARG(git_diff_status_char_REQUIRED_ARGC, git_diff_status_char_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_tree_to_index_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_tree_to_index", mrb_Git_git_diff_tree_to_index, MRB_ARGS_ARG(git_diff_tree_to_index_REQUIRED_ARGC, git_diff_tree_to_index_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_tree_to_tree_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_tree_to_tree", mrb_Git_git_diff_tree_to_tree, MRB_ARGS_ARG(git_diff_tree_to_tree_REQUIRED_ARGC, git_diff_tree_to_tree_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_tree_to_workdir_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_tree_to_workdir", mrb_Git_git_diff_tree_to_workdir, MRB_ARGS_ARG(git_diff_tree_to_workdir_REQUIRED_ARGC, git_diff_tree_to_workdir_OPTIONAL_ARGC));
#endif
#if BIND_git_diff_tree_to_workdir_with_index_FUNCTION
  mrb_define_class_method(mrb, Git_module, "diff_tree_to_workdir_with_index", mrb_Git_git_diff_tree_to_workdir_with_index, MRB_ARGS_ARG(git_diff_tree_to_workdir_with_index_REQUIRED_ARGC, git_diff_tree_to_workdir_with_index_OPTIONAL_ARGC));
#endif
#if BIND_git_fetch_init_options_FUNCTION
  mrb_define_class_method(mrb, Git_module, "fetch_init_options", mrb_Git_git_fetch_init_options, MRB_ARGS_ARG(git_fetch_init_options_REQUIRED_ARGC, git_fetch_init_options_OPTIONAL_ARGC));
#endif
#if BIND_git_filter_list_apply_to_blob_FUNCTION
  mrb_define_class_method(mrb, Git_module, "filter_list_apply_to_blob", mrb_Git_git_filter_list_apply_to_blob, MRB_ARGS_ARG(git_filter_list_apply_to_blob_REQUIRED_ARGC, git_filter_list_apply_to_blob_OPTIONAL_ARGC));
#endif
#if BIND_git_filter_list_apply_to_data_FUNCTION
  mrb_define_class_method(mrb, Git_module, "filter_list_apply_to_data", mrb_Git_git_filter_list_apply_to_data, MRB_ARGS_ARG(git_filter_list_apply_to_data_REQUIRED_ARGC, git_filter_list_apply_to_data_OPTIONAL_ARGC));
#endif
#if BIND_git_filter_list_apply_to_file_FUNCTION
  mrb_define_class_method(mrb, Git_module, "filter_list_apply_to_file", mrb_Git_git_filter_list_apply_to_file, MRB_ARGS_ARG(git_filter_list_apply_to_file_REQUIRED_ARGC, git_filter_list_apply_to_file_OPTIONAL_ARGC));
#endif
#if BIND_git_filter_list_contains_FUNCTION
  mrb_define_class_method(mrb, Git_module, "filter_list_contains", mrb_Git_git_filter_list_contains, MRB_ARGS_ARG(git_filter_list_contains_REQUIRED_ARGC, git_filter_list_contains_OPTIONAL_ARGC));
#endif
#if BIND_git_filter_list_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "filter_list_free", mrb_Git_git_filter_list_free, MRB_ARGS_ARG(git_filter_list_free_REQUIRED_ARGC, git_filter_list_free_OPTIONAL_ARGC));
#endif
#if BIND_git_filter_list_load_FUNCTION
  mrb_define_class_method(mrb, Git_module, "filter_list_load", mrb_Git_git_filter_list_load, MRB_ARGS_ARG(git_filter_list_load_REQUIRED_ARGC, git_filter_list_load_OPTIONAL_ARGC));
#endif
#if BIND_git_filter_list_stream_blob_FUNCTION
  mrb_define_class_method(mrb, Git_module, "filter_list_stream_blob", mrb_Git_git_filter_list_stream_blob, MRB_ARGS_ARG(git_filter_list_stream_blob_REQUIRED_ARGC, git_filter_list_stream_blob_OPTIONAL_ARGC));
#endif
#if BIND_git_filter_list_stream_data_FUNCTION
  mrb_define_class_method(mrb, Git_module, "filter_list_stream_data", mrb_Git_git_filter_list_stream_data, MRB_ARGS_ARG(git_filter_list_stream_data_REQUIRED_ARGC, git_filter_list_stream_data_OPTIONAL_ARGC));
#endif
#if BIND_git_filter_list_stream_file_FUNCTION
  mrb_define_class_method(mrb, Git_module, "filter_list_stream_file", mrb_Git_git_filter_list_stream_file, MRB_ARGS_ARG(git_filter_list_stream_file_REQUIRED_ARGC, git_filter_list_stream_file_OPTIONAL_ARGC));
#endif
#if BIND_git_graph_ahead_behind_FUNCTION
  mrb_define_class_method(mrb, Git_module, "graph_ahead_behind", mrb_Git_git_graph_ahead_behind, MRB_ARGS_ARG(git_graph_ahead_behind_REQUIRED_ARGC, git_graph_ahead_behind_OPTIONAL_ARGC));
#endif
#if BIND_git_graph_descendant_of_FUNCTION
  mrb_define_class_method(mrb, Git_module, "graph_descendant_of", mrb_Git_git_graph_descendant_of, MRB_ARGS_ARG(git_graph_descendant_of_REQUIRED_ARGC, git_graph_descendant_of_OPTIONAL_ARGC));
#endif
#if BIND_git_ignore_add_rule_FUNCTION
  mrb_define_class_method(mrb, Git_module, "ignore_add_rule", mrb_Git_git_ignore_add_rule, MRB_ARGS_ARG(git_ignore_add_rule_REQUIRED_ARGC, git_ignore_add_rule_OPTIONAL_ARGC));
#endif
#if BIND_git_ignore_clear_internal_rules_FUNCTION
  mrb_define_class_method(mrb, Git_module, "ignore_clear_internal_rules", mrb_Git_git_ignore_clear_internal_rules, MRB_ARGS_ARG(git_ignore_clear_internal_rules_REQUIRED_ARGC, git_ignore_clear_internal_rules_OPTIONAL_ARGC));
#endif
#if BIND_git_ignore_path_is_ignored_FUNCTION
  mrb_define_class_method(mrb, Git_module, "ignore_path_is_ignored", mrb_Git_git_ignore_path_is_ignored, MRB_ARGS_ARG(git_ignore_path_is_ignored_REQUIRED_ARGC, git_ignore_path_is_ignored_OPTIONAL_ARGC));
#endif
#if BIND_git_index_add_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_add", mrb_Git_git_index_add, MRB_ARGS_ARG(git_index_add_REQUIRED_ARGC, git_index_add_OPTIONAL_ARGC));
#endif
#if BIND_git_index_add_all_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_add_all", mrb_Git_git_index_add_all, MRB_ARGS_ARG(git_index_add_all_REQUIRED_ARGC, git_index_add_all_OPTIONAL_ARGC));
#endif
#if BIND_git_index_add_bypath_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_add_bypath", mrb_Git_git_index_add_bypath, MRB_ARGS_ARG(git_index_add_bypath_REQUIRED_ARGC, git_index_add_bypath_OPTIONAL_ARGC));
#endif
#if BIND_git_index_add_frombuffer_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_add_frombuffer", mrb_Git_git_index_add_frombuffer, MRB_ARGS_ARG(git_index_add_frombuffer_REQUIRED_ARGC, git_index_add_frombuffer_OPTIONAL_ARGC));
#endif
#if BIND_git_index_caps_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_caps", mrb_Git_git_index_caps, MRB_ARGS_ARG(git_index_caps_REQUIRED_ARGC, git_index_caps_OPTIONAL_ARGC));
#endif
#if BIND_git_index_checksum_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_checksum", mrb_Git_git_index_checksum, MRB_ARGS_ARG(git_index_checksum_REQUIRED_ARGC, git_index_checksum_OPTIONAL_ARGC));
#endif
#if BIND_git_index_clear_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_clear", mrb_Git_git_index_clear, MRB_ARGS_ARG(git_index_clear_REQUIRED_ARGC, git_index_clear_OPTIONAL_ARGC));
#endif
#if BIND_git_index_conflict_add_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_conflict_add", mrb_Git_git_index_conflict_add, MRB_ARGS_ARG(git_index_conflict_add_REQUIRED_ARGC, git_index_conflict_add_OPTIONAL_ARGC));
#endif
#if BIND_git_index_conflict_cleanup_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_conflict_cleanup", mrb_Git_git_index_conflict_cleanup, MRB_ARGS_ARG(git_index_conflict_cleanup_REQUIRED_ARGC, git_index_conflict_cleanup_OPTIONAL_ARGC));
#endif
#if BIND_git_index_conflict_get_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_conflict_get", mrb_Git_git_index_conflict_get, MRB_ARGS_ARG(git_index_conflict_get_REQUIRED_ARGC, git_index_conflict_get_OPTIONAL_ARGC));
#endif
#if BIND_git_index_conflict_iterator_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_conflict_iterator_free", mrb_Git_git_index_conflict_iterator_free, MRB_ARGS_ARG(git_index_conflict_iterator_free_REQUIRED_ARGC, git_index_conflict_iterator_free_OPTIONAL_ARGC));
#endif
#if BIND_git_index_conflict_iterator_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_conflict_iterator_new", mrb_Git_git_index_conflict_iterator_new, MRB_ARGS_ARG(git_index_conflict_iterator_new_REQUIRED_ARGC, git_index_conflict_iterator_new_OPTIONAL_ARGC));
#endif
#if BIND_git_index_conflict_next_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_conflict_next", mrb_Git_git_index_conflict_next, MRB_ARGS_ARG(git_index_conflict_next_REQUIRED_ARGC, git_index_conflict_next_OPTIONAL_ARGC));
#endif
#if BIND_git_index_conflict_remove_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_conflict_remove", mrb_Git_git_index_conflict_remove, MRB_ARGS_ARG(git_index_conflict_remove_REQUIRED_ARGC, git_index_conflict_remove_OPTIONAL_ARGC));
#endif
#if BIND_git_index_entry_is_conflict_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_entry_is_conflict", mrb_Git_git_index_entry_is_conflict, MRB_ARGS_ARG(git_index_entry_is_conflict_REQUIRED_ARGC, git_index_entry_is_conflict_OPTIONAL_ARGC));
#endif
#if BIND_git_index_entry_stage_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_entry_stage", mrb_Git_git_index_entry_stage, MRB_ARGS_ARG(git_index_entry_stage_REQUIRED_ARGC, git_index_entry_stage_OPTIONAL_ARGC));
#endif
#if BIND_git_index_entrycount_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_entrycount", mrb_Git_git_index_entrycount, MRB_ARGS_ARG(git_index_entrycount_REQUIRED_ARGC, git_index_entrycount_OPTIONAL_ARGC));
#endif
#if BIND_git_index_find_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_find", mrb_Git_git_index_find, MRB_ARGS_ARG(git_index_find_REQUIRED_ARGC, git_index_find_OPTIONAL_ARGC));
#endif
#if BIND_git_index_find_prefix_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_find_prefix", mrb_Git_git_index_find_prefix, MRB_ARGS_ARG(git_index_find_prefix_REQUIRED_ARGC, git_index_find_prefix_OPTIONAL_ARGC));
#endif
#if BIND_git_index_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_free", mrb_Git_git_index_free, MRB_ARGS_ARG(git_index_free_REQUIRED_ARGC, git_index_free_OPTIONAL_ARGC));
#endif
#if BIND_git_index_get_byindex_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_get_byindex", mrb_Git_git_index_get_byindex, MRB_ARGS_ARG(git_index_get_byindex_REQUIRED_ARGC, git_index_get_byindex_OPTIONAL_ARGC));
#endif
#if BIND_git_index_get_bypath_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_get_bypath", mrb_Git_git_index_get_bypath, MRB_ARGS_ARG(git_index_get_bypath_REQUIRED_ARGC, git_index_get_bypath_OPTIONAL_ARGC));
#endif
#if BIND_git_index_has_conflicts_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_has_conflicts", mrb_Git_git_index_has_conflicts, MRB_ARGS_ARG(git_index_has_conflicts_REQUIRED_ARGC, git_index_has_conflicts_OPTIONAL_ARGC));
#endif
#if BIND_git_index_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_new", mrb_Git_git_index_new, MRB_ARGS_ARG(git_index_new_REQUIRED_ARGC, git_index_new_OPTIONAL_ARGC));
#endif
#if BIND_git_index_open_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_open", mrb_Git_git_index_open, MRB_ARGS_ARG(git_index_open_REQUIRED_ARGC, git_index_open_OPTIONAL_ARGC));
#endif
#if BIND_git_index_owner_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_owner", mrb_Git_git_index_owner, MRB_ARGS_ARG(git_index_owner_REQUIRED_ARGC, git_index_owner_OPTIONAL_ARGC));
#endif
#if BIND_git_index_path_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_path", mrb_Git_git_index_path, MRB_ARGS_ARG(git_index_path_REQUIRED_ARGC, git_index_path_OPTIONAL_ARGC));
#endif
#if BIND_git_index_read_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_read", mrb_Git_git_index_read, MRB_ARGS_ARG(git_index_read_REQUIRED_ARGC, git_index_read_OPTIONAL_ARGC));
#endif
#if BIND_git_index_read_tree_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_read_tree", mrb_Git_git_index_read_tree, MRB_ARGS_ARG(git_index_read_tree_REQUIRED_ARGC, git_index_read_tree_OPTIONAL_ARGC));
#endif
#if BIND_git_index_remove_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_remove", mrb_Git_git_index_remove, MRB_ARGS_ARG(git_index_remove_REQUIRED_ARGC, git_index_remove_OPTIONAL_ARGC));
#endif
#if BIND_git_index_remove_all_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_remove_all", mrb_Git_git_index_remove_all, MRB_ARGS_ARG(git_index_remove_all_REQUIRED_ARGC, git_index_remove_all_OPTIONAL_ARGC));
#endif
#if BIND_git_index_remove_bypath_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_remove_bypath", mrb_Git_git_index_remove_bypath, MRB_ARGS_ARG(git_index_remove_bypath_REQUIRED_ARGC, git_index_remove_bypath_OPTIONAL_ARGC));
#endif
#if BIND_git_index_remove_directory_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_remove_directory", mrb_Git_git_index_remove_directory, MRB_ARGS_ARG(git_index_remove_directory_REQUIRED_ARGC, git_index_remove_directory_OPTIONAL_ARGC));
#endif
#if BIND_git_index_set_caps_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_set_caps", mrb_Git_git_index_set_caps, MRB_ARGS_ARG(git_index_set_caps_REQUIRED_ARGC, git_index_set_caps_OPTIONAL_ARGC));
#endif
#if BIND_git_index_update_all_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_update_all", mrb_Git_git_index_update_all, MRB_ARGS_ARG(git_index_update_all_REQUIRED_ARGC, git_index_update_all_OPTIONAL_ARGC));
#endif
#if BIND_git_index_write_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_write", mrb_Git_git_index_write, MRB_ARGS_ARG(git_index_write_REQUIRED_ARGC, git_index_write_OPTIONAL_ARGC));
#endif
#if BIND_git_index_write_tree_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_write_tree", mrb_Git_git_index_write_tree, MRB_ARGS_ARG(git_index_write_tree_REQUIRED_ARGC, git_index_write_tree_OPTIONAL_ARGC));
#endif
#if BIND_git_index_write_tree_to_FUNCTION
  mrb_define_class_method(mrb, Git_module, "index_write_tree_to", mrb_Git_git_index_write_tree_to, MRB_ARGS_ARG(git_index_write_tree_to_REQUIRED_ARGC, git_index_write_tree_to_OPTIONAL_ARGC));
#endif
#if BIND_git_indexer_append_FUNCTION
  mrb_define_class_method(mrb, Git_module, "indexer_append", mrb_Git_git_indexer_append, MRB_ARGS_ARG(git_indexer_append_REQUIRED_ARGC, git_indexer_append_OPTIONAL_ARGC));
#endif
#if BIND_git_indexer_commit_FUNCTION
  mrb_define_class_method(mrb, Git_module, "indexer_commit", mrb_Git_git_indexer_commit, MRB_ARGS_ARG(git_indexer_commit_REQUIRED_ARGC, git_indexer_commit_OPTIONAL_ARGC));
#endif
#if BIND_git_indexer_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "indexer_free", mrb_Git_git_indexer_free, MRB_ARGS_ARG(git_indexer_free_REQUIRED_ARGC, git_indexer_free_OPTIONAL_ARGC));
#endif
#if BIND_git_indexer_hash_FUNCTION
  mrb_define_class_method(mrb, Git_module, "indexer_hash", mrb_Git_git_indexer_hash, MRB_ARGS_ARG(git_indexer_hash_REQUIRED_ARGC, git_indexer_hash_OPTIONAL_ARGC));
#endif
#if BIND_git_indexer_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "indexer_new", mrb_Git_git_indexer_new, MRB_ARGS_ARG(git_indexer_new_REQUIRED_ARGC, git_indexer_new_OPTIONAL_ARGC));
#endif
#if BIND_git_libgit2_features_FUNCTION
  mrb_define_class_method(mrb, Git_module, "libgit2_features", mrb_Git_git_libgit2_features, MRB_ARGS_ARG(git_libgit2_features_REQUIRED_ARGC, git_libgit2_features_OPTIONAL_ARGC));
#endif
#if BIND_git_libgit2_init_FUNCTION
  mrb_define_class_method(mrb, Git_module, "libgit2_init", mrb_Git_git_libgit2_init, MRB_ARGS_ARG(git_libgit2_init_REQUIRED_ARGC, git_libgit2_init_OPTIONAL_ARGC));
#endif
#if BIND_git_libgit2_opts_FUNCTION
  mrb_define_class_method(mrb, Git_module, "libgit2_opts", mrb_Git_git_libgit2_opts, MRB_ARGS_ARG(git_libgit2_opts_REQUIRED_ARGC, git_libgit2_opts_OPTIONAL_ARGC));
#endif
#if BIND_git_libgit2_shutdown_FUNCTION
  mrb_define_class_method(mrb, Git_module, "libgit2_shutdown", mrb_Git_git_libgit2_shutdown, MRB_ARGS_ARG(git_libgit2_shutdown_REQUIRED_ARGC, git_libgit2_shutdown_OPTIONAL_ARGC));
#endif
#if BIND_git_libgit2_version_FUNCTION
  mrb_define_class_method(mrb, Git_module, "libgit2_version", mrb_Git_git_libgit2_version, MRB_ARGS_ARG(git_libgit2_version_REQUIRED_ARGC, git_libgit2_version_OPTIONAL_ARGC));
#endif
#if BIND_git_merge_FUNCTION
  mrb_define_class_method(mrb, Git_module, "merge", mrb_Git_git_merge, MRB_ARGS_ARG(git_merge_REQUIRED_ARGC, git_merge_OPTIONAL_ARGC));
#endif
#if BIND_git_merge_analysis_FUNCTION
  mrb_define_class_method(mrb, Git_module, "merge_analysis", mrb_Git_git_merge_analysis, MRB_ARGS_ARG(git_merge_analysis_REQUIRED_ARGC, git_merge_analysis_OPTIONAL_ARGC));
#endif
#if BIND_git_merge_base_FUNCTION
  mrb_define_class_method(mrb, Git_module, "merge_base", mrb_Git_git_merge_base, MRB_ARGS_ARG(git_merge_base_REQUIRED_ARGC, git_merge_base_OPTIONAL_ARGC));
#endif
#if BIND_git_merge_base_many_FUNCTION
  mrb_define_class_method(mrb, Git_module, "merge_base_many", mrb_Git_git_merge_base_many, MRB_ARGS_ARG(git_merge_base_many_REQUIRED_ARGC, git_merge_base_many_OPTIONAL_ARGC));
#endif
#if BIND_git_merge_base_octopus_FUNCTION
  mrb_define_class_method(mrb, Git_module, "merge_base_octopus", mrb_Git_git_merge_base_octopus, MRB_ARGS_ARG(git_merge_base_octopus_REQUIRED_ARGC, git_merge_base_octopus_OPTIONAL_ARGC));
#endif
#if BIND_git_merge_bases_FUNCTION
  mrb_define_class_method(mrb, Git_module, "merge_bases", mrb_Git_git_merge_bases, MRB_ARGS_ARG(git_merge_bases_REQUIRED_ARGC, git_merge_bases_OPTIONAL_ARGC));
#endif
#if BIND_git_merge_bases_many_FUNCTION
  mrb_define_class_method(mrb, Git_module, "merge_bases_many", mrb_Git_git_merge_bases_many, MRB_ARGS_ARG(git_merge_bases_many_REQUIRED_ARGC, git_merge_bases_many_OPTIONAL_ARGC));
#endif
#if BIND_git_merge_commits_FUNCTION
  mrb_define_class_method(mrb, Git_module, "merge_commits", mrb_Git_git_merge_commits, MRB_ARGS_ARG(git_merge_commits_REQUIRED_ARGC, git_merge_commits_OPTIONAL_ARGC));
#endif
#if BIND_git_merge_file_FUNCTION
  mrb_define_class_method(mrb, Git_module, "merge_file", mrb_Git_git_merge_file, MRB_ARGS_ARG(git_merge_file_REQUIRED_ARGC, git_merge_file_OPTIONAL_ARGC));
#endif
#if BIND_git_merge_file_from_index_FUNCTION
  mrb_define_class_method(mrb, Git_module, "merge_file_from_index", mrb_Git_git_merge_file_from_index, MRB_ARGS_ARG(git_merge_file_from_index_REQUIRED_ARGC, git_merge_file_from_index_OPTIONAL_ARGC));
#endif
#if BIND_git_merge_file_init_input_FUNCTION
  mrb_define_class_method(mrb, Git_module, "merge_file_init_input", mrb_Git_git_merge_file_init_input, MRB_ARGS_ARG(git_merge_file_init_input_REQUIRED_ARGC, git_merge_file_init_input_OPTIONAL_ARGC));
#endif
#if BIND_git_merge_file_init_options_FUNCTION
  mrb_define_class_method(mrb, Git_module, "merge_file_init_options", mrb_Git_git_merge_file_init_options, MRB_ARGS_ARG(git_merge_file_init_options_REQUIRED_ARGC, git_merge_file_init_options_OPTIONAL_ARGC));
#endif
#if BIND_git_merge_file_result_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "merge_file_result_free", mrb_Git_git_merge_file_result_free, MRB_ARGS_ARG(git_merge_file_result_free_REQUIRED_ARGC, git_merge_file_result_free_OPTIONAL_ARGC));
#endif
#if BIND_git_merge_init_options_FUNCTION
  mrb_define_class_method(mrb, Git_module, "merge_init_options", mrb_Git_git_merge_init_options, MRB_ARGS_ARG(git_merge_init_options_REQUIRED_ARGC, git_merge_init_options_OPTIONAL_ARGC));
#endif
#if BIND_git_merge_trees_FUNCTION
  mrb_define_class_method(mrb, Git_module, "merge_trees", mrb_Git_git_merge_trees, MRB_ARGS_ARG(git_merge_trees_REQUIRED_ARGC, git_merge_trees_OPTIONAL_ARGC));
#endif
#if BIND_git_message_prettify_FUNCTION
  mrb_define_class_method(mrb, Git_module, "message_prettify", mrb_Git_git_message_prettify, MRB_ARGS_ARG(git_message_prettify_REQUIRED_ARGC, git_message_prettify_OPTIONAL_ARGC));
#endif
#if BIND_git_note_author_FUNCTION
  mrb_define_class_method(mrb, Git_module, "note_author", mrb_Git_git_note_author, MRB_ARGS_ARG(git_note_author_REQUIRED_ARGC, git_note_author_OPTIONAL_ARGC));
#endif
#if BIND_git_note_committer_FUNCTION
  mrb_define_class_method(mrb, Git_module, "note_committer", mrb_Git_git_note_committer, MRB_ARGS_ARG(git_note_committer_REQUIRED_ARGC, git_note_committer_OPTIONAL_ARGC));
#endif
#if BIND_git_note_create_FUNCTION
  mrb_define_class_method(mrb, Git_module, "note_create", mrb_Git_git_note_create, MRB_ARGS_ARG(git_note_create_REQUIRED_ARGC, git_note_create_OPTIONAL_ARGC));
#endif
#if BIND_git_note_default_ref_FUNCTION
  mrb_define_class_method(mrb, Git_module, "note_default_ref", mrb_Git_git_note_default_ref, MRB_ARGS_ARG(git_note_default_ref_REQUIRED_ARGC, git_note_default_ref_OPTIONAL_ARGC));
#endif
#if BIND_git_note_foreach_FUNCTION
  mrb_define_class_method(mrb, Git_module, "note_foreach", mrb_Git_git_note_foreach, MRB_ARGS_ARG(git_note_foreach_REQUIRED_ARGC, git_note_foreach_OPTIONAL_ARGC));
#endif
#if BIND_git_note_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "note_free", mrb_Git_git_note_free, MRB_ARGS_ARG(git_note_free_REQUIRED_ARGC, git_note_free_OPTIONAL_ARGC));
#endif
#if BIND_git_note_id_FUNCTION
  mrb_define_class_method(mrb, Git_module, "note_id", mrb_Git_git_note_id, MRB_ARGS_ARG(git_note_id_REQUIRED_ARGC, git_note_id_OPTIONAL_ARGC));
#endif
#if BIND_git_note_iterator_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "note_iterator_free", mrb_Git_git_note_iterator_free, MRB_ARGS_ARG(git_note_iterator_free_REQUIRED_ARGC, git_note_iterator_free_OPTIONAL_ARGC));
#endif
#if BIND_git_note_iterator_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "note_iterator_new", mrb_Git_git_note_iterator_new, MRB_ARGS_ARG(git_note_iterator_new_REQUIRED_ARGC, git_note_iterator_new_OPTIONAL_ARGC));
#endif
#if BIND_git_note_message_FUNCTION
  mrb_define_class_method(mrb, Git_module, "note_message", mrb_Git_git_note_message, MRB_ARGS_ARG(git_note_message_REQUIRED_ARGC, git_note_message_OPTIONAL_ARGC));
#endif
#if BIND_git_note_next_FUNCTION
  mrb_define_class_method(mrb, Git_module, "note_next", mrb_Git_git_note_next, MRB_ARGS_ARG(git_note_next_REQUIRED_ARGC, git_note_next_OPTIONAL_ARGC));
#endif
#if BIND_git_note_read_FUNCTION
  mrb_define_class_method(mrb, Git_module, "note_read", mrb_Git_git_note_read, MRB_ARGS_ARG(git_note_read_REQUIRED_ARGC, git_note_read_OPTIONAL_ARGC));
#endif
#if BIND_git_note_remove_FUNCTION
  mrb_define_class_method(mrb, Git_module, "note_remove", mrb_Git_git_note_remove, MRB_ARGS_ARG(git_note_remove_REQUIRED_ARGC, git_note_remove_OPTIONAL_ARGC));
#endif
#if BIND_git_object__size_FUNCTION
  mrb_define_class_method(mrb, Git_module, "object__size", mrb_Git_git_object__size, MRB_ARGS_ARG(git_object__size_REQUIRED_ARGC, git_object__size_OPTIONAL_ARGC));
#endif
#if BIND_git_object_dup_FUNCTION
  mrb_define_class_method(mrb, Git_module, "object_dup", mrb_Git_git_object_dup, MRB_ARGS_ARG(git_object_dup_REQUIRED_ARGC, git_object_dup_OPTIONAL_ARGC));
#endif
#if BIND_git_object_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "object_free", mrb_Git_git_object_free, MRB_ARGS_ARG(git_object_free_REQUIRED_ARGC, git_object_free_OPTIONAL_ARGC));
#endif
#if BIND_git_object_id_FUNCTION
  mrb_define_class_method(mrb, Git_module, "object_id", mrb_Git_git_object_id, MRB_ARGS_ARG(git_object_id_REQUIRED_ARGC, git_object_id_OPTIONAL_ARGC));
#endif
#if BIND_git_object_lookup_FUNCTION
  mrb_define_class_method(mrb, Git_module, "object_lookup", mrb_Git_git_object_lookup, MRB_ARGS_ARG(git_object_lookup_REQUIRED_ARGC, git_object_lookup_OPTIONAL_ARGC));
#endif
#if BIND_git_object_lookup_bypath_FUNCTION
  mrb_define_class_method(mrb, Git_module, "object_lookup_bypath", mrb_Git_git_object_lookup_bypath, MRB_ARGS_ARG(git_object_lookup_bypath_REQUIRED_ARGC, git_object_lookup_bypath_OPTIONAL_ARGC));
#endif
#if BIND_git_object_lookup_prefix_FUNCTION
  mrb_define_class_method(mrb, Git_module, "object_lookup_prefix", mrb_Git_git_object_lookup_prefix, MRB_ARGS_ARG(git_object_lookup_prefix_REQUIRED_ARGC, git_object_lookup_prefix_OPTIONAL_ARGC));
#endif
#if BIND_git_object_owner_FUNCTION
  mrb_define_class_method(mrb, Git_module, "object_owner", mrb_Git_git_object_owner, MRB_ARGS_ARG(git_object_owner_REQUIRED_ARGC, git_object_owner_OPTIONAL_ARGC));
#endif
#if BIND_git_object_peel_FUNCTION
  mrb_define_class_method(mrb, Git_module, "object_peel", mrb_Git_git_object_peel, MRB_ARGS_ARG(git_object_peel_REQUIRED_ARGC, git_object_peel_OPTIONAL_ARGC));
#endif
#if BIND_git_object_short_id_FUNCTION
  mrb_define_class_method(mrb, Git_module, "object_short_id", mrb_Git_git_object_short_id, MRB_ARGS_ARG(git_object_short_id_REQUIRED_ARGC, git_object_short_id_OPTIONAL_ARGC));
#endif
#if BIND_git_object_string2type_FUNCTION
  mrb_define_class_method(mrb, Git_module, "object_string2type", mrb_Git_git_object_string2type, MRB_ARGS_ARG(git_object_string2type_REQUIRED_ARGC, git_object_string2type_OPTIONAL_ARGC));
#endif
#if BIND_git_object_type_FUNCTION
  mrb_define_class_method(mrb, Git_module, "object_type", mrb_Git_git_object_type, MRB_ARGS_ARG(git_object_type_REQUIRED_ARGC, git_object_type_OPTIONAL_ARGC));
#endif
#if BIND_git_object_type2string_FUNCTION
  mrb_define_class_method(mrb, Git_module, "object_type2string", mrb_Git_git_object_type2string, MRB_ARGS_ARG(git_object_type2string_REQUIRED_ARGC, git_object_type2string_OPTIONAL_ARGC));
#endif
#if BIND_git_object_typeisloose_FUNCTION
  mrb_define_class_method(mrb, Git_module, "object_typeisloose", mrb_Git_git_object_typeisloose, MRB_ARGS_ARG(git_object_typeisloose_REQUIRED_ARGC, git_object_typeisloose_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_add_alternate_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_add_alternate", mrb_Git_git_odb_add_alternate, MRB_ARGS_ARG(git_odb_add_alternate_REQUIRED_ARGC, git_odb_add_alternate_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_add_backend_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_add_backend", mrb_Git_git_odb_add_backend, MRB_ARGS_ARG(git_odb_add_backend_REQUIRED_ARGC, git_odb_add_backend_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_add_disk_alternate_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_add_disk_alternate", mrb_Git_git_odb_add_disk_alternate, MRB_ARGS_ARG(git_odb_add_disk_alternate_REQUIRED_ARGC, git_odb_add_disk_alternate_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_backend_loose_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_backend_loose", mrb_Git_git_odb_backend_loose, MRB_ARGS_ARG(git_odb_backend_loose_REQUIRED_ARGC, git_odb_backend_loose_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_backend_one_pack_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_backend_one_pack", mrb_Git_git_odb_backend_one_pack, MRB_ARGS_ARG(git_odb_backend_one_pack_REQUIRED_ARGC, git_odb_backend_one_pack_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_backend_pack_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_backend_pack", mrb_Git_git_odb_backend_pack, MRB_ARGS_ARG(git_odb_backend_pack_REQUIRED_ARGC, git_odb_backend_pack_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_exists_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_exists", mrb_Git_git_odb_exists, MRB_ARGS_ARG(git_odb_exists_REQUIRED_ARGC, git_odb_exists_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_exists_prefix_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_exists_prefix", mrb_Git_git_odb_exists_prefix, MRB_ARGS_ARG(git_odb_exists_prefix_REQUIRED_ARGC, git_odb_exists_prefix_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_foreach_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_foreach", mrb_Git_git_odb_foreach, MRB_ARGS_ARG(git_odb_foreach_REQUIRED_ARGC, git_odb_foreach_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_free", mrb_Git_git_odb_free, MRB_ARGS_ARG(git_odb_free_REQUIRED_ARGC, git_odb_free_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_get_backend_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_get_backend", mrb_Git_git_odb_get_backend, MRB_ARGS_ARG(git_odb_get_backend_REQUIRED_ARGC, git_odb_get_backend_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_hash_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_hash", mrb_Git_git_odb_hash, MRB_ARGS_ARG(git_odb_hash_REQUIRED_ARGC, git_odb_hash_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_hashfile_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_hashfile", mrb_Git_git_odb_hashfile, MRB_ARGS_ARG(git_odb_hashfile_REQUIRED_ARGC, git_odb_hashfile_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_new", mrb_Git_git_odb_new, MRB_ARGS_ARG(git_odb_new_REQUIRED_ARGC, git_odb_new_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_num_backends_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_num_backends", mrb_Git_git_odb_num_backends, MRB_ARGS_ARG(git_odb_num_backends_REQUIRED_ARGC, git_odb_num_backends_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_object_data_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_object_data", mrb_Git_git_odb_object_data, MRB_ARGS_ARG(git_odb_object_data_REQUIRED_ARGC, git_odb_object_data_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_object_dup_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_object_dup", mrb_Git_git_odb_object_dup, MRB_ARGS_ARG(git_odb_object_dup_REQUIRED_ARGC, git_odb_object_dup_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_object_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_object_free", mrb_Git_git_odb_object_free, MRB_ARGS_ARG(git_odb_object_free_REQUIRED_ARGC, git_odb_object_free_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_object_id_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_object_id", mrb_Git_git_odb_object_id, MRB_ARGS_ARG(git_odb_object_id_REQUIRED_ARGC, git_odb_object_id_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_object_size_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_object_size", mrb_Git_git_odb_object_size, MRB_ARGS_ARG(git_odb_object_size_REQUIRED_ARGC, git_odb_object_size_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_object_type_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_object_type", mrb_Git_git_odb_object_type, MRB_ARGS_ARG(git_odb_object_type_REQUIRED_ARGC, git_odb_object_type_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_open_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_open", mrb_Git_git_odb_open, MRB_ARGS_ARG(git_odb_open_REQUIRED_ARGC, git_odb_open_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_open_rstream_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_open_rstream", mrb_Git_git_odb_open_rstream, MRB_ARGS_ARG(git_odb_open_rstream_REQUIRED_ARGC, git_odb_open_rstream_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_open_wstream_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_open_wstream", mrb_Git_git_odb_open_wstream, MRB_ARGS_ARG(git_odb_open_wstream_REQUIRED_ARGC, git_odb_open_wstream_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_read_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_read", mrb_Git_git_odb_read, MRB_ARGS_ARG(git_odb_read_REQUIRED_ARGC, git_odb_read_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_read_header_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_read_header", mrb_Git_git_odb_read_header, MRB_ARGS_ARG(git_odb_read_header_REQUIRED_ARGC, git_odb_read_header_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_read_prefix_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_read_prefix", mrb_Git_git_odb_read_prefix, MRB_ARGS_ARG(git_odb_read_prefix_REQUIRED_ARGC, git_odb_read_prefix_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_refresh_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_refresh", mrb_Git_git_odb_refresh, MRB_ARGS_ARG(git_odb_refresh_REQUIRED_ARGC, git_odb_refresh_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_stream_finalize_write_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_stream_finalize_write", mrb_Git_git_odb_stream_finalize_write, MRB_ARGS_ARG(git_odb_stream_finalize_write_REQUIRED_ARGC, git_odb_stream_finalize_write_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_stream_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_stream_free", mrb_Git_git_odb_stream_free, MRB_ARGS_ARG(git_odb_stream_free_REQUIRED_ARGC, git_odb_stream_free_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_stream_read_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_stream_read", mrb_Git_git_odb_stream_read, MRB_ARGS_ARG(git_odb_stream_read_REQUIRED_ARGC, git_odb_stream_read_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_stream_write_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_stream_write", mrb_Git_git_odb_stream_write, MRB_ARGS_ARG(git_odb_stream_write_REQUIRED_ARGC, git_odb_stream_write_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_write_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_write", mrb_Git_git_odb_write, MRB_ARGS_ARG(git_odb_write_REQUIRED_ARGC, git_odb_write_OPTIONAL_ARGC));
#endif
#if BIND_git_odb_write_pack_FUNCTION
  mrb_define_class_method(mrb, Git_module, "odb_write_pack", mrb_Git_git_odb_write_pack, MRB_ARGS_ARG(git_odb_write_pack_REQUIRED_ARGC, git_odb_write_pack_OPTIONAL_ARGC));
#endif
#if BIND_git_oid_cmp_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oid_cmp", mrb_Git_git_oid_cmp, MRB_ARGS_ARG(git_oid_cmp_REQUIRED_ARGC, git_oid_cmp_OPTIONAL_ARGC));
#endif
#if BIND_git_oid_cpy_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oid_cpy", mrb_Git_git_oid_cpy, MRB_ARGS_ARG(git_oid_cpy_REQUIRED_ARGC, git_oid_cpy_OPTIONAL_ARGC));
#endif
#if BIND_git_oid_equal_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oid_equal", mrb_Git_git_oid_equal, MRB_ARGS_ARG(git_oid_equal_REQUIRED_ARGC, git_oid_equal_OPTIONAL_ARGC));
#endif
#if BIND_git_oid_fmt_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oid_fmt", mrb_Git_git_oid_fmt, MRB_ARGS_ARG(git_oid_fmt_REQUIRED_ARGC, git_oid_fmt_OPTIONAL_ARGC));
#endif
#if BIND_git_oid_fromraw_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oid_fromraw", mrb_Git_git_oid_fromraw, MRB_ARGS_ARG(git_oid_fromraw_REQUIRED_ARGC, git_oid_fromraw_OPTIONAL_ARGC));
#endif
#if BIND_git_oid_fromstr_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oid_fromstr", mrb_Git_git_oid_fromstr, MRB_ARGS_ARG(git_oid_fromstr_REQUIRED_ARGC, git_oid_fromstr_OPTIONAL_ARGC));
#endif
#if BIND_git_oid_fromstrn_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oid_fromstrn", mrb_Git_git_oid_fromstrn, MRB_ARGS_ARG(git_oid_fromstrn_REQUIRED_ARGC, git_oid_fromstrn_OPTIONAL_ARGC));
#endif
#if BIND_git_oid_fromstrp_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oid_fromstrp", mrb_Git_git_oid_fromstrp, MRB_ARGS_ARG(git_oid_fromstrp_REQUIRED_ARGC, git_oid_fromstrp_OPTIONAL_ARGC));
#endif
#if BIND_git_oid_iszero_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oid_iszero", mrb_Git_git_oid_iszero, MRB_ARGS_ARG(git_oid_iszero_REQUIRED_ARGC, git_oid_iszero_OPTIONAL_ARGC));
#endif
#if BIND_git_oid_ncmp_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oid_ncmp", mrb_Git_git_oid_ncmp, MRB_ARGS_ARG(git_oid_ncmp_REQUIRED_ARGC, git_oid_ncmp_OPTIONAL_ARGC));
#endif
#if BIND_git_oid_nfmt_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oid_nfmt", mrb_Git_git_oid_nfmt, MRB_ARGS_ARG(git_oid_nfmt_REQUIRED_ARGC, git_oid_nfmt_OPTIONAL_ARGC));
#endif
#if BIND_git_oid_pathfmt_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oid_pathfmt", mrb_Git_git_oid_pathfmt, MRB_ARGS_ARG(git_oid_pathfmt_REQUIRED_ARGC, git_oid_pathfmt_OPTIONAL_ARGC));
#endif
#if BIND_git_oid_shorten_add_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oid_shorten_add", mrb_Git_git_oid_shorten_add, MRB_ARGS_ARG(git_oid_shorten_add_REQUIRED_ARGC, git_oid_shorten_add_OPTIONAL_ARGC));
#endif
#if BIND_git_oid_shorten_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oid_shorten_free", mrb_Git_git_oid_shorten_free, MRB_ARGS_ARG(git_oid_shorten_free_REQUIRED_ARGC, git_oid_shorten_free_OPTIONAL_ARGC));
#endif
#if BIND_git_oid_shorten_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oid_shorten_new", mrb_Git_git_oid_shorten_new, MRB_ARGS_ARG(git_oid_shorten_new_REQUIRED_ARGC, git_oid_shorten_new_OPTIONAL_ARGC));
#endif
#if BIND_git_oid_strcmp_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oid_strcmp", mrb_Git_git_oid_strcmp, MRB_ARGS_ARG(git_oid_strcmp_REQUIRED_ARGC, git_oid_strcmp_OPTIONAL_ARGC));
#endif
#if BIND_git_oid_streq_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oid_streq", mrb_Git_git_oid_streq, MRB_ARGS_ARG(git_oid_streq_REQUIRED_ARGC, git_oid_streq_OPTIONAL_ARGC));
#endif
#if BIND_git_oid_tostr_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oid_tostr", mrb_Git_git_oid_tostr, MRB_ARGS_ARG(git_oid_tostr_REQUIRED_ARGC, git_oid_tostr_OPTIONAL_ARGC));
#endif
#if BIND_git_oid_tostr_s_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oid_tostr_s", mrb_Git_git_oid_tostr_s, MRB_ARGS_ARG(git_oid_tostr_s_REQUIRED_ARGC, git_oid_tostr_s_OPTIONAL_ARGC));
#endif
#if BIND_git_oidarray_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "oidarray_free", mrb_Git_git_oidarray_free, MRB_ARGS_ARG(git_oidarray_free_REQUIRED_ARGC, git_oidarray_free_OPTIONAL_ARGC));
#endif
#if BIND_git_packbuilder_foreach_FUNCTION
  mrb_define_class_method(mrb, Git_module, "packbuilder_foreach", mrb_Git_git_packbuilder_foreach, MRB_ARGS_ARG(git_packbuilder_foreach_REQUIRED_ARGC, git_packbuilder_foreach_OPTIONAL_ARGC));
#endif
#if BIND_git_packbuilder_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "packbuilder_free", mrb_Git_git_packbuilder_free, MRB_ARGS_ARG(git_packbuilder_free_REQUIRED_ARGC, git_packbuilder_free_OPTIONAL_ARGC));
#endif
#if BIND_git_packbuilder_hash_FUNCTION
  mrb_define_class_method(mrb, Git_module, "packbuilder_hash", mrb_Git_git_packbuilder_hash, MRB_ARGS_ARG(git_packbuilder_hash_REQUIRED_ARGC, git_packbuilder_hash_OPTIONAL_ARGC));
#endif
#if BIND_git_packbuilder_insert_FUNCTION
  mrb_define_class_method(mrb, Git_module, "packbuilder_insert", mrb_Git_git_packbuilder_insert, MRB_ARGS_ARG(git_packbuilder_insert_REQUIRED_ARGC, git_packbuilder_insert_OPTIONAL_ARGC));
#endif
#if BIND_git_packbuilder_insert_commit_FUNCTION
  mrb_define_class_method(mrb, Git_module, "packbuilder_insert_commit", mrb_Git_git_packbuilder_insert_commit, MRB_ARGS_ARG(git_packbuilder_insert_commit_REQUIRED_ARGC, git_packbuilder_insert_commit_OPTIONAL_ARGC));
#endif
#if BIND_git_packbuilder_insert_recur_FUNCTION
  mrb_define_class_method(mrb, Git_module, "packbuilder_insert_recur", mrb_Git_git_packbuilder_insert_recur, MRB_ARGS_ARG(git_packbuilder_insert_recur_REQUIRED_ARGC, git_packbuilder_insert_recur_OPTIONAL_ARGC));
#endif
#if BIND_git_packbuilder_insert_tree_FUNCTION
  mrb_define_class_method(mrb, Git_module, "packbuilder_insert_tree", mrb_Git_git_packbuilder_insert_tree, MRB_ARGS_ARG(git_packbuilder_insert_tree_REQUIRED_ARGC, git_packbuilder_insert_tree_OPTIONAL_ARGC));
#endif
#if BIND_git_packbuilder_insert_walk_FUNCTION
  mrb_define_class_method(mrb, Git_module, "packbuilder_insert_walk", mrb_Git_git_packbuilder_insert_walk, MRB_ARGS_ARG(git_packbuilder_insert_walk_REQUIRED_ARGC, git_packbuilder_insert_walk_OPTIONAL_ARGC));
#endif
#if BIND_git_packbuilder_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "packbuilder_new", mrb_Git_git_packbuilder_new, MRB_ARGS_ARG(git_packbuilder_new_REQUIRED_ARGC, git_packbuilder_new_OPTIONAL_ARGC));
#endif
#if BIND_git_packbuilder_object_count_FUNCTION
  mrb_define_class_method(mrb, Git_module, "packbuilder_object_count", mrb_Git_git_packbuilder_object_count, MRB_ARGS_ARG(git_packbuilder_object_count_REQUIRED_ARGC, git_packbuilder_object_count_OPTIONAL_ARGC));
#endif
#if BIND_git_packbuilder_set_callbacks_FUNCTION
  mrb_define_class_method(mrb, Git_module, "packbuilder_set_callbacks", mrb_Git_git_packbuilder_set_callbacks, MRB_ARGS_ARG(git_packbuilder_set_callbacks_REQUIRED_ARGC, git_packbuilder_set_callbacks_OPTIONAL_ARGC));
#endif
#if BIND_git_packbuilder_set_threads_FUNCTION
  mrb_define_class_method(mrb, Git_module, "packbuilder_set_threads", mrb_Git_git_packbuilder_set_threads, MRB_ARGS_ARG(git_packbuilder_set_threads_REQUIRED_ARGC, git_packbuilder_set_threads_OPTIONAL_ARGC));
#endif
#if BIND_git_packbuilder_write_FUNCTION
  mrb_define_class_method(mrb, Git_module, "packbuilder_write", mrb_Git_git_packbuilder_write, MRB_ARGS_ARG(git_packbuilder_write_REQUIRED_ARGC, git_packbuilder_write_OPTIONAL_ARGC));
#endif
#if BIND_git_packbuilder_write_buf_FUNCTION
  mrb_define_class_method(mrb, Git_module, "packbuilder_write_buf", mrb_Git_git_packbuilder_write_buf, MRB_ARGS_ARG(git_packbuilder_write_buf_REQUIRED_ARGC, git_packbuilder_write_buf_OPTIONAL_ARGC));
#endif
#if BIND_git_packbuilder_written_FUNCTION
  mrb_define_class_method(mrb, Git_module, "packbuilder_written", mrb_Git_git_packbuilder_written, MRB_ARGS_ARG(git_packbuilder_written_REQUIRED_ARGC, git_packbuilder_written_OPTIONAL_ARGC));
#endif
#if BIND_git_patch_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "patch_free", mrb_Git_git_patch_free, MRB_ARGS_ARG(git_patch_free_REQUIRED_ARGC, git_patch_free_OPTIONAL_ARGC));
#endif
#if BIND_git_patch_from_blob_and_buffer_FUNCTION
  mrb_define_class_method(mrb, Git_module, "patch_from_blob_and_buffer", mrb_Git_git_patch_from_blob_and_buffer, MRB_ARGS_ARG(git_patch_from_blob_and_buffer_REQUIRED_ARGC, git_patch_from_blob_and_buffer_OPTIONAL_ARGC));
#endif
#if BIND_git_patch_from_blobs_FUNCTION
  mrb_define_class_method(mrb, Git_module, "patch_from_blobs", mrb_Git_git_patch_from_blobs, MRB_ARGS_ARG(git_patch_from_blobs_REQUIRED_ARGC, git_patch_from_blobs_OPTIONAL_ARGC));
#endif
#if BIND_git_patch_from_buffers_FUNCTION
  mrb_define_class_method(mrb, Git_module, "patch_from_buffers", mrb_Git_git_patch_from_buffers, MRB_ARGS_ARG(git_patch_from_buffers_REQUIRED_ARGC, git_patch_from_buffers_OPTIONAL_ARGC));
#endif
#if BIND_git_patch_from_diff_FUNCTION
  mrb_define_class_method(mrb, Git_module, "patch_from_diff", mrb_Git_git_patch_from_diff, MRB_ARGS_ARG(git_patch_from_diff_REQUIRED_ARGC, git_patch_from_diff_OPTIONAL_ARGC));
#endif
#if BIND_git_patch_get_delta_FUNCTION
  mrb_define_class_method(mrb, Git_module, "patch_get_delta", mrb_Git_git_patch_get_delta, MRB_ARGS_ARG(git_patch_get_delta_REQUIRED_ARGC, git_patch_get_delta_OPTIONAL_ARGC));
#endif
#if BIND_git_patch_get_hunk_FUNCTION
  mrb_define_class_method(mrb, Git_module, "patch_get_hunk", mrb_Git_git_patch_get_hunk, MRB_ARGS_ARG(git_patch_get_hunk_REQUIRED_ARGC, git_patch_get_hunk_OPTIONAL_ARGC));
#endif
#if BIND_git_patch_get_line_in_hunk_FUNCTION
  mrb_define_class_method(mrb, Git_module, "patch_get_line_in_hunk", mrb_Git_git_patch_get_line_in_hunk, MRB_ARGS_ARG(git_patch_get_line_in_hunk_REQUIRED_ARGC, git_patch_get_line_in_hunk_OPTIONAL_ARGC));
#endif
#if BIND_git_patch_line_stats_FUNCTION
  mrb_define_class_method(mrb, Git_module, "patch_line_stats", mrb_Git_git_patch_line_stats, MRB_ARGS_ARG(git_patch_line_stats_REQUIRED_ARGC, git_patch_line_stats_OPTIONAL_ARGC));
#endif
#if BIND_git_patch_num_hunks_FUNCTION
  mrb_define_class_method(mrb, Git_module, "patch_num_hunks", mrb_Git_git_patch_num_hunks, MRB_ARGS_ARG(git_patch_num_hunks_REQUIRED_ARGC, git_patch_num_hunks_OPTIONAL_ARGC));
#endif
#if BIND_git_patch_num_lines_in_hunk_FUNCTION
  mrb_define_class_method(mrb, Git_module, "patch_num_lines_in_hunk", mrb_Git_git_patch_num_lines_in_hunk, MRB_ARGS_ARG(git_patch_num_lines_in_hunk_REQUIRED_ARGC, git_patch_num_lines_in_hunk_OPTIONAL_ARGC));
#endif
#if BIND_git_patch_print_FUNCTION
  mrb_define_class_method(mrb, Git_module, "patch_print", mrb_Git_git_patch_print, MRB_ARGS_ARG(git_patch_print_REQUIRED_ARGC, git_patch_print_OPTIONAL_ARGC));
#endif
#if BIND_git_patch_size_FUNCTION
  mrb_define_class_method(mrb, Git_module, "patch_size", mrb_Git_git_patch_size, MRB_ARGS_ARG(git_patch_size_REQUIRED_ARGC, git_patch_size_OPTIONAL_ARGC));
#endif
#if BIND_git_patch_to_buf_FUNCTION
  mrb_define_class_method(mrb, Git_module, "patch_to_buf", mrb_Git_git_patch_to_buf, MRB_ARGS_ARG(git_patch_to_buf_REQUIRED_ARGC, git_patch_to_buf_OPTIONAL_ARGC));
#endif
#if BIND_git_pathspec_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "pathspec_free", mrb_Git_git_pathspec_free, MRB_ARGS_ARG(git_pathspec_free_REQUIRED_ARGC, git_pathspec_free_OPTIONAL_ARGC));
#endif
#if BIND_git_pathspec_match_diff_FUNCTION
  mrb_define_class_method(mrb, Git_module, "pathspec_match_diff", mrb_Git_git_pathspec_match_diff, MRB_ARGS_ARG(git_pathspec_match_diff_REQUIRED_ARGC, git_pathspec_match_diff_OPTIONAL_ARGC));
#endif
#if BIND_git_pathspec_match_index_FUNCTION
  mrb_define_class_method(mrb, Git_module, "pathspec_match_index", mrb_Git_git_pathspec_match_index, MRB_ARGS_ARG(git_pathspec_match_index_REQUIRED_ARGC, git_pathspec_match_index_OPTIONAL_ARGC));
#endif
#if BIND_git_pathspec_match_list_diff_entry_FUNCTION
  mrb_define_class_method(mrb, Git_module, "pathspec_match_list_diff_entry", mrb_Git_git_pathspec_match_list_diff_entry, MRB_ARGS_ARG(git_pathspec_match_list_diff_entry_REQUIRED_ARGC, git_pathspec_match_list_diff_entry_OPTIONAL_ARGC));
#endif
#if BIND_git_pathspec_match_list_entry_FUNCTION
  mrb_define_class_method(mrb, Git_module, "pathspec_match_list_entry", mrb_Git_git_pathspec_match_list_entry, MRB_ARGS_ARG(git_pathspec_match_list_entry_REQUIRED_ARGC, git_pathspec_match_list_entry_OPTIONAL_ARGC));
#endif
#if BIND_git_pathspec_match_list_entrycount_FUNCTION
  mrb_define_class_method(mrb, Git_module, "pathspec_match_list_entrycount", mrb_Git_git_pathspec_match_list_entrycount, MRB_ARGS_ARG(git_pathspec_match_list_entrycount_REQUIRED_ARGC, git_pathspec_match_list_entrycount_OPTIONAL_ARGC));
#endif
#if BIND_git_pathspec_match_list_failed_entry_FUNCTION
  mrb_define_class_method(mrb, Git_module, "pathspec_match_list_failed_entry", mrb_Git_git_pathspec_match_list_failed_entry, MRB_ARGS_ARG(git_pathspec_match_list_failed_entry_REQUIRED_ARGC, git_pathspec_match_list_failed_entry_OPTIONAL_ARGC));
#endif
#if BIND_git_pathspec_match_list_failed_entrycount_FUNCTION
  mrb_define_class_method(mrb, Git_module, "pathspec_match_list_failed_entrycount", mrb_Git_git_pathspec_match_list_failed_entrycount, MRB_ARGS_ARG(git_pathspec_match_list_failed_entrycount_REQUIRED_ARGC, git_pathspec_match_list_failed_entrycount_OPTIONAL_ARGC));
#endif
#if BIND_git_pathspec_match_list_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "pathspec_match_list_free", mrb_Git_git_pathspec_match_list_free, MRB_ARGS_ARG(git_pathspec_match_list_free_REQUIRED_ARGC, git_pathspec_match_list_free_OPTIONAL_ARGC));
#endif
#if BIND_git_pathspec_match_tree_FUNCTION
  mrb_define_class_method(mrb, Git_module, "pathspec_match_tree", mrb_Git_git_pathspec_match_tree, MRB_ARGS_ARG(git_pathspec_match_tree_REQUIRED_ARGC, git_pathspec_match_tree_OPTIONAL_ARGC));
#endif
#if BIND_git_pathspec_match_workdir_FUNCTION
  mrb_define_class_method(mrb, Git_module, "pathspec_match_workdir", mrb_Git_git_pathspec_match_workdir, MRB_ARGS_ARG(git_pathspec_match_workdir_REQUIRED_ARGC, git_pathspec_match_workdir_OPTIONAL_ARGC));
#endif
#if BIND_git_pathspec_matches_path_FUNCTION
  mrb_define_class_method(mrb, Git_module, "pathspec_matches_path", mrb_Git_git_pathspec_matches_path, MRB_ARGS_ARG(git_pathspec_matches_path_REQUIRED_ARGC, git_pathspec_matches_path_OPTIONAL_ARGC));
#endif
#if BIND_git_pathspec_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "pathspec_new", mrb_Git_git_pathspec_new, MRB_ARGS_ARG(git_pathspec_new_REQUIRED_ARGC, git_pathspec_new_OPTIONAL_ARGC));
#endif
#if BIND_git_push_init_options_FUNCTION
  mrb_define_class_method(mrb, Git_module, "push_init_options", mrb_Git_git_push_init_options, MRB_ARGS_ARG(git_push_init_options_REQUIRED_ARGC, git_push_init_options_OPTIONAL_ARGC));
#endif
#if BIND_git_rebase_abort_FUNCTION
  mrb_define_class_method(mrb, Git_module, "rebase_abort", mrb_Git_git_rebase_abort, MRB_ARGS_ARG(git_rebase_abort_REQUIRED_ARGC, git_rebase_abort_OPTIONAL_ARGC));
#endif
#if BIND_git_rebase_commit_FUNCTION
  mrb_define_class_method(mrb, Git_module, "rebase_commit", mrb_Git_git_rebase_commit, MRB_ARGS_ARG(git_rebase_commit_REQUIRED_ARGC, git_rebase_commit_OPTIONAL_ARGC));
#endif
#if BIND_git_rebase_finish_FUNCTION
  mrb_define_class_method(mrb, Git_module, "rebase_finish", mrb_Git_git_rebase_finish, MRB_ARGS_ARG(git_rebase_finish_REQUIRED_ARGC, git_rebase_finish_OPTIONAL_ARGC));
#endif
#if BIND_git_rebase_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "rebase_free", mrb_Git_git_rebase_free, MRB_ARGS_ARG(git_rebase_free_REQUIRED_ARGC, git_rebase_free_OPTIONAL_ARGC));
#endif
#if BIND_git_rebase_init_FUNCTION
  mrb_define_class_method(mrb, Git_module, "rebase_init", mrb_Git_git_rebase_init, MRB_ARGS_ARG(git_rebase_init_REQUIRED_ARGC, git_rebase_init_OPTIONAL_ARGC));
#endif
#if BIND_git_rebase_init_options_FUNCTION
  mrb_define_class_method(mrb, Git_module, "rebase_init_options", mrb_Git_git_rebase_init_options, MRB_ARGS_ARG(git_rebase_init_options_REQUIRED_ARGC, git_rebase_init_options_OPTIONAL_ARGC));
#endif
#if BIND_git_rebase_next_FUNCTION
  mrb_define_class_method(mrb, Git_module, "rebase_next", mrb_Git_git_rebase_next, MRB_ARGS_ARG(git_rebase_next_REQUIRED_ARGC, git_rebase_next_OPTIONAL_ARGC));
#endif
#if BIND_git_rebase_open_FUNCTION
  mrb_define_class_method(mrb, Git_module, "rebase_open", mrb_Git_git_rebase_open, MRB_ARGS_ARG(git_rebase_open_REQUIRED_ARGC, git_rebase_open_OPTIONAL_ARGC));
#endif
#if BIND_git_rebase_operation_byindex_FUNCTION
  mrb_define_class_method(mrb, Git_module, "rebase_operation_byindex", mrb_Git_git_rebase_operation_byindex, MRB_ARGS_ARG(git_rebase_operation_byindex_REQUIRED_ARGC, git_rebase_operation_byindex_OPTIONAL_ARGC));
#endif
#if BIND_git_rebase_operation_current_FUNCTION
  mrb_define_class_method(mrb, Git_module, "rebase_operation_current", mrb_Git_git_rebase_operation_current, MRB_ARGS_ARG(git_rebase_operation_current_REQUIRED_ARGC, git_rebase_operation_current_OPTIONAL_ARGC));
#endif
#if BIND_git_rebase_operation_entrycount_FUNCTION
  mrb_define_class_method(mrb, Git_module, "rebase_operation_entrycount", mrb_Git_git_rebase_operation_entrycount, MRB_ARGS_ARG(git_rebase_operation_entrycount_REQUIRED_ARGC, git_rebase_operation_entrycount_OPTIONAL_ARGC));
#endif
#if BIND_git_refdb_compress_FUNCTION
  mrb_define_class_method(mrb, Git_module, "refdb_compress", mrb_Git_git_refdb_compress, MRB_ARGS_ARG(git_refdb_compress_REQUIRED_ARGC, git_refdb_compress_OPTIONAL_ARGC));
#endif
#if BIND_git_refdb_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "refdb_free", mrb_Git_git_refdb_free, MRB_ARGS_ARG(git_refdb_free_REQUIRED_ARGC, git_refdb_free_OPTIONAL_ARGC));
#endif
#if BIND_git_refdb_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "refdb_new", mrb_Git_git_refdb_new, MRB_ARGS_ARG(git_refdb_new_REQUIRED_ARGC, git_refdb_new_OPTIONAL_ARGC));
#endif
#if BIND_git_refdb_open_FUNCTION
  mrb_define_class_method(mrb, Git_module, "refdb_open", mrb_Git_git_refdb_open, MRB_ARGS_ARG(git_refdb_open_REQUIRED_ARGC, git_refdb_open_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_cmp_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_cmp", mrb_Git_git_reference_cmp, MRB_ARGS_ARG(git_reference_cmp_REQUIRED_ARGC, git_reference_cmp_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_create_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_create", mrb_Git_git_reference_create, MRB_ARGS_ARG(git_reference_create_REQUIRED_ARGC, git_reference_create_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_create_matching_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_create_matching", mrb_Git_git_reference_create_matching, MRB_ARGS_ARG(git_reference_create_matching_REQUIRED_ARGC, git_reference_create_matching_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_delete_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_delete", mrb_Git_git_reference_delete, MRB_ARGS_ARG(git_reference_delete_REQUIRED_ARGC, git_reference_delete_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_dwim_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_dwim", mrb_Git_git_reference_dwim, MRB_ARGS_ARG(git_reference_dwim_REQUIRED_ARGC, git_reference_dwim_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_ensure_log_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_ensure_log", mrb_Git_git_reference_ensure_log, MRB_ARGS_ARG(git_reference_ensure_log_REQUIRED_ARGC, git_reference_ensure_log_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_foreach_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_foreach", mrb_Git_git_reference_foreach, MRB_ARGS_ARG(git_reference_foreach_REQUIRED_ARGC, git_reference_foreach_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_foreach_glob_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_foreach_glob", mrb_Git_git_reference_foreach_glob, MRB_ARGS_ARG(git_reference_foreach_glob_REQUIRED_ARGC, git_reference_foreach_glob_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_foreach_name_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_foreach_name", mrb_Git_git_reference_foreach_name, MRB_ARGS_ARG(git_reference_foreach_name_REQUIRED_ARGC, git_reference_foreach_name_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_free", mrb_Git_git_reference_free, MRB_ARGS_ARG(git_reference_free_REQUIRED_ARGC, git_reference_free_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_has_log_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_has_log", mrb_Git_git_reference_has_log, MRB_ARGS_ARG(git_reference_has_log_REQUIRED_ARGC, git_reference_has_log_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_is_branch_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_is_branch", mrb_Git_git_reference_is_branch, MRB_ARGS_ARG(git_reference_is_branch_REQUIRED_ARGC, git_reference_is_branch_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_is_note_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_is_note", mrb_Git_git_reference_is_note, MRB_ARGS_ARG(git_reference_is_note_REQUIRED_ARGC, git_reference_is_note_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_is_remote_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_is_remote", mrb_Git_git_reference_is_remote, MRB_ARGS_ARG(git_reference_is_remote_REQUIRED_ARGC, git_reference_is_remote_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_is_tag_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_is_tag", mrb_Git_git_reference_is_tag, MRB_ARGS_ARG(git_reference_is_tag_REQUIRED_ARGC, git_reference_is_tag_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_is_valid_name_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_is_valid_name", mrb_Git_git_reference_is_valid_name, MRB_ARGS_ARG(git_reference_is_valid_name_REQUIRED_ARGC, git_reference_is_valid_name_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_iterator_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_iterator_free", mrb_Git_git_reference_iterator_free, MRB_ARGS_ARG(git_reference_iterator_free_REQUIRED_ARGC, git_reference_iterator_free_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_iterator_glob_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_iterator_glob_new", mrb_Git_git_reference_iterator_glob_new, MRB_ARGS_ARG(git_reference_iterator_glob_new_REQUIRED_ARGC, git_reference_iterator_glob_new_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_iterator_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_iterator_new", mrb_Git_git_reference_iterator_new, MRB_ARGS_ARG(git_reference_iterator_new_REQUIRED_ARGC, git_reference_iterator_new_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_list_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_list", mrb_Git_git_reference_list, MRB_ARGS_ARG(git_reference_list_REQUIRED_ARGC, git_reference_list_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_lookup_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_lookup", mrb_Git_git_reference_lookup, MRB_ARGS_ARG(git_reference_lookup_REQUIRED_ARGC, git_reference_lookup_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_name_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_name", mrb_Git_git_reference_name, MRB_ARGS_ARG(git_reference_name_REQUIRED_ARGC, git_reference_name_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_name_to_id_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_name_to_id", mrb_Git_git_reference_name_to_id, MRB_ARGS_ARG(git_reference_name_to_id_REQUIRED_ARGC, git_reference_name_to_id_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_next_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_next", mrb_Git_git_reference_next, MRB_ARGS_ARG(git_reference_next_REQUIRED_ARGC, git_reference_next_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_next_name_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_next_name", mrb_Git_git_reference_next_name, MRB_ARGS_ARG(git_reference_next_name_REQUIRED_ARGC, git_reference_next_name_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_normalize_name_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_normalize_name", mrb_Git_git_reference_normalize_name, MRB_ARGS_ARG(git_reference_normalize_name_REQUIRED_ARGC, git_reference_normalize_name_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_owner_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_owner", mrb_Git_git_reference_owner, MRB_ARGS_ARG(git_reference_owner_REQUIRED_ARGC, git_reference_owner_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_peel_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_peel", mrb_Git_git_reference_peel, MRB_ARGS_ARG(git_reference_peel_REQUIRED_ARGC, git_reference_peel_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_remove_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_remove", mrb_Git_git_reference_remove, MRB_ARGS_ARG(git_reference_remove_REQUIRED_ARGC, git_reference_remove_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_rename_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_rename", mrb_Git_git_reference_rename, MRB_ARGS_ARG(git_reference_rename_REQUIRED_ARGC, git_reference_rename_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_resolve_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_resolve", mrb_Git_git_reference_resolve, MRB_ARGS_ARG(git_reference_resolve_REQUIRED_ARGC, git_reference_resolve_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_set_target_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_set_target", mrb_Git_git_reference_set_target, MRB_ARGS_ARG(git_reference_set_target_REQUIRED_ARGC, git_reference_set_target_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_shorthand_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_shorthand", mrb_Git_git_reference_shorthand, MRB_ARGS_ARG(git_reference_shorthand_REQUIRED_ARGC, git_reference_shorthand_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_symbolic_create_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_symbolic_create", mrb_Git_git_reference_symbolic_create, MRB_ARGS_ARG(git_reference_symbolic_create_REQUIRED_ARGC, git_reference_symbolic_create_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_symbolic_create_matching_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_symbolic_create_matching", mrb_Git_git_reference_symbolic_create_matching, MRB_ARGS_ARG(git_reference_symbolic_create_matching_REQUIRED_ARGC, git_reference_symbolic_create_matching_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_symbolic_set_target_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_symbolic_set_target", mrb_Git_git_reference_symbolic_set_target, MRB_ARGS_ARG(git_reference_symbolic_set_target_REQUIRED_ARGC, git_reference_symbolic_set_target_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_symbolic_target_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_symbolic_target", mrb_Git_git_reference_symbolic_target, MRB_ARGS_ARG(git_reference_symbolic_target_REQUIRED_ARGC, git_reference_symbolic_target_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_target_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_target", mrb_Git_git_reference_target, MRB_ARGS_ARG(git_reference_target_REQUIRED_ARGC, git_reference_target_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_target_peel_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_target_peel", mrb_Git_git_reference_target_peel, MRB_ARGS_ARG(git_reference_target_peel_REQUIRED_ARGC, git_reference_target_peel_OPTIONAL_ARGC));
#endif
#if BIND_git_reference_type_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reference_type", mrb_Git_git_reference_type, MRB_ARGS_ARG(git_reference_type_REQUIRED_ARGC, git_reference_type_OPTIONAL_ARGC));
#endif
#if BIND_git_reflog_append_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reflog_append", mrb_Git_git_reflog_append, MRB_ARGS_ARG(git_reflog_append_REQUIRED_ARGC, git_reflog_append_OPTIONAL_ARGC));
#endif
#if BIND_git_reflog_delete_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reflog_delete", mrb_Git_git_reflog_delete, MRB_ARGS_ARG(git_reflog_delete_REQUIRED_ARGC, git_reflog_delete_OPTIONAL_ARGC));
#endif
#if BIND_git_reflog_drop_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reflog_drop", mrb_Git_git_reflog_drop, MRB_ARGS_ARG(git_reflog_drop_REQUIRED_ARGC, git_reflog_drop_OPTIONAL_ARGC));
#endif
#if BIND_git_reflog_entry_byindex_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reflog_entry_byindex", mrb_Git_git_reflog_entry_byindex, MRB_ARGS_ARG(git_reflog_entry_byindex_REQUIRED_ARGC, git_reflog_entry_byindex_OPTIONAL_ARGC));
#endif
#if BIND_git_reflog_entry_committer_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reflog_entry_committer", mrb_Git_git_reflog_entry_committer, MRB_ARGS_ARG(git_reflog_entry_committer_REQUIRED_ARGC, git_reflog_entry_committer_OPTIONAL_ARGC));
#endif
#if BIND_git_reflog_entry_id_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reflog_entry_id_new", mrb_Git_git_reflog_entry_id_new, MRB_ARGS_ARG(git_reflog_entry_id_new_REQUIRED_ARGC, git_reflog_entry_id_new_OPTIONAL_ARGC));
#endif
#if BIND_git_reflog_entry_id_old_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reflog_entry_id_old", mrb_Git_git_reflog_entry_id_old, MRB_ARGS_ARG(git_reflog_entry_id_old_REQUIRED_ARGC, git_reflog_entry_id_old_OPTIONAL_ARGC));
#endif
#if BIND_git_reflog_entry_message_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reflog_entry_message", mrb_Git_git_reflog_entry_message, MRB_ARGS_ARG(git_reflog_entry_message_REQUIRED_ARGC, git_reflog_entry_message_OPTIONAL_ARGC));
#endif
#if BIND_git_reflog_entrycount_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reflog_entrycount", mrb_Git_git_reflog_entrycount, MRB_ARGS_ARG(git_reflog_entrycount_REQUIRED_ARGC, git_reflog_entrycount_OPTIONAL_ARGC));
#endif
#if BIND_git_reflog_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reflog_free", mrb_Git_git_reflog_free, MRB_ARGS_ARG(git_reflog_free_REQUIRED_ARGC, git_reflog_free_OPTIONAL_ARGC));
#endif
#if BIND_git_reflog_read_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reflog_read", mrb_Git_git_reflog_read, MRB_ARGS_ARG(git_reflog_read_REQUIRED_ARGC, git_reflog_read_OPTIONAL_ARGC));
#endif
#if BIND_git_reflog_rename_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reflog_rename", mrb_Git_git_reflog_rename, MRB_ARGS_ARG(git_reflog_rename_REQUIRED_ARGC, git_reflog_rename_OPTIONAL_ARGC));
#endif
#if BIND_git_reflog_write_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reflog_write", mrb_Git_git_reflog_write, MRB_ARGS_ARG(git_reflog_write_REQUIRED_ARGC, git_reflog_write_OPTIONAL_ARGC));
#endif
#if BIND_git_refspec_direction_FUNCTION
  mrb_define_class_method(mrb, Git_module, "refspec_direction", mrb_Git_git_refspec_direction, MRB_ARGS_ARG(git_refspec_direction_REQUIRED_ARGC, git_refspec_direction_OPTIONAL_ARGC));
#endif
#if BIND_git_refspec_dst_FUNCTION
  mrb_define_class_method(mrb, Git_module, "refspec_dst", mrb_Git_git_refspec_dst, MRB_ARGS_ARG(git_refspec_dst_REQUIRED_ARGC, git_refspec_dst_OPTIONAL_ARGC));
#endif
#if BIND_git_refspec_dst_matches_FUNCTION
  mrb_define_class_method(mrb, Git_module, "refspec_dst_matches", mrb_Git_git_refspec_dst_matches, MRB_ARGS_ARG(git_refspec_dst_matches_REQUIRED_ARGC, git_refspec_dst_matches_OPTIONAL_ARGC));
#endif
#if BIND_git_refspec_force_FUNCTION
  mrb_define_class_method(mrb, Git_module, "refspec_force", mrb_Git_git_refspec_force, MRB_ARGS_ARG(git_refspec_force_REQUIRED_ARGC, git_refspec_force_OPTIONAL_ARGC));
#endif
#if BIND_git_refspec_rtransform_FUNCTION
  mrb_define_class_method(mrb, Git_module, "refspec_rtransform", mrb_Git_git_refspec_rtransform, MRB_ARGS_ARG(git_refspec_rtransform_REQUIRED_ARGC, git_refspec_rtransform_OPTIONAL_ARGC));
#endif
#if BIND_git_refspec_src_FUNCTION
  mrb_define_class_method(mrb, Git_module, "refspec_src", mrb_Git_git_refspec_src, MRB_ARGS_ARG(git_refspec_src_REQUIRED_ARGC, git_refspec_src_OPTIONAL_ARGC));
#endif
#if BIND_git_refspec_src_matches_FUNCTION
  mrb_define_class_method(mrb, Git_module, "refspec_src_matches", mrb_Git_git_refspec_src_matches, MRB_ARGS_ARG(git_refspec_src_matches_REQUIRED_ARGC, git_refspec_src_matches_OPTIONAL_ARGC));
#endif
#if BIND_git_refspec_string_FUNCTION
  mrb_define_class_method(mrb, Git_module, "refspec_string", mrb_Git_git_refspec_string, MRB_ARGS_ARG(git_refspec_string_REQUIRED_ARGC, git_refspec_string_OPTIONAL_ARGC));
#endif
#if BIND_git_refspec_transform_FUNCTION
  mrb_define_class_method(mrb, Git_module, "refspec_transform", mrb_Git_git_refspec_transform, MRB_ARGS_ARG(git_refspec_transform_REQUIRED_ARGC, git_refspec_transform_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_add_fetch_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_add_fetch", mrb_Git_git_remote_add_fetch, MRB_ARGS_ARG(git_remote_add_fetch_REQUIRED_ARGC, git_remote_add_fetch_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_add_push_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_add_push", mrb_Git_git_remote_add_push, MRB_ARGS_ARG(git_remote_add_push_REQUIRED_ARGC, git_remote_add_push_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_autotag_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_autotag", mrb_Git_git_remote_autotag, MRB_ARGS_ARG(git_remote_autotag_REQUIRED_ARGC, git_remote_autotag_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_connect_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_connect", mrb_Git_git_remote_connect, MRB_ARGS_ARG(git_remote_connect_REQUIRED_ARGC, git_remote_connect_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_connected_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_connected", mrb_Git_git_remote_connected, MRB_ARGS_ARG(git_remote_connected_REQUIRED_ARGC, git_remote_connected_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_create_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_create", mrb_Git_git_remote_create, MRB_ARGS_ARG(git_remote_create_REQUIRED_ARGC, git_remote_create_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_create_anonymous_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_create_anonymous", mrb_Git_git_remote_create_anonymous, MRB_ARGS_ARG(git_remote_create_anonymous_REQUIRED_ARGC, git_remote_create_anonymous_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_create_with_fetchspec_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_create_with_fetchspec", mrb_Git_git_remote_create_with_fetchspec, MRB_ARGS_ARG(git_remote_create_with_fetchspec_REQUIRED_ARGC, git_remote_create_with_fetchspec_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_default_branch_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_default_branch", mrb_Git_git_remote_default_branch, MRB_ARGS_ARG(git_remote_default_branch_REQUIRED_ARGC, git_remote_default_branch_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_delete_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_delete", mrb_Git_git_remote_delete, MRB_ARGS_ARG(git_remote_delete_REQUIRED_ARGC, git_remote_delete_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_disconnect_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_disconnect", mrb_Git_git_remote_disconnect, MRB_ARGS_ARG(git_remote_disconnect_REQUIRED_ARGC, git_remote_disconnect_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_download_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_download", mrb_Git_git_remote_download, MRB_ARGS_ARG(git_remote_download_REQUIRED_ARGC, git_remote_download_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_dup_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_dup", mrb_Git_git_remote_dup, MRB_ARGS_ARG(git_remote_dup_REQUIRED_ARGC, git_remote_dup_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_fetch_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_fetch", mrb_Git_git_remote_fetch, MRB_ARGS_ARG(git_remote_fetch_REQUIRED_ARGC, git_remote_fetch_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_free", mrb_Git_git_remote_free, MRB_ARGS_ARG(git_remote_free_REQUIRED_ARGC, git_remote_free_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_get_fetch_refspecs_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_get_fetch_refspecs", mrb_Git_git_remote_get_fetch_refspecs, MRB_ARGS_ARG(git_remote_get_fetch_refspecs_REQUIRED_ARGC, git_remote_get_fetch_refspecs_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_get_push_refspecs_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_get_push_refspecs", mrb_Git_git_remote_get_push_refspecs, MRB_ARGS_ARG(git_remote_get_push_refspecs_REQUIRED_ARGC, git_remote_get_push_refspecs_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_get_refspec_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_get_refspec", mrb_Git_git_remote_get_refspec, MRB_ARGS_ARG(git_remote_get_refspec_REQUIRED_ARGC, git_remote_get_refspec_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_init_callbacks_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_init_callbacks", mrb_Git_git_remote_init_callbacks, MRB_ARGS_ARG(git_remote_init_callbacks_REQUIRED_ARGC, git_remote_init_callbacks_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_is_valid_name_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_is_valid_name", mrb_Git_git_remote_is_valid_name, MRB_ARGS_ARG(git_remote_is_valid_name_REQUIRED_ARGC, git_remote_is_valid_name_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_list_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_list", mrb_Git_git_remote_list, MRB_ARGS_ARG(git_remote_list_REQUIRED_ARGC, git_remote_list_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_lookup_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_lookup", mrb_Git_git_remote_lookup, MRB_ARGS_ARG(git_remote_lookup_REQUIRED_ARGC, git_remote_lookup_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_ls_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_ls", mrb_Git_git_remote_ls, MRB_ARGS_ARG(git_remote_ls_REQUIRED_ARGC, git_remote_ls_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_name_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_name", mrb_Git_git_remote_name, MRB_ARGS_ARG(git_remote_name_REQUIRED_ARGC, git_remote_name_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_owner_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_owner", mrb_Git_git_remote_owner, MRB_ARGS_ARG(git_remote_owner_REQUIRED_ARGC, git_remote_owner_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_prune_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_prune", mrb_Git_git_remote_prune, MRB_ARGS_ARG(git_remote_prune_REQUIRED_ARGC, git_remote_prune_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_prune_refs_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_prune_refs", mrb_Git_git_remote_prune_refs, MRB_ARGS_ARG(git_remote_prune_refs_REQUIRED_ARGC, git_remote_prune_refs_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_push_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_push", mrb_Git_git_remote_push, MRB_ARGS_ARG(git_remote_push_REQUIRED_ARGC, git_remote_push_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_pushurl_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_pushurl", mrb_Git_git_remote_pushurl, MRB_ARGS_ARG(git_remote_pushurl_REQUIRED_ARGC, git_remote_pushurl_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_refspec_count_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_refspec_count", mrb_Git_git_remote_refspec_count, MRB_ARGS_ARG(git_remote_refspec_count_REQUIRED_ARGC, git_remote_refspec_count_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_rename_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_rename", mrb_Git_git_remote_rename, MRB_ARGS_ARG(git_remote_rename_REQUIRED_ARGC, git_remote_rename_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_set_autotag_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_set_autotag", mrb_Git_git_remote_set_autotag, MRB_ARGS_ARG(git_remote_set_autotag_REQUIRED_ARGC, git_remote_set_autotag_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_set_pushurl_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_set_pushurl", mrb_Git_git_remote_set_pushurl, MRB_ARGS_ARG(git_remote_set_pushurl_REQUIRED_ARGC, git_remote_set_pushurl_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_set_url_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_set_url", mrb_Git_git_remote_set_url, MRB_ARGS_ARG(git_remote_set_url_REQUIRED_ARGC, git_remote_set_url_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_stats_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_stats", mrb_Git_git_remote_stats, MRB_ARGS_ARG(git_remote_stats_REQUIRED_ARGC, git_remote_stats_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_stop_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_stop", mrb_Git_git_remote_stop, MRB_ARGS_ARG(git_remote_stop_REQUIRED_ARGC, git_remote_stop_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_update_tips_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_update_tips", mrb_Git_git_remote_update_tips, MRB_ARGS_ARG(git_remote_update_tips_REQUIRED_ARGC, git_remote_update_tips_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_upload_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_upload", mrb_Git_git_remote_upload, MRB_ARGS_ARG(git_remote_upload_REQUIRED_ARGC, git_remote_upload_OPTIONAL_ARGC));
#endif
#if BIND_git_remote_url_FUNCTION
  mrb_define_class_method(mrb, Git_module, "remote_url", mrb_Git_git_remote_url, MRB_ARGS_ARG(git_remote_url_REQUIRED_ARGC, git_remote_url_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_config_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_config", mrb_Git_git_repository_config, MRB_ARGS_ARG(git_repository_config_REQUIRED_ARGC, git_repository_config_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_config_snapshot_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_config_snapshot", mrb_Git_git_repository_config_snapshot, MRB_ARGS_ARG(git_repository_config_snapshot_REQUIRED_ARGC, git_repository_config_snapshot_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_detach_head_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_detach_head", mrb_Git_git_repository_detach_head, MRB_ARGS_ARG(git_repository_detach_head_REQUIRED_ARGC, git_repository_detach_head_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_discover_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_discover", mrb_Git_git_repository_discover, MRB_ARGS_ARG(git_repository_discover_REQUIRED_ARGC, git_repository_discover_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_fetchhead_foreach_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_fetchhead_foreach", mrb_Git_git_repository_fetchhead_foreach, MRB_ARGS_ARG(git_repository_fetchhead_foreach_REQUIRED_ARGC, git_repository_fetchhead_foreach_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_free", mrb_Git_git_repository_free, MRB_ARGS_ARG(git_repository_free_REQUIRED_ARGC, git_repository_free_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_get_namespace_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_get_namespace", mrb_Git_git_repository_get_namespace, MRB_ARGS_ARG(git_repository_get_namespace_REQUIRED_ARGC, git_repository_get_namespace_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_hashfile_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_hashfile", mrb_Git_git_repository_hashfile, MRB_ARGS_ARG(git_repository_hashfile_REQUIRED_ARGC, git_repository_hashfile_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_head_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_head", mrb_Git_git_repository_head, MRB_ARGS_ARG(git_repository_head_REQUIRED_ARGC, git_repository_head_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_head_detached_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_head_detached", mrb_Git_git_repository_head_detached, MRB_ARGS_ARG(git_repository_head_detached_REQUIRED_ARGC, git_repository_head_detached_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_head_unborn_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_head_unborn", mrb_Git_git_repository_head_unborn, MRB_ARGS_ARG(git_repository_head_unborn_REQUIRED_ARGC, git_repository_head_unborn_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_ident_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_ident", mrb_Git_git_repository_ident, MRB_ARGS_ARG(git_repository_ident_REQUIRED_ARGC, git_repository_ident_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_index_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_index", mrb_Git_git_repository_index, MRB_ARGS_ARG(git_repository_index_REQUIRED_ARGC, git_repository_index_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_init_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_init", mrb_Git_git_repository_init, MRB_ARGS_ARG(git_repository_init_REQUIRED_ARGC, git_repository_init_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_init_ext_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_init_ext", mrb_Git_git_repository_init_ext, MRB_ARGS_ARG(git_repository_init_ext_REQUIRED_ARGC, git_repository_init_ext_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_init_init_options_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_init_init_options", mrb_Git_git_repository_init_init_options, MRB_ARGS_ARG(git_repository_init_init_options_REQUIRED_ARGC, git_repository_init_init_options_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_is_bare_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_is_bare", mrb_Git_git_repository_is_bare, MRB_ARGS_ARG(git_repository_is_bare_REQUIRED_ARGC, git_repository_is_bare_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_is_empty_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_is_empty", mrb_Git_git_repository_is_empty, MRB_ARGS_ARG(git_repository_is_empty_REQUIRED_ARGC, git_repository_is_empty_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_is_shallow_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_is_shallow", mrb_Git_git_repository_is_shallow, MRB_ARGS_ARG(git_repository_is_shallow_REQUIRED_ARGC, git_repository_is_shallow_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_mergehead_foreach_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_mergehead_foreach", mrb_Git_git_repository_mergehead_foreach, MRB_ARGS_ARG(git_repository_mergehead_foreach_REQUIRED_ARGC, git_repository_mergehead_foreach_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_message_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_message", mrb_Git_git_repository_message, MRB_ARGS_ARG(git_repository_message_REQUIRED_ARGC, git_repository_message_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_message_remove_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_message_remove", mrb_Git_git_repository_message_remove, MRB_ARGS_ARG(git_repository_message_remove_REQUIRED_ARGC, git_repository_message_remove_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_odb_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_odb", mrb_Git_git_repository_odb, MRB_ARGS_ARG(git_repository_odb_REQUIRED_ARGC, git_repository_odb_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_open_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_open", mrb_Git_git_repository_open, MRB_ARGS_ARG(git_repository_open_REQUIRED_ARGC, git_repository_open_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_open_bare_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_open_bare", mrb_Git_git_repository_open_bare, MRB_ARGS_ARG(git_repository_open_bare_REQUIRED_ARGC, git_repository_open_bare_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_open_ext_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_open_ext", mrb_Git_git_repository_open_ext, MRB_ARGS_ARG(git_repository_open_ext_REQUIRED_ARGC, git_repository_open_ext_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_path_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_path", mrb_Git_git_repository_path, MRB_ARGS_ARG(git_repository_path_REQUIRED_ARGC, git_repository_path_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_refdb_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_refdb", mrb_Git_git_repository_refdb, MRB_ARGS_ARG(git_repository_refdb_REQUIRED_ARGC, git_repository_refdb_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_set_head_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_set_head", mrb_Git_git_repository_set_head, MRB_ARGS_ARG(git_repository_set_head_REQUIRED_ARGC, git_repository_set_head_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_set_head_detached_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_set_head_detached", mrb_Git_git_repository_set_head_detached, MRB_ARGS_ARG(git_repository_set_head_detached_REQUIRED_ARGC, git_repository_set_head_detached_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_set_head_detached_from_annotated_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_set_head_detached_from_annotated", mrb_Git_git_repository_set_head_detached_from_annotated, MRB_ARGS_ARG(git_repository_set_head_detached_from_annotated_REQUIRED_ARGC, git_repository_set_head_detached_from_annotated_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_set_ident_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_set_ident", mrb_Git_git_repository_set_ident, MRB_ARGS_ARG(git_repository_set_ident_REQUIRED_ARGC, git_repository_set_ident_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_set_namespace_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_set_namespace", mrb_Git_git_repository_set_namespace, MRB_ARGS_ARG(git_repository_set_namespace_REQUIRED_ARGC, git_repository_set_namespace_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_set_workdir_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_set_workdir", mrb_Git_git_repository_set_workdir, MRB_ARGS_ARG(git_repository_set_workdir_REQUIRED_ARGC, git_repository_set_workdir_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_state_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_state", mrb_Git_git_repository_state, MRB_ARGS_ARG(git_repository_state_REQUIRED_ARGC, git_repository_state_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_state_cleanup_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_state_cleanup", mrb_Git_git_repository_state_cleanup, MRB_ARGS_ARG(git_repository_state_cleanup_REQUIRED_ARGC, git_repository_state_cleanup_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_workdir_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_workdir", mrb_Git_git_repository_workdir, MRB_ARGS_ARG(git_repository_workdir_REQUIRED_ARGC, git_repository_workdir_OPTIONAL_ARGC));
#endif
#if BIND_git_repository_wrap_odb_FUNCTION
  mrb_define_class_method(mrb, Git_module, "repository_wrap_odb", mrb_Git_git_repository_wrap_odb, MRB_ARGS_ARG(git_repository_wrap_odb_REQUIRED_ARGC, git_repository_wrap_odb_OPTIONAL_ARGC));
#endif
#if BIND_git_reset_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reset", mrb_Git_git_reset, MRB_ARGS_ARG(git_reset_REQUIRED_ARGC, git_reset_OPTIONAL_ARGC));
#endif
#if BIND_git_reset_default_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reset_default", mrb_Git_git_reset_default, MRB_ARGS_ARG(git_reset_default_REQUIRED_ARGC, git_reset_default_OPTIONAL_ARGC));
#endif
#if BIND_git_reset_from_annotated_FUNCTION
  mrb_define_class_method(mrb, Git_module, "reset_from_annotated", mrb_Git_git_reset_from_annotated, MRB_ARGS_ARG(git_reset_from_annotated_REQUIRED_ARGC, git_reset_from_annotated_OPTIONAL_ARGC));
#endif
#if BIND_git_revert_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revert", mrb_Git_git_revert, MRB_ARGS_ARG(git_revert_REQUIRED_ARGC, git_revert_OPTIONAL_ARGC));
#endif
#if BIND_git_revert_commit_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revert_commit", mrb_Git_git_revert_commit, MRB_ARGS_ARG(git_revert_commit_REQUIRED_ARGC, git_revert_commit_OPTIONAL_ARGC));
#endif
#if BIND_git_revert_init_options_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revert_init_options", mrb_Git_git_revert_init_options, MRB_ARGS_ARG(git_revert_init_options_REQUIRED_ARGC, git_revert_init_options_OPTIONAL_ARGC));
#endif
#if BIND_git_revparse_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revparse", mrb_Git_git_revparse, MRB_ARGS_ARG(git_revparse_REQUIRED_ARGC, git_revparse_OPTIONAL_ARGC));
#endif
#if BIND_git_revparse_ext_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revparse_ext", mrb_Git_git_revparse_ext, MRB_ARGS_ARG(git_revparse_ext_REQUIRED_ARGC, git_revparse_ext_OPTIONAL_ARGC));
#endif
#if BIND_git_revparse_single_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revparse_single", mrb_Git_git_revparse_single, MRB_ARGS_ARG(git_revparse_single_REQUIRED_ARGC, git_revparse_single_OPTIONAL_ARGC));
#endif
#if BIND_git_revwalk_add_hide_cb_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revwalk_add_hide_cb", mrb_Git_git_revwalk_add_hide_cb, MRB_ARGS_ARG(git_revwalk_add_hide_cb_REQUIRED_ARGC, git_revwalk_add_hide_cb_OPTIONAL_ARGC));
#endif
#if BIND_git_revwalk_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revwalk_free", mrb_Git_git_revwalk_free, MRB_ARGS_ARG(git_revwalk_free_REQUIRED_ARGC, git_revwalk_free_OPTIONAL_ARGC));
#endif
#if BIND_git_revwalk_hide_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revwalk_hide", mrb_Git_git_revwalk_hide, MRB_ARGS_ARG(git_revwalk_hide_REQUIRED_ARGC, git_revwalk_hide_OPTIONAL_ARGC));
#endif
#if BIND_git_revwalk_hide_glob_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revwalk_hide_glob", mrb_Git_git_revwalk_hide_glob, MRB_ARGS_ARG(git_revwalk_hide_glob_REQUIRED_ARGC, git_revwalk_hide_glob_OPTIONAL_ARGC));
#endif
#if BIND_git_revwalk_hide_head_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revwalk_hide_head", mrb_Git_git_revwalk_hide_head, MRB_ARGS_ARG(git_revwalk_hide_head_REQUIRED_ARGC, git_revwalk_hide_head_OPTIONAL_ARGC));
#endif
#if BIND_git_revwalk_hide_ref_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revwalk_hide_ref", mrb_Git_git_revwalk_hide_ref, MRB_ARGS_ARG(git_revwalk_hide_ref_REQUIRED_ARGC, git_revwalk_hide_ref_OPTIONAL_ARGC));
#endif
#if BIND_git_revwalk_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revwalk_new", mrb_Git_git_revwalk_new, MRB_ARGS_ARG(git_revwalk_new_REQUIRED_ARGC, git_revwalk_new_OPTIONAL_ARGC));
#endif
#if BIND_git_revwalk_next_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revwalk_next", mrb_Git_git_revwalk_next, MRB_ARGS_ARG(git_revwalk_next_REQUIRED_ARGC, git_revwalk_next_OPTIONAL_ARGC));
#endif
#if BIND_git_revwalk_push_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revwalk_push", mrb_Git_git_revwalk_push, MRB_ARGS_ARG(git_revwalk_push_REQUIRED_ARGC, git_revwalk_push_OPTIONAL_ARGC));
#endif
#if BIND_git_revwalk_push_glob_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revwalk_push_glob", mrb_Git_git_revwalk_push_glob, MRB_ARGS_ARG(git_revwalk_push_glob_REQUIRED_ARGC, git_revwalk_push_glob_OPTIONAL_ARGC));
#endif
#if BIND_git_revwalk_push_head_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revwalk_push_head", mrb_Git_git_revwalk_push_head, MRB_ARGS_ARG(git_revwalk_push_head_REQUIRED_ARGC, git_revwalk_push_head_OPTIONAL_ARGC));
#endif
#if BIND_git_revwalk_push_range_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revwalk_push_range", mrb_Git_git_revwalk_push_range, MRB_ARGS_ARG(git_revwalk_push_range_REQUIRED_ARGC, git_revwalk_push_range_OPTIONAL_ARGC));
#endif
#if BIND_git_revwalk_push_ref_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revwalk_push_ref", mrb_Git_git_revwalk_push_ref, MRB_ARGS_ARG(git_revwalk_push_ref_REQUIRED_ARGC, git_revwalk_push_ref_OPTIONAL_ARGC));
#endif
#if BIND_git_revwalk_repository_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revwalk_repository", mrb_Git_git_revwalk_repository, MRB_ARGS_ARG(git_revwalk_repository_REQUIRED_ARGC, git_revwalk_repository_OPTIONAL_ARGC));
#endif
#if BIND_git_revwalk_reset_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revwalk_reset", mrb_Git_git_revwalk_reset, MRB_ARGS_ARG(git_revwalk_reset_REQUIRED_ARGC, git_revwalk_reset_OPTIONAL_ARGC));
#endif
#if BIND_git_revwalk_simplify_first_parent_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revwalk_simplify_first_parent", mrb_Git_git_revwalk_simplify_first_parent, MRB_ARGS_ARG(git_revwalk_simplify_first_parent_REQUIRED_ARGC, git_revwalk_simplify_first_parent_OPTIONAL_ARGC));
#endif
#if BIND_git_revwalk_sorting_FUNCTION
  mrb_define_class_method(mrb, Git_module, "revwalk_sorting", mrb_Git_git_revwalk_sorting, MRB_ARGS_ARG(git_revwalk_sorting_REQUIRED_ARGC, git_revwalk_sorting_OPTIONAL_ARGC));
#endif
#if BIND_git_signature_default_FUNCTION
  mrb_define_class_method(mrb, Git_module, "signature_default", mrb_Git_git_signature_default, MRB_ARGS_ARG(git_signature_default_REQUIRED_ARGC, git_signature_default_OPTIONAL_ARGC));
#endif
#if BIND_git_signature_dup_FUNCTION
  mrb_define_class_method(mrb, Git_module, "signature_dup", mrb_Git_git_signature_dup, MRB_ARGS_ARG(git_signature_dup_REQUIRED_ARGC, git_signature_dup_OPTIONAL_ARGC));
#endif
#if BIND_git_signature_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "signature_free", mrb_Git_git_signature_free, MRB_ARGS_ARG(git_signature_free_REQUIRED_ARGC, git_signature_free_OPTIONAL_ARGC));
#endif
#if BIND_git_signature_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "signature_new", mrb_Git_git_signature_new, MRB_ARGS_ARG(git_signature_new_REQUIRED_ARGC, git_signature_new_OPTIONAL_ARGC));
#endif
#if BIND_git_signature_now_FUNCTION
  mrb_define_class_method(mrb, Git_module, "signature_now", mrb_Git_git_signature_now, MRB_ARGS_ARG(git_signature_now_REQUIRED_ARGC, git_signature_now_OPTIONAL_ARGC));
#endif
#if BIND_git_stash_apply_FUNCTION
  mrb_define_class_method(mrb, Git_module, "stash_apply", mrb_Git_git_stash_apply, MRB_ARGS_ARG(git_stash_apply_REQUIRED_ARGC, git_stash_apply_OPTIONAL_ARGC));
#endif
#if BIND_git_stash_apply_init_options_FUNCTION
  mrb_define_class_method(mrb, Git_module, "stash_apply_init_options", mrb_Git_git_stash_apply_init_options, MRB_ARGS_ARG(git_stash_apply_init_options_REQUIRED_ARGC, git_stash_apply_init_options_OPTIONAL_ARGC));
#endif
#if BIND_git_stash_drop_FUNCTION
  mrb_define_class_method(mrb, Git_module, "stash_drop", mrb_Git_git_stash_drop, MRB_ARGS_ARG(git_stash_drop_REQUIRED_ARGC, git_stash_drop_OPTIONAL_ARGC));
#endif
#if BIND_git_stash_foreach_FUNCTION
  mrb_define_class_method(mrb, Git_module, "stash_foreach", mrb_Git_git_stash_foreach, MRB_ARGS_ARG(git_stash_foreach_REQUIRED_ARGC, git_stash_foreach_OPTIONAL_ARGC));
#endif
#if BIND_git_stash_pop_FUNCTION
  mrb_define_class_method(mrb, Git_module, "stash_pop", mrb_Git_git_stash_pop, MRB_ARGS_ARG(git_stash_pop_REQUIRED_ARGC, git_stash_pop_OPTIONAL_ARGC));
#endif
#if BIND_git_stash_save_FUNCTION
  mrb_define_class_method(mrb, Git_module, "stash_save", mrb_Git_git_stash_save, MRB_ARGS_ARG(git_stash_save_REQUIRED_ARGC, git_stash_save_OPTIONAL_ARGC));
#endif
#if BIND_git_status_byindex_FUNCTION
  mrb_define_class_method(mrb, Git_module, "status_byindex", mrb_Git_git_status_byindex, MRB_ARGS_ARG(git_status_byindex_REQUIRED_ARGC, git_status_byindex_OPTIONAL_ARGC));
#endif
#if BIND_git_status_file_FUNCTION
  mrb_define_class_method(mrb, Git_module, "status_file", mrb_Git_git_status_file, MRB_ARGS_ARG(git_status_file_REQUIRED_ARGC, git_status_file_OPTIONAL_ARGC));
#endif
#if BIND_git_status_foreach_FUNCTION
  mrb_define_class_method(mrb, Git_module, "status_foreach", mrb_Git_git_status_foreach, MRB_ARGS_ARG(git_status_foreach_REQUIRED_ARGC, git_status_foreach_OPTIONAL_ARGC));
#endif
#if BIND_git_status_foreach_ext_FUNCTION
  mrb_define_class_method(mrb, Git_module, "status_foreach_ext", mrb_Git_git_status_foreach_ext, MRB_ARGS_ARG(git_status_foreach_ext_REQUIRED_ARGC, git_status_foreach_ext_OPTIONAL_ARGC));
#endif
#if BIND_git_status_init_options_FUNCTION
  mrb_define_class_method(mrb, Git_module, "status_init_options", mrb_Git_git_status_init_options, MRB_ARGS_ARG(git_status_init_options_REQUIRED_ARGC, git_status_init_options_OPTIONAL_ARGC));
#endif
#if BIND_git_status_list_entrycount_FUNCTION
  mrb_define_class_method(mrb, Git_module, "status_list_entrycount", mrb_Git_git_status_list_entrycount, MRB_ARGS_ARG(git_status_list_entrycount_REQUIRED_ARGC, git_status_list_entrycount_OPTIONAL_ARGC));
#endif
#if BIND_git_status_list_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "status_list_free", mrb_Git_git_status_list_free, MRB_ARGS_ARG(git_status_list_free_REQUIRED_ARGC, git_status_list_free_OPTIONAL_ARGC));
#endif
#if BIND_git_status_list_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "status_list_new", mrb_Git_git_status_list_new, MRB_ARGS_ARG(git_status_list_new_REQUIRED_ARGC, git_status_list_new_OPTIONAL_ARGC));
#endif
#if BIND_git_status_should_ignore_FUNCTION
  mrb_define_class_method(mrb, Git_module, "status_should_ignore", mrb_Git_git_status_should_ignore, MRB_ARGS_ARG(git_status_should_ignore_REQUIRED_ARGC, git_status_should_ignore_OPTIONAL_ARGC));
#endif
#if BIND_git_strarray_copy_FUNCTION
  mrb_define_class_method(mrb, Git_module, "strarray_copy", mrb_Git_git_strarray_copy, MRB_ARGS_ARG(git_strarray_copy_REQUIRED_ARGC, git_strarray_copy_OPTIONAL_ARGC));
#endif
#if BIND_git_strarray_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "strarray_free", mrb_Git_git_strarray_free, MRB_ARGS_ARG(git_strarray_free_REQUIRED_ARGC, git_strarray_free_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_add_finalize_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_add_finalize", mrb_Git_git_submodule_add_finalize, MRB_ARGS_ARG(git_submodule_add_finalize_REQUIRED_ARGC, git_submodule_add_finalize_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_add_setup_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_add_setup", mrb_Git_git_submodule_add_setup, MRB_ARGS_ARG(git_submodule_add_setup_REQUIRED_ARGC, git_submodule_add_setup_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_add_to_index_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_add_to_index", mrb_Git_git_submodule_add_to_index, MRB_ARGS_ARG(git_submodule_add_to_index_REQUIRED_ARGC, git_submodule_add_to_index_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_branch_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_branch", mrb_Git_git_submodule_branch, MRB_ARGS_ARG(git_submodule_branch_REQUIRED_ARGC, git_submodule_branch_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_fetch_recurse_submodules_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_fetch_recurse_submodules", mrb_Git_git_submodule_fetch_recurse_submodules, MRB_ARGS_ARG(git_submodule_fetch_recurse_submodules_REQUIRED_ARGC, git_submodule_fetch_recurse_submodules_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_foreach_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_foreach", mrb_Git_git_submodule_foreach, MRB_ARGS_ARG(git_submodule_foreach_REQUIRED_ARGC, git_submodule_foreach_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_free", mrb_Git_git_submodule_free, MRB_ARGS_ARG(git_submodule_free_REQUIRED_ARGC, git_submodule_free_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_head_id_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_head_id", mrb_Git_git_submodule_head_id, MRB_ARGS_ARG(git_submodule_head_id_REQUIRED_ARGC, git_submodule_head_id_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_ignore_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_ignore", mrb_Git_git_submodule_ignore, MRB_ARGS_ARG(git_submodule_ignore_REQUIRED_ARGC, git_submodule_ignore_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_index_id_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_index_id", mrb_Git_git_submodule_index_id, MRB_ARGS_ARG(git_submodule_index_id_REQUIRED_ARGC, git_submodule_index_id_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_init_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_init", mrb_Git_git_submodule_init, MRB_ARGS_ARG(git_submodule_init_REQUIRED_ARGC, git_submodule_init_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_location_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_location", mrb_Git_git_submodule_location, MRB_ARGS_ARG(git_submodule_location_REQUIRED_ARGC, git_submodule_location_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_lookup_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_lookup", mrb_Git_git_submodule_lookup, MRB_ARGS_ARG(git_submodule_lookup_REQUIRED_ARGC, git_submodule_lookup_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_name_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_name", mrb_Git_git_submodule_name, MRB_ARGS_ARG(git_submodule_name_REQUIRED_ARGC, git_submodule_name_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_open_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_open", mrb_Git_git_submodule_open, MRB_ARGS_ARG(git_submodule_open_REQUIRED_ARGC, git_submodule_open_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_owner_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_owner", mrb_Git_git_submodule_owner, MRB_ARGS_ARG(git_submodule_owner_REQUIRED_ARGC, git_submodule_owner_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_path_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_path", mrb_Git_git_submodule_path, MRB_ARGS_ARG(git_submodule_path_REQUIRED_ARGC, git_submodule_path_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_reload_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_reload", mrb_Git_git_submodule_reload, MRB_ARGS_ARG(git_submodule_reload_REQUIRED_ARGC, git_submodule_reload_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_repo_init_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_repo_init", mrb_Git_git_submodule_repo_init, MRB_ARGS_ARG(git_submodule_repo_init_REQUIRED_ARGC, git_submodule_repo_init_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_resolve_url_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_resolve_url", mrb_Git_git_submodule_resolve_url, MRB_ARGS_ARG(git_submodule_resolve_url_REQUIRED_ARGC, git_submodule_resolve_url_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_set_branch_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_set_branch", mrb_Git_git_submodule_set_branch, MRB_ARGS_ARG(git_submodule_set_branch_REQUIRED_ARGC, git_submodule_set_branch_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_set_fetch_recurse_submodules_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_set_fetch_recurse_submodules", mrb_Git_git_submodule_set_fetch_recurse_submodules, MRB_ARGS_ARG(git_submodule_set_fetch_recurse_submodules_REQUIRED_ARGC, git_submodule_set_fetch_recurse_submodules_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_set_ignore_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_set_ignore", mrb_Git_git_submodule_set_ignore, MRB_ARGS_ARG(git_submodule_set_ignore_REQUIRED_ARGC, git_submodule_set_ignore_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_set_update_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_set_update", mrb_Git_git_submodule_set_update, MRB_ARGS_ARG(git_submodule_set_update_REQUIRED_ARGC, git_submodule_set_update_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_set_url_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_set_url", mrb_Git_git_submodule_set_url, MRB_ARGS_ARG(git_submodule_set_url_REQUIRED_ARGC, git_submodule_set_url_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_status_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_status", mrb_Git_git_submodule_status, MRB_ARGS_ARG(git_submodule_status_REQUIRED_ARGC, git_submodule_status_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_sync_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_sync", mrb_Git_git_submodule_sync, MRB_ARGS_ARG(git_submodule_sync_REQUIRED_ARGC, git_submodule_sync_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_update_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_update", mrb_Git_git_submodule_update, MRB_ARGS_ARG(git_submodule_update_REQUIRED_ARGC, git_submodule_update_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_update_init_options_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_update_init_options", mrb_Git_git_submodule_update_init_options, MRB_ARGS_ARG(git_submodule_update_init_options_REQUIRED_ARGC, git_submodule_update_init_options_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_update_strategy_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_update_strategy", mrb_Git_git_submodule_update_strategy, MRB_ARGS_ARG(git_submodule_update_strategy_REQUIRED_ARGC, git_submodule_update_strategy_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_url_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_url", mrb_Git_git_submodule_url, MRB_ARGS_ARG(git_submodule_url_REQUIRED_ARGC, git_submodule_url_OPTIONAL_ARGC));
#endif
#if BIND_git_submodule_wd_id_FUNCTION
  mrb_define_class_method(mrb, Git_module, "submodule_wd_id", mrb_Git_git_submodule_wd_id, MRB_ARGS_ARG(git_submodule_wd_id_REQUIRED_ARGC, git_submodule_wd_id_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_annotation_create_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_annotation_create", mrb_Git_git_tag_annotation_create, MRB_ARGS_ARG(git_tag_annotation_create_REQUIRED_ARGC, git_tag_annotation_create_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_create_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_create", mrb_Git_git_tag_create, MRB_ARGS_ARG(git_tag_create_REQUIRED_ARGC, git_tag_create_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_create_frombuffer_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_create_frombuffer", mrb_Git_git_tag_create_frombuffer, MRB_ARGS_ARG(git_tag_create_frombuffer_REQUIRED_ARGC, git_tag_create_frombuffer_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_create_lightweight_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_create_lightweight", mrb_Git_git_tag_create_lightweight, MRB_ARGS_ARG(git_tag_create_lightweight_REQUIRED_ARGC, git_tag_create_lightweight_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_delete_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_delete", mrb_Git_git_tag_delete, MRB_ARGS_ARG(git_tag_delete_REQUIRED_ARGC, git_tag_delete_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_foreach_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_foreach", mrb_Git_git_tag_foreach, MRB_ARGS_ARG(git_tag_foreach_REQUIRED_ARGC, git_tag_foreach_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_free", mrb_Git_git_tag_free, MRB_ARGS_ARG(git_tag_free_REQUIRED_ARGC, git_tag_free_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_id_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_id", mrb_Git_git_tag_id, MRB_ARGS_ARG(git_tag_id_REQUIRED_ARGC, git_tag_id_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_list_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_list", mrb_Git_git_tag_list, MRB_ARGS_ARG(git_tag_list_REQUIRED_ARGC, git_tag_list_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_list_match_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_list_match", mrb_Git_git_tag_list_match, MRB_ARGS_ARG(git_tag_list_match_REQUIRED_ARGC, git_tag_list_match_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_lookup_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_lookup", mrb_Git_git_tag_lookup, MRB_ARGS_ARG(git_tag_lookup_REQUIRED_ARGC, git_tag_lookup_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_lookup_prefix_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_lookup_prefix", mrb_Git_git_tag_lookup_prefix, MRB_ARGS_ARG(git_tag_lookup_prefix_REQUIRED_ARGC, git_tag_lookup_prefix_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_message_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_message", mrb_Git_git_tag_message, MRB_ARGS_ARG(git_tag_message_REQUIRED_ARGC, git_tag_message_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_name_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_name", mrb_Git_git_tag_name, MRB_ARGS_ARG(git_tag_name_REQUIRED_ARGC, git_tag_name_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_owner_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_owner", mrb_Git_git_tag_owner, MRB_ARGS_ARG(git_tag_owner_REQUIRED_ARGC, git_tag_owner_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_peel_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_peel", mrb_Git_git_tag_peel, MRB_ARGS_ARG(git_tag_peel_REQUIRED_ARGC, git_tag_peel_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_tagger_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_tagger", mrb_Git_git_tag_tagger, MRB_ARGS_ARG(git_tag_tagger_REQUIRED_ARGC, git_tag_tagger_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_target_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_target", mrb_Git_git_tag_target, MRB_ARGS_ARG(git_tag_target_REQUIRED_ARGC, git_tag_target_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_target_id_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_target_id", mrb_Git_git_tag_target_id, MRB_ARGS_ARG(git_tag_target_id_REQUIRED_ARGC, git_tag_target_id_OPTIONAL_ARGC));
#endif
#if BIND_git_tag_target_type_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tag_target_type", mrb_Git_git_tag_target_type, MRB_ARGS_ARG(git_tag_target_type_REQUIRED_ARGC, git_tag_target_type_OPTIONAL_ARGC));
#endif
#if BIND_git_trace_set_FUNCTION
  mrb_define_class_method(mrb, Git_module, "trace_set", mrb_Git_git_trace_set, MRB_ARGS_ARG(git_trace_set_REQUIRED_ARGC, git_trace_set_OPTIONAL_ARGC));
#endif
#if BIND_git_transaction_commit_FUNCTION
  mrb_define_class_method(mrb, Git_module, "transaction_commit", mrb_Git_git_transaction_commit, MRB_ARGS_ARG(git_transaction_commit_REQUIRED_ARGC, git_transaction_commit_OPTIONAL_ARGC));
#endif
#if BIND_git_transaction_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "transaction_free", mrb_Git_git_transaction_free, MRB_ARGS_ARG(git_transaction_free_REQUIRED_ARGC, git_transaction_free_OPTIONAL_ARGC));
#endif
#if BIND_git_transaction_lock_ref_FUNCTION
  mrb_define_class_method(mrb, Git_module, "transaction_lock_ref", mrb_Git_git_transaction_lock_ref, MRB_ARGS_ARG(git_transaction_lock_ref_REQUIRED_ARGC, git_transaction_lock_ref_OPTIONAL_ARGC));
#endif
#if BIND_git_transaction_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "transaction_new", mrb_Git_git_transaction_new, MRB_ARGS_ARG(git_transaction_new_REQUIRED_ARGC, git_transaction_new_OPTIONAL_ARGC));
#endif
#if BIND_git_transaction_remove_FUNCTION
  mrb_define_class_method(mrb, Git_module, "transaction_remove", mrb_Git_git_transaction_remove, MRB_ARGS_ARG(git_transaction_remove_REQUIRED_ARGC, git_transaction_remove_OPTIONAL_ARGC));
#endif
#if BIND_git_transaction_set_reflog_FUNCTION
  mrb_define_class_method(mrb, Git_module, "transaction_set_reflog", mrb_Git_git_transaction_set_reflog, MRB_ARGS_ARG(git_transaction_set_reflog_REQUIRED_ARGC, git_transaction_set_reflog_OPTIONAL_ARGC));
#endif
#if BIND_git_transaction_set_symbolic_target_FUNCTION
  mrb_define_class_method(mrb, Git_module, "transaction_set_symbolic_target", mrb_Git_git_transaction_set_symbolic_target, MRB_ARGS_ARG(git_transaction_set_symbolic_target_REQUIRED_ARGC, git_transaction_set_symbolic_target_OPTIONAL_ARGC));
#endif
#if BIND_git_transaction_set_target_FUNCTION
  mrb_define_class_method(mrb, Git_module, "transaction_set_target", mrb_Git_git_transaction_set_target, MRB_ARGS_ARG(git_transaction_set_target_REQUIRED_ARGC, git_transaction_set_target_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_entry_byid_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_entry_byid", mrb_Git_git_tree_entry_byid, MRB_ARGS_ARG(git_tree_entry_byid_REQUIRED_ARGC, git_tree_entry_byid_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_entry_byindex_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_entry_byindex", mrb_Git_git_tree_entry_byindex, MRB_ARGS_ARG(git_tree_entry_byindex_REQUIRED_ARGC, git_tree_entry_byindex_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_entry_byname_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_entry_byname", mrb_Git_git_tree_entry_byname, MRB_ARGS_ARG(git_tree_entry_byname_REQUIRED_ARGC, git_tree_entry_byname_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_entry_bypath_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_entry_bypath", mrb_Git_git_tree_entry_bypath, MRB_ARGS_ARG(git_tree_entry_bypath_REQUIRED_ARGC, git_tree_entry_bypath_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_entry_cmp_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_entry_cmp", mrb_Git_git_tree_entry_cmp, MRB_ARGS_ARG(git_tree_entry_cmp_REQUIRED_ARGC, git_tree_entry_cmp_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_entry_dup_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_entry_dup", mrb_Git_git_tree_entry_dup, MRB_ARGS_ARG(git_tree_entry_dup_REQUIRED_ARGC, git_tree_entry_dup_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_entry_filemode_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_entry_filemode", mrb_Git_git_tree_entry_filemode, MRB_ARGS_ARG(git_tree_entry_filemode_REQUIRED_ARGC, git_tree_entry_filemode_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_entry_filemode_raw_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_entry_filemode_raw", mrb_Git_git_tree_entry_filemode_raw, MRB_ARGS_ARG(git_tree_entry_filemode_raw_REQUIRED_ARGC, git_tree_entry_filemode_raw_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_entry_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_entry_free", mrb_Git_git_tree_entry_free, MRB_ARGS_ARG(git_tree_entry_free_REQUIRED_ARGC, git_tree_entry_free_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_entry_id_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_entry_id", mrb_Git_git_tree_entry_id, MRB_ARGS_ARG(git_tree_entry_id_REQUIRED_ARGC, git_tree_entry_id_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_entry_name_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_entry_name", mrb_Git_git_tree_entry_name, MRB_ARGS_ARG(git_tree_entry_name_REQUIRED_ARGC, git_tree_entry_name_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_entry_to_object_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_entry_to_object", mrb_Git_git_tree_entry_to_object, MRB_ARGS_ARG(git_tree_entry_to_object_REQUIRED_ARGC, git_tree_entry_to_object_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_entry_type_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_entry_type", mrb_Git_git_tree_entry_type, MRB_ARGS_ARG(git_tree_entry_type_REQUIRED_ARGC, git_tree_entry_type_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_entrycount_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_entrycount", mrb_Git_git_tree_entrycount, MRB_ARGS_ARG(git_tree_entrycount_REQUIRED_ARGC, git_tree_entrycount_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_free", mrb_Git_git_tree_free, MRB_ARGS_ARG(git_tree_free_REQUIRED_ARGC, git_tree_free_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_id_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_id", mrb_Git_git_tree_id, MRB_ARGS_ARG(git_tree_id_REQUIRED_ARGC, git_tree_id_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_lookup_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_lookup", mrb_Git_git_tree_lookup, MRB_ARGS_ARG(git_tree_lookup_REQUIRED_ARGC, git_tree_lookup_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_lookup_prefix_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_lookup_prefix", mrb_Git_git_tree_lookup_prefix, MRB_ARGS_ARG(git_tree_lookup_prefix_REQUIRED_ARGC, git_tree_lookup_prefix_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_owner_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_owner", mrb_Git_git_tree_owner, MRB_ARGS_ARG(git_tree_owner_REQUIRED_ARGC, git_tree_owner_OPTIONAL_ARGC));
#endif
#if BIND_git_tree_walk_FUNCTION
  mrb_define_class_method(mrb, Git_module, "tree_walk", mrb_Git_git_tree_walk, MRB_ARGS_ARG(git_tree_walk_REQUIRED_ARGC, git_tree_walk_OPTIONAL_ARGC));
#endif
#if BIND_git_treebuilder_clear_FUNCTION
  mrb_define_class_method(mrb, Git_module, "treebuilder_clear", mrb_Git_git_treebuilder_clear, MRB_ARGS_ARG(git_treebuilder_clear_REQUIRED_ARGC, git_treebuilder_clear_OPTIONAL_ARGC));
#endif
#if BIND_git_treebuilder_entrycount_FUNCTION
  mrb_define_class_method(mrb, Git_module, "treebuilder_entrycount", mrb_Git_git_treebuilder_entrycount, MRB_ARGS_ARG(git_treebuilder_entrycount_REQUIRED_ARGC, git_treebuilder_entrycount_OPTIONAL_ARGC));
#endif
#if BIND_git_treebuilder_filter_FUNCTION
  mrb_define_class_method(mrb, Git_module, "treebuilder_filter", mrb_Git_git_treebuilder_filter, MRB_ARGS_ARG(git_treebuilder_filter_REQUIRED_ARGC, git_treebuilder_filter_OPTIONAL_ARGC));
#endif
#if BIND_git_treebuilder_free_FUNCTION
  mrb_define_class_method(mrb, Git_module, "treebuilder_free", mrb_Git_git_treebuilder_free, MRB_ARGS_ARG(git_treebuilder_free_REQUIRED_ARGC, git_treebuilder_free_OPTIONAL_ARGC));
#endif
#if BIND_git_treebuilder_get_FUNCTION
  mrb_define_class_method(mrb, Git_module, "treebuilder_get", mrb_Git_git_treebuilder_get, MRB_ARGS_ARG(git_treebuilder_get_REQUIRED_ARGC, git_treebuilder_get_OPTIONAL_ARGC));
#endif
#if BIND_git_treebuilder_insert_FUNCTION
  mrb_define_class_method(mrb, Git_module, "treebuilder_insert", mrb_Git_git_treebuilder_insert, MRB_ARGS_ARG(git_treebuilder_insert_REQUIRED_ARGC, git_treebuilder_insert_OPTIONAL_ARGC));
#endif
#if BIND_git_treebuilder_new_FUNCTION
  mrb_define_class_method(mrb, Git_module, "treebuilder_new", mrb_Git_git_treebuilder_new, MRB_ARGS_ARG(git_treebuilder_new_REQUIRED_ARGC, git_treebuilder_new_OPTIONAL_ARGC));
#endif
#if BIND_git_treebuilder_remove_FUNCTION
  mrb_define_class_method(mrb, Git_module, "treebuilder_remove", mrb_Git_git_treebuilder_remove, MRB_ARGS_ARG(git_treebuilder_remove_REQUIRED_ARGC, git_treebuilder_remove_OPTIONAL_ARGC));
#endif
#if BIND_git_treebuilder_write_FUNCTION
  mrb_define_class_method(mrb, Git_module, "treebuilder_write", mrb_Git_git_treebuilder_write, MRB_ARGS_ARG(git_treebuilder_write_REQUIRED_ARGC, git_treebuilder_write_OPTIONAL_ARGC));
#endif
#if BIND_giterr_clear_FUNCTION
  mrb_define_class_method(mrb, Git_module, "err_clear", mrb_Git_giterr_clear, MRB_ARGS_ARG(giterr_clear_REQUIRED_ARGC, giterr_clear_OPTIONAL_ARGC));
#endif
#if BIND_giterr_last_FUNCTION
  mrb_define_class_method(mrb, Git_module, "err_last", mrb_Git_giterr_last, MRB_ARGS_ARG(giterr_last_REQUIRED_ARGC, giterr_last_OPTIONAL_ARGC));
#endif
#if BIND_giterr_set_oom_FUNCTION
  mrb_define_class_method(mrb, Git_module, "err_set_oom", mrb_Git_giterr_set_oom, MRB_ARGS_ARG(giterr_set_oom_REQUIRED_ARGC, giterr_set_oom_OPTIONAL_ARGC));
#endif
#if BIND_giterr_set_str_FUNCTION
  mrb_define_class_method(mrb, Git_module, "err_set_str", mrb_Git_giterr_set_str, MRB_ARGS_ARG(giterr_set_str_REQUIRED_ARGC, giterr_set_str_OPTIONAL_ARGC));
#endif
#if BIND_imaxdiv_FUNCTION
  mrb_define_class_method(mrb, Git_module, "imaxdiv", mrb_Git_imaxdiv, MRB_ARGS_ARG(imaxdiv_REQUIRED_ARGC, imaxdiv_OPTIONAL_ARGC));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_module_definition */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

void mrb_mruby_git_gem_final(mrb_state* mrb){
/* MRUBY_BINDING: module_final */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */

#ifdef __cplusplus
}
#endif
