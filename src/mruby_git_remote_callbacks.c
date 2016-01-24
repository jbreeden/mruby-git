/*
 * git_remote_callbacks
 * Defined in file remote.h @ line 374
 */

#include "mruby_Git.h"

#if BIND_RemoteCallbacks_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

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
/* sha: 74ce93e303fd150bdce74a9158eaa92abf2020fa0f58cc37216cadf066402f5f */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
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
/* sha: 572d3d95ec6dd503c138e8fceaa16f7598e4f28a6d7904feb37293b98348a73a */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
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
/* sha: 17a6a7322d0a873ef6ba806d27ebbe24e3d5007938f6fd325b461fe964db19bf */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
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
/* sha: 0596b24fae46c0e01e2440353aefc044acdf36c952bc26d8aade294ec9d4d951 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
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
/* sha: 1139043b057058f63016dec2696933faa665c5c6894dd1ed8ecda8b1c6496482 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
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
/* sha: 338a7265e3a686c2e5ca15a5bdb99d7729495969c5cfb49aaf722c71a9c236e3 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
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
/* sha: ec0f5236bb0dd53e82bbb60b6ba6b12596cf15f9a5ed9e3459d8b68b33d2b3c6 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
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
/* sha: 7b413c02ac120cb106f7d55de1f89c67cae51732fe922c093d67bbc99cb80f34 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
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
/* sha: ad779145092e34853ec12e26b931b5e3b7dba5f23775de0a8d4a045b6c6d24b2 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
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
/* sha: c78771fb53f5b44f41b658b50850a0b9c803ff86b64cbc65281a3f9f01afe1a0 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
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
/* sha: def0b5edbdf158c100686794252ab5b1e477441ea5ea28f25a034f62a7e222b4 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
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
/* sha: bf3fcf186a959fc1f0861a583227364e74534c82666024cadb2e8871884dc440 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
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
/* sha: e0f91c8afef05b7130a92fab9510b74ac1c284d8669caa9a1fba66e7765d9016 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
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
/* sha: a9f28db9b6191c377e6cc0056bc7059edfbb8ae0bf9c9131e6053b7e2455f060 */
#if BIND_RemoteCallbacks_INITIALIZE
  mrb_define_method(mrb, RemoteCallbacks_class, "initialize", mrb_Git_RemoteCallbacks_initialize, MRB_ARGS_NONE());
#endif
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
