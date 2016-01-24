/*
 * git_signature
 * Defined in file types.h @ line 162
 */

#include "mruby_Git.h"

#if BIND_Signature_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signature::initialize */
/* sha: b69eaba0516a651120dd0dd2f16a4705ebf92a90954e786220980176b90d03f2 */
#if BIND_Signature_INITIALIZE
mrb_value
mrb_Git_Signature_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_signature* native_object = (git_signature*)calloc(1, sizeof(git_signature));
  mruby_gift_git_signature_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Signature::name_reader */
/* sha: c9293c50aa8ef049169c855ca5f8737cff8f1a42c4674ffc27ad979bc4614f7e */
#if BIND_Signature_name_FIELD_READER
/* get_name
 *
 * Return Type: char *
 */
mrb_value
mrb_Git_Signature_get_name(mrb_state* mrb, mrb_value self) {
  git_signature * native_self = mruby_unbox_git_signature(self);

  char * native_name = native_self->name;

  mrb_value name = TODO_mruby_box_char_PTR(mrb, native_name);

  return name;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signature::name_writer */
/* sha: 553537834c16260cbdde655530e079f19ddb23a5c9857c024e1e612e89333a31 */
#if BIND_Signature_name_FIELD_WRITER
/* set_name
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_Git_Signature_set_name(mrb_state* mrb, mrb_value self) {
  git_signature * native_self = mruby_unbox_git_signature(self);
  mrb_value name;

  mrb_get_args(mrb, "o", &name);

  /* type checking */
  TODO_type_check_char_PTR(name);

  char * native_name = TODO_mruby_unbox_char_PTR(name);

  native_self->name = native_name;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signature::email_reader */
/* sha: fe1d7f2b517db185ab7f71ddf4fb501957254a7f835c683a3b7745bbdd31f2e8 */
#if BIND_Signature_email_FIELD_READER
/* get_email
 *
 * Return Type: char *
 */
mrb_value
mrb_Git_Signature_get_email(mrb_state* mrb, mrb_value self) {
  git_signature * native_self = mruby_unbox_git_signature(self);

  char * native_email = native_self->email;

  mrb_value email = TODO_mruby_box_char_PTR(mrb, native_email);

  return email;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signature::email_writer */
/* sha: 41336ce69f9af7c7b9c08d8c91036177ab97274727e032c8d9c23311aa116066 */
#if BIND_Signature_email_FIELD_WRITER
/* set_email
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_Git_Signature_set_email(mrb_state* mrb, mrb_value self) {
  git_signature * native_self = mruby_unbox_git_signature(self);
  mrb_value email;

  mrb_get_args(mrb, "o", &email);

  /* type checking */
  TODO_type_check_char_PTR(email);

  char * native_email = TODO_mruby_unbox_char_PTR(email);

  native_self->email = native_email;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signature::when_reader */
/* sha: 111f56fe3bb577268441de0433104db43150fb464b5f3144ada921c182aee8e4 */
#if BIND_Signature_when_FIELD_READER
/* get_when
 *
 * Return Type: git_time
 */
mrb_value
mrb_Git_Signature_get_when(mrb_state* mrb, mrb_value self) {
  git_signature * native_self = mruby_unbox_git_signature(self);

  git_time native_when = native_self->when;

  git_time* new_when = TODO_move_git_time_to_heap(native_when);
  mrb_value when = mruby_box_git_time(mrb, &native_when);

  return when;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signature::when_writer */
/* sha: 10257bc43ef4562521c9232762b5cc840be3ec3885b1ea61ca45663b58abd867 */
#if BIND_Signature_when_FIELD_WRITER
/* set_when
 *
 * Parameters:
 * - value: git_time
 */
mrb_value
mrb_Git_Signature_set_when(mrb_state* mrb, mrb_value self) {
  git_signature * native_self = mruby_unbox_git_signature(self);
  mrb_value when;

  mrb_get_args(mrb, "o", &when);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, when, Time_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Time expected");
    return mrb_nil_value();
  }

  git_time native_when = *(mruby_unbox_git_time(when));

  native_self->when = native_when;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Signature_init(mrb_state* mrb) {
/* MRUBY_BINDING: Signature::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signature::class_definition */
/* sha: 05a2e2c33ebb3e3082f74a552b007f1e7a0e46ecd4691966c9fe1c7b7af18297 */
  struct RClass* Signature_class = mrb_define_class_under(mrb, Git_module(mrb), "Signature", mrb->object_class);
  MRB_SET_INSTANCE_TT(Signature_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signature::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signature::class_method_definitions */
/* sha: d263781fc7861c47065b9cb115df67b20bd3e03338a1921d4214c657a5e5ff1b */
#if BIND_Signature_INITIALIZE
  mrb_define_method(mrb, Signature_class, "initialize", mrb_Git_Signature_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signature::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signature::attr_definitions */
/* sha: c72cb32a496b55d75888490fdad746f862ad8fa947abe5a51cc8ee5b7b46c740 */
  /*
   * Fields
   */
#if BIND_Signature_name_FIELD_READER
  mrb_define_method(mrb, Signature_class, "name", mrb_Git_Signature_get_name, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Signature_name_FIELD_WRITER
  mrb_define_method(mrb, Signature_class, "name=", mrb_Git_Signature_set_name, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Signature_email_FIELD_READER
  mrb_define_method(mrb, Signature_class, "email", mrb_Git_Signature_get_email, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Signature_email_FIELD_WRITER
  mrb_define_method(mrb, Signature_class, "email=", mrb_Git_Signature_set_email, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Signature_when_FIELD_READER
  mrb_define_method(mrb, Signature_class, "when", mrb_Git_Signature_get_when, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Signature_when_FIELD_WRITER
  mrb_define_method(mrb, Signature_class, "when=", mrb_Git_Signature_set_when, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signature::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signature::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signature::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
