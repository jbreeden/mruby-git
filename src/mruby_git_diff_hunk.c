/*
 * git_diff_hunk
 * Defined in file diff.h @ line 501
 */

#include "mruby_Git.h"

#if BIND_DiffHunk_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::initialize */
/* sha: 12727d7cc4d3630612bc018a53cd3cbcc9f7479d3cd5fc22314789b4552d8379 */
#if BIND_DiffHunk_INITIALIZE
mrb_value
mrb_Git_DiffHunk_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_diff_hunk* native_object = (git_diff_hunk*)calloc(1, sizeof(git_diff_hunk));
  mruby_gift_git_diff_hunk_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: DiffHunk::old_start_reader */
/* sha: dfa433efa332960bf0096f643208d5ae9af73e2e577d99914b24fb1cf23d6a2c */
#if BIND_DiffHunk_old_start_FIELD_READER
/* get_old_start
 *
 * Return Type: int
 */
mrb_value
mrb_Git_DiffHunk_get_old_start(mrb_state* mrb, mrb_value self) {
  git_diff_hunk * native_self = mruby_unbox_git_diff_hunk(self);

  int native_old_start = native_self->old_start;

  mrb_value old_start = mrb_fixnum_value(native_old_start);

  return old_start;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::old_start_writer */
/* sha: 1a9d76bb5b1c45c2820843125fa89ab141152c194590fbf2061e13051156a7dc */
#if BIND_DiffHunk_old_start_FIELD_WRITER
/* set_old_start
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_DiffHunk_set_old_start(mrb_state* mrb, mrb_value self) {
  git_diff_hunk * native_self = mruby_unbox_git_diff_hunk(self);
  mrb_int native_old_start;

  mrb_get_args(mrb, "i", &native_old_start);

  native_self->old_start = native_old_start;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::old_lines_reader */
/* sha: ab14656090384481088592b1f033643ec2267e0343f10ebd1ee8bb25b00a918b */
#if BIND_DiffHunk_old_lines_FIELD_READER
/* get_old_lines
 *
 * Return Type: int
 */
mrb_value
mrb_Git_DiffHunk_get_old_lines(mrb_state* mrb, mrb_value self) {
  git_diff_hunk * native_self = mruby_unbox_git_diff_hunk(self);

  int native_old_lines = native_self->old_lines;

  mrb_value old_lines = mrb_fixnum_value(native_old_lines);

  return old_lines;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::old_lines_writer */
/* sha: 75a95ad5b5b42d5dc2384276836b0997f2548449eefa3562278d2928361adfe5 */
#if BIND_DiffHunk_old_lines_FIELD_WRITER
/* set_old_lines
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_DiffHunk_set_old_lines(mrb_state* mrb, mrb_value self) {
  git_diff_hunk * native_self = mruby_unbox_git_diff_hunk(self);
  mrb_int native_old_lines;

  mrb_get_args(mrb, "i", &native_old_lines);

  native_self->old_lines = native_old_lines;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::new_start_reader */
/* sha: e63b17ca1d0a62ae273b0e87bf0530821d5a1f69f8cdd0c028a121d992cc199a */
#if BIND_DiffHunk_new_start_FIELD_READER
/* get_new_start
 *
 * Return Type: int
 */
mrb_value
mrb_Git_DiffHunk_get_new_start(mrb_state* mrb, mrb_value self) {
  git_diff_hunk * native_self = mruby_unbox_git_diff_hunk(self);

  int native_new_start = native_self->new_start;

  mrb_value new_start = mrb_fixnum_value(native_new_start);

  return new_start;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::new_start_writer */
/* sha: 53df93e6a69aa3417215878177d2e9da555558457a384a8f534d54ebaecec908 */
#if BIND_DiffHunk_new_start_FIELD_WRITER
/* set_new_start
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_DiffHunk_set_new_start(mrb_state* mrb, mrb_value self) {
  git_diff_hunk * native_self = mruby_unbox_git_diff_hunk(self);
  mrb_int native_new_start;

  mrb_get_args(mrb, "i", &native_new_start);

  native_self->new_start = native_new_start;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::new_lines_reader */
/* sha: fa60e997daa16f09c71d47b8fff030083fa5ef4c437e9207cfcf30c13f6dec72 */
#if BIND_DiffHunk_new_lines_FIELD_READER
/* get_new_lines
 *
 * Return Type: int
 */
mrb_value
mrb_Git_DiffHunk_get_new_lines(mrb_state* mrb, mrb_value self) {
  git_diff_hunk * native_self = mruby_unbox_git_diff_hunk(self);

  int native_new_lines = native_self->new_lines;

  mrb_value new_lines = mrb_fixnum_value(native_new_lines);

  return new_lines;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::new_lines_writer */
/* sha: 3b239fbfae4c8794a3fb611d6722c5182527c96f6b87539d7256451cef4e1e9e */
#if BIND_DiffHunk_new_lines_FIELD_WRITER
/* set_new_lines
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_DiffHunk_set_new_lines(mrb_state* mrb, mrb_value self) {
  git_diff_hunk * native_self = mruby_unbox_git_diff_hunk(self);
  mrb_int native_new_lines;

  mrb_get_args(mrb, "i", &native_new_lines);

  native_self->new_lines = native_new_lines;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::header_len_reader */
/* sha: 79c3722780c87a323f7c190c310b04c5dd5333ff2c0c8053d8cc0c2ce818b63b */
#if BIND_DiffHunk_header_len_FIELD_READER
/* get_header_len
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_DiffHunk_get_header_len(mrb_state* mrb, mrb_value self) {
  git_diff_hunk * native_self = mruby_unbox_git_diff_hunk(self);

  size_t native_header_len = native_self->header_len;

  mrb_value header_len = mrb_fixnum_value(native_header_len);

  return header_len;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::header_len_writer */
/* sha: 1e9d56e03a28907393ae2d3152956f558c2f0e601559d68671d87dac44e50c1d */
#if BIND_DiffHunk_header_len_FIELD_WRITER
/* set_header_len
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_DiffHunk_set_header_len(mrb_state* mrb, mrb_value self) {
  git_diff_hunk * native_self = mruby_unbox_git_diff_hunk(self);
  mrb_int native_header_len;

  mrb_get_args(mrb, "i", &native_header_len);

  native_self->header_len = native_header_len;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::header_reader */
/* sha: 827691535287ba0dac9eea632af178a14a3f797d1b686dff917aa065b69f2909 */
#if BIND_DiffHunk_header_FIELD_READER
/* get_header
 *
 * Return Type: char [128]
 */
mrb_value
mrb_Git_DiffHunk_get_header(mrb_state* mrb, mrb_value self) {
  git_diff_hunk * native_self = mruby_unbox_git_diff_hunk(self);

  char [128] native_header = native_self->header;

  mrb_value header = TODO_mruby_box_char_[128](mrb, native_header);

  return header;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::header_writer */
/* sha: c8311817bd1f1fa3e14f0bd0a7bff2aff947c0f969a99dd9a9c6dc0b69283aff */
#if BIND_DiffHunk_header_FIELD_WRITER
/* set_header
 *
 * Parameters:
 * - value: char [128]
 */
mrb_value
mrb_Git_DiffHunk_set_header(mrb_state* mrb, mrb_value self) {
  git_diff_hunk * native_self = mruby_unbox_git_diff_hunk(self);
  mrb_value header;

  mrb_get_args(mrb, "o", &header);

  /* type checking */
  TODO_type_check_char_[128](header);

  char [128] native_header = TODO_mruby_unbox_char_[128](header);

  native_self->header = native_header;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_DiffHunk_init(mrb_state* mrb) {
/* MRUBY_BINDING: DiffHunk::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::class_definition */
/* sha: c96e6aab1967cab2a2b03349fd4d303a95d929399200b38e3d48138fe1016699 */
  struct RClass* DiffHunk_class = mrb_define_class_under(mrb, Git_module(mrb), "DiffHunk", mrb->object_class);
  MRB_SET_INSTANCE_TT(DiffHunk_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::class_method_definitions */
/* sha: e90becffe5972fae157370bdf79ba6c3c9e74bc206351b54a233b844bb1b4ea5 */
#if BIND_DiffHunk_INITIALIZE
  mrb_define_method(mrb, DiffHunk_class, "initialize", mrb_Git_DiffHunk_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, DiffHunk_class, "disown", mrb_Git_DiffHunk_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, DiffHunk_class, "belongs_to_ruby?", mrb_Git_DiffHunk_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::attr_definitions */
/* sha: 3d4b79c8cce2e2bd9ce1b13276849ce26ce033944804a36d195a74152c421003 */
  /*
   * Fields
   */
#if BIND_DiffHunk_old_start_FIELD_READER
  mrb_define_method(mrb, DiffHunk_class, "old_start", mrb_Git_DiffHunk_get_old_start, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffHunk_old_start_FIELD_WRITER
  mrb_define_method(mrb, DiffHunk_class, "old_start=", mrb_Git_DiffHunk_set_old_start, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffHunk_old_lines_FIELD_READER
  mrb_define_method(mrb, DiffHunk_class, "old_lines", mrb_Git_DiffHunk_get_old_lines, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffHunk_old_lines_FIELD_WRITER
  mrb_define_method(mrb, DiffHunk_class, "old_lines=", mrb_Git_DiffHunk_set_old_lines, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffHunk_new_start_FIELD_READER
  mrb_define_method(mrb, DiffHunk_class, "new_start", mrb_Git_DiffHunk_get_new_start, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffHunk_new_start_FIELD_WRITER
  mrb_define_method(mrb, DiffHunk_class, "new_start=", mrb_Git_DiffHunk_set_new_start, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffHunk_new_lines_FIELD_READER
  mrb_define_method(mrb, DiffHunk_class, "new_lines", mrb_Git_DiffHunk_get_new_lines, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffHunk_new_lines_FIELD_WRITER
  mrb_define_method(mrb, DiffHunk_class, "new_lines=", mrb_Git_DiffHunk_set_new_lines, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffHunk_header_len_FIELD_READER
  mrb_define_method(mrb, DiffHunk_class, "header_len", mrb_Git_DiffHunk_get_header_len, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffHunk_header_len_FIELD_WRITER
  mrb_define_method(mrb, DiffHunk_class, "header_len=", mrb_Git_DiffHunk_set_header_len, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffHunk_header_FIELD_READER
  mrb_define_method(mrb, DiffHunk_class, "header", mrb_Git_DiffHunk_get_header, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffHunk_header_FIELD_WRITER
  mrb_define_method(mrb, DiffHunk_class, "header=", mrb_Git_DiffHunk_set_header, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
