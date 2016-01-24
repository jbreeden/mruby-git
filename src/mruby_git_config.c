/*
 * git_config
 * Defined in file types.h @ line 138
 */

#include "mruby_Git.h"

#if BIND_Config_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::initialize */
/* sha: 3d5812e9a5e62d00d2761d39d680f4eceafd68952e62d7ce049316b4b0ae8c64 */
#if BIND_Config_INITIALIZE
mrb_value
mrb_Git_Config_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_config* native_object = (git_config*)calloc(1, sizeof(git_config));
  mruby_gift_git_config_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Config_init(mrb_state* mrb) {
/* MRUBY_BINDING: Config::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::class_definition */
/* sha: 448951a812c9643f05fe95e1a9f913fc7f8799ccfb5ba7ea33ca96c53d9dae1b */
  struct RClass* Config_class = mrb_define_class_under(mrb, Git_module(mrb), "Config", mrb->object_class);
  MRB_SET_INSTANCE_TT(Config_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::class_method_definitions */
/* sha: ac75ec58fa79a0e9c3db4e8a66a9dbdbc0e1e8e089de53a353391a4d57d78866 */
#if BIND_Config_INITIALIZE
  mrb_define_method(mrb, Config_class, "initialize", mrb_Git_Config_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
