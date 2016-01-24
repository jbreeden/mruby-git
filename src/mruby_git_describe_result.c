/*
 * git_describe_result
 * Defined in file describe.h @ line 108
 */

#include "mruby_Git.h"

#if BIND_DescribeResult_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeResult::initialize */
/* sha: 0d4779d74b41e458df24b698fc5972364366f577839822d2fc9c64c06cf5dda2 */
#if BIND_DescribeResult_INITIALIZE
mrb_value
mrb_Git_DescribeResult_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_describe_result* native_object = (git_describe_result*)calloc(1, sizeof(git_describe_result));
  mruby_gift_git_describe_result_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_DescribeResult_init(mrb_state* mrb) {
/* MRUBY_BINDING: DescribeResult::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeResult::class_definition */
/* sha: 6a7ddcec41ed43fde0b668223ce496550b7c5acccc5193928824732459f448c8 */
  struct RClass* DescribeResult_class = mrb_define_class_under(mrb, Git_module(mrb), "DescribeResult", mrb->object_class);
  MRB_SET_INSTANCE_TT(DescribeResult_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeResult::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeResult::class_method_definitions */
/* sha: f8dba656fc9de317518149d329c8f02c02a81d1d10ca982e7b1f21b4d0c9c755 */
#if BIND_DescribeResult_INITIALIZE
  mrb_define_method(mrb, DescribeResult_class, "initialize", mrb_Git_DescribeResult_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeResult::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeResult::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeResult::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeResult::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeResult::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
