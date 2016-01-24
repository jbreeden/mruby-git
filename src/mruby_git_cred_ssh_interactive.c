/*
 * git_cred_ssh_interactive
 * Defined in file transport.h @ line 156
 */

#include "mruby_Git.h"

#if BIND_CredSshInteractive_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: CredSshInteractive::initialize */
/* sha: d8da9a8eb2c76a0114b4ad3ec89cf8af4a49e0ea2f72671372b9090bbef4771d */
#if BIND_CredSshInteractive_INITIALIZE
mrb_value
mrb_Git_CredSshInteractive_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_cred_ssh_interactive* native_object = (git_cred_ssh_interactive*)calloc(1, sizeof(git_cred_ssh_interactive));
  mruby_gift_git_cred_ssh_interactive_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshInteractive::disown */
/* sha: b2c77144054ca15f588c3c29b1a36ffe694d789dc5a66726b0b16c35f4fc8a0d */
mrb_value
mrb_Git_CredSshInteractive_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::CredSshInteractive.disown only accepts objects of type Git::CredSshInteractive");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshInteractive::belongs_to_ruby */
/* sha: fdf5caef2b694fc13c5898dd4b52e1c410b1d29e9feb1cbe812b043fbee431cb */
mrb_value
mrb_Git_CredSshInteractive_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::CredSshInteractive.belongs_to_ruby only accepts objects of type Git::CredSshInteractive");
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

/* MRUBY_BINDING: CredSshInteractive::parent_reader */
/* sha: ce8b9a1421eb59a43b974924f26a22f570ce0a524c60eeb4df7b6fb54b54f440 */
#if BIND_CredSshInteractive_parent_FIELD_READER
/* get_parent
 *
 * Return Type: git_cred
 */
mrb_value
mrb_Git_CredSshInteractive_get_parent(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_interactive * native_self = mruby_unbox_git_cred_ssh_interactive(self);

  git_cred native_parent = native_self->parent;

  git_cred* new_parent = TODO_move_git_cred_to_heap(native_parent);
  mrb_value parent = mruby_box_git_cred(mrb, &native_parent);

  return parent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshInteractive::parent_writer */
/* sha: 026325c0a3b4c7e39d48d7d0fbe62e4633d98b87b567c5dadc4f57b3fc49bd72 */
#if BIND_CredSshInteractive_parent_FIELD_WRITER
/* set_parent
 *
 * Parameters:
 * - value: git_cred
 */
mrb_value
mrb_Git_CredSshInteractive_set_parent(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_interactive * native_self = mruby_unbox_git_cred_ssh_interactive(self);
  mrb_value parent;

  mrb_get_args(mrb, "o", &parent);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, parent, Cred_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Cred expected");
    return mrb_nil_value();
  }

  git_cred native_parent = *(mruby_unbox_git_cred(parent));

  native_self->parent = native_parent;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshInteractive::username_reader */
/* sha: 469d8eff08872d31a742cad081eaa9967b1db197209e2cbabf19c84dc7082e2b */
#if BIND_CredSshInteractive_username_FIELD_READER
/* get_username
 *
 * Return Type: char *
 */
mrb_value
mrb_Git_CredSshInteractive_get_username(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_interactive * native_self = mruby_unbox_git_cred_ssh_interactive(self);

  char * native_username = native_self->username;

  mrb_value username = TODO_mruby_box_char_PTR(mrb, native_username);

  return username;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshInteractive::username_writer */
/* sha: 050e6f8f2ea5198453fff84ebb94d5acd44d826f21f7b46a4f0c2a8cf7a71cb5 */
#if BIND_CredSshInteractive_username_FIELD_WRITER
/* set_username
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_Git_CredSshInteractive_set_username(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_interactive * native_self = mruby_unbox_git_cred_ssh_interactive(self);
  mrb_value username;

  mrb_get_args(mrb, "o", &username);

  /* type checking */
  TODO_type_check_char_PTR(username);

  char * native_username = TODO_mruby_unbox_char_PTR(username);

  native_self->username = native_username;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshInteractive::prompt_callback_reader */
/* sha: 89af07446c20722054ca6de85d3f23fd6f7b7d18d93221fb0226a3d935568a47 */
#if BIND_CredSshInteractive_prompt_callback_FIELD_READER
/* get_prompt_callback
 *
 * Return Type: git_cred_ssh_interactive_callback
 */
mrb_value
mrb_Git_CredSshInteractive_get_prompt_callback(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_interactive * native_self = mruby_unbox_git_cred_ssh_interactive(self);

  git_cred_ssh_interactive_callback native_prompt_callback = native_self->prompt_callback;

  mrb_value prompt_callback = TODO_mruby_box_git_cred_ssh_interactive_callback(mrb, native_prompt_callback);

  return prompt_callback;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshInteractive::prompt_callback_writer */
/* sha: 1d8ca54b1015663f206744e97883764caef2d3edcc806a362f26e6e470741e4f */
#if BIND_CredSshInteractive_prompt_callback_FIELD_WRITER
/* set_prompt_callback
 *
 * Parameters:
 * - value: git_cred_ssh_interactive_callback
 */
mrb_value
mrb_Git_CredSshInteractive_set_prompt_callback(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_interactive * native_self = mruby_unbox_git_cred_ssh_interactive(self);
  mrb_value prompt_callback;

  mrb_get_args(mrb, "o", &prompt_callback);

  /* type checking */
  TODO_type_check_git_cred_ssh_interactive_callback(prompt_callback);

  git_cred_ssh_interactive_callback native_prompt_callback = TODO_mruby_unbox_git_cred_ssh_interactive_callback(prompt_callback);

  native_self->prompt_callback = native_prompt_callback;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshInteractive::payload_reader */
/* sha: b2fd5ccd54374090efee6a1e856a22e57a516c0681a1e41705810d6d8bbc3432 */
#if BIND_CredSshInteractive_payload_FIELD_READER
/* get_payload
 *
 * Return Type: void *
 */
mrb_value
mrb_Git_CredSshInteractive_get_payload(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_interactive * native_self = mruby_unbox_git_cred_ssh_interactive(self);

  void * native_payload = native_self->payload;

  mrb_value payload = TODO_mruby_box_void_PTR(mrb, native_payload);

  return payload;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshInteractive::payload_writer */
/* sha: 18c148e6827a51acabec675b873e910f80018e4150c6a01fe55c5c64838bac2f */
#if BIND_CredSshInteractive_payload_FIELD_WRITER
/* set_payload
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_Git_CredSshInteractive_set_payload(mrb_state* mrb, mrb_value self) {
  git_cred_ssh_interactive * native_self = mruby_unbox_git_cred_ssh_interactive(self);
  mrb_value payload;

  mrb_get_args(mrb, "o", &payload);

  /* type checking */
  TODO_type_check_void_PTR(payload);

  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  native_self->payload = native_payload;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_CredSshInteractive_init(mrb_state* mrb) {
/* MRUBY_BINDING: CredSshInteractive::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshInteractive::class_definition */
/* sha: d7c87d2030c22eeb77d5746588cce048bccb76d4bda1e508c076504dd7c536b8 */
  struct RClass* CredSshInteractive_class = mrb_define_class_under(mrb, Git_module(mrb), "CredSshInteractive", mrb->object_class);
  MRB_SET_INSTANCE_TT(CredSshInteractive_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshInteractive::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshInteractive::class_method_definitions */
/* sha: 2b1f30b586c472f8413110822cdde750f6a30c4cbdfc8861d4f1e4a6c05b932c */
#if BIND_CredSshInteractive_INITIALIZE
  mrb_define_method(mrb, CredSshInteractive_class, "initialize", mrb_Git_CredSshInteractive_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, CredSshInteractive_class, "disown", mrb_Git_CredSshInteractive_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, CredSshInteractive_class, "belongs_to_ruby?", mrb_Git_CredSshInteractive_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshInteractive::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshInteractive::attr_definitions */
/* sha: e09ba8d6dc9c30c2c074f2497f2f9c041b43512bada68f29873a813095c5e1b0 */
  /*
   * Fields
   */
#if BIND_CredSshInteractive_parent_FIELD_READER
  mrb_define_method(mrb, CredSshInteractive_class, "parent", mrb_Git_CredSshInteractive_get_parent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredSshInteractive_parent_FIELD_WRITER
  mrb_define_method(mrb, CredSshInteractive_class, "parent=", mrb_Git_CredSshInteractive_set_parent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CredSshInteractive_username_FIELD_READER
  mrb_define_method(mrb, CredSshInteractive_class, "username", mrb_Git_CredSshInteractive_get_username, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredSshInteractive_username_FIELD_WRITER
  mrb_define_method(mrb, CredSshInteractive_class, "username=", mrb_Git_CredSshInteractive_set_username, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CredSshInteractive_prompt_callback_FIELD_READER
  mrb_define_method(mrb, CredSshInteractive_class, "prompt_callback", mrb_Git_CredSshInteractive_get_prompt_callback, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredSshInteractive_prompt_callback_FIELD_WRITER
  mrb_define_method(mrb, CredSshInteractive_class, "prompt_callback=", mrb_Git_CredSshInteractive_set_prompt_callback, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CredSshInteractive_payload_FIELD_READER
  mrb_define_method(mrb, CredSshInteractive_class, "payload", mrb_Git_CredSshInteractive_get_payload, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredSshInteractive_payload_FIELD_WRITER
  mrb_define_method(mrb, CredSshInteractive_class, "payload=", mrb_Git_CredSshInteractive_set_payload, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshInteractive::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshInteractive::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshInteractive::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
