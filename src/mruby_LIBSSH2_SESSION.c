/*
 * LIBSSH2_SESSION
 * Defined in file transport.h @ line 134
 */

#include "mruby_Git.h"

#if BIND_LIBSSH2SESSION_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: LIBSSH2SESSION::initialize */
/* sha: fe6ccd17ed975a90ae0ca1eeb9f1950989f4a9fafcfabc5500119e86ca126dae */
#if BIND_LIBSSH2SESSION_INITIALIZE
mrb_value
mrb_Git_LIBSSH2SESSION_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  LIBSSH2_SESSION* native_object = (LIBSSH2_SESSION*)calloc(1, sizeof(LIBSSH2_SESSION));
  mruby_gift_LIBSSH2_SESSION_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2SESSION::disown */
/* sha: 45c071c3be6150791669b9e6bfd4b6899faef6e58791351a8b4fd8b3acc124c3 */
mrb_value
mrb_Git_LIBSSH2SESSION_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::LIBSSH2SESSION.disown only accepts objects of type Git::LIBSSH2SESSION");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2SESSION::belongs_to_ruby */
/* sha: d2cc7e5a61d6e6cbc92440214be02c8fcb6ce72f633fb6b62c3123387bcf4a58 */
mrb_value
mrb_Git_LIBSSH2SESSION_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::LIBSSH2SESSION.belongs_to_ruby only accepts objects of type Git::LIBSSH2SESSION");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_LIBSSH2SESSION_init(mrb_state* mrb) {
/* MRUBY_BINDING: LIBSSH2SESSION::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2SESSION::class_definition */
/* sha: 93c3893efc5ceb916855809d1b68c55d0e6e2769bad94a4df4739d4787fd0bd2 */
  struct RClass* LIBSSH2SESSION_class = mrb_define_class_under(mrb, Git_module(mrb), "LIBSSH2SESSION", mrb->object_class);
  MRB_SET_INSTANCE_TT(LIBSSH2SESSION_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2SESSION::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2SESSION::class_method_definitions */
/* sha: 011d9e1d0ddfd2e9208e73aa23c12b102375f155fe918e921fa97ddc02970671 */
#if BIND_LIBSSH2SESSION_INITIALIZE
  mrb_define_method(mrb, LIBSSH2SESSION_class, "initialize", mrb_Git_LIBSSH2SESSION_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, LIBSSH2SESSION_class, "disown", mrb_Git_LIBSSH2SESSION_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, LIBSSH2SESSION_class, "belongs_to_ruby?", mrb_Git_LIBSSH2SESSION_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2SESSION::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2SESSION::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2SESSION::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2SESSION::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2SESSION::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
