/*
 * git_config_backend
 * Defined in file types.h @ line 141
 */

#include "mruby_Git.h"

#if BIND_ConfigBackend_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: ConfigBackend::initialize */
/* sha: 3a06434fba699ee54162cb9cbb144706df0225849ed92b1f699611d316a81ad5 */
#if BIND_ConfigBackend_INITIALIZE
mrb_value
mrb_Git_ConfigBackend_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_config_backend* native_object = (git_config_backend*)calloc(1, sizeof(git_config_backend));
  mruby_gift_git_config_backend_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigBackend::disown */
/* sha: b9618d114de6131f7d7b4faa64924ba453a0a35f17c9001f1f948522055ef6cb */
mrb_value
mrb_Git_ConfigBackend_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::ConfigBackend.disown only accepts objects of type Git::ConfigBackend");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigBackend::belongs_to_ruby */
/* sha: ea37370e7845378b02e1771cdfe6dcb8997f244c4da89476b6a0e4641c1c7feb */
mrb_value
mrb_Git_ConfigBackend_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::ConfigBackend.belongs_to_ruby only accepts objects of type Git::ConfigBackend");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_ConfigBackend_init(mrb_state* mrb) {
/* MRUBY_BINDING: ConfigBackend::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigBackend::class_definition */
/* sha: 11c460fe18b93412fb0fe985a50bf6ff1fef79e59b7f5c6963a314fbaec97d98 */
  struct RClass* ConfigBackend_class = mrb_define_class_under(mrb, Git_module(mrb), "ConfigBackend", mrb->object_class);
  MRB_SET_INSTANCE_TT(ConfigBackend_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigBackend::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigBackend::class_method_definitions */
/* sha: a029b2c8f26019b3f3dc47afe81792d5bc524ffeb0d40f5f39592b3802d35db5 */
#if BIND_ConfigBackend_INITIALIZE
  mrb_define_method(mrb, ConfigBackend_class, "initialize", mrb_Git_ConfigBackend_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, ConfigBackend_class, "disown", mrb_Git_ConfigBackend_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, ConfigBackend_class, "belongs_to_ruby?", mrb_Git_ConfigBackend_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigBackend::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigBackend::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigBackend::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigBackend::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigBackend::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
