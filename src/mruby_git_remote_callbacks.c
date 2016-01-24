/*
 * git_remote_callbacks
 * Defined in file remote.h @ line 374
 */

#include "mruby_Git.h"

#if BIND_RemoteCallbacks_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: RemoteCallbacks::initialize */
/* sha: ecc2779a23609af677b8bc436a02f788ad59b2a8db864b9de0a6cb58f69bef3f */
#if BIND_RemoteCallbacks_INITIALIZE
mrb_value
mrb_Git_RemoteCallbacks_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_remote_callbacks* native_object = (git_remote_callbacks*)calloc(1, sizeof(git_remote_callbacks));
  mruby_gift_git_remote_callbacks_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::disown */
/* sha: c67fae7e0e9f5890c3747837b3f16bdf489cf5d409e94c32a8b84546a200a386 */
mrb_value
mrb_Git_RemoteCallbacks_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::RemoteCallbacks.disown only accepts objects of type Git::RemoteCallbacks");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::belongs_to_ruby */
/* sha: 329f1569eb9976f0fd30c81e0d93fe0b6560582825d9c217a8b909893c185d3c */
mrb_value
mrb_Git_RemoteCallbacks_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::RemoteCallbacks.belongs_to_ruby only accepts objects of type Git::RemoteCallbacks");
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

/* MRUBY_BINDING: RemoteCallbacks::version_reader */
/* sha: 02dff685565fcb2947a0dc24ce20766360c35d89ddfb4778be99f4d2ba572d91 */
#if BIND_RemoteCallbacks_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_RemoteCallbacks_get_version(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::version_writer */
/* sha: d932fe8434e95ba928b148729ab4d0e33edb6f23e8e4e7fca5227ad05547c36f */
#if BIND_RemoteCallbacks_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_RemoteCallbacks_set_version(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);
  mrb_int native_version;

  mrb_get_args(mrb, "i", &native_version);

  native_self->version = native_version;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::sideband_progress_reader */
/* sha: 1718dc096bd92d84c1f8d5a00476042b2ce04ad3ed04c08ea66549bb78a85924 */
#if BIND_RemoteCallbacks_sideband_progress_FIELD_READER
/* get_sideband_progress
 *
 * Return Type: git_transport_message_cb
 */
mrb_value
mrb_Git_RemoteCallbacks_get_sideband_progress(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);

  git_transport_message_cb native_sideband_progress = native_self->sideband_progress;

  mrb_value sideband_progress = TODO_mruby_box_git_transport_message_cb(mrb, native_sideband_progress);

  return sideband_progress;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::sideband_progress_writer */
/* sha: 162e7f432633ea84077172dc11019cbcc36b2dd85acaa71e2711572ca6747f1a */
#if BIND_RemoteCallbacks_sideband_progress_FIELD_WRITER
/* set_sideband_progress
 *
 * Parameters:
 * - value: git_transport_message_cb
 */
mrb_value
mrb_Git_RemoteCallbacks_set_sideband_progress(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);
  mrb_value sideband_progress;

  mrb_get_args(mrb, "o", &sideband_progress);

  /* type checking */
  TODO_type_check_git_transport_message_cb(sideband_progress);

  git_transport_message_cb native_sideband_progress = TODO_mruby_unbox_git_transport_message_cb(sideband_progress);

  native_self->sideband_progress = native_sideband_progress;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::completion_reader */
/* sha: 6d3b8fb7ecbdd9764539dee3973f2c26ba440325ee70581d0908c4b5445fab13 */
#if BIND_RemoteCallbacks_completion_FIELD_READER
/* get_completion
 *
 * Return Type: int (*)(git_remote_completion_type, void *)
 */
mrb_value
mrb_Git_RemoteCallbacks_get_completion(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);

  int (*)(git_remote_completion_type, void *) native_completion = native_self->completion;

  mrb_value completion = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_git_remote_completion_typeCOMMA_void_PTR_RPAREN(mrb, native_completion);

  return completion;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::completion_writer */
/* sha: 994f1deb23ed4e299f417ed1a035293fc26c02889643bcb80b15db0f9866f809 */
#if BIND_RemoteCallbacks_completion_FIELD_WRITER
/* set_completion
 *
 * Parameters:
 * - value: int (*)(git_remote_completion_type, void *)
 */
mrb_value
mrb_Git_RemoteCallbacks_set_completion(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);
  mrb_value completion;

  mrb_get_args(mrb, "o", &completion);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_git_remote_completion_typeCOMMA_void_PTR_RPAREN(completion);

  int (*native_completion)(git_remote_completion_type, void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_git_remote_completion_typeCOMMA_void_PTR_RPAREN(completion);

  native_self->completion = native_completion;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::credentials_reader */
/* sha: 9d37e162448c4d7eee54087d3df475313b2a6a2c65b8e8413336cd6e672f41f8 */
#if BIND_RemoteCallbacks_credentials_FIELD_READER
/* get_credentials
 *
 * Return Type: git_cred_acquire_cb
 */
mrb_value
mrb_Git_RemoteCallbacks_get_credentials(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);

  git_cred_acquire_cb native_credentials = native_self->credentials;

  mrb_value credentials = TODO_mruby_box_git_cred_acquire_cb(mrb, native_credentials);

  return credentials;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::credentials_writer */
/* sha: 4a6f3cd385055e00f4818d1a9fbdc7ccab9f973c963758fe32442ee688048ccd */
#if BIND_RemoteCallbacks_credentials_FIELD_WRITER
/* set_credentials
 *
 * Parameters:
 * - value: git_cred_acquire_cb
 */
mrb_value
mrb_Git_RemoteCallbacks_set_credentials(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);
  mrb_value credentials;

  mrb_get_args(mrb, "o", &credentials);

  /* type checking */
  TODO_type_check_git_cred_acquire_cb(credentials);

  git_cred_acquire_cb native_credentials = TODO_mruby_unbox_git_cred_acquire_cb(credentials);

  native_self->credentials = native_credentials;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::certificate_check_reader */
/* sha: cf0bcef1f45dea05cee127a1f5cee094acac639164926ae4ba237ec7a20dc253 */
#if BIND_RemoteCallbacks_certificate_check_FIELD_READER
/* get_certificate_check
 *
 * Return Type: git_transport_certificate_check_cb
 */
mrb_value
mrb_Git_RemoteCallbacks_get_certificate_check(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);

  git_transport_certificate_check_cb native_certificate_check = native_self->certificate_check;

  mrb_value certificate_check = TODO_mruby_box_git_transport_certificate_check_cb(mrb, native_certificate_check);

  return certificate_check;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::certificate_check_writer */
/* sha: 4539133eecac0ee8eea93e6b0d3f2d4f9cb3589eb43610fb20b5b7ab064b9ba2 */
#if BIND_RemoteCallbacks_certificate_check_FIELD_WRITER
/* set_certificate_check
 *
 * Parameters:
 * - value: git_transport_certificate_check_cb
 */
mrb_value
mrb_Git_RemoteCallbacks_set_certificate_check(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);
  mrb_value certificate_check;

  mrb_get_args(mrb, "o", &certificate_check);

  /* type checking */
  TODO_type_check_git_transport_certificate_check_cb(certificate_check);

  git_transport_certificate_check_cb native_certificate_check = TODO_mruby_unbox_git_transport_certificate_check_cb(certificate_check);

  native_self->certificate_check = native_certificate_check;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::transfer_progress_reader */
/* sha: 726beb4e9371f3614b4a1eb46c2fd75d03b705328e99a2c94562a56c6fa885c5 */
#if BIND_RemoteCallbacks_transfer_progress_FIELD_READER
/* get_transfer_progress
 *
 * Return Type: git_transfer_progress_cb
 */
mrb_value
mrb_Git_RemoteCallbacks_get_transfer_progress(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);

  git_transfer_progress_cb native_transfer_progress = native_self->transfer_progress;

  mrb_value transfer_progress = TODO_mruby_box_git_transfer_progress_cb(mrb, native_transfer_progress);

  return transfer_progress;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::transfer_progress_writer */
/* sha: 3f0e70f8ac1f9be4f1b2deb78b7b69deba8c7ac603711cf147e074a577572a1f */
#if BIND_RemoteCallbacks_transfer_progress_FIELD_WRITER
/* set_transfer_progress
 *
 * Parameters:
 * - value: git_transfer_progress_cb
 */
mrb_value
mrb_Git_RemoteCallbacks_set_transfer_progress(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);
  mrb_value transfer_progress;

  mrb_get_args(mrb, "o", &transfer_progress);

  /* type checking */
  TODO_type_check_git_transfer_progress_cb(transfer_progress);

  git_transfer_progress_cb native_transfer_progress = TODO_mruby_unbox_git_transfer_progress_cb(transfer_progress);

  native_self->transfer_progress = native_transfer_progress;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::update_tips_reader */
/* sha: f903592b9e1f359e02f789f4716ae204b210616c404a23c64486fe5b944a59a3 */
#if BIND_RemoteCallbacks_update_tips_FIELD_READER
/* get_update_tips
 *
 * Return Type: int (*)(const char *, const git_oid *, const git_oid *, void *)
 */
mrb_value
mrb_Git_RemoteCallbacks_get_update_tips(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);

  int (*)(const char *, const git_oid *, const git_oid *, void *) native_update_tips = native_self->update_tips;

  mrb_value update_tips = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_char_PTR_COMMA_const_git_oid_PTR_COMMA_const_git_oid_PTR_COMMA_void_PTR_RPAREN(mrb, native_update_tips);

  return update_tips;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::update_tips_writer */
/* sha: 0c059e480d6fc2b0ef98aa8f103e930e86de598d3d46807962d405ba42ddb0af */
#if BIND_RemoteCallbacks_update_tips_FIELD_WRITER
/* set_update_tips
 *
 * Parameters:
 * - value: int (*)(const char *, const git_oid *, const git_oid *, void *)
 */
mrb_value
mrb_Git_RemoteCallbacks_set_update_tips(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);
  mrb_value update_tips;

  mrb_get_args(mrb, "o", &update_tips);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_char_PTR_COMMA_const_git_oid_PTR_COMMA_const_git_oid_PTR_COMMA_void_PTR_RPAREN(update_tips);

  int (*native_update_tips)(const char *, const git_oid *, const git_oid *, void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_char_PTR_COMMA_const_git_oid_PTR_COMMA_const_git_oid_PTR_COMMA_void_PTR_RPAREN(update_tips);

  native_self->update_tips = native_update_tips;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::pack_progress_reader */
/* sha: 358a34c80f1a572c48e9301e68030b3281f3c5085050407e03c0b0fb25df0dde */
#if BIND_RemoteCallbacks_pack_progress_FIELD_READER
/* get_pack_progress
 *
 * Return Type: git_packbuilder_progress
 */
mrb_value
mrb_Git_RemoteCallbacks_get_pack_progress(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);

  git_packbuilder_progress native_pack_progress = native_self->pack_progress;

  mrb_value pack_progress = TODO_mruby_box_git_packbuilder_progress(mrb, native_pack_progress);

  return pack_progress;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::pack_progress_writer */
/* sha: b029e097d37b330c61db911ebba3361a7b32deb5cf41672b0725f8a67ad7ddd8 */
#if BIND_RemoteCallbacks_pack_progress_FIELD_WRITER
/* set_pack_progress
 *
 * Parameters:
 * - value: git_packbuilder_progress
 */
mrb_value
mrb_Git_RemoteCallbacks_set_pack_progress(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);
  mrb_value pack_progress;

  mrb_get_args(mrb, "o", &pack_progress);

  /* type checking */
  TODO_type_check_git_packbuilder_progress(pack_progress);

  git_packbuilder_progress native_pack_progress = TODO_mruby_unbox_git_packbuilder_progress(pack_progress);

  native_self->pack_progress = native_pack_progress;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::push_transfer_progress_reader */
/* sha: a795b4bc54d809f6e2d45a9765eb0e364d832dcfa5835486bc635b813b2508fb */
#if BIND_RemoteCallbacks_push_transfer_progress_FIELD_READER
/* get_push_transfer_progress
 *
 * Return Type: git_push_transfer_progress
 */
mrb_value
mrb_Git_RemoteCallbacks_get_push_transfer_progress(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);

  git_push_transfer_progress native_push_transfer_progress = native_self->push_transfer_progress;

  mrb_value push_transfer_progress = TODO_mruby_box_git_push_transfer_progress(mrb, native_push_transfer_progress);

  return push_transfer_progress;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::push_transfer_progress_writer */
/* sha: cf9fa44860e86cf1110727e0ba737de0b7b197f604ea32c992177f500745ab19 */
#if BIND_RemoteCallbacks_push_transfer_progress_FIELD_WRITER
/* set_push_transfer_progress
 *
 * Parameters:
 * - value: git_push_transfer_progress
 */
mrb_value
mrb_Git_RemoteCallbacks_set_push_transfer_progress(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);
  mrb_value push_transfer_progress;

  mrb_get_args(mrb, "o", &push_transfer_progress);

  /* type checking */
  TODO_type_check_git_push_transfer_progress(push_transfer_progress);

  git_push_transfer_progress native_push_transfer_progress = TODO_mruby_unbox_git_push_transfer_progress(push_transfer_progress);

  native_self->push_transfer_progress = native_push_transfer_progress;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::push_update_reference_reader */
/* sha: 0b2d390dd0c2f44032a12f7f33cd733cc5b31e1db9fc381919207a17bcc26cd0 */
#if BIND_RemoteCallbacks_push_update_reference_FIELD_READER
/* get_push_update_reference
 *
 * Return Type: int (*)(const char *, const char *, void *)
 */
mrb_value
mrb_Git_RemoteCallbacks_get_push_update_reference(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);

  int (*)(const char *, const char *, void *) native_push_update_reference = native_self->push_update_reference;

  mrb_value push_update_reference = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_char_PTR_COMMA_const_char_PTR_COMMA_void_PTR_RPAREN(mrb, native_push_update_reference);

  return push_update_reference;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::push_update_reference_writer */
/* sha: a899d4e25ba754f7c16e57dc813e1de44fe07e96d3c09ce56f542f40b9637980 */
#if BIND_RemoteCallbacks_push_update_reference_FIELD_WRITER
/* set_push_update_reference
 *
 * Parameters:
 * - value: int (*)(const char *, const char *, void *)
 */
mrb_value
mrb_Git_RemoteCallbacks_set_push_update_reference(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);
  mrb_value push_update_reference;

  mrb_get_args(mrb, "o", &push_update_reference);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_char_PTR_COMMA_const_char_PTR_COMMA_void_PTR_RPAREN(push_update_reference);

  int (*native_push_update_reference)(const char *, const char *, void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_char_PTR_COMMA_const_char_PTR_COMMA_void_PTR_RPAREN(push_update_reference);

  native_self->push_update_reference = native_push_update_reference;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::push_negotiation_reader */
/* sha: ff4b278bceb0963bda1012d32ea4a6ccf62ca4a615933afbaad6896c2c9da562 */
#if BIND_RemoteCallbacks_push_negotiation_FIELD_READER
/* get_push_negotiation
 *
 * Return Type: git_push_negotiation
 */
mrb_value
mrb_Git_RemoteCallbacks_get_push_negotiation(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);

  git_push_negotiation native_push_negotiation = native_self->push_negotiation;

  mrb_value push_negotiation = TODO_mruby_box_git_push_negotiation(mrb, native_push_negotiation);

  return push_negotiation;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::push_negotiation_writer */
/* sha: 66214906629445c11ca53f869ac3226c1b73194dd8aafa035e369e73c6eab831 */
#if BIND_RemoteCallbacks_push_negotiation_FIELD_WRITER
/* set_push_negotiation
 *
 * Parameters:
 * - value: git_push_negotiation
 */
mrb_value
mrb_Git_RemoteCallbacks_set_push_negotiation(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);
  mrb_value push_negotiation;

  mrb_get_args(mrb, "o", &push_negotiation);

  /* type checking */
  TODO_type_check_git_push_negotiation(push_negotiation);

  git_push_negotiation native_push_negotiation = TODO_mruby_unbox_git_push_negotiation(push_negotiation);

  native_self->push_negotiation = native_push_negotiation;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::transport_reader */
/* sha: 23bfa4205c10e8cac7018e73be41878d592cc634b026ab33640d0823f296781a */
#if BIND_RemoteCallbacks_transport_FIELD_READER
/* get_transport
 *
 * Return Type: git_transport_cb
 */
mrb_value
mrb_Git_RemoteCallbacks_get_transport(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);

  git_transport_cb native_transport = native_self->transport;

  mrb_value transport = TODO_mruby_box_git_transport_cb(mrb, native_transport);

  return transport;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::transport_writer */
/* sha: 43de6ed18c49c9d101219cc71feb9199d3828c947e1c4f450d14bf517ee95724 */
#if BIND_RemoteCallbacks_transport_FIELD_WRITER
/* set_transport
 *
 * Parameters:
 * - value: git_transport_cb
 */
mrb_value
mrb_Git_RemoteCallbacks_set_transport(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);
  mrb_value transport;

  mrb_get_args(mrb, "o", &transport);

  /* type checking */
  TODO_type_check_git_transport_cb(transport);

  git_transport_cb native_transport = TODO_mruby_unbox_git_transport_cb(transport);

  native_self->transport = native_transport;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::payload_reader */
/* sha: 845947e185965dbe824822cc3f51d30d32d76ce533aebcab353cf785ee117424 */
#if BIND_RemoteCallbacks_payload_FIELD_READER
/* get_payload
 *
 * Return Type: void *
 */
mrb_value
mrb_Git_RemoteCallbacks_get_payload(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);

  void * native_payload = native_self->payload;

  mrb_value payload = TODO_mruby_box_void_PTR(mrb, native_payload);

  return payload;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::payload_writer */
/* sha: 572651d1afdb6ccc1e5d84d8bce08610af6f877dbec075f2a525bf5fe53ec1ef */
#if BIND_RemoteCallbacks_payload_FIELD_WRITER
/* set_payload
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_Git_RemoteCallbacks_set_payload(mrb_state* mrb, mrb_value self) {
  git_remote_callbacks * native_self = mruby_unbox_git_remote_callbacks(self);
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


void mrb_Git_RemoteCallbacks_init(mrb_state* mrb) {
/* MRUBY_BINDING: RemoteCallbacks::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::class_definition */
/* sha: 73dd292c8bf577258fa23406220e02c3cf7b7bfd3d312655c8b03b328856256b */
  struct RClass* RemoteCallbacks_class = mrb_define_class_under(mrb, Git_module(mrb), "RemoteCallbacks", mrb->object_class);
  MRB_SET_INSTANCE_TT(RemoteCallbacks_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::class_method_definitions */
/* sha: fd548cfa8b20f3d3f328625ecb67ec0076cf5fb33e2af87db89fd4dc61b98d9c */
#if BIND_RemoteCallbacks_INITIALIZE
  mrb_define_method(mrb, RemoteCallbacks_class, "initialize", mrb_Git_RemoteCallbacks_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, RemoteCallbacks_class, "disown", mrb_Git_RemoteCallbacks_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, RemoteCallbacks_class, "belongs_to_ruby?", mrb_Git_RemoteCallbacks_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::attr_definitions */
/* sha: 194049d2896882319366c76c0c8285e36f0da99d9a769520b30e96c3c487006b */
  /*
   * Fields
   */
#if BIND_RemoteCallbacks_version_FIELD_READER
  mrb_define_method(mrb, RemoteCallbacks_class, "version", mrb_Git_RemoteCallbacks_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RemoteCallbacks_version_FIELD_WRITER
  mrb_define_method(mrb, RemoteCallbacks_class, "version=", mrb_Git_RemoteCallbacks_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RemoteCallbacks_sideband_progress_FIELD_READER
  mrb_define_method(mrb, RemoteCallbacks_class, "sideband_progress", mrb_Git_RemoteCallbacks_get_sideband_progress, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RemoteCallbacks_sideband_progress_FIELD_WRITER
  mrb_define_method(mrb, RemoteCallbacks_class, "sideband_progress=", mrb_Git_RemoteCallbacks_set_sideband_progress, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RemoteCallbacks_completion_FIELD_READER
  mrb_define_method(mrb, RemoteCallbacks_class, "completion", mrb_Git_RemoteCallbacks_get_completion, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RemoteCallbacks_completion_FIELD_WRITER
  mrb_define_method(mrb, RemoteCallbacks_class, "completion=", mrb_Git_RemoteCallbacks_set_completion, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RemoteCallbacks_credentials_FIELD_READER
  mrb_define_method(mrb, RemoteCallbacks_class, "credentials", mrb_Git_RemoteCallbacks_get_credentials, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RemoteCallbacks_credentials_FIELD_WRITER
  mrb_define_method(mrb, RemoteCallbacks_class, "credentials=", mrb_Git_RemoteCallbacks_set_credentials, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RemoteCallbacks_certificate_check_FIELD_READER
  mrb_define_method(mrb, RemoteCallbacks_class, "certificate_check", mrb_Git_RemoteCallbacks_get_certificate_check, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RemoteCallbacks_certificate_check_FIELD_WRITER
  mrb_define_method(mrb, RemoteCallbacks_class, "certificate_check=", mrb_Git_RemoteCallbacks_set_certificate_check, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RemoteCallbacks_transfer_progress_FIELD_READER
  mrb_define_method(mrb, RemoteCallbacks_class, "transfer_progress", mrb_Git_RemoteCallbacks_get_transfer_progress, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RemoteCallbacks_transfer_progress_FIELD_WRITER
  mrb_define_method(mrb, RemoteCallbacks_class, "transfer_progress=", mrb_Git_RemoteCallbacks_set_transfer_progress, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RemoteCallbacks_update_tips_FIELD_READER
  mrb_define_method(mrb, RemoteCallbacks_class, "update_tips", mrb_Git_RemoteCallbacks_get_update_tips, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RemoteCallbacks_update_tips_FIELD_WRITER
  mrb_define_method(mrb, RemoteCallbacks_class, "update_tips=", mrb_Git_RemoteCallbacks_set_update_tips, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RemoteCallbacks_pack_progress_FIELD_READER
  mrb_define_method(mrb, RemoteCallbacks_class, "pack_progress", mrb_Git_RemoteCallbacks_get_pack_progress, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RemoteCallbacks_pack_progress_FIELD_WRITER
  mrb_define_method(mrb, RemoteCallbacks_class, "pack_progress=", mrb_Git_RemoteCallbacks_set_pack_progress, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RemoteCallbacks_push_transfer_progress_FIELD_READER
  mrb_define_method(mrb, RemoteCallbacks_class, "push_transfer_progress", mrb_Git_RemoteCallbacks_get_push_transfer_progress, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RemoteCallbacks_push_transfer_progress_FIELD_WRITER
  mrb_define_method(mrb, RemoteCallbacks_class, "push_transfer_progress=", mrb_Git_RemoteCallbacks_set_push_transfer_progress, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RemoteCallbacks_push_update_reference_FIELD_READER
  mrb_define_method(mrb, RemoteCallbacks_class, "push_update_reference", mrb_Git_RemoteCallbacks_get_push_update_reference, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RemoteCallbacks_push_update_reference_FIELD_WRITER
  mrb_define_method(mrb, RemoteCallbacks_class, "push_update_reference=", mrb_Git_RemoteCallbacks_set_push_update_reference, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RemoteCallbacks_push_negotiation_FIELD_READER
  mrb_define_method(mrb, RemoteCallbacks_class, "push_negotiation", mrb_Git_RemoteCallbacks_get_push_negotiation, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RemoteCallbacks_push_negotiation_FIELD_WRITER
  mrb_define_method(mrb, RemoteCallbacks_class, "push_negotiation=", mrb_Git_RemoteCallbacks_set_push_negotiation, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RemoteCallbacks_transport_FIELD_READER
  mrb_define_method(mrb, RemoteCallbacks_class, "transport", mrb_Git_RemoteCallbacks_get_transport, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RemoteCallbacks_transport_FIELD_WRITER
  mrb_define_method(mrb, RemoteCallbacks_class, "transport=", mrb_Git_RemoteCallbacks_set_transport, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RemoteCallbacks_payload_FIELD_READER
  mrb_define_method(mrb, RemoteCallbacks_class, "payload", mrb_Git_RemoteCallbacks_get_payload, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RemoteCallbacks_payload_FIELD_WRITER
  mrb_define_method(mrb, RemoteCallbacks_class, "payload=", mrb_Git_RemoteCallbacks_set_payload, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
