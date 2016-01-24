/*
 * git_blame
 * Defined in file blame.h @ line 132
 */

#include "mruby_Git.h"

#if BIND_Blame_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Blame::initialize */
/* sha: e8acc6591600cb236746173559950e6609b488449f8051c59cf352ce08b139cb */
#if BIND_Blame_INITIALIZE
mrb_value
mrb_Git_Blame_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_blame* native_object = (git_blame*)calloc(1, sizeof(git_blame));
  mruby_gift_git_blame_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blame::disown */
/* sha: f999809119acdb5313cd575e8c78954a9fe2c303fb6b60090a800d754429de63 */
mrb_value
mrb_Git_Blame_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Blame.disown only accepts objects of type Git::Blame");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blame::belongs_to_ruby */
/* sha: b1946114006871454f2075fe4d95d3b9f69aae362ef02e8881c8464dca12d193 */
mrb_value
mrb_Git_Blame_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Blame.belongs_to_ruby only accepts objects of type Git::Blame");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_Blame_init(mrb_state* mrb) {
/* MRUBY_BINDING: Blame::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blame::class_definition */
/* sha: 1d89ff06816c8be58ecffbcc094e5372a0f62dcd3970ee99d6ac4a0cee477224 */
  struct RClass* Blame_class = mrb_define_class_under(mrb, Git_module(mrb), "Blame", mrb->object_class);
  MRB_SET_INSTANCE_TT(Blame_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blame::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blame::class_method_definitions */
/* sha: fb0e9ac92b45f3fb744e024a451f31c8ae0148e999cc6bdd7e5fe4e6783908e2 */
#if BIND_Blame_INITIALIZE
  mrb_define_method(mrb, Blame_class, "initialize", mrb_Git_Blame_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Blame_class, "disown", mrb_Git_Blame_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Blame_class, "belongs_to_ruby?", mrb_Git_Blame_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blame::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blame::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blame::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blame::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blame::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
