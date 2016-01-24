/*
 * git_cred_userpass_plaintext
 * Defined in file transport.h @ line 122
 */

#include "mruby_Git.h"

#if BIND_CredUserpassPlaintext_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPlaintext::initialize */
/* sha: cedfb25fc45134a89325623be3b983670e4c51ab3b4dfe05836837c01c3267a4 */
#if BIND_CredUserpassPlaintext_INITIALIZE
mrb_value
mrb_Git_CredUserpassPlaintext_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_cred_userpass_plaintext* native_object = (git_cred_userpass_plaintext*)calloc(1, sizeof(git_cred_userpass_plaintext));
  mruby_gift_git_cred_userpass_plaintext_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: CredUserpassPlaintext::parent_reader */
/* sha: 8277e3c939979012d7b7d6ec4dec1745f5f606d642d52f82a5b94e6b683b12ba */
#if BIND_CredUserpassPlaintext_parent_FIELD_READER
/* get_parent
 *
 * Return Type: git_cred
 */
mrb_value
mrb_Git_CredUserpassPlaintext_get_parent(mrb_state* mrb, mrb_value self) {
  git_cred_userpass_plaintext * native_self = mruby_unbox_git_cred_userpass_plaintext(self);

  git_cred native_parent = native_self->parent;

  git_cred* new_parent = TODO_move_git_cred_to_heap(native_parent);
  mrb_value parent = mruby_box_git_cred(mrb, &native_parent);

  return parent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPlaintext::parent_writer */
/* sha: 799f9f3364391181a4b59250dcc3b1e0d5f121d22c367b15eda59d0b8a8d0232 */
#if BIND_CredUserpassPlaintext_parent_FIELD_WRITER
/* set_parent
 *
 * Parameters:
 * - value: git_cred
 */
mrb_value
mrb_Git_CredUserpassPlaintext_set_parent(mrb_state* mrb, mrb_value self) {
  git_cred_userpass_plaintext * native_self = mruby_unbox_git_cred_userpass_plaintext(self);
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

/* MRUBY_BINDING: CredUserpassPlaintext::username_reader */
/* sha: 76fa4998d105864095a9613fcecd5fea32162bb15fa22f7f444729e71611706e */
#if BIND_CredUserpassPlaintext_username_FIELD_READER
/* get_username
 *
 * Return Type: char *
 */
mrb_value
mrb_Git_CredUserpassPlaintext_get_username(mrb_state* mrb, mrb_value self) {
  git_cred_userpass_plaintext * native_self = mruby_unbox_git_cred_userpass_plaintext(self);

  char * native_username = native_self->username;

  mrb_value username = TODO_mruby_box_char_PTR(mrb, native_username);

  return username;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPlaintext::username_writer */
/* sha: 684b571a9e14e77e93bb88d0344e8186d482dbc16a21cab2a99d3d7f8674879f */
#if BIND_CredUserpassPlaintext_username_FIELD_WRITER
/* set_username
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_Git_CredUserpassPlaintext_set_username(mrb_state* mrb, mrb_value self) {
  git_cred_userpass_plaintext * native_self = mruby_unbox_git_cred_userpass_plaintext(self);
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

/* MRUBY_BINDING: CredUserpassPlaintext::password_reader */
/* sha: 45b7cee42be10fe7cfed4ea49beacbffcb5f737fe4c6f06fc8b581121e0002f0 */
#if BIND_CredUserpassPlaintext_password_FIELD_READER
/* get_password
 *
 * Return Type: char *
 */
mrb_value
mrb_Git_CredUserpassPlaintext_get_password(mrb_state* mrb, mrb_value self) {
  git_cred_userpass_plaintext * native_self = mruby_unbox_git_cred_userpass_plaintext(self);

  char * native_password = native_self->password;

  mrb_value password = TODO_mruby_box_char_PTR(mrb, native_password);

  return password;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPlaintext::password_writer */
/* sha: 0cda228d00c12904b63fdac0dd6587d1ab2842483432def3b3fd9925db5f193b */
#if BIND_CredUserpassPlaintext_password_FIELD_WRITER
/* set_password
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_Git_CredUserpassPlaintext_set_password(mrb_state* mrb, mrb_value self) {
  git_cred_userpass_plaintext * native_self = mruby_unbox_git_cred_userpass_plaintext(self);
  mrb_value password;

  mrb_get_args(mrb, "o", &password);

  /* type checking */
  TODO_type_check_char_PTR(password);

  char * native_password = TODO_mruby_unbox_char_PTR(password);

  native_self->password = native_password;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_CredUserpassPlaintext_init(mrb_state* mrb) {
/* MRUBY_BINDING: CredUserpassPlaintext::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPlaintext::class_definition */
/* sha: 1539254969727ea917b1ea966358fd95fa71e07e3ad9fdedc8c1ea4865650ec9 */
  struct RClass* CredUserpassPlaintext_class = mrb_define_class_under(mrb, Git_module(mrb), "CredUserpassPlaintext", mrb->object_class);
  MRB_SET_INSTANCE_TT(CredUserpassPlaintext_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPlaintext::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPlaintext::class_method_definitions */
/* sha: 05ab4b7d25d7a24ce4013b445d180d87ff0e91b65b9e652856ebb0407a769d44 */
#if BIND_CredUserpassPlaintext_INITIALIZE
  mrb_define_method(mrb, CredUserpassPlaintext_class, "initialize", mrb_Git_CredUserpassPlaintext_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPlaintext::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPlaintext::attr_definitions */
/* sha: a3ef28a364eb345f5626f05f80d62ccf15b0682fdb1b28155caf8d5e03798680 */
  /*
   * Fields
   */
#if BIND_CredUserpassPlaintext_parent_FIELD_READER
  mrb_define_method(mrb, CredUserpassPlaintext_class, "parent", mrb_Git_CredUserpassPlaintext_get_parent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredUserpassPlaintext_parent_FIELD_WRITER
  mrb_define_method(mrb, CredUserpassPlaintext_class, "parent=", mrb_Git_CredUserpassPlaintext_set_parent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CredUserpassPlaintext_username_FIELD_READER
  mrb_define_method(mrb, CredUserpassPlaintext_class, "username", mrb_Git_CredUserpassPlaintext_get_username, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredUserpassPlaintext_username_FIELD_WRITER
  mrb_define_method(mrb, CredUserpassPlaintext_class, "username=", mrb_Git_CredUserpassPlaintext_set_username, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CredUserpassPlaintext_password_FIELD_READER
  mrb_define_method(mrb, CredUserpassPlaintext_class, "password", mrb_Git_CredUserpassPlaintext_get_password, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredUserpassPlaintext_password_FIELD_WRITER
  mrb_define_method(mrb, CredUserpassPlaintext_class, "password=", mrb_Git_CredUserpassPlaintext_set_password, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPlaintext::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPlaintext::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPlaintext::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
