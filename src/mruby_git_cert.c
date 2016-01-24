/*
 * git_cert
 * Defined in file types.h @ line 314
 */

#include "mruby_Git.h"

#if BIND_Cert_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cert::initialize */
/* sha: 364eb2dfc0d86c0d9c4732b6e1ea4547ed15f615d7af578c03b395a669d02047 */
#if BIND_Cert_INITIALIZE
mrb_value
mrb_Git_Cert_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_cert* native_object = (git_cert*)calloc(1, sizeof(git_cert));
  mruby_gift_git_cert_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Cert::cert_type_reader */
/* sha: 9620c809d0ec1a537776e5c4ae0730c3bcd37d481cccd64ac6d8245e24ad7dbb */
#if BIND_Cert_cert_type_FIELD_READER
/* get_cert_type
 *
 * Return Type: git_cert_t
 */
mrb_value
mrb_Git_Cert_get_cert_type(mrb_state* mrb, mrb_value self) {
  git_cert * native_self = mruby_unbox_git_cert(self);

  git_cert_t native_cert_type = native_self->cert_type;

  mrb_value cert_type = mrb_fixnum_value(native_cert_type);

  return cert_type;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cert::cert_type_writer */
/* sha: 29f4bc992178931d71e5c727fbed848566d9d82a1917ed2f9ccbea0056704886 */
#if BIND_Cert_cert_type_FIELD_WRITER
/* set_cert_type
 *
 * Parameters:
 * - value: git_cert_t
 */
mrb_value
mrb_Git_Cert_set_cert_type(mrb_state* mrb, mrb_value self) {
  git_cert * native_self = mruby_unbox_git_cert(self);
  mrb_int native_cert_type;

  mrb_get_args(mrb, "i", &native_cert_type);

  native_self->cert_type = native_cert_type;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Cert_init(mrb_state* mrb) {
/* MRUBY_BINDING: Cert::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cert::class_definition */
/* sha: 3b4124301d1152805db0c959e5067f310e968960e712cc3fab940be0d1ebf9b6 */
  struct RClass* Cert_class = mrb_define_class_under(mrb, Git_module(mrb), "Cert", mrb->object_class);
  MRB_SET_INSTANCE_TT(Cert_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cert::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cert::class_method_definitions */
/* sha: 5367d6e22e33395b6117461d6974eeed5f95e32ee275bcd9adf79b871657b51f */
#if BIND_Cert_INITIALIZE
  mrb_define_method(mrb, Cert_class, "initialize", mrb_Git_Cert_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Cert_class, "disown", mrb_Git_Cert_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Cert_class, "belongs_to_ruby?", mrb_Git_Cert_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cert::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cert::attr_definitions */
/* sha: fb47bb55e842db8a9709f26ce946a4f4f3cb8f9cdfb855fc430ddf21d25ff7da */
  /*
   * Fields
   */
#if BIND_Cert_cert_type_FIELD_READER
  mrb_define_method(mrb, Cert_class, "cert_type", mrb_Git_Cert_get_cert_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Cert_cert_type_FIELD_WRITER
  mrb_define_method(mrb, Cert_class, "cert_type=", mrb_Git_Cert_set_cert_type, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cert::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cert::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cert::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
