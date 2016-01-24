/*
 * git_cred_username
 * Defined in file transport.h @ line 179
 */

#include "mruby_Git.h"

#if BIND_CredUsername_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUsername::initialize */
/* sha: d53e15894e4afdb34e28472fefd2615d3647a950ba908672d6c0b008f7152e7d */
#if BIND_CredUsername_INITIALIZE
mrb_value
mrb_Git_CredUsername_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_cred_username* native_object = (git_cred_username*)calloc(1, sizeof(git_cred_username));
  mruby_gift_git_cred_username_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: CredUsername::parent_reader */
/* sha: 11a9f861bdd33f57e57c4ea506bc10743df29db5cd3d6a58f8d3c91070dea163 */
#if BIND_CredUsername_parent_FIELD_READER
/* get_parent
 *
 * Return Type: git_cred
 */
mrb_value
mrb_Git_CredUsername_get_parent(mrb_state* mrb, mrb_value self) {
  git_cred_username * native_self = mruby_unbox_git_cred_username(self);

  git_cred native_parent = native_self->parent;

  git_cred* new_parent = TODO_move_git_cred_to_heap(native_parent);
  mrb_value parent = mruby_box_git_cred(mrb, &native_parent);

  return parent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUsername::parent_writer */
/* sha: 941e5c00ac09898fddf7b043e56179fa25659fd9178c45fd5a370714061791ed */
#if BIND_CredUsername_parent_FIELD_WRITER
/* set_parent
 *
 * Parameters:
 * - value: git_cred
 */
mrb_value
mrb_Git_CredUsername_set_parent(mrb_state* mrb, mrb_value self) {
  git_cred_username * native_self = mruby_unbox_git_cred_username(self);
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

/* MRUBY_BINDING: CredUsername::username_reader */
/* sha: 318bfae8cd524ed173b360353e500b531c1c7b2a9fabd48b53d4ec5ad1e00317 */
#if BIND_CredUsername_username_FIELD_READER
/* get_username
 *
 * Return Type: char [1]
 */
mrb_value
mrb_Git_CredUsername_get_username(mrb_state* mrb, mrb_value self) {
  git_cred_username * native_self = mruby_unbox_git_cred_username(self);

  char [1] native_username = native_self->username;

  mrb_value username = TODO_mruby_box_char_[1](mrb, native_username);

  return username;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUsername::username_writer */
/* sha: 7c43a63d38b60b3edf6ed753e11a560285a2f35cf0a680abaf2fdde0bb03bf5b */
#if BIND_CredUsername_username_FIELD_WRITER
/* set_username
 *
 * Parameters:
 * - value: char [1]
 */
mrb_value
mrb_Git_CredUsername_set_username(mrb_state* mrb, mrb_value self) {
  git_cred_username * native_self = mruby_unbox_git_cred_username(self);
  mrb_value username;

  mrb_get_args(mrb, "o", &username);

  /* type checking */
  TODO_type_check_char_[1](username);

  char [1] native_username = TODO_mruby_unbox_char_[1](username);

  native_self->username = native_username;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_CredUsername_init(mrb_state* mrb) {
/* MRUBY_BINDING: CredUsername::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUsername::class_definition */
/* sha: b394c6578756ce6e3d3a781e029f2a0971edd7d4d879d860d0f1f115ade0704a */
  struct RClass* CredUsername_class = mrb_define_class_under(mrb, Git_module(mrb), "CredUsername", mrb->object_class);
  MRB_SET_INSTANCE_TT(CredUsername_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUsername::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUsername::class_method_definitions */
/* sha: ea2def535b76fbb8ea7a0f12d5e2b171d78ba5b46d0cd3cad87b6abc7f6dad2d */
#if BIND_CredUsername_INITIALIZE
  mrb_define_method(mrb, CredUsername_class, "initialize", mrb_Git_CredUsername_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUsername::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUsername::attr_definitions */
/* sha: f25a8f9082b8190be4cc9424f458bec23e9a601db38308f4113792444165663a */
  /*
   * Fields
   */
#if BIND_CredUsername_parent_FIELD_READER
  mrb_define_method(mrb, CredUsername_class, "parent", mrb_Git_CredUsername_get_parent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredUsername_parent_FIELD_WRITER
  mrb_define_method(mrb, CredUsername_class, "parent=", mrb_Git_CredUsername_set_parent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CredUsername_username_FIELD_READER
  mrb_define_method(mrb, CredUsername_class, "username", mrb_Git_CredUsername_get_username, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredUsername_username_FIELD_WRITER
  mrb_define_method(mrb, CredUsername_class, "username=", mrb_Git_CredUsername_set_username, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUsername::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUsername::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUsername::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
