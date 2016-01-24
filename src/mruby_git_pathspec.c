/*
 * git_pathspec
 * Defined in file pathspec.h @ line 20
 */

#include "mruby_Git.h"

#if BIND_Pathspec_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pathspec::initialize */
/* sha: 88e8c7ef0600eca11635264f3f7ca51bf5dff95a484f6e816f2d02bbaea819fb */
#if BIND_Pathspec_INITIALIZE
mrb_value
mrb_Git_Pathspec_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_pathspec* native_object = (git_pathspec*)calloc(1, sizeof(git_pathspec));
  mruby_gift_git_pathspec_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Pathspec_init(mrb_state* mrb) {
/* MRUBY_BINDING: Pathspec::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pathspec::class_definition */
/* sha: 12be033983e9493a6077eff1dee5e4f42ab1c984c24ac8fd0d236e0c7a4d8bb4 */
  struct RClass* Pathspec_class = mrb_define_class_under(mrb, Git_module(mrb), "Pathspec", mrb->object_class);
  MRB_SET_INSTANCE_TT(Pathspec_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pathspec::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pathspec::class_method_definitions */
/* sha: ea5b0b032cbee549ef42487b450830942d83ec94b93392366daf5513af7cb8f2 */
#if BIND_Pathspec_INITIALIZE
  mrb_define_method(mrb, Pathspec_class, "initialize", mrb_Git_Pathspec_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pathspec::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pathspec::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pathspec::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pathspec::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pathspec::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
