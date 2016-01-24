/*
 * git_config_iterator
 * Defined in file config.h @ line 78
 */

#include "mruby_Git.h"

#if BIND_ConfigIterator_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigIterator::initialize */
/* sha: 53604f7125930f86fabad34cdb7f5b8d7d699bb01880c4f5c6574017c35c1391 */
#if BIND_ConfigIterator_INITIALIZE
mrb_value
mrb_Git_ConfigIterator_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_config_iterator* native_object = (git_config_iterator*)calloc(1, sizeof(git_config_iterator));
  mruby_gift_git_config_iterator_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_ConfigIterator_init(mrb_state* mrb) {
/* MRUBY_BINDING: ConfigIterator::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigIterator::class_definition */
/* sha: 0540f5921bbc449bbd9582ca74563d71ba209de4cf39c764f8f43e3531b59fa5 */
  struct RClass* ConfigIterator_class = mrb_define_class_under(mrb, Git_module(mrb), "ConfigIterator", mrb->object_class);
  MRB_SET_INSTANCE_TT(ConfigIterator_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigIterator::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigIterator::class_method_definitions */
/* sha: 009b456d7ed69a7ff82576310c80675488fb627bfa7d6495950ff55f06743180 */
#if BIND_ConfigIterator_INITIALIZE
  mrb_define_method(mrb, ConfigIterator_class, "initialize", mrb_Git_ConfigIterator_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigIterator::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigIterator::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigIterator::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigIterator::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigIterator::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
