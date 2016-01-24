/*
 * git_object
 * Defined in file types.h @ line 108
 */

#include "mruby_Git.h"

#if BIND_Object_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Object::initialize */
/* sha: 839e7592f864c76dcfdda5e78490ddcfe841087f25b6956c68d649b9daf01109 */
#if BIND_Object_INITIALIZE
mrb_value
mrb_Git_Object_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_object* native_object = (git_object*)calloc(1, sizeof(git_object));
  mruby_gift_git_object_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Object::disown */
/* sha: 73b71f82ca6790663456aee14d6c7ea78b6fe5f8be3dbb15a340cb635bbca2d7 */
mrb_value
mrb_Git_Object_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Object.disown only accepts objects of type Git::Object");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Object::belongs_to_ruby */
/* sha: 72a7da012448df117192619cce71843522fc0c692b3de3e7c9d0efbccbdc0069 */
mrb_value
mrb_Git_Object_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Object.belongs_to_ruby only accepts objects of type Git::Object");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_Object_init(mrb_state* mrb) {
/* MRUBY_BINDING: Object::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Object::class_definition */
/* sha: 4b0bcd12621731ab21dd175ab4cf149d9b2e686762d73053a818a6c2ab364aa4 */
  struct RClass* Object_class = mrb_define_class_under(mrb, Git_module(mrb), "Object", mrb->object_class);
  MRB_SET_INSTANCE_TT(Object_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Object::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Object::class_method_definitions */
/* sha: c97030941d62a4800159457a28afd62737a89c45a010fb073e04de162449d591 */
#if BIND_Object_INITIALIZE
  mrb_define_method(mrb, Object_class, "initialize", mrb_Git_Object_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Object_class, "disown", mrb_Git_Object_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Object_class, "belongs_to_ruby?", mrb_Git_Object_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Object::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Object::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Object::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Object::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Object::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
