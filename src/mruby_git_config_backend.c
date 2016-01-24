/*
 * git_config_backend
 * Defined in file types.h @ line 141
 */

#include "mruby_Git.h"

#if BIND_ConfigBackend_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

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
/* sha: a5fc2d107a1cce76284d35934a249f5fc49d3d37a925fc2314c49f1d09a67d7b */
#if BIND_ConfigBackend_INITIALIZE
  mrb_define_method(mrb, ConfigBackend_class, "initialize", mrb_Git_ConfigBackend_initialize, MRB_ARGS_NONE());
#endif
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
