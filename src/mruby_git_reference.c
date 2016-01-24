/*
 * git_reference
 * Defined in file types.h @ line 169
 */

#include "mruby_Git.h"

#if BIND_Reference_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Reference::initialize */
/* sha: b5feaab0a60dd67d80745cdfb8605d6a0e717218b7cb13629efb36402bbca4d4 */
#if BIND_Reference_INITIALIZE
mrb_value
mrb_Git_Reference_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_reference* native_object = (git_reference*)calloc(1, sizeof(git_reference));
  mruby_gift_git_reference_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reference::disown */
/* sha: e9e82fc983899889fcf0664e8aa9ed74eb31ea391e6217e16ae2f53abc1878c0 */
mrb_value
mrb_Git_Reference_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Reference.disown only accepts objects of type Git::Reference");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reference::belongs_to_ruby */
/* sha: cea1dd907027393e95e9fd24193cb5636e1b5d33dccb92f6ed8aaf111ceb3682 */
mrb_value
mrb_Git_Reference_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Reference.belongs_to_ruby only accepts objects of type Git::Reference");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_Reference_init(mrb_state* mrb) {
/* MRUBY_BINDING: Reference::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reference::class_definition */
/* sha: d2860a16201ace57e3b8b4ddab57c45f5c71a5da8db8e7e74ade971a39a05fe9 */
  struct RClass* Reference_class = mrb_define_class_under(mrb, Git_module(mrb), "Reference", mrb->object_class);
  MRB_SET_INSTANCE_TT(Reference_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reference::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reference::class_method_definitions */
/* sha: a10141268a13351b3e2df5e397e3827b0b886990538f0eb2247d112f29c67e98 */
#if BIND_Reference_INITIALIZE
  mrb_define_method(mrb, Reference_class, "initialize", mrb_Git_Reference_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Reference_class, "disown", mrb_Git_Reference_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Reference_class, "belongs_to_ruby?", mrb_Git_Reference_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reference::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reference::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reference::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reference::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reference::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
