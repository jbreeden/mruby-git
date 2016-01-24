/*
 * git_cred
 * Defined in file transport.h @ line 114
 */

#include "mruby_Git.h"

#if BIND_Cred_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cred::initialize */
/* sha: 3f52b517870d016c657addd4af0218d5efaedbafa9914e4418149f6de901ef50 */
#if BIND_Cred_INITIALIZE
mrb_value
mrb_Git_Cred_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_cred* native_object = (git_cred*)calloc(1, sizeof(git_cred));
  mruby_gift_git_cred_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Cred::credtype_reader */
/* sha: dbd095d36b7f34a167fb23bf8a7d0b05d907d65a8cb55766eba7141f86dd3aab */
#if BIND_Cred_credtype_FIELD_READER
/* get_credtype
 *
 * Return Type: git_credtype_t
 */
mrb_value
mrb_Git_Cred_get_credtype(mrb_state* mrb, mrb_value self) {
  git_cred * native_self = mruby_unbox_git_cred(self);

  git_credtype_t native_credtype = native_self->credtype;

  mrb_value credtype = mrb_fixnum_value(native_credtype);

  return credtype;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cred::credtype_writer */
/* sha: 1ef4f69a0d219e40951bc7e25d71beded0312b95fe789c66514d61948ead4a55 */
#if BIND_Cred_credtype_FIELD_WRITER
/* set_credtype
 *
 * Parameters:
 * - value: git_credtype_t
 */
mrb_value
mrb_Git_Cred_set_credtype(mrb_state* mrb, mrb_value self) {
  git_cred * native_self = mruby_unbox_git_cred(self);
  mrb_int native_credtype;

  mrb_get_args(mrb, "i", &native_credtype);

  native_self->credtype = native_credtype;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cred::free_reader */
/* sha: bf267104c2c5779a71724da439e1874de02f1008671b1d1d8f5a3c798e1c5dd9 */
#if BIND_Cred_free_FIELD_READER
/* get_free
 *
 * Return Type: void (*)(git_cred *)
 */
mrb_value
mrb_Git_Cred_get_free(mrb_state* mrb, mrb_value self) {
  git_cred * native_self = mruby_unbox_git_cred(self);

  void (*)(git_cred *) native_free = native_self->free;

  mrb_value free = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_git_cred_PTR_RPAREN(mrb, native_free);

  return free;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cred::free_writer */
/* sha: 499bf2a547fc99b32ab53d4309fa628669d46d5844a81587b51328384f734a6c */
#if BIND_Cred_free_FIELD_WRITER
/* set_free
 *
 * Parameters:
 * - value: void (*)(git_cred *)
 */
mrb_value
mrb_Git_Cred_set_free(mrb_state* mrb, mrb_value self) {
  git_cred * native_self = mruby_unbox_git_cred(self);
  mrb_value free;

  mrb_get_args(mrb, "o", &free);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_git_cred_PTR_RPAREN(free);

  void (*native_free)(git_cred *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_git_cred_PTR_RPAREN(free);

  native_self->free = native_free;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Cred_init(mrb_state* mrb) {
/* MRUBY_BINDING: Cred::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cred::class_definition */
/* sha: c7f421eb1be355e841c132ef466e21d3f2c9cef5380c83a14cf1fc525a44c17e */
  struct RClass* Cred_class = mrb_define_class_under(mrb, Git_module(mrb), "Cred", mrb->object_class);
  MRB_SET_INSTANCE_TT(Cred_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cred::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cred::class_method_definitions */
/* sha: dd63d8694483732601f7edb0c1917a47863ade60e1d18de8e2d381c4f41d204a */
#if BIND_Cred_INITIALIZE
  mrb_define_method(mrb, Cred_class, "initialize", mrb_Git_Cred_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cred::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cred::attr_definitions */
/* sha: a5b80ce3d88e6cfd3564093d67c0464904f9d14b39dad6a9365a0a3ec7e1ce26 */
  /*
   * Fields
   */
#if BIND_Cred_credtype_FIELD_READER
  mrb_define_method(mrb, Cred_class, "credtype", mrb_Git_Cred_get_credtype, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Cred_credtype_FIELD_WRITER
  mrb_define_method(mrb, Cred_class, "credtype=", mrb_Git_Cred_set_credtype, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Cred_free_FIELD_READER
  mrb_define_method(mrb, Cred_class, "free", mrb_Git_Cred_get_free, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Cred_free_FIELD_WRITER
  mrb_define_method(mrb, Cred_class, "free=", mrb_Git_Cred_set_free, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cred::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cred::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cred::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
