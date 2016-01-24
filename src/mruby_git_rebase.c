/*
 * git_rebase
 * Defined in file types.h @ line 187
 */

#include "mruby_Git.h"

#if BIND_Rebase_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Rebase::initialize */
/* sha: 6706c5d2c21228700f3c4edadebff54baafce18f8b797fd8442ba214c8d2045d */
#if BIND_Rebase_INITIALIZE
mrb_value
mrb_Git_Rebase_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_rebase* native_object = (git_rebase*)calloc(1, sizeof(git_rebase));
  mruby_gift_git_rebase_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::disown */
/* sha: 56438ac6cdb49dded43d5ecb8add675c84edb1ce3b67ee991cad4730353dc59a */
mrb_value
mrb_Git_Rebase_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Rebase.disown only accepts objects of type Git::Rebase");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::belongs_to_ruby */
/* sha: c77ba5bb0a3334b0dfa682b404131cf0ced275585e511997fc7e36d9e5990265 */
mrb_value
mrb_Git_Rebase_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Rebase.belongs_to_ruby only accepts objects of type Git::Rebase");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_Rebase_init(mrb_state* mrb) {
/* MRUBY_BINDING: Rebase::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::class_definition */
/* sha: 04d665c498b44b12c98c086246116a61a2d51c61a7d576c410e23eb564fdbde8 */
  struct RClass* Rebase_class = mrb_define_class_under(mrb, Git_module(mrb), "Rebase", mrb->object_class);
  MRB_SET_INSTANCE_TT(Rebase_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::class_method_definitions */
/* sha: 737a1449d21b3ada05a17abdde194eb5b3184a95f2c7dd38063a4bf90d72499c */
#if BIND_Rebase_INITIALIZE
  mrb_define_method(mrb, Rebase_class, "initialize", mrb_Git_Rebase_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Rebase_class, "disown", mrb_Git_Rebase_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Rebase_class, "belongs_to_ruby?", mrb_Git_Rebase_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
