/*
 * git_strarray
 * Defined in file strarray.h @ line 22
 */

#include "mruby_Git.h"

#if BIND_Strarray_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Strarray::initialize */
/* sha: eaf79b948e1c6711babf15cafd80f718634f18c1e9d027f9c5f7e429d5ce55be */
#if BIND_Strarray_INITIALIZE
mrb_value
mrb_Git_Strarray_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_strarray* native_object = (git_strarray*)calloc(1, sizeof(git_strarray));
  mruby_gift_git_strarray_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Strarray::strings_reader */
/* sha: e599419562d8392f26fe3af9e1320f8fca95ef948235bdf311000381aa03a0be */
#if BIND_Strarray_strings_FIELD_READER
/* get_strings
 *
 * Return Type: char **
 */
mrb_value
mrb_Git_Strarray_get_strings(mrb_state* mrb, mrb_value self) {
  git_strarray * native_self = mruby_unbox_git_strarray(self);

  char ** native_strings = native_self->strings;

  mrb_value strings = TODO_mruby_box_char_PTR_PTR(mrb, native_strings);

  return strings;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Strarray::strings_writer */
/* sha: 4d8e3b1f96ce6c5872c5b8aef413266dd4a2b428058fecc37529c49a7fc0a65c */
#if BIND_Strarray_strings_FIELD_WRITER
/* set_strings
 *
 * Parameters:
 * - value: char **
 */
mrb_value
mrb_Git_Strarray_set_strings(mrb_state* mrb, mrb_value self) {
  git_strarray * native_self = mruby_unbox_git_strarray(self);
  mrb_value strings;

  mrb_get_args(mrb, "o", &strings);

  /* type checking */
  TODO_type_check_char_PTR_PTR(strings);

  char ** native_strings = TODO_mruby_unbox_char_PTR_PTR(strings);

  native_self->strings = native_strings;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Strarray::count_reader */
/* sha: 2889d8682979a18bc4ccd16258a370d65f1f3d9c1154872081b68db3a84577df */
#if BIND_Strarray_count_FIELD_READER
/* get_count
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_Strarray_get_count(mrb_state* mrb, mrb_value self) {
  git_strarray * native_self = mruby_unbox_git_strarray(self);

  size_t native_count = native_self->count;

  mrb_value count = mrb_fixnum_value(native_count);

  return count;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Strarray::count_writer */
/* sha: 3346e7ec3dcccf685b816476f61db4277cf260c9980f852252c46d3a59121761 */
#if BIND_Strarray_count_FIELD_WRITER
/* set_count
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_Strarray_set_count(mrb_state* mrb, mrb_value self) {
  git_strarray * native_self = mruby_unbox_git_strarray(self);
  mrb_int native_count;

  mrb_get_args(mrb, "i", &native_count);

  native_self->count = native_count;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Strarray_init(mrb_state* mrb) {
/* MRUBY_BINDING: Strarray::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Strarray::class_definition */
/* sha: 864e8a04492d5288888bd88cd5792e4542fa0c2b35b9067f1820a9af1a077cb2 */
  struct RClass* Strarray_class = mrb_define_class_under(mrb, Git_module(mrb), "Strarray", mrb->object_class);
  MRB_SET_INSTANCE_TT(Strarray_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Strarray::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Strarray::class_method_definitions */
/* sha: 28451ce4394dfb9c296161d4cfb7fb02dfbb8320a97f251f626088bb8fbef2a4 */
#if BIND_Strarray_INITIALIZE
  mrb_define_method(mrb, Strarray_class, "initialize", mrb_Git_Strarray_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Strarray::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Strarray::attr_definitions */
/* sha: 98e4ea74a0c61441b621ce738c73ddd46127800a491821c49544bfa1e8c91994 */
  /*
   * Fields
   */
#if BIND_Strarray_strings_FIELD_READER
  mrb_define_method(mrb, Strarray_class, "strings", mrb_Git_Strarray_get_strings, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Strarray_strings_FIELD_WRITER
  mrb_define_method(mrb, Strarray_class, "strings=", mrb_Git_Strarray_set_strings, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Strarray_count_FIELD_READER
  mrb_define_method(mrb, Strarray_class, "count", mrb_Git_Strarray_get_count, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Strarray_count_FIELD_WRITER
  mrb_define_method(mrb, Strarray_class, "count=", mrb_Git_Strarray_set_count, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Strarray::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Strarray::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Strarray::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
