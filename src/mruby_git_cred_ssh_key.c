/*
 * git_cred_ssh_key
 * Defined in file transport.h @ line 145
 */

#include "mruby_Git.h"

#if BIND_CredSshKey_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey::initialize */
/* sha: 8bbb4a3e11ab16b152f4af3cb9e4a98342af001fc0b3c7b175aa884d00b58116 */
#if BIND_CredSshKey_INITIALIZE
mrb_value
mrb_Git_CredSshKey_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_cred_ssh_key* native_object = (git_cred_ssh_key*)calloc(1, sizeof(git_cred_ssh_key));
  mruby_gift_git_cred_ssh_key_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: CredSshKey::parent_reader */
/* sha: 9d6478a6e0839dd9ad3c1be5f4c0c6b6ff4b55a22b5fa839fb2c758029428905 */
#if BIND_CredSshKey_parent_FIELD_READER
/* get_parent
 *
 * Return Type: git_cred
 */
mrb_value
mrb_Git_CredSshKey_get_parent(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_key * native_self = mruby_unbox_git_cred_ssh_key(self);

  git_cred native_parent = native_self->parent;

  git_cred* new_parent = TODO_move_git_cred_to_heap(native_parent);
  mrb_value parent = mruby_box_git_cred(mrb, &native_parent);

  return parent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey::parent_writer */
/* sha: 391a84e84eb5ee896ec0c87542fec09fd5848e03b4a050b89b42fcc5ae0964db */
#if BIND_CredSshKey_parent_FIELD_WRITER
/* set_parent
 *
 * Parameters:
 * - value: git_cred
 */
mrb_value
mrb_Git_CredSshKey_set_parent(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_key * native_self = mruby_unbox_git_cred_ssh_key(self);
  mrb_value parent;

  mrb_get_args(mrb, "o", &parent);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, parent, Cred_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Cred expected");
    return mrb_nil_value();
  }

  git_cred native_parent = *(mruby_unbox_git_cred(parent));

  native_self->parent = native_parent;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey::username_reader */
/* sha: 8b434df4ffd7142df2cbfa0df8ccaf46726b258edc56617b131152cda72fdcd6 */
#if BIND_CredSshKey_username_FIELD_READER
/* get_username
 *
 * Return Type: char *
 */
mrb_value
mrb_Git_CredSshKey_get_username(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_key * native_self = mruby_unbox_git_cred_ssh_key(self);

  char * native_username = native_self->username;

  mrb_value username = TODO_mruby_box_char_PTR(mrb, native_username);

  return username;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey::username_writer */
/* sha: e31902468d9f6e73b1b72d0e020c219600b6db0fb8577540d10243943a520024 */
#if BIND_CredSshKey_username_FIELD_WRITER
/* set_username
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_Git_CredSshKey_set_username(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_key * native_self = mruby_unbox_git_cred_ssh_key(self);
  mrb_value username;

  mrb_get_args(mrb, "o", &username);

  /* type checking */
  TODO_type_check_char_PTR(username);

  char * native_username = TODO_mruby_unbox_char_PTR(username);

  native_self->username = native_username;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey::publickey_reader */
/* sha: 6d8ebafc2a9d47e12b0df66a21ac36e30868f5b2b5309d1d5d31b6708669db28 */
#if BIND_CredSshKey_publickey_FIELD_READER
/* get_publickey
 *
 * Return Type: char *
 */
mrb_value
mrb_Git_CredSshKey_get_publickey(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_key * native_self = mruby_unbox_git_cred_ssh_key(self);

  char * native_publickey = native_self->publickey;

  mrb_value publickey = TODO_mruby_box_char_PTR(mrb, native_publickey);

  return publickey;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey::publickey_writer */
/* sha: 578a44ce642e813c65caf6cc24c4a7b1ce335b4ee0ea8513ef58af38cb1ce6ea */
#if BIND_CredSshKey_publickey_FIELD_WRITER
/* set_publickey
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_Git_CredSshKey_set_publickey(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_key * native_self = mruby_unbox_git_cred_ssh_key(self);
  mrb_value publickey;

  mrb_get_args(mrb, "o", &publickey);

  /* type checking */
  TODO_type_check_char_PTR(publickey);

  char * native_publickey = TODO_mruby_unbox_char_PTR(publickey);

  native_self->publickey = native_publickey;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey::privatekey_reader */
/* sha: 06368092da5aaf96546cddedc3c37b978439846fdee7c9aa32fef3890d47c64e */
#if BIND_CredSshKey_privatekey_FIELD_READER
/* get_privatekey
 *
 * Return Type: char *
 */
mrb_value
mrb_Git_CredSshKey_get_privatekey(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_key * native_self = mruby_unbox_git_cred_ssh_key(self);

  char * native_privatekey = native_self->privatekey;

  mrb_value privatekey = TODO_mruby_box_char_PTR(mrb, native_privatekey);

  return privatekey;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey::privatekey_writer */
/* sha: 5bffd0d23264811643a1e0e82b0b10612cce8c6a2063fbd0b0c2849a349761d0 */
#if BIND_CredSshKey_privatekey_FIELD_WRITER
/* set_privatekey
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_Git_CredSshKey_set_privatekey(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_key * native_self = mruby_unbox_git_cred_ssh_key(self);
  mrb_value privatekey;

  mrb_get_args(mrb, "o", &privatekey);

  /* type checking */
  TODO_type_check_char_PTR(privatekey);

  char * native_privatekey = TODO_mruby_unbox_char_PTR(privatekey);

  native_self->privatekey = native_privatekey;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey::passphrase_reader */
/* sha: f1a4b44ff043dfeb0377dffba0d7cf29f2a1aa08256176791e3cf8d18e8126ed */
#if BIND_CredSshKey_passphrase_FIELD_READER
/* get_passphrase
 *
 * Return Type: char *
 */
mrb_value
mrb_Git_CredSshKey_get_passphrase(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_key * native_self = mruby_unbox_git_cred_ssh_key(self);

  char * native_passphrase = native_self->passphrase;

  mrb_value passphrase = TODO_mruby_box_char_PTR(mrb, native_passphrase);

  return passphrase;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey::passphrase_writer */
/* sha: 10f7c2412f1eb38899207908841a0e759ffc2b34b7e65fcd6c2e533734eb822d */
#if BIND_CredSshKey_passphrase_FIELD_WRITER
/* set_passphrase
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_Git_CredSshKey_set_passphrase(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_key * native_self = mruby_unbox_git_cred_ssh_key(self);
  mrb_value passphrase;

  mrb_get_args(mrb, "o", &passphrase);

  /* type checking */
  TODO_type_check_char_PTR(passphrase);

  char * native_passphrase = TODO_mruby_unbox_char_PTR(passphrase);

  native_self->passphrase = native_passphrase;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_CredSshKey_init(mrb_state* mrb) {
/* MRUBY_BINDING: CredSshKey::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey::class_definition */
/* sha: f210c064f657f17c73b6bcaaa8b0d9902cf5affcb1bb0e9cc291b1ea9742a270 */
  struct RClass* CredSshKey_class = mrb_define_class_under(mrb, Git_module(mrb), "CredSshKey", mrb->object_class);
  MRB_SET_INSTANCE_TT(CredSshKey_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey::class_method_definitions */
/* sha: f9ed9bd424c3496705b19c347636ab8fb17b44a1b656f3c3796591f17e20922f */
#if BIND_CredSshKey_INITIALIZE
  mrb_define_method(mrb, CredSshKey_class, "initialize", mrb_Git_CredSshKey_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey::attr_definitions */
/* sha: 91887f1e6b41318ec6915541566dc732c72ef4f8ead595684a97dff0e6f015e3 */
  /*
   * Fields
   */
#if BIND_CredSshKey_parent_FIELD_READER
  mrb_define_method(mrb, CredSshKey_class, "parent", mrb_Git_CredSshKey_get_parent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredSshKey_parent_FIELD_WRITER
  mrb_define_method(mrb, CredSshKey_class, "parent=", mrb_Git_CredSshKey_set_parent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CredSshKey_username_FIELD_READER
  mrb_define_method(mrb, CredSshKey_class, "username", mrb_Git_CredSshKey_get_username, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredSshKey_username_FIELD_WRITER
  mrb_define_method(mrb, CredSshKey_class, "username=", mrb_Git_CredSshKey_set_username, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CredSshKey_publickey_FIELD_READER
  mrb_define_method(mrb, CredSshKey_class, "publickey", mrb_Git_CredSshKey_get_publickey, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredSshKey_publickey_FIELD_WRITER
  mrb_define_method(mrb, CredSshKey_class, "publickey=", mrb_Git_CredSshKey_set_publickey, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CredSshKey_privatekey_FIELD_READER
  mrb_define_method(mrb, CredSshKey_class, "privatekey", mrb_Git_CredSshKey_get_privatekey, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredSshKey_privatekey_FIELD_WRITER
  mrb_define_method(mrb, CredSshKey_class, "privatekey=", mrb_Git_CredSshKey_set_privatekey, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CredSshKey_passphrase_FIELD_READER
  mrb_define_method(mrb, CredSshKey_class, "passphrase", mrb_Git_CredSshKey_get_passphrase, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredSshKey_passphrase_FIELD_WRITER
  mrb_define_method(mrb, CredSshKey_class, "passphrase=", mrb_Git_CredSshKey_set_passphrase, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
