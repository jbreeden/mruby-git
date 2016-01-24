/*
 * git_odb_object
 * Defined in file types.h @ line 87
 */

#include "mruby_Git.h"

#if BIND_OdbObject_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: OdbObject::initialize */
/* sha: 229087e9cfaf85bd62da0369875d12bb80a0c5459cd5bd16038100972a149a7f */
#if BIND_OdbObject_INITIALIZE
mrb_value
mrb_Git_OdbObject_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_odb_object* native_object = (git_odb_object*)calloc(1, sizeof(git_odb_object));
  mruby_gift_git_odb_object_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::disown */
/* sha: 9b8797d07df9835e2525d2619544827dda31178835ff802a5fbb90a62aa7b2ad */
mrb_value
mrb_Git_OdbObject_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::OdbObject.disown only accepts objects of type Git::OdbObject");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::belongs_to_ruby */
/* sha: c3ba95e091e73ac58350107260221e4e899107531f0c81ff7b85bdc998fce90c */
mrb_value
mrb_Git_OdbObject_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::OdbObject.belongs_to_ruby only accepts objects of type Git::OdbObject");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_OdbObject_init(mrb_state* mrb) {
/* MRUBY_BINDING: OdbObject::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::class_definition */
/* sha: 80ec89673e55c5eb3988369b39e16aa13aed8f2f731592f9368ae593da43b723 */
  struct RClass* OdbObject_class = mrb_define_class_under(mrb, Git_module(mrb), "OdbObject", mrb->object_class);
  MRB_SET_INSTANCE_TT(OdbObject_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::class_method_definitions */
/* sha: 77b645b7c1fa39b240aaa99c9dce748a545de4e27e386a78e6814e4a241116d5 */
#if BIND_OdbObject_INITIALIZE
  mrb_define_method(mrb, OdbObject_class, "initialize", mrb_Git_OdbObject_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, OdbObject_class, "disown", mrb_Git_OdbObject_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, OdbObject_class, "belongs_to_ruby?", mrb_Git_OdbObject_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
