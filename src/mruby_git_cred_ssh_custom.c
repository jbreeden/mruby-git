/*
 * git_cred_ssh_custom
 * Defined in file transport.h @ line 166
 */

#include "mruby_Git.h"

#if BIND_CredSshCustom_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshCustom::initialize */
/* sha: f1d58856f8c6651b259a7f88630b1215530d36893c236fe9c1247a0d5b579b2e */
#if BIND_CredSshCustom_INITIALIZE
mrb_value
mrb_Git_CredSshCustom_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_cred_ssh_custom* native_object = (git_cred_ssh_custom*)calloc(1, sizeof(git_cred_ssh_custom));
  mruby_gift_git_cred_ssh_custom_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: CredSshCustom::parent_reader */
/* sha: 5dd08b5a4a273929fa7943a03e069e77119895fe4628676ffe49acd4c392dcb0 */
#if BIND_CredSshCustom_parent_FIELD_READER
/* get_parent
 *
 * Return Type: git_cred
 */
mrb_value
mrb_Git_CredSshCustom_get_parent(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_custom * native_self = mruby_unbox_git_cred_ssh_custom(self);

  git_cred native_parent = native_self->parent;

  git_cred* new_parent = TODO_move_git_cred_to_heap(native_parent);
  mrb_value parent = mruby_box_git_cred(mrb, &native_parent);

  return parent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshCustom::parent_writer */
/* sha: 2925ea46d0fb9e27de86a52dba577e096812916a2b7eeed0f3c64c9bddb35c78 */
#if BIND_CredSshCustom_parent_FIELD_WRITER
/* set_parent
 *
 * Parameters:
 * - value: git_cred
 */
mrb_value
mrb_Git_CredSshCustom_set_parent(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_custom * native_self = mruby_unbox_git_cred_ssh_custom(self);
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

/* MRUBY_BINDING: CredSshCustom::username_reader */
/* sha: 9b1744e27f26c7c7fd590acbea78e349fbc8fa2709009352d39b6a64e4b576c1 */
#if BIND_CredSshCustom_username_FIELD_READER
/* get_username
 *
 * Return Type: char *
 */
mrb_value
mrb_Git_CredSshCustom_get_username(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_custom * native_self = mruby_unbox_git_cred_ssh_custom(self);

  char * native_username = native_self->username;

  mrb_value username = TODO_mruby_box_char_PTR(mrb, native_username);

  return username;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshCustom::username_writer */
/* sha: 74ad58f36a589b322549c179e7afac75fc22763d5f32c433f462cb804a91f528 */
#if BIND_CredSshCustom_username_FIELD_WRITER
/* set_username
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_Git_CredSshCustom_set_username(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_custom * native_self = mruby_unbox_git_cred_ssh_custom(self);
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

/* MRUBY_BINDING: CredSshCustom::publickey_reader */
/* sha: c00824df030ff1da063661ea01aade5853a14182a19f475f3b9e4dba9d6a1bbe */
#if BIND_CredSshCustom_publickey_FIELD_READER
/* get_publickey
 *
 * Return Type: char *
 */
mrb_value
mrb_Git_CredSshCustom_get_publickey(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_custom * native_self = mruby_unbox_git_cred_ssh_custom(self);

  char * native_publickey = native_self->publickey;

  mrb_value publickey = TODO_mruby_box_char_PTR(mrb, native_publickey);

  return publickey;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshCustom::publickey_writer */
/* sha: 03c0b3fad7e69ed7ec7cc14ed1cc7fdd0afd6d4a2913deb676d37c566fe65e8e */
#if BIND_CredSshCustom_publickey_FIELD_WRITER
/* set_publickey
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_Git_CredSshCustom_set_publickey(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_custom * native_self = mruby_unbox_git_cred_ssh_custom(self);
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

/* MRUBY_BINDING: CredSshCustom::publickey_len_reader */
/* sha: 524e36eaf7abc8ec66ae8b627191b5ebc38e7ba19c42141f5034be4b5b02613e */
#if BIND_CredSshCustom_publickey_len_FIELD_READER
/* get_publickey_len
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_CredSshCustom_get_publickey_len(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_custom * native_self = mruby_unbox_git_cred_ssh_custom(self);

  size_t native_publickey_len = native_self->publickey_len;

  mrb_value publickey_len = mrb_fixnum_value(native_publickey_len);

  return publickey_len;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshCustom::publickey_len_writer */
/* sha: 13bea1bcbb99fb8a94a004a1fd6e2bfafb02530f53916821f8f0fcdaa03dfd63 */
#if BIND_CredSshCustom_publickey_len_FIELD_WRITER
/* set_publickey_len
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_CredSshCustom_set_publickey_len(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_custom * native_self = mruby_unbox_git_cred_ssh_custom(self);
  mrb_int native_publickey_len;

  mrb_get_args(mrb, "i", &native_publickey_len);

  native_self->publickey_len = native_publickey_len;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshCustom::sign_callback_reader */
/* sha: f2090153ddb23a599ccffe42e61fac59856b7d6f71e3e8e9593d4aeb3a2112f2 */
#if BIND_CredSshCustom_sign_callback_FIELD_READER
/* get_sign_callback
 *
 * Return Type: git_cred_sign_callback
 */
mrb_value
mrb_Git_CredSshCustom_get_sign_callback(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_custom * native_self = mruby_unbox_git_cred_ssh_custom(self);

  git_cred_sign_callback native_sign_callback = native_self->sign_callback;

  mrb_value sign_callback = TODO_mruby_box_git_cred_sign_callback(mrb, native_sign_callback);

  return sign_callback;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshCustom::sign_callback_writer */
/* sha: 15fb15e96c8dfd79db700ddd12ad08dc45ceda5d7b5bb6cdf0b57831aa69278d */
#if BIND_CredSshCustom_sign_callback_FIELD_WRITER
/* set_sign_callback
 *
 * Parameters:
 * - value: git_cred_sign_callback
 */
mrb_value
mrb_Git_CredSshCustom_set_sign_callback(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_custom * native_self = mruby_unbox_git_cred_ssh_custom(self);
  mrb_value sign_callback;

  mrb_get_args(mrb, "o", &sign_callback);

  /* type checking */
  TODO_type_check_git_cred_sign_callback(sign_callback);

  git_cred_sign_callback native_sign_callback = TODO_mruby_unbox_git_cred_sign_callback(sign_callback);

  native_self->sign_callback = native_sign_callback;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshCustom::payload_reader */
/* sha: e3ab476414af41ad52c97cc3f567ca80dccfa4f62049fe8d54c345f1239692ed */
#if BIND_CredSshCustom_payload_FIELD_READER
/* get_payload
 *
 * Return Type: void *
 */
mrb_value
mrb_Git_CredSshCustom_get_payload(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_custom * native_self = mruby_unbox_git_cred_ssh_custom(self);

  void * native_payload = native_self->payload;

  mrb_value payload = TODO_mruby_box_void_PTR(mrb, native_payload);

  return payload;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshCustom::payload_writer */
/* sha: 5942f788de173ebef466434b7e1add15e8852b9be0e534c12d30f54272d7d634 */
#if BIND_CredSshCustom_payload_FIELD_WRITER
/* set_payload
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_Git_CredSshCustom_set_payload(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_custom * native_self = mruby_unbox_git_cred_ssh_custom(self);
  mrb_value payload;

  mrb_get_args(mrb, "o", &payload);

  /* type checking */
  TODO_type_check_void_PTR(payload);

  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  native_self->payload = native_payload;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_CredSshCustom_init(mrb_state* mrb) {
/* MRUBY_BINDING: CredSshCustom::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshCustom::class_definition */
/* sha: 5bd0c39e6cebbeb0fddfb0a3e5190fd848b44114dadd9e67121f537519131dfd */
  struct RClass* CredSshCustom_class = mrb_define_class_under(mrb, Git_module(mrb), "CredSshCustom", mrb->object_class);
  MRB_SET_INSTANCE_TT(CredSshCustom_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshCustom::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshCustom::class_method_definitions */
/* sha: b705aa3485971248ad5711194bf5d97b33ad651d78a6c938302361fa6a1745b3 */
#if BIND_CredSshCustom_INITIALIZE
  mrb_define_method(mrb, CredSshCustom_class, "initialize", mrb_Git_CredSshCustom_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, CredSshCustom_class, "disown", mrb_Git_CredSshCustom_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, CredSshCustom_class, "belongs_to_ruby?", mrb_Git_CredSshCustom_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshCustom::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshCustom::attr_definitions */
/* sha: 5dbde464ed9a76c37836cd640f1f11e3deef0a41495a230505ce18cc5c8bf3b7 */
  /*
   * Fields
   */
#if BIND_CredSshCustom_parent_FIELD_READER
  mrb_define_method(mrb, CredSshCustom_class, "parent", mrb_Git_CredSshCustom_get_parent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredSshCustom_parent_FIELD_WRITER
  mrb_define_method(mrb, CredSshCustom_class, "parent=", mrb_Git_CredSshCustom_set_parent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CredSshCustom_username_FIELD_READER
  mrb_define_method(mrb, CredSshCustom_class, "username", mrb_Git_CredSshCustom_get_username, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredSshCustom_username_FIELD_WRITER
  mrb_define_method(mrb, CredSshCustom_class, "username=", mrb_Git_CredSshCustom_set_username, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CredSshCustom_publickey_FIELD_READER
  mrb_define_method(mrb, CredSshCustom_class, "publickey", mrb_Git_CredSshCustom_get_publickey, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredSshCustom_publickey_FIELD_WRITER
  mrb_define_method(mrb, CredSshCustom_class, "publickey=", mrb_Git_CredSshCustom_set_publickey, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CredSshCustom_publickey_len_FIELD_READER
  mrb_define_method(mrb, CredSshCustom_class, "publickey_len", mrb_Git_CredSshCustom_get_publickey_len, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredSshCustom_publickey_len_FIELD_WRITER
  mrb_define_method(mrb, CredSshCustom_class, "publickey_len=", mrb_Git_CredSshCustom_set_publickey_len, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CredSshCustom_sign_callback_FIELD_READER
  mrb_define_method(mrb, CredSshCustom_class, "sign_callback", mrb_Git_CredSshCustom_get_sign_callback, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredSshCustom_sign_callback_FIELD_WRITER
  mrb_define_method(mrb, CredSshCustom_class, "sign_callback=", mrb_Git_CredSshCustom_set_sign_callback, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CredSshCustom_payload_FIELD_READER
  mrb_define_method(mrb, CredSshCustom_class, "payload", mrb_Git_CredSshCustom_get_payload, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredSshCustom_payload_FIELD_WRITER
  mrb_define_method(mrb, CredSshCustom_class, "payload=", mrb_Git_CredSshCustom_set_payload, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshCustom::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshCustom::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshCustom::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
