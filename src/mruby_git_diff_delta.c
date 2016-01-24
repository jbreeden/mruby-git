/*
 * git_diff_delta
 * Defined in file diff.h @ line 325
 */

#include "mruby_Git.h"

#if BIND_DiffDelta_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: DiffDelta::initialize */
/* sha: 11b081dcde1a3e7b312bc3e0a03b79caad840f2578d03ac508e581c6e7e92918 */
#if BIND_DiffDelta_INITIALIZE
mrb_value
mrb_Git_DiffDelta_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_diff_delta* native_object = (git_diff_delta*)calloc(1, sizeof(git_diff_delta));
  mruby_gift_git_diff_delta_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::disown */
/* sha: aef1458cce19387ea5de8da778fe37da374a75dfce069cc1a603f79ddcc4ac2c */
mrb_value
mrb_Git_DiffDelta_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::DiffDelta.disown only accepts objects of type Git::DiffDelta");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::belongs_to_ruby */
/* sha: a1652fc6e146dd9d7280b10bb54ebd7b25598e2f3770ed696a4df00671230239 */
mrb_value
mrb_Git_DiffDelta_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::DiffDelta.belongs_to_ruby only accepts objects of type Git::DiffDelta");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: DiffDelta::status_reader */
/* sha: 0ff6907d8791db6aff78118b76cccb8805e407bee8eb65e4d9c9696be4ccbed9 */
#if BIND_DiffDelta_status_FIELD_READER
/* get_status
 *
 * Return Type: git_delta_t
 */
mrb_value
mrb_Git_DiffDelta_get_status(mrb_state* mrb, mrb_value self) {
  git_diff_delta * native_self = mruby_unbox_git_diff_delta(self);

  git_delta_t native_status = native_self->status;

  mrb_value status = mrb_fixnum_value(native_status);

  return status;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::status_writer */
/* sha: 41ebcf4c1e62ba73e83e204971ddcb05b33f77ef6acf0e967e5d4d088afbacd4 */
#if BIND_DiffDelta_status_FIELD_WRITER
/* set_status
 *
 * Parameters:
 * - value: git_delta_t
 */
mrb_value
mrb_Git_DiffDelta_set_status(mrb_state* mrb, mrb_value self) {
  git_diff_delta * native_self = mruby_unbox_git_diff_delta(self);
  mrb_int native_status;

  mrb_get_args(mrb, "i", &native_status);

  native_self->status = native_status;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::flags_reader */
/* sha: 50d2ecca99b0c37ef04a5d5e3a5647d2b9b96ccf35df2375dd5dbce5466f40e2 */
#if BIND_DiffDelta_flags_FIELD_READER
/* get_flags
 *
 * Return Type: uint32_t
 */
mrb_value
mrb_Git_DiffDelta_get_flags(mrb_state* mrb, mrb_value self) {
  git_diff_delta * native_self = mruby_unbox_git_diff_delta(self);

  uint32_t native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::flags_writer */
/* sha: 29b1cd4bf817dccb83b190b56c69cd5e9627bffcf2533c422d17ef768e799b10 */
#if BIND_DiffDelta_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: uint32_t
 */
mrb_value
mrb_Git_DiffDelta_set_flags(mrb_state* mrb, mrb_value self) {
  git_diff_delta * native_self = mruby_unbox_git_diff_delta(self);
  mrb_int native_flags;

  mrb_get_args(mrb, "i", &native_flags);

  native_self->flags = native_flags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::similarity_reader */
/* sha: 2e157f14067bfd82c79e361580778f3bdbd7d05d634bced7f4e0738c5f7f923c */
#if BIND_DiffDelta_similarity_FIELD_READER
/* get_similarity
 *
 * Return Type: uint16_t
 */
mrb_value
mrb_Git_DiffDelta_get_similarity(mrb_state* mrb, mrb_value self) {
  git_diff_delta * native_self = mruby_unbox_git_diff_delta(self);

  uint16_t native_similarity = native_self->similarity;

  mrb_value similarity = mrb_fixnum_value(native_similarity);

  return similarity;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::similarity_writer */
/* sha: 5c7f3bed6f605abcf312b8e756da8ebd13381ea4ecfb9d362ba1d0f118718576 */
#if BIND_DiffDelta_similarity_FIELD_WRITER
/* set_similarity
 *
 * Parameters:
 * - value: uint16_t
 */
mrb_value
mrb_Git_DiffDelta_set_similarity(mrb_state* mrb, mrb_value self) {
  git_diff_delta * native_self = mruby_unbox_git_diff_delta(self);
  mrb_int native_similarity;

  mrb_get_args(mrb, "i", &native_similarity);

  native_self->similarity = native_similarity;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::nfiles_reader */
/* sha: 6ae0c6e1f6cbc20cf9af2b6c63e78dc1bc79369ffb9c3c73d01165d66c029ff9 */
#if BIND_DiffDelta_nfiles_FIELD_READER
/* get_nfiles
 *
 * Return Type: uint16_t
 */
mrb_value
mrb_Git_DiffDelta_get_nfiles(mrb_state* mrb, mrb_value self) {
  git_diff_delta * native_self = mruby_unbox_git_diff_delta(self);

  uint16_t native_nfiles = native_self->nfiles;

  mrb_value nfiles = mrb_fixnum_value(native_nfiles);

  return nfiles;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::nfiles_writer */
/* sha: 7ab15302dcc9edc41c8381076611275c8a15f7440134a1d016b5425c54036d80 */
#if BIND_DiffDelta_nfiles_FIELD_WRITER
/* set_nfiles
 *
 * Parameters:
 * - value: uint16_t
 */
mrb_value
mrb_Git_DiffDelta_set_nfiles(mrb_state* mrb, mrb_value self) {
  git_diff_delta * native_self = mruby_unbox_git_diff_delta(self);
  mrb_int native_nfiles;

  mrb_get_args(mrb, "i", &native_nfiles);

  native_self->nfiles = native_nfiles;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::old_file_reader */
/* sha: 400c8ab4f4f03ee62e36f00d5d9f903001b230c04e256b7c831aed2a47e178f4 */
#if BIND_DiffDelta_old_file_FIELD_READER
/* get_old_file
 *
 * Return Type: git_diff_file
 */
mrb_value
mrb_Git_DiffDelta_get_old_file(mrb_state* mrb, mrb_value self) {
  git_diff_delta * native_self = mruby_unbox_git_diff_delta(self);

  git_diff_file native_old_file = native_self->old_file;

  git_diff_file* new_old_file = TODO_move_git_diff_file_to_heap(native_old_file);
  mrb_value old_file = mruby_box_git_diff_file(mrb, &native_old_file);

  return old_file;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::old_file_writer */
/* sha: 1106ae864e6353df7698e8e77a31b74f2f9d2762fea35fff766e093db629218d */
#if BIND_DiffDelta_old_file_FIELD_WRITER
/* set_old_file
 *
 * Parameters:
 * - value: git_diff_file
 */
mrb_value
mrb_Git_DiffDelta_set_old_file(mrb_state* mrb, mrb_value self) {
  git_diff_delta * native_self = mruby_unbox_git_diff_delta(self);
  mrb_value old_file;

  mrb_get_args(mrb, "o", &old_file);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, old_file, DiffFile_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffFile expected");
    return mrb_nil_value();
  }

  git_diff_file native_old_file = *(mruby_unbox_git_diff_file(old_file));

  native_self->old_file = native_old_file;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::new_file_reader */
/* sha: 3fe0a81a0f84b4116042fe712c8a00a74e77d8f4d5b5314d081eb082486f95bf */
#if BIND_DiffDelta_new_file_FIELD_READER
/* get_new_file
 *
 * Return Type: git_diff_file
 */
mrb_value
mrb_Git_DiffDelta_get_new_file(mrb_state* mrb, mrb_value self) {
  git_diff_delta * native_self = mruby_unbox_git_diff_delta(self);

  git_diff_file native_new_file = native_self->new_file;

  git_diff_file* new_new_file = TODO_move_git_diff_file_to_heap(native_new_file);
  mrb_value new_file = mruby_box_git_diff_file(mrb, &native_new_file);

  return new_file;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::new_file_writer */
/* sha: ced662a997dc3e6967de005c1a9d34b14a46c88686de6ef79eb04d3251aeb5d1 */
#if BIND_DiffDelta_new_file_FIELD_WRITER
/* set_new_file
 *
 * Parameters:
 * - value: git_diff_file
 */
mrb_value
mrb_Git_DiffDelta_set_new_file(mrb_state* mrb, mrb_value self) {
  git_diff_delta * native_self = mruby_unbox_git_diff_delta(self);
  mrb_value new_file;

  mrb_get_args(mrb, "o", &new_file);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, new_file, DiffFile_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffFile expected");
    return mrb_nil_value();
  }

  git_diff_file native_new_file = *(mruby_unbox_git_diff_file(new_file));

  native_self->new_file = native_new_file;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_DiffDelta_init(mrb_state* mrb) {
/* MRUBY_BINDING: DiffDelta::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::class_definition */
/* sha: 1d12f28c1c1ffe70de3a3d7cc591c6a527ae2c9587c73a637b44f5a18c09df1c */
  struct RClass* DiffDelta_class = mrb_define_class_under(mrb, Git_module(mrb), "DiffDelta", mrb->object_class);
  MRB_SET_INSTANCE_TT(DiffDelta_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::class_method_definitions */
/* sha: b5db1572f6fa919fe378051069fe854e896af7cc31e8f5e6677edf811316a609 */
#if BIND_DiffDelta_INITIALIZE
  mrb_define_method(mrb, DiffDelta_class, "initialize", mrb_Git_DiffDelta_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, DiffDelta_class, "disown", mrb_Git_DiffDelta_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, DiffDelta_class, "belongs_to_ruby?", mrb_Git_DiffDelta_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::attr_definitions */
/* sha: 36b74b6f10de3e904dc07b2c2fbd9eb787cb7df4090e320b245f51bc04e9f4be */
  /*
   * Fields
   */
#if BIND_DiffDelta_status_FIELD_READER
  mrb_define_method(mrb, DiffDelta_class, "status", mrb_Git_DiffDelta_get_status, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffDelta_status_FIELD_WRITER
  mrb_define_method(mrb, DiffDelta_class, "status=", mrb_Git_DiffDelta_set_status, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffDelta_flags_FIELD_READER
  mrb_define_method(mrb, DiffDelta_class, "flags", mrb_Git_DiffDelta_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffDelta_flags_FIELD_WRITER
  mrb_define_method(mrb, DiffDelta_class, "flags=", mrb_Git_DiffDelta_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffDelta_similarity_FIELD_READER
  mrb_define_method(mrb, DiffDelta_class, "similarity", mrb_Git_DiffDelta_get_similarity, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffDelta_similarity_FIELD_WRITER
  mrb_define_method(mrb, DiffDelta_class, "similarity=", mrb_Git_DiffDelta_set_similarity, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffDelta_nfiles_FIELD_READER
  mrb_define_method(mrb, DiffDelta_class, "nfiles", mrb_Git_DiffDelta_get_nfiles, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffDelta_nfiles_FIELD_WRITER
  mrb_define_method(mrb, DiffDelta_class, "nfiles=", mrb_Git_DiffDelta_set_nfiles, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffDelta_old_file_FIELD_READER
  mrb_define_method(mrb, DiffDelta_class, "old_file", mrb_Git_DiffDelta_get_old_file, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffDelta_old_file_FIELD_WRITER
  mrb_define_method(mrb, DiffDelta_class, "old_file=", mrb_Git_DiffDelta_set_old_file, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffDelta_new_file_FIELD_READER
  mrb_define_method(mrb, DiffDelta_class, "new_file", mrb_Git_DiffDelta_get_new_file, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffDelta_new_file_FIELD_WRITER
  mrb_define_method(mrb, DiffDelta_class, "new_file=", mrb_Git_DiffDelta_set_new_file, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
