/*
 * git_treebuilder
 * Defined in file types.h @ line 129
 */

#include "mruby_Git.h"

#if BIND_Treebuilder_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Treebuilder::initialize */
/* sha: 8db8b71889ba67fe7cede0373478414dec695b0ca5973003bc56a9f2284a3d3a */
#if BIND_Treebuilder_INITIALIZE
mrb_value
mrb_Git_Treebuilder_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_treebuilder* native_object = (git_treebuilder*)calloc(1, sizeof(git_treebuilder));
  mruby_gift_git_treebuilder_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Treebuilder::disown */
/* sha: f0326b3b1eefdf6344bf65c2c1356fce394dc3e8b3f9fabaae0795946d31b3e7 */
mrb_value
mrb_Git_Treebuilder_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Treebuilder.disown only accepts objects of type Git::Treebuilder");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Treebuilder::belongs_to_ruby */
/* sha: 537e0ea136700da6448047acf98b7831bdb1ffcaaeeb85f7313b8168cbba6bff */
mrb_value
mrb_Git_Treebuilder_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Treebuilder.belongs_to_ruby only accepts objects of type Git::Treebuilder");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_Treebuilder_init(mrb_state* mrb) {
/* MRUBY_BINDING: Treebuilder::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Treebuilder::class_definition */
/* sha: b4c77bee4232a83934a1daac6d2cf7e97d3ec803fc0fe6bc80c498d3fe03590b */
  struct RClass* Treebuilder_class = mrb_define_class_under(mrb, Git_module(mrb), "Treebuilder", mrb->object_class);
  MRB_SET_INSTANCE_TT(Treebuilder_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Treebuilder::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Treebuilder::class_method_definitions */
/* sha: e189bb254c20ee81cde95634479020f26dee184e0881f9c9b275c0faaf977450 */
#if BIND_Treebuilder_INITIALIZE
  mrb_define_method(mrb, Treebuilder_class, "initialize", mrb_Git_Treebuilder_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Treebuilder_class, "disown", mrb_Git_Treebuilder_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Treebuilder_class, "belongs_to_ruby?", mrb_Git_Treebuilder_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Treebuilder::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Treebuilder::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Treebuilder::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Treebuilder::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Treebuilder::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
