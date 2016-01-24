/*
 * git_diff_line
 * Defined in file diff.h @ line 548
 */

#include "mruby_Git.h"

#if BIND_DiffLine_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: DiffLine::initialize */
/* sha: 7756958bb0c9de9e15a259e9387ebe1cb4aea1b5fccbd94d8bb02a1026030fb8 */
#if BIND_DiffLine_INITIALIZE
mrb_value
mrb_Git_DiffLine_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_diff_line* native_object = (git_diff_line*)calloc(1, sizeof(git_diff_line));
  mruby_gift_git_diff_line_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::disown */
/* sha: cd8855d7f099f1d6ca5754ead6d423cfd5e1b757da8eef302c87246f2a56628a */
mrb_value
mrb_Git_DiffLine_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::DiffLine.disown only accepts objects of type Git::DiffLine");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::belongs_to_ruby */
/* sha: 19969b84a1d188e2bbea3e790665fc679f4c9734a7c774c8a41dc0f8c1773354 */
mrb_value
mrb_Git_DiffLine_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::DiffLine.belongs_to_ruby only accepts objects of type Git::DiffLine");
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

/* MRUBY_BINDING: DiffLine::origin_reader */
/* sha: dfa52d907a640d37d44b4382a4d23e3b697b1ec0b7462f0c964293ee53a19acd */
#if BIND_DiffLine_origin_FIELD_READER
/* get_origin
 *
 * Return Type: char
 */
mrb_value
mrb_Git_DiffLine_get_origin(mrb_state* mrb, mrb_value self) {
  git_diff_line * native_self = mruby_unbox_git_diff_line(self);

  char native_origin = native_self->origin;

  mrb_value origin = mrb_fixnum_value(native_origin);

  return origin;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::origin_writer */
/* sha: f24206c11be8472b95c0820f474884226976cd340bad2f0ebcddd89af44dfcbb */
#if BIND_DiffLine_origin_FIELD_WRITER
/* set_origin
 *
 * Parameters:
 * - value: char
 */
mrb_value
mrb_Git_DiffLine_set_origin(mrb_state* mrb, mrb_value self) {
  git_diff_line * native_self = mruby_unbox_git_diff_line(self);
  mrb_int native_origin;

  mrb_get_args(mrb, "i", &native_origin);

  native_self->origin = native_origin;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::old_lineno_reader */
/* sha: 655c353baac4eb56d8bb878cf37c56ef638b36dbdaf93f7ef7ed9f0981d3ee34 */
#if BIND_DiffLine_old_lineno_FIELD_READER
/* get_old_lineno
 *
 * Return Type: int
 */
mrb_value
mrb_Git_DiffLine_get_old_lineno(mrb_state* mrb, mrb_value self) {
  git_diff_line * native_self = mruby_unbox_git_diff_line(self);

  int native_old_lineno = native_self->old_lineno;

  mrb_value old_lineno = mrb_fixnum_value(native_old_lineno);

  return old_lineno;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::old_lineno_writer */
/* sha: c702e21440ac9953dbaafa2363a02552331ac45d2b2e521c9c6e76e904dd9421 */
#if BIND_DiffLine_old_lineno_FIELD_WRITER
/* set_old_lineno
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_DiffLine_set_old_lineno(mrb_state* mrb, mrb_value self) {
  git_diff_line * native_self = mruby_unbox_git_diff_line(self);
  mrb_int native_old_lineno;

  mrb_get_args(mrb, "i", &native_old_lineno);

  native_self->old_lineno = native_old_lineno;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::new_lineno_reader */
/* sha: bcc2a3fcd92fbc1b01c47283aa9b3dc45ab189487a8687800beba5a90d9ab2b4 */
#if BIND_DiffLine_new_lineno_FIELD_READER
/* get_new_lineno
 *
 * Return Type: int
 */
mrb_value
mrb_Git_DiffLine_get_new_lineno(mrb_state* mrb, mrb_value self) {
  git_diff_line * native_self = mruby_unbox_git_diff_line(self);

  int native_new_lineno = native_self->new_lineno;

  mrb_value new_lineno = mrb_fixnum_value(native_new_lineno);

  return new_lineno;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::new_lineno_writer */
/* sha: cf35cb783e78b04aa61703063a4d29a0bcea0943c2c510d5f23446c70a1fde75 */
#if BIND_DiffLine_new_lineno_FIELD_WRITER
/* set_new_lineno
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_DiffLine_set_new_lineno(mrb_state* mrb, mrb_value self) {
  git_diff_line * native_self = mruby_unbox_git_diff_line(self);
  mrb_int native_new_lineno;

  mrb_get_args(mrb, "i", &native_new_lineno);

  native_self->new_lineno = native_new_lineno;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::num_lines_reader */
/* sha: cb5eeab964a3eb5cbcb7361e10d6cb93b42c145f6f325d34fbab07eaf2d7cfaf */
#if BIND_DiffLine_num_lines_FIELD_READER
/* get_num_lines
 *
 * Return Type: int
 */
mrb_value
mrb_Git_DiffLine_get_num_lines(mrb_state* mrb, mrb_value self) {
  git_diff_line * native_self = mruby_unbox_git_diff_line(self);

  int native_num_lines = native_self->num_lines;

  mrb_value num_lines = mrb_fixnum_value(native_num_lines);

  return num_lines;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::num_lines_writer */
/* sha: f263a20ca96f7d5d28062463fe5965d9cd6ff1cd6d6561b0e5ab5a2d21b7f552 */
#if BIND_DiffLine_num_lines_FIELD_WRITER
/* set_num_lines
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_DiffLine_set_num_lines(mrb_state* mrb, mrb_value self) {
  git_diff_line * native_self = mruby_unbox_git_diff_line(self);
  mrb_int native_num_lines;

  mrb_get_args(mrb, "i", &native_num_lines);

  native_self->num_lines = native_num_lines;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::content_len_reader */
/* sha: 118d6ab5643f7883df939788b9b94cccc236e00609a3748af6dcc8c311618cab */
#if BIND_DiffLine_content_len_FIELD_READER
/* get_content_len
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_DiffLine_get_content_len(mrb_state* mrb, mrb_value self) {
  git_diff_line * native_self = mruby_unbox_git_diff_line(self);

  size_t native_content_len = native_self->content_len;

  mrb_value content_len = mrb_fixnum_value(native_content_len);

  return content_len;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::content_len_writer */
/* sha: c15f03b6d93c9633a08979232e8c6d8e17fcac03e9d603e2645c475597655b75 */
#if BIND_DiffLine_content_len_FIELD_WRITER
/* set_content_len
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_DiffLine_set_content_len(mrb_state* mrb, mrb_value self) {
  git_diff_line * native_self = mruby_unbox_git_diff_line(self);
  mrb_int native_content_len;

  mrb_get_args(mrb, "i", &native_content_len);

  native_self->content_len = native_content_len;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::content_offset_reader */
/* sha: 79fee2b21b2d3c06aab2b14f38488d5c2373c619d74236480cd7f31d374592cf */
#if BIND_DiffLine_content_offset_FIELD_READER
/* get_content_offset
 *
 * Return Type: git_off_t
 */
mrb_value
mrb_Git_DiffLine_get_content_offset(mrb_state* mrb, mrb_value self) {
  git_diff_line * native_self = mruby_unbox_git_diff_line(self);

  git_off_t native_content_offset = native_self->content_offset;

  mrb_value content_offset = mrb_fixnum_value(native_content_offset);

  return content_offset;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::content_offset_writer */
/* sha: 5f9ea1e8301cc60184540030c43f337a663bc46e0ae49d06e3348fceab5d54df */
#if BIND_DiffLine_content_offset_FIELD_WRITER
/* set_content_offset
 *
 * Parameters:
 * - value: git_off_t
 */
mrb_value
mrb_Git_DiffLine_set_content_offset(mrb_state* mrb, mrb_value self) {
  git_diff_line * native_self = mruby_unbox_git_diff_line(self);
  mrb_int native_content_offset;

  mrb_get_args(mrb, "i", &native_content_offset);

  native_self->content_offset = native_content_offset;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::content_reader */
/* sha: 2d996f3f35f78878b3db16eab7260374fc2e2ff46d6d735cdaa5d6e19a49919d */
#if BIND_DiffLine_content_FIELD_READER
/* get_content
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_DiffLine_get_content(mrb_state* mrb, mrb_value self) {
  git_diff_line * native_self = mruby_unbox_git_diff_line(self);

  const char * native_content = native_self->content;

  mrb_value content = native_content == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_content);

  return content;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::content_writer */
/* sha: 618d4b30304ee258f61ab4b04f7fc668d2efb9c31c4c8e9ba15430478d6b67a0 */
#if BIND_DiffLine_content_FIELD_WRITER
/* set_content
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_DiffLine_set_content(mrb_state* mrb, mrb_value self) {
  git_diff_line * native_self = mruby_unbox_git_diff_line(self);
  char * native_content = NULL;

  mrb_get_args(mrb, "z", &native_content);

  native_self->content = native_content;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_DiffLine_init(mrb_state* mrb) {
/* MRUBY_BINDING: DiffLine::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::class_definition */
/* sha: 4cb37e0ad14730288380e9e1866f5d92f7e7f98104d3ad21081bb5c1f0690f02 */
  struct RClass* DiffLine_class = mrb_define_class_under(mrb, Git_module(mrb), "DiffLine", mrb->object_class);
  MRB_SET_INSTANCE_TT(DiffLine_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::class_method_definitions */
/* sha: de72e6599ac3e61e00834f6f5aeea51fb1bba036c1a148e9e7ffa28fe340506b */
#if BIND_DiffLine_INITIALIZE
  mrb_define_method(mrb, DiffLine_class, "initialize", mrb_Git_DiffLine_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, DiffLine_class, "disown", mrb_Git_DiffLine_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, DiffLine_class, "belongs_to_ruby?", mrb_Git_DiffLine_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::attr_definitions */
/* sha: dd23ffe81b341d15a42e4e65a59bd71ff33c7c7a2ea34f605cba90521200250d */
  /*
   * Fields
   */
#if BIND_DiffLine_origin_FIELD_READER
  mrb_define_method(mrb, DiffLine_class, "origin", mrb_Git_DiffLine_get_origin, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffLine_origin_FIELD_WRITER
  mrb_define_method(mrb, DiffLine_class, "origin=", mrb_Git_DiffLine_set_origin, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffLine_old_lineno_FIELD_READER
  mrb_define_method(mrb, DiffLine_class, "old_lineno", mrb_Git_DiffLine_get_old_lineno, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffLine_old_lineno_FIELD_WRITER
  mrb_define_method(mrb, DiffLine_class, "old_lineno=", mrb_Git_DiffLine_set_old_lineno, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffLine_new_lineno_FIELD_READER
  mrb_define_method(mrb, DiffLine_class, "new_lineno", mrb_Git_DiffLine_get_new_lineno, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffLine_new_lineno_FIELD_WRITER
  mrb_define_method(mrb, DiffLine_class, "new_lineno=", mrb_Git_DiffLine_set_new_lineno, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffLine_num_lines_FIELD_READER
  mrb_define_method(mrb, DiffLine_class, "num_lines", mrb_Git_DiffLine_get_num_lines, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffLine_num_lines_FIELD_WRITER
  mrb_define_method(mrb, DiffLine_class, "num_lines=", mrb_Git_DiffLine_set_num_lines, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffLine_content_len_FIELD_READER
  mrb_define_method(mrb, DiffLine_class, "content_len", mrb_Git_DiffLine_get_content_len, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffLine_content_len_FIELD_WRITER
  mrb_define_method(mrb, DiffLine_class, "content_len=", mrb_Git_DiffLine_set_content_len, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffLine_content_offset_FIELD_READER
  mrb_define_method(mrb, DiffLine_class, "content_offset", mrb_Git_DiffLine_get_content_offset, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffLine_content_offset_FIELD_WRITER
  mrb_define_method(mrb, DiffLine_class, "content_offset=", mrb_Git_DiffLine_set_content_offset, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffLine_content_FIELD_READER
  mrb_define_method(mrb, DiffLine_class, "content", mrb_Git_DiffLine_get_content, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffLine_content_FIELD_WRITER
  mrb_define_method(mrb, DiffLine_class, "content=", mrb_Git_DiffLine_set_content, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
