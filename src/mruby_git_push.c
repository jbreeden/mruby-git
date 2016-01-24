/*
 * git_push
 * Defined in file types.h @ line 236
 */

#include "mruby_Git.h"

#if BIND_Push_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

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

/* MRUBY_BINDING: Push::disown */
/* sha: ef90c789787737a53af9f729fa032caa472697ee96fd05c8ad5dafa097587faf */
mrb_value
mrb_Git_Push_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Push.disown only accepts objects of type Git::Push");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Push::belongs_to_ruby */
/* sha: 5dfbad4e00d8819037a6f21f5ce621dca9cedfe8fc3343b8946fa00e77c8062a */
mrb_value
mrb_Git_Push_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Push.belongs_to_ruby only accepts objects of type Git::Push");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
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
/* sha: a42d3b21dacc2bdcacc3bd9a961a4824837361d8fffb92bf7f0c6a1e69f8b76e */
#if BIND_Push_INITIALIZE
  mrb_define_method(mrb, Push_class, "initialize", mrb_Git_Push_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Push_class, "disown", mrb_Git_Push_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Push_class, "belongs_to_ruby?", mrb_Git_Push_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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