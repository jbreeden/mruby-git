/*
 * git_diff_binary
 * Defined in file diff.h @ line 484
 */

#include "mruby_Git.h"

#if BIND_DiffBinary_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinary::initialize */
/* sha: 3812d1cd9e9c7d4b9649f1176ec2a244e257c1094f1dbe03824bf2a3c12ebbc3 */
#if BIND_DiffBinary_INITIALIZE
mrb_value
mrb_Git_DiffBinary_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_diff_binary* native_object = (git_diff_binary*)calloc(1, sizeof(git_diff_binary));
  mruby_gift_git_diff_binary_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: DiffBinary::old_file_reader */
/* sha: 439a9553a5bf0bc687ff6309f2c04065c03e5aa7f544b27e4b4867ef43b11c8c */
#if BIND_DiffBinary_old_file_FIELD_READER
/* get_old_file
 *
 * Return Type: git_diff_binary_file
 */
mrb_value
mrb_Git_DiffBinary_get_old_file(mrb_state* mrb, mrb_value self) {
  git_diff_binary * native_self = mruby_unbox_git_diff_binary(self);

  git_diff_binary_file native_old_file = native_self->old_file;

  git_diff_binary_file* new_old_file = TODO_move_git_diff_binary_file_to_heap(native_old_file);
  mrb_value old_file = mruby_box_git_diff_binary_file(mrb, &native_old_file);

  return old_file;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinary::old_file_writer */
/* sha: 63ee00913aafa48d57341f94668a50ae4b7472361989194366bd88efaa1acf24 */
#if BIND_DiffBinary_old_file_FIELD_WRITER
/* set_old_file
 *
 * Parameters:
 * - value: git_diff_binary_file
 */
mrb_value
mrb_Git_DiffBinary_set_old_file(mrb_state* mrb, mrb_value self) {
  git_diff_binary * native_self = mruby_unbox_git_diff_binary(self);
  mrb_value old_file;

  mrb_get_args(mrb, "o", &old_file);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, old_file, DiffBinaryFile_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffBinaryFile expected");
    return mrb_nil_value();
  }

  git_diff_binary_file native_old_file = *(mruby_unbox_git_diff_binary_file(old_file));

  native_self->old_file = native_old_file;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinary::new_file_reader */
/* sha: 25c306554bd5372f77bc9edc83ec47c639c6ba9b9b09d7bf4a2b514ec522475d */
#if BIND_DiffBinary_new_file_FIELD_READER
/* get_new_file
 *
 * Return Type: git_diff_binary_file
 */
mrb_value
mrb_Git_DiffBinary_get_new_file(mrb_state* mrb, mrb_value self) {
  git_diff_binary * native_self = mruby_unbox_git_diff_binary(self);

  git_diff_binary_file native_new_file = native_self->new_file;

  git_diff_binary_file* new_new_file = TODO_move_git_diff_binary_file_to_heap(native_new_file);
  mrb_value new_file = mruby_box_git_diff_binary_file(mrb, &native_new_file);

  return new_file;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinary::new_file_writer */
/* sha: 78d48ceb9d97dbcbfa47778c2c06eb6555ce55cc95dc8c197d86e8d42d3b8b23 */
#if BIND_DiffBinary_new_file_FIELD_WRITER
/* set_new_file
 *
 * Parameters:
 * - value: git_diff_binary_file
 */
mrb_value
mrb_Git_DiffBinary_set_new_file(mrb_state* mrb, mrb_value self) {
  git_diff_binary * native_self = mruby_unbox_git_diff_binary(self);
  mrb_value new_file;

  mrb_get_args(mrb, "o", &new_file);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, new_file, DiffBinaryFile_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffBinaryFile expected");
    return mrb_nil_value();
  }

  git_diff_binary_file native_new_file = *(mruby_unbox_git_diff_binary_file(new_file));

  native_self->new_file = native_new_file;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_DiffBinary_init(mrb_state* mrb) {
/* MRUBY_BINDING: DiffBinary::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinary::class_definition */
/* sha: 98ea7a75499d160b91bcd250110c9eb04c559d94fb8590e6e764ebd0131544bc */
  struct RClass* DiffBinary_class = mrb_define_class_under(mrb, Git_module(mrb), "DiffBinary", mrb->object_class);
  MRB_SET_INSTANCE_TT(DiffBinary_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinary::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinary::class_method_definitions */
/* sha: dba09a59e5cb4aa9b3b0be41b6aef659e0e58f1f1f5b56125faaad7454745c73 */
#if BIND_DiffBinary_INITIALIZE
  mrb_define_method(mrb, DiffBinary_class, "initialize", mrb_Git_DiffBinary_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinary::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinary::attr_definitions */
/* sha: 04b52f6c7b669f7028a928baa10093bda2aa3655a31b32ed648b4f8fdf6aaa1e */
  /*
   * Fields
   */
#if BIND_DiffBinary_old_file_FIELD_READER
  mrb_define_method(mrb, DiffBinary_class, "old_file", mrb_Git_DiffBinary_get_old_file, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffBinary_old_file_FIELD_WRITER
  mrb_define_method(mrb, DiffBinary_class, "old_file=", mrb_Git_DiffBinary_set_old_file, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffBinary_new_file_FIELD_READER
  mrb_define_method(mrb, DiffBinary_class, "new_file", mrb_Git_DiffBinary_get_new_file, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffBinary_new_file_FIELD_WRITER
  mrb_define_method(mrb, DiffBinary_class, "new_file=", mrb_Git_DiffBinary_set_new_file, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinary::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinary::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinary::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
