/*
 * git_cert_hostkey
 * Defined in file transport.h @ line 39
 */

#include "mruby_Git.h"

#if BIND_CertHostkey_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: CertHostkey::initialize */
/* sha: f6e2cab2b76cfdc4ea599f6f216bb07b89181639ad13ac847d8d2d71c35afaf9 */
#if BIND_CertHostkey_INITIALIZE
mrb_value
mrb_Git_CertHostkey_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_cert_hostkey* native_object = (git_cert_hostkey*)calloc(1, sizeof(git_cert_hostkey));
  mruby_gift_git_cert_hostkey_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertHostkey::disown */
/* sha: 3c8971aa782c77f921e8aedd3a7d291bd0deb118736b4096796b3867692ec5ff */
mrb_value
mrb_Git_CertHostkey_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::CertHostkey.disown only accepts objects of type Git::CertHostkey");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertHostkey::belongs_to_ruby */
/* sha: b8b8ec670eb8029f5e066e3855e80bad6da3c7886e26ba5973b48c5245d9b06a */
mrb_value
mrb_Git_CertHostkey_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::CertHostkey.belongs_to_ruby only accepts objects of type Git::CertHostkey");
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

/* MRUBY_BINDING: CertHostkey::parent_reader */
/* sha: ef0fe9de18bb7c58bb3a9f4af75186917605d58603974fcc31c117c584a3916f */
#if BIND_CertHostkey_parent_FIELD_READER
/* get_parent
 *
 * Return Type: git_cert
 */
mrb_value
mrb_Git_CertHostkey_get_parent(mrb_state* mrb, mrb_value self) {
  git_cert_hostkey * native_self = mruby_unbox_git_cert_hostkey(self);

  git_cert native_parent = native_self->parent;

  git_cert* new_parent = TODO_move_git_cert_to_heap(native_parent);
  mrb_value parent = mruby_box_git_cert(mrb, &native_parent);

  return parent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertHostkey::parent_writer */
/* sha: a279040d1815378537c80e11c93d8ca8128de44b77594dc6be10035aa6c678b1 */
#if BIND_CertHostkey_parent_FIELD_WRITER
/* set_parent
 *
 * Parameters:
 * - value: git_cert
 */
mrb_value
mrb_Git_CertHostkey_set_parent(mrb_state* mrb, mrb_value self) {
  git_cert_hostkey * native_self = mruby_unbox_git_cert_hostkey(self);
  mrb_value parent;

  mrb_get_args(mrb, "o", &parent);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, parent, Cert_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Cert expected");
    return mrb_nil_value();
  }

  git_cert native_parent = *(mruby_unbox_git_cert(parent));

  native_self->parent = native_parent;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertHostkey::type_reader */
/* sha: 2de6ad2e32a86a4d9c305fa12a420c39c6b874b134ad797198b6a345cb73f955 */
#if BIND_CertHostkey_type_FIELD_READER
/* get_type
 *
 * Return Type: git_cert_ssh_t
 */
mrb_value
mrb_Git_CertHostkey_get_type(mrb_state* mrb, mrb_value self) {
  git_cert_hostkey * native_self = mruby_unbox_git_cert_hostkey(self);

  git_cert_ssh_t native_type = native_self->type;

  mrb_value type = mrb_fixnum_value(native_type);

  return type;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertHostkey::type_writer */
/* sha: 86e6296adb10cab67b3405c1e10f6b9e9d83292a2e29b53e3090727c38ea7149 */
#if BIND_CertHostkey_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: git_cert_ssh_t
 */
mrb_value
mrb_Git_CertHostkey_set_type(mrb_state* mrb, mrb_value self) {
  git_cert_hostkey * native_self = mruby_unbox_git_cert_hostkey(self);
  mrb_int native_type;

  mrb_get_args(mrb, "i", &native_type);

  native_self->type = native_type;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertHostkey::hash_md5_reader */
/* sha: c0f114ec85874b57845c0ada34bbaa57289d592db5a0318911026af0b90c1607 */
#if BIND_CertHostkey_hash_md5_FIELD_READER
/* get_hash_md5
 *
 * Return Type: unsigned char [16]
 */
mrb_value
mrb_Git_CertHostkey_get_hash_md5(mrb_state* mrb, mrb_value self) {
  git_cert_hostkey * native_self = mruby_unbox_git_cert_hostkey(self);

  unsigned char [16] native_hash_md5 = native_self->hash_md5;

  mrb_value hash_md5 = TODO_mruby_box_unsigned_char_[16](mrb, native_hash_md5);

  return hash_md5;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertHostkey::hash_md5_writer */
/* sha: 77e7c23aeb6a20822138d1c78ec87ced3c2543e1dd54120b65ca103b85e447ba */
#if BIND_CertHostkey_hash_md5_FIELD_WRITER
/* set_hash_md5
 *
 * Parameters:
 * - value: unsigned char [16]
 */
mrb_value
mrb_Git_CertHostkey_set_hash_md5(mrb_state* mrb, mrb_value self) {
  git_cert_hostkey * native_self = mruby_unbox_git_cert_hostkey(self);
  mrb_value hash_md5;

  mrb_get_args(mrb, "o", &hash_md5);

  /* type checking */
  TODO_type_check_unsigned_char_[16](hash_md5);

  unsigned char [16] native_hash_md5 = TODO_mruby_unbox_unsigned_char_[16](hash_md5);

  native_self->hash_md5 = native_hash_md5;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertHostkey::hash_sha1_reader */
/* sha: 9243f46efe4a384beec4adb62df9897a4a905a7192b9bd32512a611bb7ac7b8e */
#if BIND_CertHostkey_hash_sha1_FIELD_READER
/* get_hash_sha1
 *
 * Return Type: unsigned char [20]
 */
mrb_value
mrb_Git_CertHostkey_get_hash_sha1(mrb_state* mrb, mrb_value self) {
  git_cert_hostkey * native_self = mruby_unbox_git_cert_hostkey(self);

  unsigned char [20] native_hash_sha1 = native_self->hash_sha1;

  mrb_value hash_sha1 = TODO_mruby_box_unsigned_char_[20](mrb, native_hash_sha1);

  return hash_sha1;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertHostkey::hash_sha1_writer */
/* sha: 423d12098190dff78f8a46ed9fede57881eb3c6238c81a4c3eddd0679284f357 */
#if BIND_CertHostkey_hash_sha1_FIELD_WRITER
/* set_hash_sha1
 *
 * Parameters:
 * - value: unsigned char [20]
 */
mrb_value
mrb_Git_CertHostkey_set_hash_sha1(mrb_state* mrb, mrb_value self) {
  git_cert_hostkey * native_self = mruby_unbox_git_cert_hostkey(self);
  mrb_value hash_sha1;

  mrb_get_args(mrb, "o", &hash_sha1);

  /* type checking */
  TODO_type_check_unsigned_char_[20](hash_sha1);

  unsigned char [20] native_hash_sha1 = TODO_mruby_unbox_unsigned_char_[20](hash_sha1);

  native_self->hash_sha1 = native_hash_sha1;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_CertHostkey_init(mrb_state* mrb) {
/* MRUBY_BINDING: CertHostkey::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertHostkey::class_definition */
/* sha: 6e9ab71e6a69ff477e13a5a139f13cf75f0511ff8da426d6f70ba4c1d2ad94bd */
  struct RClass* CertHostkey_class = mrb_define_class_under(mrb, Git_module(mrb), "CertHostkey", mrb->object_class);
  MRB_SET_INSTANCE_TT(CertHostkey_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertHostkey::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertHostkey::class_method_definitions */
/* sha: bc8b28b13a861fa0efd279f904f63631c326f08f079710197b0014c7c6a9b2c8 */
#if BIND_CertHostkey_INITIALIZE
  mrb_define_method(mrb, CertHostkey_class, "initialize", mrb_Git_CertHostkey_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, CertHostkey_class, "disown", mrb_Git_CertHostkey_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, CertHostkey_class, "belongs_to_ruby?", mrb_Git_CertHostkey_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertHostkey::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertHostkey::attr_definitions */
/* sha: fe19393b224f39740bf26f0dcc00814165b71e284fc2a819724c06a3638d77c4 */
  /*
   * Fields
   */
#if BIND_CertHostkey_parent_FIELD_READER
  mrb_define_method(mrb, CertHostkey_class, "parent", mrb_Git_CertHostkey_get_parent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CertHostkey_parent_FIELD_WRITER
  mrb_define_method(mrb, CertHostkey_class, "parent=", mrb_Git_CertHostkey_set_parent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CertHostkey_type_FIELD_READER
  mrb_define_method(mrb, CertHostkey_class, "type", mrb_Git_CertHostkey_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CertHostkey_type_FIELD_WRITER
  mrb_define_method(mrb, CertHostkey_class, "type=", mrb_Git_CertHostkey_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CertHostkey_hash_md5_FIELD_READER
  mrb_define_method(mrb, CertHostkey_class, "hash_md5", mrb_Git_CertHostkey_get_hash_md5, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CertHostkey_hash_md5_FIELD_WRITER
  mrb_define_method(mrb, CertHostkey_class, "hash_md5=", mrb_Git_CertHostkey_set_hash_md5, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CertHostkey_hash_sha1_FIELD_READER
  mrb_define_method(mrb, CertHostkey_class, "hash_sha1", mrb_Git_CertHostkey_get_hash_sha1, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CertHostkey_hash_sha1_FIELD_WRITER
  mrb_define_method(mrb, CertHostkey_class, "hash_sha1=", mrb_Git_CertHostkey_set_hash_sha1, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertHostkey::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertHostkey::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertHostkey::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
