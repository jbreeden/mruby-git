/*
 * LIBSSH2_USERAUTH_KBDINT_PROMPT
 * Defined in file transport.h @ line 135
 */

#include "mruby_Git.h"

#if BIND_LIBSSH2USERAUTHKBDINTPROMPT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTPROMPT::initialize */
/* sha: f3f75c2c1457775d886640d625ea17d74a9b3a8f711cc6f7e6a7f4c9f07b1756 */
#if BIND_LIBSSH2USERAUTHKBDINTPROMPT_INITIALIZE
mrb_value
mrb_Git_LIBSSH2USERAUTHKBDINTPROMPT_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  LIBSSH2_USERAUTH_KBDINT_PROMPT* native_object = (LIBSSH2_USERAUTH_KBDINT_PROMPT*)calloc(1, sizeof(LIBSSH2_USERAUTH_KBDINT_PROMPT));
  mruby_gift_LIBSSH2_USERAUTH_KBDINT_PROMPT_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTPROMPT::disown */
/* sha: 91167f0bc8990159086d0f56c71946393113a9f468566def52ee78de757179c0 */
mrb_value
mrb_Git_LIBSSH2USERAUTHKBDINTPROMPT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::LIBSSH2USERAUTHKBDINTPROMPT.disown only accepts objects of type Git::LIBSSH2USERAUTHKBDINTPROMPT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTPROMPT::belongs_to_ruby */
/* sha: 2bda52d9d8a9fc7006470c53740458c87361533ce1fe909bcca8f048c01316f6 */
mrb_value
mrb_Git_LIBSSH2USERAUTHKBDINTPROMPT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::LIBSSH2USERAUTHKBDINTPROMPT.belongs_to_ruby only accepts objects of type Git::LIBSSH2USERAUTHKBDINTPROMPT");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_LIBSSH2USERAUTHKBDINTPROMPT_init(mrb_state* mrb) {
/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTPROMPT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTPROMPT::class_definition */
/* sha: 0aedfbceacf12e7c0d19a83be91152342a78bc78416e7789fef976e696677827 */
  struct RClass* LIBSSH2USERAUTHKBDINTPROMPT_class = mrb_define_class_under(mrb, Git_module(mrb), "LIBSSH2USERAUTHKBDINTPROMPT", mrb->object_class);
  MRB_SET_INSTANCE_TT(LIBSSH2USERAUTHKBDINTPROMPT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTPROMPT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTPROMPT::class_method_definitions */
/* sha: 2488eb00e74db9840c3ec08a1b9a81fc1c3e4cee76a6d6d58d603d82bce2c0e4 */
#if BIND_LIBSSH2USERAUTHKBDINTPROMPT_INITIALIZE
  mrb_define_method(mrb, LIBSSH2USERAUTHKBDINTPROMPT_class, "initialize", mrb_Git_LIBSSH2USERAUTHKBDINTPROMPT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, LIBSSH2USERAUTHKBDINTPROMPT_class, "disown", mrb_Git_LIBSSH2USERAUTHKBDINTPROMPT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, LIBSSH2USERAUTHKBDINTPROMPT_class, "belongs_to_ruby?", mrb_Git_LIBSSH2USERAUTHKBDINTPROMPT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTPROMPT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTPROMPT::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTPROMPT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTPROMPT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTPROMPT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
