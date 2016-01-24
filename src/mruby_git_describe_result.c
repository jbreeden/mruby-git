/*
 * git_describe_result
 * Defined in file describe.h @ line 108
 */

#include "mruby_Git.h"

#if BIND_DescribeResult_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

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

/* MRUBY_BINDING: DescribeResult::disown */
/* sha: 07e35225a9f5f002a04ce8a038ae4577139064a63c5cd0fc6b708fd155d26c9d */
mrb_value
mrb_Git_DescribeResult_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::DescribeResult.disown only accepts objects of type Git::DescribeResult");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeResult::belongs_to_ruby */
/* sha: 5ea6ebd041fc0ab4f41556ef7ba83935fb6c506060884b20d89fe6c8914fa24d */
mrb_value
mrb_Git_DescribeResult_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::DescribeResult.belongs_to_ruby only accepts objects of type Git::DescribeResult");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
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
/* sha: 299cfff89f27195f415c69787ceecf73c1d53dd7824605aa376bd52c97ca8b25 */
#if BIND_DescribeResult_INITIALIZE
  mrb_define_method(mrb, DescribeResult_class, "initialize", mrb_Git_DescribeResult_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, DescribeResult_class, "disown", mrb_Git_DescribeResult_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, DescribeResult_class, "belongs_to_ruby?", mrb_Git_DescribeResult_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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
