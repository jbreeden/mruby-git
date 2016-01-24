/*
 * git_revwalk
 * Defined in file types.h @ line 111
 */

#include "mruby_Git.h"

#if BIND_Revwalk_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Revwalk::initialize */
/* sha: 296b17b016f59731528d457c86ea9c8c1aa167da68765ccd06768214e2639722 */
#if BIND_Revwalk_INITIALIZE
mrb_value
mrb_Git_Revwalk_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_revwalk* native_object = (git_revwalk*)calloc(1, sizeof(git_revwalk));
  mruby_gift_git_revwalk_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revwalk::disown */
/* sha: 2ffe015ea7795ad7ecbc5a953054b2ee799c50e47c99fb4f01d00b82d43e3008 */
mrb_value
mrb_Git_Revwalk_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Revwalk.disown only accepts objects of type Git::Revwalk");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revwalk::belongs_to_ruby */
/* sha: 9450be3ac02aec817acf594204a5292e5715c60ea106106f5473b6dba5843898 */
mrb_value
mrb_Git_Revwalk_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Revwalk.belongs_to_ruby only accepts objects of type Git::Revwalk");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_Revwalk_init(mrb_state* mrb) {
/* MRUBY_BINDING: Revwalk::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revwalk::class_definition */
/* sha: 23beb487987ff3db93b822f8d89a2b79f6f8a8081f201daa8eee148820fb4fba */
  struct RClass* Revwalk_class = mrb_define_class_under(mrb, Git_module(mrb), "Revwalk", mrb->object_class);
  MRB_SET_INSTANCE_TT(Revwalk_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revwalk::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revwalk::class_method_definitions */
/* sha: bd2201c2a2d3a963043d3dd9ee1d95e8f8287bdfa35ceca7112fd6ba14e23201 */
#if BIND_Revwalk_INITIALIZE
  mrb_define_method(mrb, Revwalk_class, "initialize", mrb_Git_Revwalk_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Revwalk_class, "disown", mrb_Git_Revwalk_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Revwalk_class, "belongs_to_ruby?", mrb_Git_Revwalk_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revwalk::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revwalk::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revwalk::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revwalk::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revwalk::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
