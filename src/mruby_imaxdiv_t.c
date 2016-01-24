/*
 * imaxdiv_t
 * Defined in file inttypes.h @ line 51
 */

#include "mruby_Git.h"

#if BIND_ImaxdivT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ImaxdivT::initialize */
/* sha: 965b47ccbb430672401205938f3e372619738d26261e4e4f6cbcbc8e56a2719f */
#if BIND_ImaxdivT_INITIALIZE
mrb_value
mrb_Git_ImaxdivT_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  imaxdiv_t* native_object = (imaxdiv_t*)calloc(1, sizeof(imaxdiv_t));
  mruby_gift_imaxdiv_t_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: ImaxdivT::quot_reader */
/* sha: b4591624abbcd4fe180f7cfff490c68b4172507a0806f5eeed65504fd705c21e */
#if BIND_ImaxdivT_quot_FIELD_READER
/* get_quot
 *
 * Return Type: intmax_t
 */
mrb_value
mrb_Git_ImaxdivT_get_quot(mrb_state* mrb, mrb_value self) {
  imaxdiv_t * native_self = mruby_unbox_imaxdiv_t(self);

  intmax_t native_quot = native_self->quot;

  mrb_value quot = mrb_fixnum_value(native_quot);

  return quot;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ImaxdivT::quot_writer */
/* sha: 4199c16383e60557d9ffeeae96f05195318692085997f2a66f61c0b83f3399b9 */
#if BIND_ImaxdivT_quot_FIELD_WRITER
/* set_quot
 *
 * Parameters:
 * - value: intmax_t
 */
mrb_value
mrb_Git_ImaxdivT_set_quot(mrb_state* mrb, mrb_value self) {
  imaxdiv_t * native_self = mruby_unbox_imaxdiv_t(self);
  mrb_int native_quot;

  mrb_get_args(mrb, "i", &native_quot);

  native_self->quot = native_quot;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ImaxdivT::rem_reader */
/* sha: 35d0b6a7a3e029cc1357f04df17f5915d9d473e31c4ba8e7734d2daa371979a2 */
#if BIND_ImaxdivT_rem_FIELD_READER
/* get_rem
 *
 * Return Type: intmax_t
 */
mrb_value
mrb_Git_ImaxdivT_get_rem(mrb_state* mrb, mrb_value self) {
  imaxdiv_t * native_self = mruby_unbox_imaxdiv_t(self);

  intmax_t native_rem = native_self->rem;

  mrb_value rem = mrb_fixnum_value(native_rem);

  return rem;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ImaxdivT::rem_writer */
/* sha: af6da6fdbdb5dc98aa6a9f46729808de90c5d1b7e39b116c85e84ff410bc7649 */
#if BIND_ImaxdivT_rem_FIELD_WRITER
/* set_rem
 *
 * Parameters:
 * - value: intmax_t
 */
mrb_value
mrb_Git_ImaxdivT_set_rem(mrb_state* mrb, mrb_value self) {
  imaxdiv_t * native_self = mruby_unbox_imaxdiv_t(self);
  mrb_int native_rem;

  mrb_get_args(mrb, "i", &native_rem);

  native_self->rem = native_rem;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_ImaxdivT_init(mrb_state* mrb) {
/* MRUBY_BINDING: ImaxdivT::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ImaxdivT::class_definition */
/* sha: 010c39cdf53a89cc8957456d0ae2200ee2c08ab72d36f3c82e31f8e22ed3c3e0 */
  struct RClass* ImaxdivT_class = mrb_define_class_under(mrb, Git_module(mrb), "ImaxdivT", mrb->object_class);
  MRB_SET_INSTANCE_TT(ImaxdivT_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ImaxdivT::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ImaxdivT::class_method_definitions */
/* sha: 3111abe50c3f966f8bf8ccf294cd682ae2b60e4522fd05a8b49d768e72763b2a */
#if BIND_ImaxdivT_INITIALIZE
  mrb_define_method(mrb, ImaxdivT_class, "initialize", mrb_Git_ImaxdivT_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ImaxdivT::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ImaxdivT::attr_definitions */
/* sha: eb3e41072dc9ce561a854adfb01730df383a7cab47f432b5da8ce048d0bddf66 */
  /*
   * Fields
   */
#if BIND_ImaxdivT_quot_FIELD_READER
  mrb_define_method(mrb, ImaxdivT_class, "quot", mrb_Git_ImaxdivT_get_quot, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_ImaxdivT_quot_FIELD_WRITER
  mrb_define_method(mrb, ImaxdivT_class, "quot=", mrb_Git_ImaxdivT_set_quot, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_ImaxdivT_rem_FIELD_READER
  mrb_define_method(mrb, ImaxdivT_class, "rem", mrb_Git_ImaxdivT_get_rem, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_ImaxdivT_rem_FIELD_WRITER
  mrb_define_method(mrb, ImaxdivT_class, "rem=", mrb_Git_ImaxdivT_set_rem, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ImaxdivT::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ImaxdivT::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ImaxdivT::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
