/*
 * git_transfer_progress
 * Defined in file types.h @ line 253
 */

#include "mruby_Git.h"

#if BIND_TransferProgress_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

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

/* MRUBY_BINDING: TransferProgress::disown */
/* sha: f38bb2a4464471eed5f309b8eb6ea59bcef9e0d9e3fa135b848b7fabca8473e1 */
mrb_value
mrb_Git_TransferProgress_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::TransferProgress.disown only accepts objects of type Git::TransferProgress");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::belongs_to_ruby */
/* sha: 06af86b2ca5f526b4cf6c0087b21799ef14853e8f8bb199172d120d2acaf9e5f */
mrb_value
mrb_Git_TransferProgress_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::TransferProgress.belongs_to_ruby only accepts objects of type Git::TransferProgress");
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
/* sha: 69c1992b5896d03629406207ba325f6a6b818ec9d1c31f86b3b80dd6946b2f08 */
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
/* sha: 93a3fce56fae1fbed20dd91875a257fea45485c6f891b9793ecfad3e1d80f14d */
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
/* sha: 4d95fb40fd78c48dff4c50182dffb244db76fd9e88be98dc0764ffc4f8c55d49 */
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
/* sha: f73b1f6c1d969f3d38ec14c210a1ff955d495c81b0c3445dd0bad9ed3a427b73 */
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
/* sha: 54be05693c1439cda2ab045fe06456046fa06f92fb672a3e1eb9729c5513001d */
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
/* sha: 302385d35df9ade12038e49e364aeaa127ef033c1ce3c91d856756b6491f9a84 */
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
/* sha: 0fc051e92072f9c15f6273c982efdb60d6275f14f9dbfe7d1a28efa2344bb000 */
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
/* sha: a2d72de6d77164a2c1db525c61584bc2fec7805f9f917e2a6a912f193c623aa1 */
#if BIND_TransferProgress_INITIALIZE
  mrb_define_method(mrb, TransferProgress_class, "initialize", mrb_Git_TransferProgress_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, TransferProgress_class, "disown", mrb_Git_TransferProgress_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, TransferProgress_class, "belongs_to_ruby?", mrb_Git_TransferProgress_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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
