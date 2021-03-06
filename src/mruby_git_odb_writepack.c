/*
 * git_odb_writepack
 * Defined in file odb_backend.h @ line 124
 */

#include "mruby_Git.h"

#if BIND_OdbWritepack_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbWritepack::initialize */
/* sha: 513ee2f845d6b8400755b5e25da2a34bbaa4cd1c3395a365ab6e37432fa195c0 */
#if BIND_OdbWritepack_INITIALIZE
mrb_value
mrb_Git_OdbWritepack_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_odb_writepack* native_object = (git_odb_writepack*)calloc(1, sizeof(git_odb_writepack));
  mruby_gift_git_odb_writepack_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: OdbWritepack::backend_reader */
/* sha: 2f95af8a3301686430ecb5a7c92d73c16ebc6a8590dd84513cc51670cf7b460a */
#if BIND_OdbWritepack_backend_FIELD_READER
/* get_backend
 *
 * Return Type: git_odb_backend *
 */
mrb_value
mrb_Git_OdbWritepack_get_backend(mrb_state* mrb, mrb_value self) {
  git_odb_writepack * native_self = mruby_unbox_git_odb_writepack(self);

  git_odb_backend * native_backend = native_self->backend;

  mrb_value backend = (native_backend == NULL ? mrb_nil_value() : mruby_box_git_odb_backend(mrb, native_backend));

  return backend;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbWritepack::backend_writer */
/* sha: 57f56e073cbf8b659180dc41bb9d341caeb881056973a4faff6b7e8a501814ed */
#if BIND_OdbWritepack_backend_FIELD_WRITER
/* set_backend
 *
 * Parameters:
 * - value: git_odb_backend *
 */
mrb_value
mrb_Git_OdbWritepack_set_backend(mrb_state* mrb, mrb_value self) {
  git_odb_writepack * native_self = mruby_unbox_git_odb_writepack(self);
  mrb_value backend;

  mrb_get_args(mrb, "o", &backend);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, backend, OdbBackend_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "OdbBackend expected");
    return mrb_nil_value();
  }

  git_odb_backend * native_backend = (mrb_nil_p(backend) ? NULL : mruby_unbox_git_odb_backend(backend));

  native_self->backend = native_backend;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbWritepack::append_reader */
/* sha: 0385baa150bf64c208504e09c49a8828c5240ef9385b96a70a61293375a13ed6 */
#if BIND_OdbWritepack_append_FIELD_READER
/* get_append
 *
 * Return Type: int (*)(git_odb_writepack *, const void *, size_t, git_transfer_progress *)
 */
mrb_value
mrb_Git_OdbWritepack_get_append(mrb_state* mrb, mrb_value self) {
  git_odb_writepack * native_self = mruby_unbox_git_odb_writepack(self);

  int (*)(git_odb_writepack *, const void *, size_t, git_transfer_progress *) native_append = native_self->append;

  mrb_value append = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_git_odb_writepack_PTR_COMMAvoid_PTR_COMMA_size_tCOMMA_git_transfer_progress_PTR_RPAREN(mrb, native_append);

  return append;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbWritepack::append_writer */
/* sha: 377170637319a13899d94ac797091b7dabc9c3710b1937d6b32cdcf9cc026b5d */
#if BIND_OdbWritepack_append_FIELD_WRITER
/* set_append
 *
 * Parameters:
 * - value: int (*)(git_odb_writepack *, const void *, size_t, git_transfer_progress *)
 */
mrb_value
mrb_Git_OdbWritepack_set_append(mrb_state* mrb, mrb_value self) {
  git_odb_writepack * native_self = mruby_unbox_git_odb_writepack(self);
  mrb_value append;

  mrb_get_args(mrb, "o", &append);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_git_odb_writepack_PTR_COMMAvoid_PTR_COMMA_size_tCOMMA_git_transfer_progress_PTR_RPAREN(append);

  int (*native_append)(git_odb_writepack *, const void *, size_t, git_transfer_progress *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_git_odb_writepack_PTR_COMMAvoid_PTR_COMMA_size_tCOMMA_git_transfer_progress_PTR_RPAREN(append);

  native_self->append = native_append;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbWritepack::commit_reader */
/* sha: 392b6a7647f48306852a43fd5407234595e35f8828e20676db5e5e09021d2482 */
#if BIND_OdbWritepack_commit_FIELD_READER
/* get_commit
 *
 * Return Type: int (*)(git_odb_writepack *, git_transfer_progress *)
 */
mrb_value
mrb_Git_OdbWritepack_get_commit(mrb_state* mrb, mrb_value self) {
  git_odb_writepack * native_self = mruby_unbox_git_odb_writepack(self);

  int (*)(git_odb_writepack *, git_transfer_progress *) native_commit = native_self->commit;

  mrb_value commit = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_git_odb_writepack_PTR_COMMA_git_transfer_progress_PTR_RPAREN(mrb, native_commit);

  return commit;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbWritepack::commit_writer */
/* sha: 23e68ce35bd7a49bc912b28bbf972a5461923d7b9bc448a9b9990c4b18c794b7 */
#if BIND_OdbWritepack_commit_FIELD_WRITER
/* set_commit
 *
 * Parameters:
 * - value: int (*)(git_odb_writepack *, git_transfer_progress *)
 */
mrb_value
mrb_Git_OdbWritepack_set_commit(mrb_state* mrb, mrb_value self) {
  git_odb_writepack * native_self = mruby_unbox_git_odb_writepack(self);
  mrb_value commit;

  mrb_get_args(mrb, "o", &commit);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_git_odb_writepack_PTR_COMMA_git_transfer_progress_PTR_RPAREN(commit);

  int (*native_commit)(git_odb_writepack *, git_transfer_progress *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_git_odb_writepack_PTR_COMMA_git_transfer_progress_PTR_RPAREN(commit);

  native_self->commit = native_commit;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbWritepack::free_reader */
/* sha: 9b6447ab6a8713ed873b1e4d9e2cf97a81567f73ebaa05de8982415c2de23dc4 */
#if BIND_OdbWritepack_free_FIELD_READER
/* get_free
 *
 * Return Type: void (*)(git_odb_writepack *)
 */
mrb_value
mrb_Git_OdbWritepack_get_free(mrb_state* mrb, mrb_value self) {
  git_odb_writepack * native_self = mruby_unbox_git_odb_writepack(self);

  void (*)(git_odb_writepack *) native_free = native_self->free;

  mrb_value free = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_git_odb_writepack_PTR_RPAREN(mrb, native_free);

  return free;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbWritepack::free_writer */
/* sha: 2d8cf36447e7683307275d1ef680d0407078afd895ffcd122b3b35ed3ec3b479 */
#if BIND_OdbWritepack_free_FIELD_WRITER
/* set_free
 *
 * Parameters:
 * - value: void (*)(git_odb_writepack *)
 */
mrb_value
mrb_Git_OdbWritepack_set_free(mrb_state* mrb, mrb_value self) {
  git_odb_writepack * native_self = mruby_unbox_git_odb_writepack(self);
  mrb_value free;

  mrb_get_args(mrb, "o", &free);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_git_odb_writepack_PTR_RPAREN(free);

  void (*native_free)(git_odb_writepack *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_git_odb_writepack_PTR_RPAREN(free);

  native_self->free = native_free;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_OdbWritepack_init(mrb_state* mrb) {
/* MRUBY_BINDING: OdbWritepack::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbWritepack::class_definition */
/* sha: 8069235d527b32a4086e61091643076d8942c6491de1401d59bb3eec6f3af79b */
  struct RClass* OdbWritepack_class = mrb_define_class_under(mrb, Git_module(mrb), "OdbWritepack", mrb->object_class);
  MRB_SET_INSTANCE_TT(OdbWritepack_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbWritepack::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbWritepack::class_method_definitions */
/* sha: 881b7c4c601a46cd072dae1d9fa90131a200c5b553a3f0a691bb7ab2e1c2398a */
#if BIND_OdbWritepack_INITIALIZE
  mrb_define_method(mrb, OdbWritepack_class, "initialize", mrb_Git_OdbWritepack_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbWritepack::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbWritepack::attr_definitions */
/* sha: 485fc810eefb28a7f2f1f95305e49612dbd67f02c1001b7977a3c772fff6d1d0 */
  /*
   * Fields
   */
#if BIND_OdbWritepack_backend_FIELD_READER
  mrb_define_method(mrb, OdbWritepack_class, "backend", mrb_Git_OdbWritepack_get_backend, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_OdbWritepack_backend_FIELD_WRITER
  mrb_define_method(mrb, OdbWritepack_class, "backend=", mrb_Git_OdbWritepack_set_backend, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_OdbWritepack_append_FIELD_READER
  mrb_define_method(mrb, OdbWritepack_class, "append", mrb_Git_OdbWritepack_get_append, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_OdbWritepack_append_FIELD_WRITER
  mrb_define_method(mrb, OdbWritepack_class, "append=", mrb_Git_OdbWritepack_set_append, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_OdbWritepack_commit_FIELD_READER
  mrb_define_method(mrb, OdbWritepack_class, "commit", mrb_Git_OdbWritepack_get_commit, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_OdbWritepack_commit_FIELD_WRITER
  mrb_define_method(mrb, OdbWritepack_class, "commit=", mrb_Git_OdbWritepack_set_commit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_OdbWritepack_free_FIELD_READER
  mrb_define_method(mrb, OdbWritepack_class, "free", mrb_Git_OdbWritepack_get_free, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_OdbWritepack_free_FIELD_WRITER
  mrb_define_method(mrb, OdbWritepack_class, "free=", mrb_Git_OdbWritepack_set_free, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbWritepack::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbWritepack::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbWritepack::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
