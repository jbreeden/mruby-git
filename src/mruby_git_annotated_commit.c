/*
 * git_annotated_commit
 * Defined in file types.h @ line 178
 */

#include "mruby_Git.h"

#if BIND_AnnotatedCommit_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

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

/* MRUBY_BINDING: AnnotatedCommit::disown */
/* sha: 682118a773eeec8eba98d37e22a83db7f50ed71234f05803e691d5a210b14127 */
mrb_value
mrb_Git_AnnotatedCommit_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::AnnotatedCommit.disown only accepts objects of type Git::AnnotatedCommit");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AnnotatedCommit::belongs_to_ruby */
/* sha: f04c4db711d9cdbfcda2139551c9697f43cec53a168799f8bf28e414c4c49112 */
mrb_value
mrb_Git_AnnotatedCommit_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::AnnotatedCommit.belongs_to_ruby only accepts objects of type Git::AnnotatedCommit");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
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
/* sha: e59237bbb6c72036f51e5ebdf8ff26a7df3a7dc57b1db43273283df3e3a9ef56 */
#if BIND_AnnotatedCommit_INITIALIZE
  mrb_define_method(mrb, AnnotatedCommit_class, "initialize", mrb_Git_AnnotatedCommit_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, AnnotatedCommit_class, "disown", mrb_Git_AnnotatedCommit_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, AnnotatedCommit_class, "belongs_to_ruby?", mrb_Git_AnnotatedCommit_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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
