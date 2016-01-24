/*
 * git_submodule
 * Defined in file types.h @ line 335
 */

#include "mruby_Git.h"

#if BIND_Submodule_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Submodule::initialize */
/* sha: 4295f4aa6b17b35d83bb1d109b0de7909201c05a29aec3c5b7e3bc50468ed3ae */
#if BIND_Submodule_INITIALIZE
mrb_value
mrb_Git_Submodule_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_submodule* native_object = (git_submodule*)calloc(1, sizeof(git_submodule));
  mruby_gift_git_submodule_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::disown */
/* sha: 485b3730d4fe2fd694b9ab07202d656c79277034c58e661c999d83fa5a7ce351 */
mrb_value
mrb_Git_Submodule_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Submodule.disown only accepts objects of type Git::Submodule");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::belongs_to_ruby */
/* sha: 9038546f355e517935d76fd79d1a784b7831371047f3083f35a75a997b97ae64 */
mrb_value
mrb_Git_Submodule_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Submodule.belongs_to_ruby only accepts objects of type Git::Submodule");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_Submodule_init(mrb_state* mrb) {
/* MRUBY_BINDING: Submodule::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::class_definition */
/* sha: 049f107c3a1731089c145539a9d8ecfbadad847099d5a111d25377b6b613e180 */
  struct RClass* Submodule_class = mrb_define_class_under(mrb, Git_module(mrb), "Submodule", mrb->object_class);
  MRB_SET_INSTANCE_TT(Submodule_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::class_method_definitions */
/* sha: edae68b7b024871518eef68f7e4849762b211e46f273a03560ae5034d402d379 */
#if BIND_Submodule_INITIALIZE
  mrb_define_method(mrb, Submodule_class, "initialize", mrb_Git_Submodule_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Submodule_class, "disown", mrb_Git_Submodule_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Submodule_class, "belongs_to_ruby?", mrb_Git_Submodule_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
