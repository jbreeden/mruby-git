/*
 * git_checkout_perfdata
 * Defined in file checkout.h @ line 216
 */

#include "mruby_Git.h"

#if BIND_CheckoutPerfdata_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutPerfdata::initialize */
/* sha: 4a25d8177fcd234c456fa438a901424eba6096c5fdb339501f05168103175766 */
#if BIND_CheckoutPerfdata_INITIALIZE
mrb_value
mrb_Git_CheckoutPerfdata_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_checkout_perfdata* native_object = (git_checkout_perfdata*)calloc(1, sizeof(git_checkout_perfdata));
  mruby_gift_git_checkout_perfdata_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: CheckoutPerfdata::mkdir_calls_reader */
/* sha: ec0ba3cc77177c8d3602a9a6051d892dc4f59e049bc1c78b05adfb13496a0dd0 */
#if BIND_CheckoutPerfdata_mkdir_calls_FIELD_READER
/* get_mkdir_calls
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_CheckoutPerfdata_get_mkdir_calls(mrb_state* mrb, mrb_value self) {
  git_checkout_perfdata * native_self = mruby_unbox_git_checkout_perfdata(self);

  size_t native_mkdir_calls = native_self->mkdir_calls;

  mrb_value mkdir_calls = mrb_fixnum_value(native_mkdir_calls);

  return mkdir_calls;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutPerfdata::mkdir_calls_writer */
/* sha: 2e22b04351f8b946f2115ca4b7243f3d4a450dd17842a25c78b32710441346ed */
#if BIND_CheckoutPerfdata_mkdir_calls_FIELD_WRITER
/* set_mkdir_calls
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_CheckoutPerfdata_set_mkdir_calls(mrb_state* mrb, mrb_value self) {
  git_checkout_perfdata * native_self = mruby_unbox_git_checkout_perfdata(self);
  mrb_int native_mkdir_calls;

  mrb_get_args(mrb, "i", &native_mkdir_calls);

  native_self->mkdir_calls = native_mkdir_calls;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutPerfdata::stat_calls_reader */
/* sha: 6b520b7e0a719c53993f884846608f24690658898e600232f033871c9236831c */
#if BIND_CheckoutPerfdata_stat_calls_FIELD_READER
/* get_stat_calls
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_CheckoutPerfdata_get_stat_calls(mrb_state* mrb, mrb_value self) {
  git_checkout_perfdata * native_self = mruby_unbox_git_checkout_perfdata(self);

  size_t native_stat_calls = native_self->stat_calls;

  mrb_value stat_calls = mrb_fixnum_value(native_stat_calls);

  return stat_calls;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutPerfdata::stat_calls_writer */
/* sha: 0e3f4d5f608b75fc91e06cc55be7c6363d14e146f089f63699a8ea19792a4c8f */
#if BIND_CheckoutPerfdata_stat_calls_FIELD_WRITER
/* set_stat_calls
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_CheckoutPerfdata_set_stat_calls(mrb_state* mrb, mrb_value self) {
  git_checkout_perfdata * native_self = mruby_unbox_git_checkout_perfdata(self);
  mrb_int native_stat_calls;

  mrb_get_args(mrb, "i", &native_stat_calls);

  native_self->stat_calls = native_stat_calls;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutPerfdata::chmod_calls_reader */
/* sha: 089f766e9ac1fd3085f08d59cfdfdbbeeef803d5afc8a09c1a880ef1a34d2ec8 */
#if BIND_CheckoutPerfdata_chmod_calls_FIELD_READER
/* get_chmod_calls
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_CheckoutPerfdata_get_chmod_calls(mrb_state* mrb, mrb_value self) {
  git_checkout_perfdata * native_self = mruby_unbox_git_checkout_perfdata(self);

  size_t native_chmod_calls = native_self->chmod_calls;

  mrb_value chmod_calls = mrb_fixnum_value(native_chmod_calls);

  return chmod_calls;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutPerfdata::chmod_calls_writer */
/* sha: 10e9bc58a5e9e140b1c165c49c607141dc925356974a15cf7b3bd0a8a2300579 */
#if BIND_CheckoutPerfdata_chmod_calls_FIELD_WRITER
/* set_chmod_calls
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_CheckoutPerfdata_set_chmod_calls(mrb_state* mrb, mrb_value self) {
  git_checkout_perfdata * native_self = mruby_unbox_git_checkout_perfdata(self);
  mrb_int native_chmod_calls;

  mrb_get_args(mrb, "i", &native_chmod_calls);

  native_self->chmod_calls = native_chmod_calls;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_CheckoutPerfdata_init(mrb_state* mrb) {
/* MRUBY_BINDING: CheckoutPerfdata::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutPerfdata::class_definition */
/* sha: 38d66bd7c2433d1bc5e0115f770c99e25e60ea31428f5cbb5fd622c77c734b06 */
  struct RClass* CheckoutPerfdata_class = mrb_define_class_under(mrb, Git_module(mrb), "CheckoutPerfdata", mrb->object_class);
  MRB_SET_INSTANCE_TT(CheckoutPerfdata_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutPerfdata::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutPerfdata::class_method_definitions */
/* sha: 9ad061efe9a545bee43db8063ef818b33ce181a8461751239e3b7a291f3af201 */
#if BIND_CheckoutPerfdata_INITIALIZE
  mrb_define_method(mrb, CheckoutPerfdata_class, "initialize", mrb_Git_CheckoutPerfdata_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, CheckoutPerfdata_class, "disown", mrb_Git_CheckoutPerfdata_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, CheckoutPerfdata_class, "belongs_to_ruby?", mrb_Git_CheckoutPerfdata_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutPerfdata::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutPerfdata::attr_definitions */
/* sha: a4f7d884b23708a47e1aec8a070ac87f02b0b5830de82d8894ef4a90c2ff470e */
  /*
   * Fields
   */
#if BIND_CheckoutPerfdata_mkdir_calls_FIELD_READER
  mrb_define_method(mrb, CheckoutPerfdata_class, "mkdir_calls", mrb_Git_CheckoutPerfdata_get_mkdir_calls, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutPerfdata_mkdir_calls_FIELD_WRITER
  mrb_define_method(mrb, CheckoutPerfdata_class, "mkdir_calls=", mrb_Git_CheckoutPerfdata_set_mkdir_calls, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutPerfdata_stat_calls_FIELD_READER
  mrb_define_method(mrb, CheckoutPerfdata_class, "stat_calls", mrb_Git_CheckoutPerfdata_get_stat_calls, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutPerfdata_stat_calls_FIELD_WRITER
  mrb_define_method(mrb, CheckoutPerfdata_class, "stat_calls=", mrb_Git_CheckoutPerfdata_set_stat_calls, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutPerfdata_chmod_calls_FIELD_READER
  mrb_define_method(mrb, CheckoutPerfdata_class, "chmod_calls", mrb_Git_CheckoutPerfdata_get_chmod_calls, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutPerfdata_chmod_calls_FIELD_WRITER
  mrb_define_method(mrb, CheckoutPerfdata_class, "chmod_calls=", mrb_Git_CheckoutPerfdata_set_chmod_calls, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutPerfdata::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutPerfdata::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutPerfdata::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
