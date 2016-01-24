/*
 * git_rebase
 * Defined in file types.h @ line 187
 */

#include "mruby_Git.h"

#if BIND_Rebase_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::initialize */
/* sha: 6706c5d2c21228700f3c4edadebff54baafce18f8b797fd8442ba214c8d2045d */
#if BIND_Rebase_INITIALIZE
mrb_value
mrb_Git_Rebase_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_rebase* native_object = (git_rebase*)calloc(1, sizeof(git_rebase));
  mruby_gift_git_rebase_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Rebase_init(mrb_state* mrb) {
/* MRUBY_BINDING: Rebase::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::class_definition */
/* sha: 04d665c498b44b12c98c086246116a61a2d51c61a7d576c410e23eb564fdbde8 */
  struct RClass* Rebase_class = mrb_define_class_under(mrb, Git_module(mrb), "Rebase", mrb->object_class);
  MRB_SET_INSTANCE_TT(Rebase_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::class_method_definitions */
/* sha: 99f0690348837b68e3207f143a80b4ba8c6075f4f81802e1b6576152e35a9c13 */
#if BIND_Rebase_INITIALIZE
  mrb_define_method(mrb, Rebase_class, "initialize", mrb_Git_Rebase_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
