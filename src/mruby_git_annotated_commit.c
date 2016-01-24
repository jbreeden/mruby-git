/*
 * git_annotated_commit
 * Defined in file types.h @ line 178
 */

#include "mruby_Git.h"

#if BIND_AnnotatedCommit_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AnnotatedCommit::initialize */
/* sha: 1e8e039514458968efb0f993f3956ce55325e0943fbe6b57bdc4f91c88e26a34 */
#if BIND_AnnotatedCommit_INITIALIZE
mrb_value
mrb_Git_AnnotatedCommit_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_annotated_commit* native_object = (git_annotated_commit*)calloc(1, sizeof(git_annotated_commit));
  mruby_gift_git_annotated_commit_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_AnnotatedCommit_init(mrb_state* mrb) {
/* MRUBY_BINDING: AnnotatedCommit::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AnnotatedCommit::class_definition */
/* sha: b69abdeda81c12d5473fdb39baab0d121f7d78666c8737ac6a164e89db684c94 */
  struct RClass* AnnotatedCommit_class = mrb_define_class_under(mrb, Git_module(mrb), "AnnotatedCommit", mrb->object_class);
  MRB_SET_INSTANCE_TT(AnnotatedCommit_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AnnotatedCommit::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AnnotatedCommit::class_method_definitions */
/* sha: e5be649c37f7bf2e110604acfe91e0c8fde5c2f2e4aa051ccebcc9380c9fe9f8 */
#if BIND_AnnotatedCommit_INITIALIZE
  mrb_define_method(mrb, AnnotatedCommit_class, "initialize", mrb_Git_AnnotatedCommit_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AnnotatedCommit::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AnnotatedCommit::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AnnotatedCommit::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AnnotatedCommit::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AnnotatedCommit::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
