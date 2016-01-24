/*
 * git_reflog
 * Defined in file types.h @ line 147
 */

#include "mruby_Git.h"

#if BIND_Reflog_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::initialize */
/* sha: 927ad604f3eda3e96eff6c20224eab3b2ff31998bc70e34391d2747cc1d3cce9 */
#if BIND_Reflog_INITIALIZE
mrb_value
mrb_Git_Reflog_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_reflog* native_object = (git_reflog*)calloc(1, sizeof(git_reflog));
  mruby_gift_git_reflog_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Reflog_init(mrb_state* mrb) {
/* MRUBY_BINDING: Reflog::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::class_definition */
/* sha: 332ec0391409efed9d4d09a89e1a94ca2c9ac3a1c005c1faf9663e03c157e07f */
  struct RClass* Reflog_class = mrb_define_class_under(mrb, Git_module(mrb), "Reflog", mrb->object_class);
  MRB_SET_INSTANCE_TT(Reflog_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::class_method_definitions */
/* sha: 6cc9106188d2cdd978965a39a2a2d71a17c4a03c823bdb69c1f56370a8b6758a */
#if BIND_Reflog_INITIALIZE
  mrb_define_method(mrb, Reflog_class, "initialize", mrb_Git_Reflog_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
