/*
 * git_merge_result
 * Defined in file types.h @ line 181
 */

#include "mruby_Git.h"

#if BIND_MergeResult_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeResult::initialize */
/* sha: 8a49d58d750b47d56151c4844b5bc05cbe3109055304c7c6585104434a2f93f5 */
#if BIND_MergeResult_INITIALIZE
mrb_value
mrb_Git_MergeResult_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_merge_result* native_object = (git_merge_result*)calloc(1, sizeof(git_merge_result));
  mruby_gift_git_merge_result_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_MergeResult_init(mrb_state* mrb) {
/* MRUBY_BINDING: MergeResult::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeResult::class_definition */
/* sha: ad05c784eabc14f2d2ba441901226a6a96175c853230741f844b78e1f47dee17 */
  struct RClass* MergeResult_class = mrb_define_class_under(mrb, Git_module(mrb), "MergeResult", mrb->object_class);
  MRB_SET_INSTANCE_TT(MergeResult_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeResult::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeResult::class_method_definitions */
/* sha: 07dae6b309ad57f1c50fa0358b08533fa7d1bc1e45c9a6a1734fe64ed8e54dd6 */
#if BIND_MergeResult_INITIALIZE
  mrb_define_method(mrb, MergeResult_class, "initialize", mrb_Git_MergeResult_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeResult::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeResult::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeResult::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeResult::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeResult::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
