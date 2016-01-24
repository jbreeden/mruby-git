/*
 * LIBSSH2_USERAUTH_KBDINT_RESPONSE
 * Defined in file transport.h @ line 136
 */

#include "mruby_Git.h"

#if BIND_LIBSSH2USERAUTHKBDINTRESPONSE_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTRESPONSE::initialize */
/* sha: fbbf374a327ea4402aac5216b19939d9f5cdfd5df548a3faeabd2016fc82066d */
#if BIND_LIBSSH2USERAUTHKBDINTRESPONSE_INITIALIZE
mrb_value
mrb_Git_LIBSSH2USERAUTHKBDINTRESPONSE_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  LIBSSH2_USERAUTH_KBDINT_RESPONSE* native_object = (LIBSSH2_USERAUTH_KBDINT_RESPONSE*)calloc(1, sizeof(LIBSSH2_USERAUTH_KBDINT_RESPONSE));
  mruby_gift_LIBSSH2_USERAUTH_KBDINT_RESPONSE_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTRESPONSE::disown */
/* sha: 96f7d44592dc149011442d87181b365e5198c4fc8afb2a167ab29c4c492b9694 */
mrb_value
mrb_Git_LIBSSH2USERAUTHKBDINTRESPONSE_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::LIBSSH2USERAUTHKBDINTRESPONSE.disown only accepts objects of type Git::LIBSSH2USERAUTHKBDINTRESPONSE");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTRESPONSE::belongs_to_ruby */
/* sha: 292cb5edf0ba4ae24ba82fb4afd7923793926f3a0f9a6236537809b7e560d40b */
mrb_value
mrb_Git_LIBSSH2USERAUTHKBDINTRESPONSE_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::LIBSSH2USERAUTHKBDINTRESPONSE.belongs_to_ruby only accepts objects of type Git::LIBSSH2USERAUTHKBDINTRESPONSE");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_LIBSSH2USERAUTHKBDINTRESPONSE_init(mrb_state* mrb) {
/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTRESPONSE::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTRESPONSE::class_definition */
/* sha: b5e7997b010ab1bcdff6d1374ce75193acf10ab5611455f4ef8c010c99e6dc0a */
  struct RClass* LIBSSH2USERAUTHKBDINTRESPONSE_class = mrb_define_class_under(mrb, Git_module(mrb), "LIBSSH2USERAUTHKBDINTRESPONSE", mrb->object_class);
  MRB_SET_INSTANCE_TT(LIBSSH2USERAUTHKBDINTRESPONSE_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTRESPONSE::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTRESPONSE::class_method_definitions */
/* sha: 3dfce0120e4147f0bfcf04ba4b9acca1c0e83b63928915d83bf349aff6d055c8 */
#if BIND_LIBSSH2USERAUTHKBDINTRESPONSE_INITIALIZE
  mrb_define_method(mrb, LIBSSH2USERAUTHKBDINTRESPONSE_class, "initialize", mrb_Git_LIBSSH2USERAUTHKBDINTRESPONSE_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, LIBSSH2USERAUTHKBDINTRESPONSE_class, "disown", mrb_Git_LIBSSH2USERAUTHKBDINTRESPONSE_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, LIBSSH2USERAUTHKBDINTRESPONSE_class, "belongs_to_ruby?", mrb_Git_LIBSSH2USERAUTHKBDINTRESPONSE_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTRESPONSE::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTRESPONSE::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTRESPONSE::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTRESPONSE::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTRESPONSE::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
