/*
 * git_odb_stream
 * Defined in file odb_backend.h @ line 84
 */

#include "mruby_Git.h"

#if BIND_OdbStream_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::initialize */
/* sha: 80e8167378fe185ee03f81ceb84d5fc89077ebb5cfec34ae354d0cf08bdba067 */
#if BIND_OdbStream_INITIALIZE
mrb_value
mrb_Git_OdbStream_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_odb_stream* native_object = (git_odb_stream*)calloc(1, sizeof(git_odb_stream));
  mruby_gift_git_odb_stream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: OdbStream::backend_reader */
/* sha: 7c7d5ac45ba7864ea51eb908f8b622cd69f3deb301c6600345f9659124d3c9c1 */
#if BIND_OdbStream_backend_FIELD_READER
/* get_backend
 *
 * Return Type: git_odb_backend *
 */
mrb_value
mrb_Git_OdbStream_get_backend(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_self = mruby_unbox_git_odb_stream(self);

  git_odb_backend * native_backend = native_self->backend;

  mrb_value backend = (native_backend == NULL ? mrb_nil_value() : mruby_box_git_odb_backend(mrb, native_backend));

  return backend;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::backend_writer */
/* sha: b07688451952e8770cf03fd438a11b0249e62f0d2438eec856f1d86bd82f417f */
#if BIND_OdbStream_backend_FIELD_WRITER
/* set_backend
 *
 * Parameters:
 * - value: git_odb_backend *
 */
mrb_value
mrb_Git_OdbStream_set_backend(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_self = mruby_unbox_git_odb_stream(self);
  mrb_value backend;

  mrb_get_args(mrb, "o", &backend);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, backend, OdbBackend_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "OdbBackend expected");
    return mrb_nil_value();
  }

  git_odb_backend * native_backend = (mrb_nil_p(backend) ? NULL : mruby_unbox_git_odb_backend(backend));

  native_self->backend = native_backend;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::mode_reader */
/* sha: 4bb40ee636c844a5173291e24e32e4b37024b1b3b3c06a66e0e00c0231551dc6 */
#if BIND_OdbStream_mode_FIELD_READER
/* get_mode
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_OdbStream_get_mode(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_self = mruby_unbox_git_odb_stream(self);

  unsigned int native_mode = native_self->mode;

  mrb_value mode = mrb_fixnum_value(native_mode);

  return mode;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::mode_writer */
/* sha: 86b9bfd877ebed1d39108aba5dae5cafb16d6ef6a42c58a160db8a9e4834405d */
#if BIND_OdbStream_mode_FIELD_WRITER
/* set_mode
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_OdbStream_set_mode(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_self = mruby_unbox_git_odb_stream(self);
  mrb_int native_mode;

  mrb_get_args(mrb, "i", &native_mode);

  native_self->mode = native_mode;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::hash_ctx_reader */
/* sha: c86ce797ae26c0252363f0c28edea6b7549776244b8edfee8487dce1cc008c81 */
#if BIND_OdbStream_hash_ctx_FIELD_READER
/* get_hash_ctx
 *
 * Return Type: void *
 */
mrb_value
mrb_Git_OdbStream_get_hash_ctx(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_self = mruby_unbox_git_odb_stream(self);

  void * native_hash_ctx = native_self->hash_ctx;

  mrb_value hash_ctx = TODO_mruby_box_void_PTR(mrb, native_hash_ctx);

  return hash_ctx;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::hash_ctx_writer */
/* sha: 33a710edcdff968b4358f43b138958258b0aab2f9665209f2f1a91330e31eb9a */
#if BIND_OdbStream_hash_ctx_FIELD_WRITER
/* set_hash_ctx
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_Git_OdbStream_set_hash_ctx(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_self = mruby_unbox_git_odb_stream(self);
  mrb_value hash_ctx;

  mrb_get_args(mrb, "o", &hash_ctx);

  /* type checking */
  TODO_type_check_void_PTR(hash_ctx);

  void * native_hash_ctx = TODO_mruby_unbox_void_PTR(hash_ctx);

  native_self->hash_ctx = native_hash_ctx;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::declared_size_reader */
/* sha: 094d123dae8f8f1f39e95fd6e5f57c184d5250ddad484266c6745755a43d46fb */
#if BIND_OdbStream_declared_size_FIELD_READER
/* get_declared_size
 *
 * Return Type: git_off_t
 */
mrb_value
mrb_Git_OdbStream_get_declared_size(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_self = mruby_unbox_git_odb_stream(self);

  git_off_t native_declared_size = native_self->declared_size;

  mrb_value declared_size = mrb_fixnum_value(native_declared_size);

  return declared_size;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::declared_size_writer */
/* sha: 23913a133365ea48d64ede3245c606dc1d86a6577b886f3ae69396181c3a0f04 */
#if BIND_OdbStream_declared_size_FIELD_WRITER
/* set_declared_size
 *
 * Parameters:
 * - value: git_off_t
 */
mrb_value
mrb_Git_OdbStream_set_declared_size(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_self = mruby_unbox_git_odb_stream(self);
  mrb_int native_declared_size;

  mrb_get_args(mrb, "i", &native_declared_size);

  native_self->declared_size = native_declared_size;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::received_bytes_reader */
/* sha: 758a9f45958fe7ec7305f361460c86a3564a93cd17537a498ff03254f2b99161 */
#if BIND_OdbStream_received_bytes_FIELD_READER
/* get_received_bytes
 *
 * Return Type: git_off_t
 */
mrb_value
mrb_Git_OdbStream_get_received_bytes(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_self = mruby_unbox_git_odb_stream(self);

  git_off_t native_received_bytes = native_self->received_bytes;

  mrb_value received_bytes = mrb_fixnum_value(native_received_bytes);

  return received_bytes;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::received_bytes_writer */
/* sha: 0cf324bf9e51670d9fc98b7229c44ff808810d4e060ddee58db46452217cb917 */
#if BIND_OdbStream_received_bytes_FIELD_WRITER
/* set_received_bytes
 *
 * Parameters:
 * - value: git_off_t
 */
mrb_value
mrb_Git_OdbStream_set_received_bytes(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_self = mruby_unbox_git_odb_stream(self);
  mrb_int native_received_bytes;

  mrb_get_args(mrb, "i", &native_received_bytes);

  native_self->received_bytes = native_received_bytes;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::read_reader */
/* sha: ed0b19620506dbdf48485a4c212fd75c535f7e861f6eb042a86390a4345cea1c */
#if BIND_OdbStream_read_FIELD_READER
/* get_read
 *
 * Return Type: int (*)(git_odb_stream *, char *, size_t)
 */
mrb_value
mrb_Git_OdbStream_get_read(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_self = mruby_unbox_git_odb_stream(self);

  int (*)(git_odb_stream *, char *, size_t) native_read = native_self->read;

  mrb_value read = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_git_odb_stream_PTR_COMMA_char_PTR_COMMA_size_t_RPAREN(mrb, native_read);

  return read;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::read_writer */
/* sha: 5be92caeae164e053364320c1e2486d351d443c94bd0e1a68f862af138115927 */
#if BIND_OdbStream_read_FIELD_WRITER
/* set_read
 *
 * Parameters:
 * - value: int (*)(git_odb_stream *, char *, size_t)
 */
mrb_value
mrb_Git_OdbStream_set_read(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_self = mruby_unbox_git_odb_stream(self);
  mrb_value read;

  mrb_get_args(mrb, "o", &read);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_git_odb_stream_PTR_COMMA_char_PTR_COMMA_size_t_RPAREN(read);

  int (*native_read)(git_odb_stream *, char *, size_t) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_git_odb_stream_PTR_COMMA_char_PTR_COMMA_size_t_RPAREN(read);

  native_self->read = native_read;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::write_reader */
/* sha: b685a5feb911165c183b7fcc74df5c2a1a4262e9bcc1021004704f6af60d5c2e */
#if BIND_OdbStream_write_FIELD_READER
/* get_write
 *
 * Return Type: int (*)(git_odb_stream *, const char *, size_t)
 */
mrb_value
mrb_Git_OdbStream_get_write(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_self = mruby_unbox_git_odb_stream(self);

  int (*)(git_odb_stream *, const char *, size_t) native_write = native_self->write;

  mrb_value write = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_git_odb_stream_PTR_COMMAchar_PTR_COMMA_size_t_RPAREN(mrb, native_write);

  return write;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::write_writer */
/* sha: 3acc1bdd6af67930b695fc20f07ce641f4b50357ae420547b7e0c2aaa4538e44 */
#if BIND_OdbStream_write_FIELD_WRITER
/* set_write
 *
 * Parameters:
 * - value: int (*)(git_odb_stream *, const char *, size_t)
 */
mrb_value
mrb_Git_OdbStream_set_write(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_self = mruby_unbox_git_odb_stream(self);
  mrb_value write;

  mrb_get_args(mrb, "o", &write);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_git_odb_stream_PTR_COMMAchar_PTR_COMMA_size_t_RPAREN(write);

  int (*native_write)(git_odb_stream *, const char *, size_t) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_git_odb_stream_PTR_COMMAchar_PTR_COMMA_size_t_RPAREN(write);

  native_self->write = native_write;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::finalize_write_reader */
/* sha: bbf52925a8acebbdd112e456a817ec8ce9491e726734a3ed114c4cae8e9f38b5 */
#if BIND_OdbStream_finalize_write_FIELD_READER
/* get_finalize_write
 *
 * Return Type: int (*)(git_odb_stream *, const int *)
 */
mrb_value
mrb_Git_OdbStream_get_finalize_write(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_self = mruby_unbox_git_odb_stream(self);

  int (*)(git_odb_stream *, const int *) native_finalize_write = native_self->finalize_write;

  mrb_value finalize_write = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_git_odb_stream_PTR_COMMAint_PTR_RPAREN(mrb, native_finalize_write);

  return finalize_write;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::finalize_write_writer */
/* sha: 65b2f6ddb4f32fab8729b9e53ebcdbbae1896f0188a2a2e7bf06e3683aeea114 */
#if BIND_OdbStream_finalize_write_FIELD_WRITER
/* set_finalize_write
 *
 * Parameters:
 * - value: int (*)(git_odb_stream *, const int *)
 */
mrb_value
mrb_Git_OdbStream_set_finalize_write(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_self = mruby_unbox_git_odb_stream(self);
  mrb_value finalize_write;

  mrb_get_args(mrb, "o", &finalize_write);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_git_odb_stream_PTR_COMMAint_PTR_RPAREN(finalize_write);

  int (*native_finalize_write)(git_odb_stream *, const int *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_git_odb_stream_PTR_COMMAint_PTR_RPAREN(finalize_write);

  native_self->finalize_write = native_finalize_write;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::free_reader */
/* sha: 41b05dc7a74f746e47ea62ee8aef2e958fd019926601577dd32429046de7d5a4 */
#if BIND_OdbStream_free_FIELD_READER
/* get_free
 *
 * Return Type: void (*)(git_odb_stream *)
 */
mrb_value
mrb_Git_OdbStream_get_free(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_self = mruby_unbox_git_odb_stream(self);

  void (*)(git_odb_stream *) native_free = native_self->free;

  mrb_value free = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_git_odb_stream_PTR_RPAREN(mrb, native_free);

  return free;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::free_writer */
/* sha: 14d605f06f4c1f95fd3c2f1f60b6563d8570f0aa48bd9ea3dab437d0b027b7d6 */
#if BIND_OdbStream_free_FIELD_WRITER
/* set_free
 *
 * Parameters:
 * - value: void (*)(git_odb_stream *)
 */
mrb_value
mrb_Git_OdbStream_set_free(mrb_state* mrb, mrb_value self) {
  git_odb_stream * native_self = mruby_unbox_git_odb_stream(self);
  mrb_value free;

  mrb_get_args(mrb, "o", &free);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_git_odb_stream_PTR_RPAREN(free);

  void (*native_free)(git_odb_stream *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_git_odb_stream_PTR_RPAREN(free);

  native_self->free = native_free;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_OdbStream_init(mrb_state* mrb) {
/* MRUBY_BINDING: OdbStream::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::class_definition */
/* sha: 2ab3cc75be6afd56cac6edfa676e77e2a01c51639eb69477af35ef438b1cc68e */
  struct RClass* OdbStream_class = mrb_define_class_under(mrb, Git_module(mrb), "OdbStream", mrb->object_class);
  MRB_SET_INSTANCE_TT(OdbStream_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::class_method_definitions */
/* sha: 8732b40c5d1b19b6a8a40bad826460f98bb2640c034a237eb7c059b102461228 */
#if BIND_OdbStream_INITIALIZE
  mrb_define_method(mrb, OdbStream_class, "initialize", mrb_Git_OdbStream_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::attr_definitions */
/* sha: 16a6c82e77e6ca135251baf7da9cb43c8e46f47df62f1c54ec1f0d68343fdf6b */
  /*
   * Fields
   */
#if BIND_OdbStream_backend_FIELD_READER
  mrb_define_method(mrb, OdbStream_class, "backend", mrb_Git_OdbStream_get_backend, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_OdbStream_backend_FIELD_WRITER
  mrb_define_method(mrb, OdbStream_class, "backend=", mrb_Git_OdbStream_set_backend, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_OdbStream_mode_FIELD_READER
  mrb_define_method(mrb, OdbStream_class, "mode", mrb_Git_OdbStream_get_mode, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_OdbStream_mode_FIELD_WRITER
  mrb_define_method(mrb, OdbStream_class, "mode=", mrb_Git_OdbStream_set_mode, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_OdbStream_hash_ctx_FIELD_READER
  mrb_define_method(mrb, OdbStream_class, "hash_ctx", mrb_Git_OdbStream_get_hash_ctx, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_OdbStream_hash_ctx_FIELD_WRITER
  mrb_define_method(mrb, OdbStream_class, "hash_ctx=", mrb_Git_OdbStream_set_hash_ctx, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_OdbStream_declared_size_FIELD_READER
  mrb_define_method(mrb, OdbStream_class, "declared_size", mrb_Git_OdbStream_get_declared_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_OdbStream_declared_size_FIELD_WRITER
  mrb_define_method(mrb, OdbStream_class, "declared_size=", mrb_Git_OdbStream_set_declared_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_OdbStream_received_bytes_FIELD_READER
  mrb_define_method(mrb, OdbStream_class, "received_bytes", mrb_Git_OdbStream_get_received_bytes, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_OdbStream_received_bytes_FIELD_WRITER
  mrb_define_method(mrb, OdbStream_class, "received_bytes=", mrb_Git_OdbStream_set_received_bytes, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_OdbStream_read_FIELD_READER
  mrb_define_method(mrb, OdbStream_class, "read", mrb_Git_OdbStream_get_read, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_OdbStream_read_FIELD_WRITER
  mrb_define_method(mrb, OdbStream_class, "read=", mrb_Git_OdbStream_set_read, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_OdbStream_write_FIELD_READER
  mrb_define_method(mrb, OdbStream_class, "write", mrb_Git_OdbStream_get_write, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_OdbStream_write_FIELD_WRITER
  mrb_define_method(mrb, OdbStream_class, "write=", mrb_Git_OdbStream_set_write, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_OdbStream_finalize_write_FIELD_READER
  mrb_define_method(mrb, OdbStream_class, "finalize_write", mrb_Git_OdbStream_get_finalize_write, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_OdbStream_finalize_write_FIELD_WRITER
  mrb_define_method(mrb, OdbStream_class, "finalize_write=", mrb_Git_OdbStream_set_finalize_write, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_OdbStream_free_FIELD_READER
  mrb_define_method(mrb, OdbStream_class, "free", mrb_Git_OdbStream_get_free, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_OdbStream_free_FIELD_WRITER
  mrb_define_method(mrb, OdbStream_class, "free=", mrb_Git_OdbStream_set_free, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
