/*
 * git_remote
 * Defined in file types.h @ line 224
 */

#include "mruby_Git.h"

#if BIND_Remote_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Remote::initialize */
/* sha: 123d06800fa8050e52381b151f1f995abf0fc6e6717026ddfd21a7c502baa358 */
#if BIND_Remote_INITIALIZE
mrb_value
mrb_Git_Remote_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_remote* native_object = (git_remote*)calloc(1, sizeof(git_remote));
  mruby_gift_git_remote_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Remote::disown */
/* sha: f6e3dc34cfa5d73af1b9d652d27141773791058b23f579cbaedd3c9e47580f96 */
mrb_value
mrb_Git_Remote_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Remote.disown only accepts objects of type Git::Remote");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Remote::belongs_to_ruby */
/* sha: b7b9665165ce871d9983ecbd796c24b19acd9cace1816c07d73187b81402c5e5 */
mrb_value
mrb_Git_Remote_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Remote.belongs_to_ruby only accepts objects of type Git::Remote");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_Remote_init(mrb_state* mrb) {
/* MRUBY_BINDING: Remote::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Remote::class_definition */
/* sha: 7f0249027553b196b342e9f7ff05e479f337aed03dead5aa72aa35a8f14733e2 */
  struct RClass* Remote_class = mrb_define_class_under(mrb, Git_module(mrb), "Remote", mrb->object_class);
  MRB_SET_INSTANCE_TT(Remote_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Remote::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Remote::class_method_definitions */
/* sha: 74c90152efc28d8c4f4b04e5914fa51bbe66ccd691212500d4e07ab8dbc504c9 */
#if BIND_Remote_INITIALIZE
  mrb_define_method(mrb, Remote_class, "initialize", mrb_Git_Remote_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Remote_class, "disown", mrb_Git_Remote_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Remote_class, "belongs_to_ruby?", mrb_Git_Remote_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Remote::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Remote::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Remote::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Remote::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Remote::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
