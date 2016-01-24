/*
 * git_diff_file
 * Defined in file diff.h @ line 281
 */

#include "mruby_Git.h"

#if BIND_DiffFile_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFile::initialize */
/* sha: bba5ef32de5406edd1b26c3614a78c35ba7a96d2adeabc5b927a7a5e58a16987 */
#if BIND_DiffFile_INITIALIZE
mrb_value
mrb_Git_DiffFile_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_diff_file* native_object = (git_diff_file*)calloc(1, sizeof(git_diff_file));
  mruby_gift_git_diff_file_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: DiffFile::id_reader */
/* sha: ea71b80de75b89604a6ebb78899c9804d36b406fecfc9fe3fad04c55a6ad79f1 */
#if BIND_DiffFile_id_FIELD_READER
/* get_id
 *
 * Return Type: git_oid
 */
mrb_value
mrb_Git_DiffFile_get_id(mrb_state* mrb, mrb_value self) {
  git_diff_file * native_self = mruby_unbox_git_diff_file(self);

  git_oid native_id = native_self->id;

  git_oid* new_id = TODO_move_git_oid_to_heap(native_id);
  mrb_value id = mruby_box_git_oid(mrb, &native_id);

  return id;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFile::id_writer */
/* sha: 1245ce3bca4c90339813eab4c5478c222a9e2f6b81e2a16a37bb46dc0f01b2b7 */
#if BIND_DiffFile_id_FIELD_WRITER
/* set_id
 *
 * Parameters:
 * - value: git_oid
 */
mrb_value
mrb_Git_DiffFile_set_id(mrb_state* mrb, mrb_value self) {
  git_diff_file * native_self = mruby_unbox_git_diff_file(self);
  mrb_value id;

  mrb_get_args(mrb, "o", &id);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  git_oid native_id = *(mruby_unbox_git_oid(id));

  native_self->id = native_id;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFile::path_reader */
/* sha: 320cc555c85eb47d9f51f62ae14358a9200590883693d34955804bf0c5ed58cd */
#if BIND_DiffFile_path_FIELD_READER
/* get_path
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_DiffFile_get_path(mrb_state* mrb, mrb_value self) {
  git_diff_file * native_self = mruby_unbox_git_diff_file(self);

  const char * native_path = native_self->path;

  mrb_value path = native_path == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_path);

  return path;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFile::path_writer */
/* sha: 69f120a179051fb1dac9d3bb4db2d6a1b0faa68a4df84d9c5795b73f19408966 */
#if BIND_DiffFile_path_FIELD_WRITER
/* set_path
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_DiffFile_set_path(mrb_state* mrb, mrb_value self) {
  git_diff_file * native_self = mruby_unbox_git_diff_file(self);
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

/* MRUBY_BINDING: DiffFile::size_reader */
/* sha: 42ea411bacd1fbe2b8432122f44ab47beaec2609cd32ec1515124a3d1c18888f */
#if BIND_DiffFile_size_FIELD_READER
/* get_size
 *
 * Return Type: git_off_t
 */
mrb_value
mrb_Git_DiffFile_get_size(mrb_state* mrb, mrb_value self) {
  git_diff_file * native_self = mruby_unbox_git_diff_file(self);

  git_off_t native_size = native_self->size;

  mrb_value size = mrb_fixnum_value(native_size);

  return size;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFile::size_writer */
/* sha: e1f57aef0617befcf96754f37d14bc61d3ac90251a18e19bfd1e2905173e7893 */
#if BIND_DiffFile_size_FIELD_WRITER
/* set_size
 *
 * Parameters:
 * - value: git_off_t
 */
mrb_value
mrb_Git_DiffFile_set_size(mrb_state* mrb, mrb_value self) {
  git_diff_file * native_self = mruby_unbox_git_diff_file(self);
  mrb_int native_size;

  mrb_get_args(mrb, "i", &native_size);

  native_self->size = native_size;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFile::flags_reader */
/* sha: a74826af5bb3ac6f34847991c3228ac26aa40e5492959d671bd3918eb278bc34 */
#if BIND_DiffFile_flags_FIELD_READER
/* get_flags
 *
 * Return Type: uint32_t
 */
mrb_value
mrb_Git_DiffFile_get_flags(mrb_state* mrb, mrb_value self) {
  git_diff_file * native_self = mruby_unbox_git_diff_file(self);

  uint32_t native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFile::flags_writer */
/* sha: 9c85d0ec998d51cd4602282fd53daa88156669c5079756df1ffb54947db74be8 */
#if BIND_DiffFile_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: uint32_t
 */
mrb_value
mrb_Git_DiffFile_set_flags(mrb_state* mrb, mrb_value self) {
  git_diff_file * native_self = mruby_unbox_git_diff_file(self);
  mrb_int native_flags;

  mrb_get_args(mrb, "i", &native_flags);

  native_self->flags = native_flags;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFile::mode_reader */
/* sha: bc0697fc32f5e1a840468371e89557b0329b456623c551372b7161f306c4b726 */
#if BIND_DiffFile_mode_FIELD_READER
/* get_mode
 *
 * Return Type: uint16_t
 */
mrb_value
mrb_Git_DiffFile_get_mode(mrb_state* mrb, mrb_value self) {
  git_diff_file * native_self = mruby_unbox_git_diff_file(self);

  uint16_t native_mode = native_self->mode;

  mrb_value mode = mrb_fixnum_value(native_mode);

  return mode;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFile::mode_writer */
/* sha: c3544add8bca6f1a41953e47bdff0962ba7465a920783f8ad3a71edb3540d2c4 */
#if BIND_DiffFile_mode_FIELD_WRITER
/* set_mode
 *
 * Parameters:
 * - value: uint16_t
 */
mrb_value
mrb_Git_DiffFile_set_mode(mrb_state* mrb, mrb_value self) {
  git_diff_file * native_self = mruby_unbox_git_diff_file(self);
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


void mrb_Git_DiffFile_init(mrb_state* mrb) {
/* MRUBY_BINDING: DiffFile::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFile::class_definition */
/* sha: 3866271b678c3431520651ff59aba5c9334cc49df2e5ec94e241e5eca2eae37b */
  struct RClass* DiffFile_class = mrb_define_class_under(mrb, Git_module(mrb), "DiffFile", mrb->object_class);
  MRB_SET_INSTANCE_TT(DiffFile_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFile::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFile::class_method_definitions */
/* sha: c10612dc46b9e1cb04f6cd55f5b22730e547065e1c0cd59d9cf4c04ab13a6de8 */
#if BIND_DiffFile_INITIALIZE
  mrb_define_method(mrb, DiffFile_class, "initialize", mrb_Git_DiffFile_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, DiffFile_class, "disown", mrb_Git_DiffFile_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, DiffFile_class, "belongs_to_ruby?", mrb_Git_DiffFile_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFile::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFile::attr_definitions */
/* sha: 6cc8ea24cf88a56fa77f1f2aaa7db5302fb3061d2c582824b31c1027218ff7c3 */
  /*
   * Fields
   */
#if BIND_DiffFile_id_FIELD_READER
  mrb_define_method(mrb, DiffFile_class, "id", mrb_Git_DiffFile_get_id, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFile_id_FIELD_WRITER
  mrb_define_method(mrb, DiffFile_class, "id=", mrb_Git_DiffFile_set_id, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffFile_path_FIELD_READER
  mrb_define_method(mrb, DiffFile_class, "path", mrb_Git_DiffFile_get_path, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFile_path_FIELD_WRITER
  mrb_define_method(mrb, DiffFile_class, "path=", mrb_Git_DiffFile_set_path, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffFile_size_FIELD_READER
  mrb_define_method(mrb, DiffFile_class, "size", mrb_Git_DiffFile_get_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFile_size_FIELD_WRITER
  mrb_define_method(mrb, DiffFile_class, "size=", mrb_Git_DiffFile_set_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffFile_flags_FIELD_READER
  mrb_define_method(mrb, DiffFile_class, "flags", mrb_Git_DiffFile_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFile_flags_FIELD_WRITER
  mrb_define_method(mrb, DiffFile_class, "flags=", mrb_Git_DiffFile_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffFile_mode_FIELD_READER
  mrb_define_method(mrb, DiffFile_class, "mode", mrb_Git_DiffFile_get_mode, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFile_mode_FIELD_WRITER
  mrb_define_method(mrb, DiffFile_class, "mode=", mrb_Git_DiffFile_set_mode, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFile::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFile::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFile::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
