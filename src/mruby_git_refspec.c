/*
 * git_refspec
 * Defined in file types.h @ line 218
 */

#include "mruby_Git.h"

#if BIND_Refspec_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Refspec::initialize */
/* sha: 0c446ea4dac8ebcd273f69635805ab70976658771992fdef99f9d6e39a2ddf21 */
#if BIND_Refspec_INITIALIZE
mrb_value
mrb_Git_Refspec_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_refspec* native_object = (git_refspec*)calloc(1, sizeof(git_refspec));
  mruby_gift_git_refspec_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::disown */
/* sha: 4f6008ef2f5f16c2f8883347c7fa791d00659824151326996eed8cd2806edb04 */
mrb_value
mrb_Git_Refspec_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Refspec.disown only accepts objects of type Git::Refspec");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::belongs_to_ruby */
/* sha: 477640321bd660a30ea86a69b8ba5e0217710c88d6cc864b1ee15af8ba8fd28b */
mrb_value
mrb_Git_Refspec_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Refspec.belongs_to_ruby only accepts objects of type Git::Refspec");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_Refspec_init(mrb_state* mrb) {
/* MRUBY_BINDING: Refspec::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::class_definition */
/* sha: e4aea1c2a3b2e168fa76386143c3da34dc096107fb3ca5b5a37a4204b45a491a */
  struct RClass* Refspec_class = mrb_define_class_under(mrb, Git_module(mrb), "Refspec", mrb->object_class);
  MRB_SET_INSTANCE_TT(Refspec_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::class_method_definitions */
/* sha: d0dff6748735d5508e9d1838f57b6bd33ebdc7ae7897afae4716a06f2f20602f */
#if BIND_Refspec_INITIALIZE
  mrb_define_method(mrb, Refspec_class, "initialize", mrb_Git_Refspec_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Refspec_class, "disown", mrb_Git_Refspec_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Refspec_class, "belongs_to_ruby?", mrb_Git_Refspec_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
