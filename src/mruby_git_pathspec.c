/*
 * git_pathspec
 * Defined in file pathspec.h @ line 20
 */

#include "mruby_Git.h"

#if BIND_Pathspec_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

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

/* MRUBY_BINDING: Pathspec::disown */
/* sha: 29db6a3e4a8405a7c9ebbf1d7a04d62d46d48cec0e01169aa3d50d89581ca6f8 */
mrb_value
mrb_Git_Pathspec_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Pathspec.disown only accepts objects of type Git::Pathspec");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pathspec::belongs_to_ruby */
/* sha: d00547262ad86538cd93d5298d72ce4751a8654ee7d8494961663816315a1ccd */
mrb_value
mrb_Git_Pathspec_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Pathspec.belongs_to_ruby only accepts objects of type Git::Pathspec");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
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
/* sha: 98c93999d4b2787ebeff8721108925e2be2e1cee60b1d00a7b03ea012bea4f3c */
#if BIND_Pathspec_INITIALIZE
  mrb_define_method(mrb, Pathspec_class, "initialize", mrb_Git_Pathspec_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Pathspec_class, "disown", mrb_Git_Pathspec_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Pathspec_class, "belongs_to_ruby?", mrb_Git_Pathspec_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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
