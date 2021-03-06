/*
 * git_commit
 * Defined in file types.h @ line 120
 */

#include "mruby_Git.h"

#if BIND_Commit_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::initialize */
/* sha: a44c84c9a83a140a23c9fea9fcfadfe72223f240caf9ec34be409f037f3f5fc4 */
#if BIND_Commit_INITIALIZE
mrb_value
mrb_Git_Commit_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_commit* native_object = (git_commit*)calloc(1, sizeof(git_commit));
  mruby_gift_git_commit_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Commit_init(mrb_state* mrb) {
/* MRUBY_BINDING: Commit::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::class_definition */
/* sha: 862e126147c7b0da857a2500a0c0605ed2018a5ba5462e1965b470aa4327c0ff */
  struct RClass* Commit_class = mrb_define_class_under(mrb, Git_module(mrb), "Commit", Object_class(mrb));
  MRB_SET_INSTANCE_TT(Commit_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::class_method_definitions */
/* sha: fa831e780551150700094fafbe1611046181160384e17e3407a382ecafeab2c4 */
#if BIND_Commit_INITIALIZE
  mrb_define_method(mrb, Commit_class, "initialize", mrb_Git_Commit_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
