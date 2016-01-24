/*
 * git_merge_file_result
 * Defined in file merge.h @ line 215
 */

#include "mruby_Git.h"

#if BIND_MergeFileResult_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult::initialize */
/* sha: cf50b39ed8926c28148fcd5b9c3d3925a67aa753fc2daddf104e34888283e087 */
#if BIND_MergeFileResult_INITIALIZE
mrb_value
mrb_Git_MergeFileResult_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_merge_file_result* native_object = (git_merge_file_result*)calloc(1, sizeof(git_merge_file_result));
  mruby_gift_git_merge_file_result_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: MergeFileResult::automergeable_reader */
/* sha: 1dd6ea73ff681aeb84a8b0f3918533f89f8c34e00b2b802b95c8166ada7b31d1 */
#if BIND_MergeFileResult_automergeable_FIELD_READER
/* get_automergeable
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_MergeFileResult_get_automergeable(mrb_state* mrb, mrb_value self) {
  git_merge_file_result * native_self = mruby_unbox_git_merge_file_result(self);

  unsigned int native_automergeable = native_self->automergeable;

  mrb_value automergeable = mrb_fixnum_value(native_automergeable);

  return automergeable;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult::automergeable_writer */
/* sha: de54fed9ad38993d5c95e951e61b970b31323a3de610d5501fe925325b922269 */
#if BIND_MergeFileResult_automergeable_FIELD_WRITER
/* set_automergeable
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_MergeFileResult_set_automergeable(mrb_state* mrb, mrb_value self) {
  git_merge_file_result * native_self = mruby_unbox_git_merge_file_result(self);
  mrb_int native_automergeable;

  mrb_get_args(mrb, "i", &native_automergeable);

  native_self->automergeable = native_automergeable;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult::path_reader */
/* sha: 5bcccfb05c4842ebf484ab48c83ac3b6d0dcb2d7dc7155818250f04f0d9b6df4 */
#if BIND_MergeFileResult_path_FIELD_READER
/* get_path
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_MergeFileResult_get_path(mrb_state* mrb, mrb_value self) {
  git_merge_file_result * native_self = mruby_unbox_git_merge_file_result(self);

  const char * native_path = native_self->path;

  mrb_value path = native_path == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_path);

  return path;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult::path_writer */
/* sha: 4ee387dc14781e420ea30ed8e3a3e08c14f2663d36b44f301269ad0c1d98aaf0 */
#if BIND_MergeFileResult_path_FIELD_WRITER
/* set_path
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_MergeFileResult_set_path(mrb_state* mrb, mrb_value self) {
  git_merge_file_result * native_self = mruby_unbox_git_merge_file_result(self);
  char * native_path = NULL;

  mrb_get_args(mrb, "z", &native_path);

  native_self->path = native_path;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult::mode_reader */
/* sha: 8b11ba44b64ad9542731e71baf84544ed9143b46a54e9ab172f64f539b630e61 */
#if BIND_MergeFileResult_mode_FIELD_READER
/* get_mode
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_MergeFileResult_get_mode(mrb_state* mrb, mrb_value self) {
  git_merge_file_result * native_self = mruby_unbox_git_merge_file_result(self);

  unsigned int native_mode = native_self->mode;

  mrb_value mode = mrb_fixnum_value(native_mode);

  return mode;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult::mode_writer */
/* sha: f42f4cc107b8195a86c22bb92ece9516a853f89c2bc0829aeccc86b2671f4946 */
#if BIND_MergeFileResult_mode_FIELD_WRITER
/* set_mode
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_MergeFileResult_set_mode(mrb_state* mrb, mrb_value self) {
  git_merge_file_result * native_self = mruby_unbox_git_merge_file_result(self);
  mrb_int native_mode;

  mrb_get_args(mrb, "i", &native_mode);

  native_self->mode = native_mode;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult::ptr_reader */
/* sha: f85d04686dad90962286075d7769a60512da1930c1b08f9928283c10aeaf350c */
#if BIND_MergeFileResult_ptr_FIELD_READER
/* get_ptr
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_MergeFileResult_get_ptr(mrb_state* mrb, mrb_value self) {
  git_merge_file_result * native_self = mruby_unbox_git_merge_file_result(self);

  const char * native_ptr = native_self->ptr;

  mrb_value ptr = native_ptr == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_ptr);

  return ptr;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult::ptr_writer */
/* sha: 13ac48da40794081150b58ee43c0fde26bb7f710efc86c574b648b42e99d6dc3 */
#if BIND_MergeFileResult_ptr_FIELD_WRITER
/* set_ptr
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_MergeFileResult_set_ptr(mrb_state* mrb, mrb_value self) {
  git_merge_file_result * native_self = mruby_unbox_git_merge_file_result(self);
  char * native_ptr = NULL;

  mrb_get_args(mrb, "z", &native_ptr);

  native_self->ptr = native_ptr;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult::len_reader */
/* sha: c2b4c266cd0ab73e019a92175b671f634c35348234a78bb4c6358a908efbdbef */
#if BIND_MergeFileResult_len_FIELD_READER
/* get_len
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_MergeFileResult_get_len(mrb_state* mrb, mrb_value self) {
  git_merge_file_result * native_self = mruby_unbox_git_merge_file_result(self);

  size_t native_len = native_self->len;

  mrb_value len = mrb_fixnum_value(native_len);

  return len;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult::len_writer */
/* sha: 684d32c355dd9e4f27090d1201b3e3e2295be39b53e5f0ae6d9423bd417461e9 */
#if BIND_MergeFileResult_len_FIELD_WRITER
/* set_len
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_MergeFileResult_set_len(mrb_state* mrb, mrb_value self) {
  git_merge_file_result * native_self = mruby_unbox_git_merge_file_result(self);
  mrb_int native_len;

  mrb_get_args(mrb, "i", &native_len);

  native_self->len = native_len;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_MergeFileResult_init(mrb_state* mrb) {
/* MRUBY_BINDING: MergeFileResult::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult::class_definition */
/* sha: 0ca24ede712fbf1f371daf565f748af008758951d485852666cd1f89d260f0c7 */
  struct RClass* MergeFileResult_class = mrb_define_class_under(mrb, Git_module(mrb), "MergeFileResult", mrb->object_class);
  MRB_SET_INSTANCE_TT(MergeFileResult_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult::class_method_definitions */
/* sha: f287cb34ae60795d72f2ba6dbed25acfc017cb09bc2c742864086e8ab37b0a40 */
#if BIND_MergeFileResult_INITIALIZE
  mrb_define_method(mrb, MergeFileResult_class, "initialize", mrb_Git_MergeFileResult_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, MergeFileResult_class, "disown", mrb_Git_MergeFileResult_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, MergeFileResult_class, "belongs_to_ruby?", mrb_Git_MergeFileResult_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult::attr_definitions */
/* sha: ebab3d4a27290e163f3af7fead92e9caa1a217ec18a2d1dfe7c6682010a794c7 */
  /*
   * Fields
   */
#if BIND_MergeFileResult_automergeable_FIELD_READER
  mrb_define_method(mrb, MergeFileResult_class, "automergeable", mrb_Git_MergeFileResult_get_automergeable, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeFileResult_automergeable_FIELD_WRITER
  mrb_define_method(mrb, MergeFileResult_class, "automergeable=", mrb_Git_MergeFileResult_set_automergeable, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeFileResult_path_FIELD_READER
  mrb_define_method(mrb, MergeFileResult_class, "path", mrb_Git_MergeFileResult_get_path, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeFileResult_path_FIELD_WRITER
  mrb_define_method(mrb, MergeFileResult_class, "path=", mrb_Git_MergeFileResult_set_path, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeFileResult_mode_FIELD_READER
  mrb_define_method(mrb, MergeFileResult_class, "mode", mrb_Git_MergeFileResult_get_mode, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeFileResult_mode_FIELD_WRITER
  mrb_define_method(mrb, MergeFileResult_class, "mode=", mrb_Git_MergeFileResult_set_mode, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeFileResult_ptr_FIELD_READER
  mrb_define_method(mrb, MergeFileResult_class, "ptr", mrb_Git_MergeFileResult_get_ptr, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeFileResult_ptr_FIELD_WRITER
  mrb_define_method(mrb, MergeFileResult_class, "ptr=", mrb_Git_MergeFileResult_set_ptr, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeFileResult_len_FIELD_READER
  mrb_define_method(mrb, MergeFileResult_class, "len", mrb_Git_MergeFileResult_get_len, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeFileResult_len_FIELD_WRITER
  mrb_define_method(mrb, MergeFileResult_class, "len=", mrb_Git_MergeFileResult_set_len, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
