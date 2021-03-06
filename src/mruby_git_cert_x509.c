/*
 * git_cert_x509
 * Defined in file transport.h @ line 64
 */

#include "mruby_Git.h"

#if BIND_CertX509_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertX509::initialize */
/* sha: 4ca03902d06da892fab100579051c63c38127864553648fc21fc1aefcdfae3ee */
#if BIND_CertX509_INITIALIZE
mrb_value
mrb_Git_CertX509_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_cert_x509* native_object = (git_cert_x509*)calloc(1, sizeof(git_cert_x509));
  mruby_gift_git_cert_x509_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: CertX509::parent_reader */
/* sha: 0bbf935ab2ce4eb8a7d2185a3a831519732148dfb370d45bab9c3bea2d7fa73b */
#if BIND_CertX509_parent_FIELD_READER
/* get_parent
 *
 * Return Type: git_cert
 */
mrb_value
mrb_Git_CertX509_get_parent(mrb_state* mrb, mrb_value self) {
  git_cert_x509 * native_self = mruby_unbox_git_cert_x509(self);

  git_cert native_parent = native_self->parent;

  git_cert* new_parent = TODO_move_git_cert_to_heap(native_parent);
  mrb_value parent = mruby_box_git_cert(mrb, &native_parent);

  return parent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertX509::parent_writer */
/* sha: 8edf2a9030c026d603042095bd8ac2fe3e00c4487099aa8d6914bc5e189e0044 */
#if BIND_CertX509_parent_FIELD_WRITER
/* set_parent
 *
 * Parameters:
 * - value: git_cert
 */
mrb_value
mrb_Git_CertX509_set_parent(mrb_state* mrb, mrb_value self) {
  git_cert_x509 * native_self = mruby_unbox_git_cert_x509(self);
  mrb_value parent;

  mrb_get_args(mrb, "o", &parent);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, parent, Cert_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Cert expected");
    return mrb_nil_value();
  }

  git_cert native_parent = *(mruby_unbox_git_cert(parent));

  native_self->parent = native_parent;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertX509::data_reader */
/* sha: 4141282afbe80ebd2331b8f8ecdeaa74bf705d31b3f938303f9c07ef26ca685a */
#if BIND_CertX509_data_FIELD_READER
/* get_data
 *
 * Return Type: void *
 */
mrb_value
mrb_Git_CertX509_get_data(mrb_state* mrb, mrb_value self) {
  git_cert_x509 * native_self = mruby_unbox_git_cert_x509(self);

  void * native_data = native_self->data;

  mrb_value data = TODO_mruby_box_void_PTR(mrb, native_data);

  return data;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertX509::data_writer */
/* sha: 474295d831e3590d40aa93a745602e6134fdb92a981932fb8c3416d07132a0fb */
#if BIND_CertX509_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_Git_CertX509_set_data(mrb_state* mrb, mrb_value self) {
  git_cert_x509 * native_self = mruby_unbox_git_cert_x509(self);
  mrb_value data;

  mrb_get_args(mrb, "o", &data);

  /* type checking */
  TODO_type_check_void_PTR(data);

  void * native_data = TODO_mruby_unbox_void_PTR(data);

  native_self->data = native_data;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertX509::len_reader */
/* sha: 79199473a95f8ab949fbf7e3180ee8e9905d9cb528e2f97af4919a204f101c8b */
#if BIND_CertX509_len_FIELD_READER
/* get_len
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_CertX509_get_len(mrb_state* mrb, mrb_value self) {
  git_cert_x509 * native_self = mruby_unbox_git_cert_x509(self);

  size_t native_len = native_self->len;

  mrb_value len = mrb_fixnum_value(native_len);

  return len;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertX509::len_writer */
/* sha: 0f56033669393849d5e328b8512e2d187a5720a691ff52c1ecc2f16325259bd2 */
#if BIND_CertX509_len_FIELD_WRITER
/* set_len
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_CertX509_set_len(mrb_state* mrb, mrb_value self) {
  git_cert_x509 * native_self = mruby_unbox_git_cert_x509(self);
  mrb_int native_len;

  mrb_get_args(mrb, "i", &native_len);

  native_self->len = native_len;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_CertX509_init(mrb_state* mrb) {
/* MRUBY_BINDING: CertX509::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertX509::class_definition */
/* sha: 322a2abd60d9f39669e3853dc1031bd05c318b6fb5bab733f742e7bc6d3e23e3 */
  struct RClass* CertX509_class = mrb_define_class_under(mrb, Git_module(mrb), "CertX509", mrb->object_class);
  MRB_SET_INSTANCE_TT(CertX509_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertX509::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertX509::class_method_definitions */
/* sha: 785778fd089fb02cec0d357e5b393a378481818ea3c131d75d92718544cd3b8e */
#if BIND_CertX509_INITIALIZE
  mrb_define_method(mrb, CertX509_class, "initialize", mrb_Git_CertX509_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertX509::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertX509::attr_definitions */
/* sha: 0173b84ab33e47b628fff0b97ad7c51d9c91d9d80655d4f93292e97cf78c6b91 */
  /*
   * Fields
   */
#if BIND_CertX509_parent_FIELD_READER
  mrb_define_method(mrb, CertX509_class, "parent", mrb_Git_CertX509_get_parent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CertX509_parent_FIELD_WRITER
  mrb_define_method(mrb, CertX509_class, "parent=", mrb_Git_CertX509_set_parent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CertX509_data_FIELD_READER
  mrb_define_method(mrb, CertX509_class, "data", mrb_Git_CertX509_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CertX509_data_FIELD_WRITER
  mrb_define_method(mrb, CertX509_class, "data=", mrb_Git_CertX509_set_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CertX509_len_FIELD_READER
  mrb_define_method(mrb, CertX509_class, "len", mrb_Git_CertX509_get_len, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CertX509_len_FIELD_WRITER
  mrb_define_method(mrb, CertX509_class, "len=", mrb_Git_CertX509_set_len, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertX509::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertX509::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertX509::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
