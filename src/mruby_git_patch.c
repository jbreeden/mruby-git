/*
 * git_patch
 * Defined in file patch.h @ line 30
 */

#include "mruby_Git.h"

#if BIND_Patch_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::initialize */
/* sha: e4162407c65b0e5e3420f2ba42c6ef11fdb2bd757e911ee281449018562f6a40 */
#if BIND_Patch_INITIALIZE
mrb_value
mrb_Git_Patch_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_patch* native_object = (git_patch*)calloc(1, sizeof(git_patch));
  mruby_gift_git_patch_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Patch_init(mrb_state* mrb) {
/* MRUBY_BINDING: Patch::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::class_definition */
/* sha: a33f0cac3703b61d98340cc807ba331a471d202fc059706f91da25eaa9cd1902 */
  struct RClass* Patch_class = mrb_define_class_under(mrb, Git_module(mrb), "Patch", mrb->object_class);
  MRB_SET_INSTANCE_TT(Patch_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::class_method_definitions */
/* sha: ef9c44c2bf9e1d98880290b1b22afc97c3972117944a801025f76a321e9bb770 */
#if BIND_Patch_INITIALIZE
  mrb_define_method(mrb, Patch_class, "initialize", mrb_Git_Patch_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
