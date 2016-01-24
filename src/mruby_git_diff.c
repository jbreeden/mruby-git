/*
 * git_diff
 * Defined in file diff.h @ line 219
 */

#include "mruby_Git.h"

#if BIND_Diff_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Diff::initialize */
/* sha: 2ac9bbed7d5a31218ac04d0f69fcddc9e3661051c0715482484ec764647f24ce */
#if BIND_Diff_INITIALIZE
mrb_value
mrb_Git_Diff_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_diff* native_object = (git_diff*)calloc(1, sizeof(git_diff));
  mruby_gift_git_diff_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Diff::disown */
/* sha: 3fd47fe8f15c9e3d34045a22c981d954b6d206c99c02f901b4481747cc8746d3 */
mrb_value
mrb_Git_Diff_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Diff.disown only accepts objects of type Git::Diff");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Diff::belongs_to_ruby */
/* sha: 0f6e5f68a701b1c146c503d9407bc606d14ae36b5353add1ecdaa51dc98c98a4 */
mrb_value
mrb_Git_Diff_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Diff.belongs_to_ruby only accepts objects of type Git::Diff");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_Diff_init(mrb_state* mrb) {
/* MRUBY_BINDING: Diff::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Diff::class_definition */
/* sha: 38331083f6ff90fe3c45e87658c63632ed6fa16db2ef6933508b23a0b6ecebe4 */
  struct RClass* Diff_class = mrb_define_class_under(mrb, Git_module(mrb), "Diff", mrb->object_class);
  MRB_SET_INSTANCE_TT(Diff_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Diff::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Diff::class_method_definitions */
/* sha: 1beb3c1ab952f210e579bb26b0d38cfe7cfa66af0c892e4769a7d5a2dff8b804 */
#if BIND_Diff_INITIALIZE
  mrb_define_method(mrb, Diff_class, "initialize", mrb_Git_Diff_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Diff_class, "disown", mrb_Git_Diff_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Diff_class, "belongs_to_ruby?", mrb_Git_Diff_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Diff::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Diff::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Diff::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Diff::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Diff::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
