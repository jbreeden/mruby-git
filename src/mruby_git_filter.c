/*
 * git_filter
 * Defined in file filter.h @ line 61
 */

#include "mruby_Git.h"

#if BIND_Filter_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Filter::initialize */
/* sha: 9718b077ffa19d668860bca36afa51b24757350cdb89faae13d2c505b9985823 */
#if BIND_Filter_INITIALIZE
mrb_value
mrb_Git_Filter_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_filter* native_object = (git_filter*)calloc(1, sizeof(git_filter));
  mruby_gift_git_filter_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Filter_init(mrb_state* mrb) {
/* MRUBY_BINDING: Filter::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Filter::class_definition */
/* sha: 1cac77b7ed1038f48f43c814c797235c05798645b9a0a67b4ed02f1133d7e988 */
  struct RClass* Filter_class = mrb_define_class_under(mrb, Git_module(mrb), "Filter", mrb->object_class);
  MRB_SET_INSTANCE_TT(Filter_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Filter::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Filter::class_method_definitions */
/* sha: 28f009c88c00a2881059ccf3dc1213ff1e1cd6c1c997ba17f7efec87ddc2cf9f */
#if BIND_Filter_INITIALIZE
  mrb_define_method(mrb, Filter_class, "initialize", mrb_Git_Filter_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Filter_class, "disown", mrb_Git_Filter_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Filter_class, "belongs_to_ruby?", mrb_Git_Filter_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Filter::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Filter::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Filter::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Filter::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Filter::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
