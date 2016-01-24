/*
 * LIBSSH2_USERAUTH_KBDINT_PROMPT
 * Defined in file transport.h @ line 135
 */

#include "mruby_Git.h"

#if BIND_LIBSSH2USERAUTHKBDINTPROMPT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

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
/* sha: 03b5098df07968f90078004e9416220bdbdf1bd59f182c572708896033de7b1b */
#if BIND_LIBSSH2USERAUTHKBDINTPROMPT_INITIALIZE
  mrb_define_method(mrb, LIBSSH2USERAUTHKBDINTPROMPT_class, "initialize", mrb_Git_LIBSSH2USERAUTHKBDINTPROMPT_initialize, MRB_ARGS_NONE());
#endif
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
