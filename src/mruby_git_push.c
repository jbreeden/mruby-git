/*
 * git_push
 * Defined in file types.h @ line 236
 */

#include "mruby_Git.h"

#if BIND_Push_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Push::initialize */
/* sha: 7b4f4c742b0a6fc3e9c74a270026e2e07785d60205dcaf37e8a11429e13a0514 */
#if BIND_Push_INITIALIZE
mrb_value
mrb_Git_Push_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_push* native_object = (git_push*)calloc(1, sizeof(git_push));
  mruby_gift_git_push_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Push_init(mrb_state* mrb) {
/* MRUBY_BINDING: Push::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Push::class_definition */
/* sha: 2a9ffb35369961cb894b9ebe1e5ac8c456629165524f5f1940ec7432dff02afe */
  struct RClass* Push_class = mrb_define_class_under(mrb, Git_module(mrb), "Push", mrb->object_class);
  MRB_SET_INSTANCE_TT(Push_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Push::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Push::class_method_definitions */
/* sha: 261df1cb750bf21a858c9bfd5b68c46e084961e3c9f400e49040f54634cca1a6 */
#if BIND_Push_INITIALIZE
  mrb_define_method(mrb, Push_class, "initialize", mrb_Git_Push_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Push::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Push::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Push::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Push::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Push::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
