/*
 * git_config_iterator
 * Defined in file config.h @ line 78
 */

#include "mruby_Git.h"

#if BIND_ConfigIterator_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

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

/* MRUBY_BINDING: ConfigIterator::disown */
/* sha: 417ca4e5964c6ce04f4951c8f1b47c2920ba04bf62ad909dc6dbd153884c098e */
mrb_value
mrb_Git_ConfigIterator_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::ConfigIterator.disown only accepts objects of type Git::ConfigIterator");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigIterator::belongs_to_ruby */
/* sha: eb05f1adbd726120766ef3ceb67d90405968b2c663f5a43c5b503484278ed59b */
mrb_value
mrb_Git_ConfigIterator_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::ConfigIterator.belongs_to_ruby only accepts objects of type Git::ConfigIterator");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
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
/* sha: 2d575b2b3f23d0f7ee27ab2ed7361e4cd658079daf37f317150fa4f8a4024d95 */
#if BIND_ConfigIterator_INITIALIZE
  mrb_define_method(mrb, ConfigIterator_class, "initialize", mrb_Git_ConfigIterator_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, ConfigIterator_class, "disown", mrb_Git_ConfigIterator_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, ConfigIterator_class, "belongs_to_ruby?", mrb_Git_ConfigIterator_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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
