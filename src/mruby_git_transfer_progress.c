/*
 * git_transfer_progress
 * Defined in file types.h @ line 253
 */

#include "mruby_Git.h"

#if BIND_TransferProgress_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::initialize */
/* sha: bfd5800aabaac9a5156ee591a5baf6b488ba63f7704fd7e68a0fc2c2adbf213c */
#if BIND_TransferProgress_INITIALIZE
mrb_value
mrb_Git_TransferProgress_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_transfer_progress* native_object = (git_transfer_progress*)calloc(1, sizeof(git_transfer_progress));
  mruby_gift_git_transfer_progress_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: TransferProgress::total_objects_reader */
/* sha: 3263b623fc8b5667667077ed8e6adced081a09a5520b415286673dc01cdf86d5 */
#if BIND_TransferProgress_total_objects_FIELD_READER
/* get_total_objects
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_TransferProgress_get_total_objects(mrb_state* mrb, mrb_value self) {
  git_transfer_progress * native_self = mruby_unbox_git_transfer_progress(self);

  unsigned int native_total_objects = native_self->total_objects;

  mrb_value total_objects = mrb_fixnum_value(native_total_objects);

  return total_objects;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::total_objects_writer */
/* sha: 875e39864515c4073d4cb464e9b514ff20a68a5f1fa7d81a7a813f78c323ddfd */
#if BIND_TransferProgress_total_objects_FIELD_WRITER
/* set_total_objects
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_TransferProgress_set_total_objects(mrb_state* mrb, mrb_value self) {
  git_transfer_progress * native_self = mruby_unbox_git_transfer_progress(self);
  mrb_int native_total_objects;

  mrb_get_args(mrb, "i", &native_total_objects);

  native_self->total_objects = native_total_objects;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::indexed_objects_reader */
/* sha: 14d4628554f84b5ecdd4780c2a10ffe7249520ff41da4931a239a5838414456a */
#if BIND_TransferProgress_indexed_objects_FIELD_READER
/* get_indexed_objects
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_TransferProgress_get_indexed_objects(mrb_state* mrb, mrb_value self) {
  git_transfer_progress * native_self = mruby_unbox_git_transfer_progress(self);

  unsigned int native_indexed_objects = native_self->indexed_objects;

  mrb_value indexed_objects = mrb_fixnum_value(native_indexed_objects);

  return indexed_objects;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::indexed_objects_writer */
/* sha: b02605ddf9695ded5952a5e0bb4e24f65a9a03845839d4acbbbae0b14c5971b9 */
#if BIND_TransferProgress_indexed_objects_FIELD_WRITER
/* set_indexed_objects
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_TransferProgress_set_indexed_objects(mrb_state* mrb, mrb_value self) {
  git_transfer_progress * native_self = mruby_unbox_git_transfer_progress(self);
  mrb_int native_indexed_objects;

  mrb_get_args(mrb, "i", &native_indexed_objects);

  native_self->indexed_objects = native_indexed_objects;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::received_objects_reader */
/* sha: dfed8d6551f496af4c3912cc95440629e21bc3ee59201ca8504cb1cc126792da */
#if BIND_TransferProgress_received_objects_FIELD_READER
/* get_received_objects
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_TransferProgress_get_received_objects(mrb_state* mrb, mrb_value self) {
  git_transfer_progress * native_self = mruby_unbox_git_transfer_progress(self);

  unsigned int native_received_objects = native_self->received_objects;

  mrb_value received_objects = mrb_fixnum_value(native_received_objects);

  return received_objects;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::received_objects_writer */
/* sha: f3132679f2a6cd33c21b675ec3ff33fc5fcc77d1ac871f74bc4fb0960972eefc */
#if BIND_TransferProgress_received_objects_FIELD_WRITER
/* set_received_objects
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_TransferProgress_set_received_objects(mrb_state* mrb, mrb_value self) {
  git_transfer_progress * native_self = mruby_unbox_git_transfer_progress(self);
  mrb_int native_received_objects;

  mrb_get_args(mrb, "i", &native_received_objects);

  native_self->received_objects = native_received_objects;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::local_objects_reader */
/* sha: b7de3e81321dfb7008d72a4124f482ffd79f4d7a75599edd8cfc6f869c109385 */
#if BIND_TransferProgress_local_objects_FIELD_READER
/* get_local_objects
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_TransferProgress_get_local_objects(mrb_state* mrb, mrb_value self) {
  git_transfer_progress * native_self = mruby_unbox_git_transfer_progress(self);

  unsigned int native_local_objects = native_self->local_objects;

  mrb_value local_objects = mrb_fixnum_value(native_local_objects);

  return local_objects;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::local_objects_writer */
/* sha: a84cc2bf80cf641809ae768bcf99032598a122385df890f09993d8757d3eb94b */
#if BIND_TransferProgress_local_objects_FIELD_WRITER
/* set_local_objects
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_TransferProgress_set_local_objects(mrb_state* mrb, mrb_value self) {
  git_transfer_progress * native_self = mruby_unbox_git_transfer_progress(self);
  mrb_int native_local_objects;

  mrb_get_args(mrb, "i", &native_local_objects);

  native_self->local_objects = native_local_objects;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::total_deltas_reader */
/* sha: 0227b37a2eac5dc3a1727e0be86c16ba59f306f1f8b65825f73a4583acc8c3f0 */
#if BIND_TransferProgress_total_deltas_FIELD_READER
/* get_total_deltas
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_TransferProgress_get_total_deltas(mrb_state* mrb, mrb_value self) {
  git_transfer_progress * native_self = mruby_unbox_git_transfer_progress(self);

  unsigned int native_total_deltas = native_self->total_deltas;

  mrb_value total_deltas = mrb_fixnum_value(native_total_deltas);

  return total_deltas;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::total_deltas_writer */
/* sha: 2983c8e024e98a304119e2ca4a6e51ba7a77910986047c6c26d9ca32d8ca7a4e */
#if BIND_TransferProgress_total_deltas_FIELD_WRITER
/* set_total_deltas
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_TransferProgress_set_total_deltas(mrb_state* mrb, mrb_value self) {
  git_transfer_progress * native_self = mruby_unbox_git_transfer_progress(self);
  mrb_int native_total_deltas;

  mrb_get_args(mrb, "i", &native_total_deltas);

  native_self->total_deltas = native_total_deltas;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::indexed_deltas_reader */
/* sha: a4c10983fb23962484b86b50f4769915b779dd867cbc4401c8729d6b7bf810fa */
#if BIND_TransferProgress_indexed_deltas_FIELD_READER
/* get_indexed_deltas
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_TransferProgress_get_indexed_deltas(mrb_state* mrb, mrb_value self) {
  git_transfer_progress * native_self = mruby_unbox_git_transfer_progress(self);

  unsigned int native_indexed_deltas = native_self->indexed_deltas;

  mrb_value indexed_deltas = mrb_fixnum_value(native_indexed_deltas);

  return indexed_deltas;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::indexed_deltas_writer */
/* sha: c011f866fb3f32ed49b29284be1a39b6d5dbed38e609d30bd7aef450d15015ac */
#if BIND_TransferProgress_indexed_deltas_FIELD_WRITER
/* set_indexed_deltas
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_TransferProgress_set_indexed_deltas(mrb_state* mrb, mrb_value self) {
  git_transfer_progress * native_self = mruby_unbox_git_transfer_progress(self);
  mrb_int native_indexed_deltas;

  mrb_get_args(mrb, "i", &native_indexed_deltas);

  native_self->indexed_deltas = native_indexed_deltas;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::received_bytes_reader */
/* sha: 1e25b61a11c0b42c264a3d71914fcc10b2a1b66b6f53117ef20149bd587c0456 */
#if BIND_TransferProgress_received_bytes_FIELD_READER
/* get_received_bytes
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_TransferProgress_get_received_bytes(mrb_state* mrb, mrb_value self) {
  git_transfer_progress * native_self = mruby_unbox_git_transfer_progress(self);

  size_t native_received_bytes = native_self->received_bytes;

  mrb_value received_bytes = mrb_fixnum_value(native_received_bytes);

  return received_bytes;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::received_bytes_writer */
/* sha: c48e471fab7e6fbb6b393d0f15b91ad64bf4e48a02ba19451e60e2352255dd06 */
#if BIND_TransferProgress_received_bytes_FIELD_WRITER
/* set_received_bytes
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_TransferProgress_set_received_bytes(mrb_state* mrb, mrb_value self) {
  git_transfer_progress * native_self = mruby_unbox_git_transfer_progress(self);
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


void mrb_Git_TransferProgress_init(mrb_state* mrb) {
/* MRUBY_BINDING: TransferProgress::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::class_definition */
/* sha: 10a44457c09770ce66cfe023842c5ff712493f2ac367331cbd95c64c00a8b7cd */
  struct RClass* TransferProgress_class = mrb_define_class_under(mrb, Git_module(mrb), "TransferProgress", mrb->object_class);
  MRB_SET_INSTANCE_TT(TransferProgress_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::class_method_definitions */
/* sha: 689ce0f4c1a0b6d4492f70ad5c44e6db2b532f97a9bf35720bf3b2a1c37b2f04 */
#if BIND_TransferProgress_INITIALIZE
  mrb_define_method(mrb, TransferProgress_class, "initialize", mrb_Git_TransferProgress_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::attr_definitions */
/* sha: f2e221c69b396afecc845207a091fac92c702886c03058009efb2ae7b94f0f42 */
  /*
   * Fields
   */
#if BIND_TransferProgress_total_objects_FIELD_READER
  mrb_define_method(mrb, TransferProgress_class, "total_objects", mrb_Git_TransferProgress_get_total_objects, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_TransferProgress_total_objects_FIELD_WRITER
  mrb_define_method(mrb, TransferProgress_class, "total_objects=", mrb_Git_TransferProgress_set_total_objects, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_TransferProgress_indexed_objects_FIELD_READER
  mrb_define_method(mrb, TransferProgress_class, "indexed_objects", mrb_Git_TransferProgress_get_indexed_objects, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_TransferProgress_indexed_objects_FIELD_WRITER
  mrb_define_method(mrb, TransferProgress_class, "indexed_objects=", mrb_Git_TransferProgress_set_indexed_objects, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_TransferProgress_received_objects_FIELD_READER
  mrb_define_method(mrb, TransferProgress_class, "received_objects", mrb_Git_TransferProgress_get_received_objects, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_TransferProgress_received_objects_FIELD_WRITER
  mrb_define_method(mrb, TransferProgress_class, "received_objects=", mrb_Git_TransferProgress_set_received_objects, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_TransferProgress_local_objects_FIELD_READER
  mrb_define_method(mrb, TransferProgress_class, "local_objects", mrb_Git_TransferProgress_get_local_objects, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_TransferProgress_local_objects_FIELD_WRITER
  mrb_define_method(mrb, TransferProgress_class, "local_objects=", mrb_Git_TransferProgress_set_local_objects, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_TransferProgress_total_deltas_FIELD_READER
  mrb_define_method(mrb, TransferProgress_class, "total_deltas", mrb_Git_TransferProgress_get_total_deltas, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_TransferProgress_total_deltas_FIELD_WRITER
  mrb_define_method(mrb, TransferProgress_class, "total_deltas=", mrb_Git_TransferProgress_set_total_deltas, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_TransferProgress_indexed_deltas_FIELD_READER
  mrb_define_method(mrb, TransferProgress_class, "indexed_deltas", mrb_Git_TransferProgress_get_indexed_deltas, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_TransferProgress_indexed_deltas_FIELD_WRITER
  mrb_define_method(mrb, TransferProgress_class, "indexed_deltas=", mrb_Git_TransferProgress_set_indexed_deltas, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_TransferProgress_received_bytes_FIELD_READER
  mrb_define_method(mrb, TransferProgress_class, "received_bytes", mrb_Git_TransferProgress_get_received_bytes, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_TransferProgress_received_bytes_FIELD_WRITER
  mrb_define_method(mrb, TransferProgress_class, "received_bytes=", mrb_Git_TransferProgress_set_received_bytes, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
