/*
 * git_merge_result
 * Defined in file types.h @ line 181
 */

#include "mruby_Git.h"

#if BIND_MergeResult_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

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

/* MRUBY_BINDING: MergeResult::disown */
/* sha: 6a4a073ac9e258133e13335326e454e83652e382d1108d8d64b090a1060c9261 */
mrb_value
mrb_Git_MergeResult_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::MergeResult.disown only accepts objects of type Git::MergeResult");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeResult::belongs_to_ruby */
/* sha: 8e1f889743455f63228a997ecfc7ff2fd893f3ae445eb3a84fe3bd311aa84758 */
mrb_value
mrb_Git_MergeResult_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::MergeResult.belongs_to_ruby only accepts objects of type Git::MergeResult");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
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
/* sha: 3660922575d16b2d19310bedd9285315c107a962c3a41ef48b311aba07331137 */
#if BIND_MergeResult_INITIALIZE
  mrb_define_method(mrb, MergeResult_class, "initialize", mrb_Git_MergeResult_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, MergeResult_class, "disown", mrb_Git_MergeResult_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, MergeResult_class, "belongs_to_ruby?", mrb_Git_MergeResult_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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
