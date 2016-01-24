/*
 * imaxdiv_t
 * Defined in file inttypes.h @ line 51
 */

#include "mruby_Git.h"

#if BIND_ImaxdivT_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

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

/* MRUBY_BINDING: ImaxdivT::disown */
/* sha: 9952728801207f775cd23f51a6003772c08ca30e43098d09ef233c4ad47eb5f8 */
mrb_value
mrb_Git_ImaxdivT_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::ImaxdivT.disown only accepts objects of type Git::ImaxdivT");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ImaxdivT::belongs_to_ruby */
/* sha: 9e92cf75516edf5382dda69bd49d922aa6aa0d3a77dc1204c8a69e2e9cac1954 */
mrb_value
mrb_Git_ImaxdivT_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::ImaxdivT.belongs_to_ruby only accepts objects of type Git::ImaxdivT");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
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
/* sha: 95af970f166c0ecd25b540228bc5e70ec1b46a434d19b698326c9de3bc536cfb */
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
/* sha: cb0b9498929a51f7aee52900a6d56de675dc43ff89e123b05a0ec7e86a87589b */
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
/* sha: c8f2b4d3f617efb3c46055860dfe08a8c7e31795ba74341bf57ede32c788b9eb */
#if BIND_ImaxdivT_INITIALIZE
  mrb_define_method(mrb, ImaxdivT_class, "initialize", mrb_Git_ImaxdivT_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, ImaxdivT_class, "disown", mrb_Git_ImaxdivT_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, ImaxdivT_class, "belongs_to_ruby?", mrb_Git_ImaxdivT_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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
