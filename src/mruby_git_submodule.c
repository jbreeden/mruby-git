/*
 * git_submodule
 * Defined in file types.h @ line 335
 */

#include "mruby_Git.h"

#if BIND_Submodule_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::initialize */
/* sha: 4295f4aa6b17b35d83bb1d109b0de7909201c05a29aec3c5b7e3bc50468ed3ae */
#if BIND_Submodule_INITIALIZE
mrb_value
mrb_Git_Submodule_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_submodule* native_object = (git_submodule*)calloc(1, sizeof(git_submodule));
  mruby_gift_git_submodule_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Submodule_init(mrb_state* mrb) {
/* MRUBY_BINDING: Submodule::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::class_definition */
/* sha: 049f107c3a1731089c145539a9d8ecfbadad847099d5a111d25377b6b613e180 */
  struct RClass* Submodule_class = mrb_define_class_under(mrb, Git_module(mrb), "Submodule", mrb->object_class);
  MRB_SET_INSTANCE_TT(Submodule_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::class_method_definitions */
/* sha: 49b9862696dc940437f14bebb57b5460f105ea16622abd5666b33b56297e9599 */
#if BIND_Submodule_INITIALIZE
  mrb_define_method(mrb, Submodule_class, "initialize", mrb_Git_Submodule_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
