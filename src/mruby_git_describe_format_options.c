/*
 * git_describe_format_options
 * Defined in file describe.h @ line 78
 */

#include "mruby_Git.h"

#if BIND_DescribeFormatOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeFormatOptions::initialize */
/* sha: 621ee19465b44cf2ddfaafb4271ee2ede62f48af69376d70c560fddff5c2c3cb */
#if BIND_DescribeFormatOptions_INITIALIZE
mrb_value
mrb_Git_DescribeFormatOptions_initialize(mrb_state* mrb, mrb_value self) {
  git_describe_format_options* native_object = (git_describe_format_options*)calloc(1, sizeof(git_describe_format_options));
  mruby_gift_git_describe_format_options_data_ptr(self, native_object);
  git_describe_init_format_options(native_object, GIT_DESCRIBE_FORMAT_OPTIONS_VERSION);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: DescribeFormatOptions::version_reader */
/* sha: 923c750d264bb5cc034184713c3a32d05a06ad7b7979fcddcfc84b753540e3dd */
#if BIND_DescribeFormatOptions_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_DescribeFormatOptions_get_version(mrb_state* mrb, mrb_value self) {
  git_describe_format_options * native_self = mruby_unbox_git_describe_format_options(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeFormatOptions::version_writer */
/* sha: 72bec461b8c6c2f5cfa048a5a008cb45ba10e99c48d90bd84a5e9c5ac693ee31 */
#if BIND_DescribeFormatOptions_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_DescribeFormatOptions_set_version(mrb_state* mrb, mrb_value self) {
  git_describe_format_options * native_self = mruby_unbox_git_describe_format_options(self);
  mrb_int native_version;

  mrb_get_args(mrb, "i", &native_version);

  native_self->version = native_version;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeFormatOptions::abbreviated_size_reader */
/* sha: a214b57470bad12ff5e3aae9ee3d7122ab8f9715bc54fae972d21dc7b3e29e9a */
#if BIND_DescribeFormatOptions_abbreviated_size_FIELD_READER
/* get_abbreviated_size
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_DescribeFormatOptions_get_abbreviated_size(mrb_state* mrb, mrb_value self) {
  git_describe_format_options * native_self = mruby_unbox_git_describe_format_options(self);

  unsigned int native_abbreviated_size = native_self->abbreviated_size;

  mrb_value abbreviated_size = mrb_fixnum_value(native_abbreviated_size);

  return abbreviated_size;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeFormatOptions::abbreviated_size_writer */
/* sha: b93025c1233378bacdb558370e5fc58c09575ab390dd3c9e769afcdf3f35dd41 */
#if BIND_DescribeFormatOptions_abbreviated_size_FIELD_WRITER
/* set_abbreviated_size
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_DescribeFormatOptions_set_abbreviated_size(mrb_state* mrb, mrb_value self) {
  git_describe_format_options * native_self = mruby_unbox_git_describe_format_options(self);
  mrb_int native_abbreviated_size;

  mrb_get_args(mrb, "i", &native_abbreviated_size);

  native_self->abbreviated_size = native_abbreviated_size;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeFormatOptions::always_use_long_format_reader */
/* sha: 0437669521f6a6182094fdab67f09371bef6552984115bf60f20cec253edec40 */
#if BIND_DescribeFormatOptions_always_use_long_format_FIELD_READER
/* get_always_use_long_format
 *
 * Return Type: int
 */
mrb_value
mrb_Git_DescribeFormatOptions_get_always_use_long_format(mrb_state* mrb, mrb_value self) {
  git_describe_format_options * native_self = mruby_unbox_git_describe_format_options(self);

  int native_always_use_long_format = native_self->always_use_long_format;

  mrb_value always_use_long_format = mrb_fixnum_value(native_always_use_long_format);

  return always_use_long_format;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeFormatOptions::always_use_long_format_writer */
/* sha: 54446a8e0b2b639757864d96d6ba5643df120fa146f25c1bc2dd693421787b3e */
#if BIND_DescribeFormatOptions_always_use_long_format_FIELD_WRITER
/* set_always_use_long_format
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_DescribeFormatOptions_set_always_use_long_format(mrb_state* mrb, mrb_value self) {
  git_describe_format_options * native_self = mruby_unbox_git_describe_format_options(self);
  mrb_int native_always_use_long_format;

  mrb_get_args(mrb, "i", &native_always_use_long_format);

  native_self->always_use_long_format = native_always_use_long_format;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeFormatOptions::dirty_suffix_reader */
/* sha: f05bbbd566aee2b9e51bc9d33ac27305b8bcc103d3217184e3bc95cd4ced4464 */
#if BIND_DescribeFormatOptions_dirty_suffix_FIELD_READER
/* get_dirty_suffix
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_DescribeFormatOptions_get_dirty_suffix(mrb_state* mrb, mrb_value self) {
  git_describe_format_options * native_self = mruby_unbox_git_describe_format_options(self);

  const char * native_dirty_suffix = native_self->dirty_suffix;

  mrb_value dirty_suffix = native_dirty_suffix == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_dirty_suffix);

  return dirty_suffix;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeFormatOptions::dirty_suffix_writer */
/* sha: 9472a17cd4da4f86b97ee0651d9c2563a7c70830b44256e90797a0bd58992df7 */
#if BIND_DescribeFormatOptions_dirty_suffix_FIELD_WRITER
/* set_dirty_suffix
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_DescribeFormatOptions_set_dirty_suffix(mrb_state* mrb, mrb_value self) {
  git_describe_format_options * native_self = mruby_unbox_git_describe_format_options(self);
  char * native_dirty_suffix = NULL;

  mrb_get_args(mrb, "z", &native_dirty_suffix);

  native_self->dirty_suffix = native_dirty_suffix;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_DescribeFormatOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: DescribeFormatOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeFormatOptions::class_definition */
/* sha: ca706ff9049b10ae055e68249d180b59998e17aec56dd9bec751999e07b431e5 */
  struct RClass* DescribeFormatOptions_class = mrb_define_class_under(mrb, Git_module(mrb), "DescribeFormatOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(DescribeFormatOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeFormatOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeFormatOptions::class_method_definitions */
/* sha: 88fcf66bf89984515b5d5c02bc2cf2d4dc3f2967020ceb69be2d1a4834d8a78f */
#if BIND_DescribeFormatOptions_INITIALIZE
  mrb_define_method(mrb, DescribeFormatOptions_class, "initialize", mrb_Git_DescribeFormatOptions_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, DescribeFormatOptions_class, "disown", mrb_Git_DescribeFormatOptions_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, DescribeFormatOptions_class, "belongs_to_ruby?", mrb_Git_DescribeFormatOptions_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeFormatOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeFormatOptions::attr_definitions */
/* sha: 7b0ca363f56824ab1dc67e3ca92fc5e1b8e5cfe9d3cf7eb43f329bfabb9f7075 */
  /*
   * Fields
   */
#if BIND_DescribeFormatOptions_version_FIELD_READER
  mrb_define_method(mrb, DescribeFormatOptions_class, "version", mrb_Git_DescribeFormatOptions_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DescribeFormatOptions_version_FIELD_WRITER
  mrb_define_method(mrb, DescribeFormatOptions_class, "version=", mrb_Git_DescribeFormatOptions_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DescribeFormatOptions_abbreviated_size_FIELD_READER
  mrb_define_method(mrb, DescribeFormatOptions_class, "abbreviated_size", mrb_Git_DescribeFormatOptions_get_abbreviated_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DescribeFormatOptions_abbreviated_size_FIELD_WRITER
  mrb_define_method(mrb, DescribeFormatOptions_class, "abbreviated_size=", mrb_Git_DescribeFormatOptions_set_abbreviated_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DescribeFormatOptions_always_use_long_format_FIELD_READER
  mrb_define_method(mrb, DescribeFormatOptions_class, "always_use_long_format", mrb_Git_DescribeFormatOptions_get_always_use_long_format, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DescribeFormatOptions_always_use_long_format_FIELD_WRITER
  mrb_define_method(mrb, DescribeFormatOptions_class, "always_use_long_format=", mrb_Git_DescribeFormatOptions_set_always_use_long_format, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DescribeFormatOptions_dirty_suffix_FIELD_READER
  mrb_define_method(mrb, DescribeFormatOptions_class, "dirty_suffix", mrb_Git_DescribeFormatOptions_get_dirty_suffix, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DescribeFormatOptions_dirty_suffix_FIELD_WRITER
  mrb_define_method(mrb, DescribeFormatOptions_class, "dirty_suffix=", mrb_Git_DescribeFormatOptions_set_dirty_suffix, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeFormatOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeFormatOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeFormatOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
