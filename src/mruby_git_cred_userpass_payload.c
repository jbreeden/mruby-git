/*
 * git_cred_userpass_payload
 * Defined in file cred_helpers.h @ line 24
 */

#include "mruby_Git.h"

#if BIND_CredUserpassPayload_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: CredUserpassPayload::initialize */
/* sha: 826940cac8bf3eb9ed577b50d392c899c4e8b8dc5f5151847c9eabd143cebd82 */
#if BIND_CredUserpassPayload_INITIALIZE
mrb_value
mrb_Git_CredUserpassPayload_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_cred_userpass_payload* native_object = (git_cred_userpass_payload*)calloc(1, sizeof(git_cred_userpass_payload));
  mruby_gift_git_cred_userpass_payload_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPayload::disown */
/* sha: e79bbfd997d852abfcc7a6850fe6da7e89f2e34f6fd08ee9a6b1faa486c22cf5 */
mrb_value
mrb_Git_CredUserpassPayload_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::CredUserpassPayload.disown only accepts objects of type Git::CredUserpassPayload");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPayload::belongs_to_ruby */
/* sha: 963a562844f1cce1501ca53d9edbbb74902cc1147d17e9da93bac905bd14e004 */
mrb_value
mrb_Git_CredUserpassPayload_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::CredUserpassPayload.belongs_to_ruby only accepts objects of type Git::CredUserpassPayload");
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

/* MRUBY_BINDING: CredUserpassPayload::username_reader */
/* sha: dc277347d043d328e5c52f4696571b584691505a7f524b8a05d3af7b336a8cdf */
#if BIND_CredUserpassPayload_username_FIELD_READER
/* get_username
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_CredUserpassPayload_get_username(mrb_state* mrb, mrb_value self) {
  git_cred_userpass_payload * native_self = mruby_unbox_git_cred_userpass_payload(self);

  const char * native_username = native_self->username;

  mrb_value username = native_username == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_username);

  return username;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPayload::username_writer */
/* sha: 497598d43448598dbe89b4b81432ec6e1d146c42ca1df2aadecacf12ff50d162 */
#if BIND_CredUserpassPayload_username_FIELD_WRITER
/* set_username
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_CredUserpassPayload_set_username(mrb_state* mrb, mrb_value self) {
  git_cred_userpass_payload * native_self = mruby_unbox_git_cred_userpass_payload(self);
  char * native_username = NULL;

  mrb_get_args(mrb, "z", &native_username);

  native_self->username = native_username;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPayload::password_reader */
/* sha: 93982cf54abca0113df93a574957989134432e5251e828fa63998cbcabf53b77 */
#if BIND_CredUserpassPayload_password_FIELD_READER
/* get_password
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_CredUserpassPayload_get_password(mrb_state* mrb, mrb_value self) {
  git_cred_userpass_payload * native_self = mruby_unbox_git_cred_userpass_payload(self);

  const char * native_password = native_self->password;

  mrb_value password = native_password == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_password);

  return password;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPayload::password_writer */
/* sha: 38cda5ac218a7ba7513b322aa9ecb609949f0f2b04eadcad5886fec9ed92ef36 */
#if BIND_CredUserpassPayload_password_FIELD_WRITER
/* set_password
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_CredUserpassPayload_set_password(mrb_state* mrb, mrb_value self) {
  git_cred_userpass_payload * native_self = mruby_unbox_git_cred_userpass_payload(self);
  char * native_password = NULL;

  mrb_get_args(mrb, "z", &native_password);

  native_self->password = native_password;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_CredUserpassPayload_init(mrb_state* mrb) {
/* MRUBY_BINDING: CredUserpassPayload::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPayload::class_definition */
/* sha: 7e1debccf5e6fa4da854b18abe4f4dc6ff598eab21d3a29d5c76281b6b6042c2 */
  struct RClass* CredUserpassPayload_class = mrb_define_class_under(mrb, Git_module(mrb), "CredUserpassPayload", mrb->object_class);
  MRB_SET_INSTANCE_TT(CredUserpassPayload_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPayload::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPayload::class_method_definitions */
/* sha: ba918087d42d6c464534f69093cda8cc2b6bf8a57c80dc3a00816a39771b0024 */
#if BIND_CredUserpassPayload_INITIALIZE
  mrb_define_method(mrb, CredUserpassPayload_class, "initialize", mrb_Git_CredUserpassPayload_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, CredUserpassPayload_class, "disown", mrb_Git_CredUserpassPayload_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, CredUserpassPayload_class, "belongs_to_ruby?", mrb_Git_CredUserpassPayload_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPayload::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPayload::attr_definitions */
/* sha: b61d00751ecda989977f133ff5aca92d83e46446e223d9a6462e5f20086949c3 */
  /*
   * Fields
   */
#if BIND_CredUserpassPayload_username_FIELD_READER
  mrb_define_method(mrb, CredUserpassPayload_class, "username", mrb_Git_CredUserpassPayload_get_username, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredUserpassPayload_username_FIELD_WRITER
  mrb_define_method(mrb, CredUserpassPayload_class, "username=", mrb_Git_CredUserpassPayload_set_username, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CredUserpassPayload_password_FIELD_READER
  mrb_define_method(mrb, CredUserpassPayload_class, "password", mrb_Git_CredUserpassPayload_get_password, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CredUserpassPayload_password_FIELD_WRITER
  mrb_define_method(mrb, CredUserpassPayload_class, "password=", mrb_Git_CredUserpassPayload_set_password, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPayload::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPayload::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPayload::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
