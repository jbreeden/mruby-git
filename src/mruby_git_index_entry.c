/*
 * git_index_entry
 * Defined in file index.h @ line 53
 */

#include "mruby_Git.h"

#if BIND_IndexEntry_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::initialize */
/* sha: ea6d93e723572c65437333934737dd74c51a9b660e18cc65277d2f86cb4ea012 */
#if BIND_IndexEntry_INITIALIZE
mrb_value
mrb_Git_IndexEntry_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_index_entry* native_object = (git_index_entry*)calloc(1, sizeof(git_index_entry));
  mruby_gift_git_index_entry_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: IndexEntry::ctime_reader */
/* sha: 791bc2ebcbc29e5d8e522edeec273bd9cd0ef9259588d5769377ddbf8bd28209 */
#if BIND_IndexEntry_ctime_FIELD_READER
/* get_ctime
 *
 * Return Type: git_index_time
 */
mrb_value
mrb_Git_IndexEntry_get_ctime(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);

  git_index_time native_ctime = native_self->ctime;

  git_index_time* new_ctime = TODO_move_git_index_time_to_heap(native_ctime);
  mrb_value ctime = mruby_box_git_index_time(mrb, &native_ctime);

  return ctime;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::ctime_writer */
/* sha: a19513af2d3af57a3c1348cec30439b77f308a44a29ce4e7b7a2aadcec8e4693 */
#if BIND_IndexEntry_ctime_FIELD_WRITER
/* set_ctime
 *
 * Parameters:
 * - value: git_index_time
 */
mrb_value
mrb_Git_IndexEntry_set_ctime(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);
  mrb_value ctime;

  mrb_get_args(mrb, "o", &ctime);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ctime, IndexTime_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "IndexTime expected");
    return mrb_nil_value();
  }

  git_index_time native_ctime = *(mruby_unbox_git_index_time(ctime));

  native_self->ctime = native_ctime;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::mtime_reader */
/* sha: aeb4ebbecb26734d537ed0a3d5e869b40e5c428c5625a835b1010713892103d7 */
#if BIND_IndexEntry_mtime_FIELD_READER
/* get_mtime
 *
 * Return Type: git_index_time
 */
mrb_value
mrb_Git_IndexEntry_get_mtime(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);

  git_index_time native_mtime = native_self->mtime;

  git_index_time* new_mtime = TODO_move_git_index_time_to_heap(native_mtime);
  mrb_value mtime = mruby_box_git_index_time(mrb, &native_mtime);

  return mtime;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::mtime_writer */
/* sha: 9e61dc66bed23f1fbcb9126e1ec7e42d4e2ef960eea8b9dd69d4cab996743afb */
#if BIND_IndexEntry_mtime_FIELD_WRITER
/* set_mtime
 *
 * Parameters:
 * - value: git_index_time
 */
mrb_value
mrb_Git_IndexEntry_set_mtime(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);
  mrb_value mtime;

  mrb_get_args(mrb, "o", &mtime);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, mtime, IndexTime_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "IndexTime expected");
    return mrb_nil_value();
  }

  git_index_time native_mtime = *(mruby_unbox_git_index_time(mtime));

  native_self->mtime = native_mtime;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::dev_reader */
/* sha: e85e81a195695aba4b08ea4af8fc20447c6bc2fa9beb6da9f245f964f06be4e4 */
#if BIND_IndexEntry_dev_FIELD_READER
/* get_dev
 *
 * Return Type: uint32_t
 */
mrb_value
mrb_Git_IndexEntry_get_dev(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);

  uint32_t native_dev = native_self->dev;

  mrb_value dev = mrb_fixnum_value(native_dev);

  return dev;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::dev_writer */
/* sha: 27bd79269010f4af91cbfd504f648df2c86f99bf7dd1d6b27d1b32410898de80 */
#if BIND_IndexEntry_dev_FIELD_WRITER
/* set_dev
 *
 * Parameters:
 * - value: uint32_t
 */
mrb_value
mrb_Git_IndexEntry_set_dev(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);
  mrb_int native_dev;

  mrb_get_args(mrb, "i", &native_dev);

  native_self->dev = native_dev;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::ino_reader */
/* sha: b66c513732097cbfc8b97abcb946ffa8bcab3afd74fa2d19d110da367ccccb6c */
#if BIND_IndexEntry_ino_FIELD_READER
/* get_ino
 *
 * Return Type: uint32_t
 */
mrb_value
mrb_Git_IndexEntry_get_ino(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);

  uint32_t native_ino = native_self->ino;

  mrb_value ino = mrb_fixnum_value(native_ino);

  return ino;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::ino_writer */
/* sha: 48bfff4493a0246d8ef08c55e7380f706bdc5488f36407a45f58b641be29f408 */
#if BIND_IndexEntry_ino_FIELD_WRITER
/* set_ino
 *
 * Parameters:
 * - value: uint32_t
 */
mrb_value
mrb_Git_IndexEntry_set_ino(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);
  mrb_int native_ino;

  mrb_get_args(mrb, "i", &native_ino);

  native_self->ino = native_ino;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::mode_reader */
/* sha: 3bb65a069440c924d5cf5226fa4915da6d114c6a8575a7a88f043185bfc62d94 */
#if BIND_IndexEntry_mode_FIELD_READER
/* get_mode
 *
 * Return Type: uint32_t
 */
mrb_value
mrb_Git_IndexEntry_get_mode(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);

  uint32_t native_mode = native_self->mode;

  mrb_value mode = mrb_fixnum_value(native_mode);

  return mode;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::mode_writer */
/* sha: e4f2949d0f73897b2a10b6ce737e5468b93ce2999b38ac8873310661feb5bd02 */
#if BIND_IndexEntry_mode_FIELD_WRITER
/* set_mode
 *
 * Parameters:
 * - value: uint32_t
 */
mrb_value
mrb_Git_IndexEntry_set_mode(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);
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

/* MRUBY_BINDING: IndexEntry::uid_reader */
/* sha: 6d46fb646ac9cc5639426db79f3e93f2369c5aa387893cd95cea0c23106e31b1 */
#if BIND_IndexEntry_uid_FIELD_READER
/* get_uid
 *
 * Return Type: uint32_t
 */
mrb_value
mrb_Git_IndexEntry_get_uid(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);

  uint32_t native_uid = native_self->uid;

  mrb_value uid = mrb_fixnum_value(native_uid);

  return uid;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::uid_writer */
/* sha: f46b544f3e5be3a2e36d50fb1e14efbb266f07ff9507dc927ab482dd7eda1866 */
#if BIND_IndexEntry_uid_FIELD_WRITER
/* set_uid
 *
 * Parameters:
 * - value: uint32_t
 */
mrb_value
mrb_Git_IndexEntry_set_uid(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);
  mrb_int native_uid;

  mrb_get_args(mrb, "i", &native_uid);

  native_self->uid = native_uid;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::gid_reader */
/* sha: f4ab1807fd68066849bb47331647ae6c9af893eeb9afdfb2c41f70f1296e7e8e */
#if BIND_IndexEntry_gid_FIELD_READER
/* get_gid
 *
 * Return Type: uint32_t
 */
mrb_value
mrb_Git_IndexEntry_get_gid(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);

  uint32_t native_gid = native_self->gid;

  mrb_value gid = mrb_fixnum_value(native_gid);

  return gid;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::gid_writer */
/* sha: bac317b7e853236a37cea4522550d6f43c9d6419453fca38e1bbe1ea51da98f3 */
#if BIND_IndexEntry_gid_FIELD_WRITER
/* set_gid
 *
 * Parameters:
 * - value: uint32_t
 */
mrb_value
mrb_Git_IndexEntry_set_gid(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);
  mrb_int native_gid;

  mrb_get_args(mrb, "i", &native_gid);

  native_self->gid = native_gid;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::file_size_reader */
/* sha: b83165f1355f10c92659b62e39d095207f9b8dd6bfc193dda1fc1304bea81023 */
#if BIND_IndexEntry_file_size_FIELD_READER
/* get_file_size
 *
 * Return Type: uint32_t
 */
mrb_value
mrb_Git_IndexEntry_get_file_size(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);

  uint32_t native_file_size = native_self->file_size;

  mrb_value file_size = mrb_fixnum_value(native_file_size);

  return file_size;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::file_size_writer */
/* sha: 7d188b7a97ccc64c1a9a38d05634115ebf4f7afdc77db654a8e025bf4b7d3d21 */
#if BIND_IndexEntry_file_size_FIELD_WRITER
/* set_file_size
 *
 * Parameters:
 * - value: uint32_t
 */
mrb_value
mrb_Git_IndexEntry_set_file_size(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);
  mrb_int native_file_size;

  mrb_get_args(mrb, "i", &native_file_size);

  native_self->file_size = native_file_size;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::id_reader */
/* sha: 9eaf334ac3cec05e460b1b34bac3e65f244f6217ee57464e90477866e823698a */
#if BIND_IndexEntry_id_FIELD_READER
/* get_id
 *
 * Return Type: git_oid
 */
mrb_value
mrb_Git_IndexEntry_get_id(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);

  git_oid native_id = native_self->id;

  git_oid* new_id = TODO_move_git_oid_to_heap(native_id);
  mrb_value id = mruby_box_git_oid(mrb, &native_id);

  return id;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::id_writer */
/* sha: 9d4489eb22917955b4d04b6b9d96097ef51332bec5c4b53c60f7cfa9e682ea32 */
#if BIND_IndexEntry_id_FIELD_WRITER
/* set_id
 *
 * Parameters:
 * - value: git_oid
 */
mrb_value
mrb_Git_IndexEntry_set_id(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);
  mrb_value id;

  mrb_get_args(mrb, "o", &id);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  git_oid native_id = *(mruby_unbox_git_oid(id));

  native_self->id = native_id;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::flags_reader */
/* sha: c41fc9e5235a724ce03346f08a870295a6a0b0da7cd805161f58f306e201d9b3 */
#if BIND_IndexEntry_flags_FIELD_READER
/* get_flags
 *
 * Return Type: uint16_t
 */
mrb_value
mrb_Git_IndexEntry_get_flags(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);

  uint16_t native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::flags_writer */
/* sha: 535ee557c5b71b864e8a0211f83637aff0462d1b3991725b59bb8e4edb94669c */
#if BIND_IndexEntry_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: uint16_t
 */
mrb_value
mrb_Git_IndexEntry_set_flags(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);
  mrb_int native_flags;

  mrb_get_args(mrb, "i", &native_flags);

  native_self->flags = native_flags;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::flags_extended_reader */
/* sha: 25e5b71fb6935d6365a87856777cea67848a545cef67404c7a9bb75935505c8d */
#if BIND_IndexEntry_flags_extended_FIELD_READER
/* get_flags_extended
 *
 * Return Type: uint16_t
 */
mrb_value
mrb_Git_IndexEntry_get_flags_extended(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);

  uint16_t native_flags_extended = native_self->flags_extended;

  mrb_value flags_extended = mrb_fixnum_value(native_flags_extended);

  return flags_extended;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::flags_extended_writer */
/* sha: 839a0131f4f52e0b53df85ac97a3b4f92f5bd55d84c45f2b96bce3b8f06698f8 */
#if BIND_IndexEntry_flags_extended_FIELD_WRITER
/* set_flags_extended
 *
 * Parameters:
 * - value: uint16_t
 */
mrb_value
mrb_Git_IndexEntry_set_flags_extended(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);
  mrb_int native_flags_extended;

  mrb_get_args(mrb, "i", &native_flags_extended);

  native_self->flags_extended = native_flags_extended;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::path_reader */
/* sha: 1822ecf80d6be315c7f237055a34ff438ac17d4b3ff127a12e55cf26aa3b94c0 */
#if BIND_IndexEntry_path_FIELD_READER
/* get_path
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_IndexEntry_get_path(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);

  const char * native_path = native_self->path;

  mrb_value path = native_path == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_path);

  return path;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::path_writer */
/* sha: 59e511f3744acd3122c22b76219ddee270e9c2b0f58dc979fa804bd5baf83fe6 */
#if BIND_IndexEntry_path_FIELD_WRITER
/* set_path
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_IndexEntry_set_path(mrb_state* mrb, mrb_value self) {
  git_index_entry * native_self = mruby_unbox_git_index_entry(self);
  char * native_path = NULL;

  mrb_get_args(mrb, "z", &native_path);

  native_self->path = native_path;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_IndexEntry_init(mrb_state* mrb) {
/* MRUBY_BINDING: IndexEntry::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::class_definition */
/* sha: a9e49b3e1c57d35dd27bbd69a922c737ec5b049736a28da17177617bf2a19713 */
  struct RClass* IndexEntry_class = mrb_define_class_under(mrb, Git_module(mrb), "IndexEntry", mrb->object_class);
  MRB_SET_INSTANCE_TT(IndexEntry_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::class_method_definitions */
/* sha: 42c8a038167d0189df4341f257972ee75f13a303a45a3ca20f9ec566f791e997 */
#if BIND_IndexEntry_INITIALIZE
  mrb_define_method(mrb, IndexEntry_class, "initialize", mrb_Git_IndexEntry_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, IndexEntry_class, "disown", mrb_Git_IndexEntry_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, IndexEntry_class, "belongs_to_ruby?", mrb_Git_IndexEntry_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::attr_definitions */
/* sha: c0c49484dda49076d9417e178316c3c73607185adfaca10f6914c89b9a1d4ed6 */
  /*
   * Fields
   */
#if BIND_IndexEntry_ctime_FIELD_READER
  mrb_define_method(mrb, IndexEntry_class, "ctime", mrb_Git_IndexEntry_get_ctime, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_IndexEntry_ctime_FIELD_WRITER
  mrb_define_method(mrb, IndexEntry_class, "ctime=", mrb_Git_IndexEntry_set_ctime, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_IndexEntry_mtime_FIELD_READER
  mrb_define_method(mrb, IndexEntry_class, "mtime", mrb_Git_IndexEntry_get_mtime, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_IndexEntry_mtime_FIELD_WRITER
  mrb_define_method(mrb, IndexEntry_class, "mtime=", mrb_Git_IndexEntry_set_mtime, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_IndexEntry_dev_FIELD_READER
  mrb_define_method(mrb, IndexEntry_class, "dev", mrb_Git_IndexEntry_get_dev, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_IndexEntry_dev_FIELD_WRITER
  mrb_define_method(mrb, IndexEntry_class, "dev=", mrb_Git_IndexEntry_set_dev, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_IndexEntry_ino_FIELD_READER
  mrb_define_method(mrb, IndexEntry_class, "ino", mrb_Git_IndexEntry_get_ino, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_IndexEntry_ino_FIELD_WRITER
  mrb_define_method(mrb, IndexEntry_class, "ino=", mrb_Git_IndexEntry_set_ino, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_IndexEntry_mode_FIELD_READER
  mrb_define_method(mrb, IndexEntry_class, "mode", mrb_Git_IndexEntry_get_mode, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_IndexEntry_mode_FIELD_WRITER
  mrb_define_method(mrb, IndexEntry_class, "mode=", mrb_Git_IndexEntry_set_mode, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_IndexEntry_uid_FIELD_READER
  mrb_define_method(mrb, IndexEntry_class, "uid", mrb_Git_IndexEntry_get_uid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_IndexEntry_uid_FIELD_WRITER
  mrb_define_method(mrb, IndexEntry_class, "uid=", mrb_Git_IndexEntry_set_uid, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_IndexEntry_gid_FIELD_READER
  mrb_define_method(mrb, IndexEntry_class, "gid", mrb_Git_IndexEntry_get_gid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_IndexEntry_gid_FIELD_WRITER
  mrb_define_method(mrb, IndexEntry_class, "gid=", mrb_Git_IndexEntry_set_gid, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_IndexEntry_file_size_FIELD_READER
  mrb_define_method(mrb, IndexEntry_class, "file_size", mrb_Git_IndexEntry_get_file_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_IndexEntry_file_size_FIELD_WRITER
  mrb_define_method(mrb, IndexEntry_class, "file_size=", mrb_Git_IndexEntry_set_file_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_IndexEntry_id_FIELD_READER
  mrb_define_method(mrb, IndexEntry_class, "id", mrb_Git_IndexEntry_get_id, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_IndexEntry_id_FIELD_WRITER
  mrb_define_method(mrb, IndexEntry_class, "id=", mrb_Git_IndexEntry_set_id, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_IndexEntry_flags_FIELD_READER
  mrb_define_method(mrb, IndexEntry_class, "flags", mrb_Git_IndexEntry_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_IndexEntry_flags_FIELD_WRITER
  mrb_define_method(mrb, IndexEntry_class, "flags=", mrb_Git_IndexEntry_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_IndexEntry_flags_extended_FIELD_READER
  mrb_define_method(mrb, IndexEntry_class, "flags_extended", mrb_Git_IndexEntry_get_flags_extended, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_IndexEntry_flags_extended_FIELD_WRITER
  mrb_define_method(mrb, IndexEntry_class, "flags_extended=", mrb_Git_IndexEntry_set_flags_extended, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_IndexEntry_path_FIELD_READER
  mrb_define_method(mrb, IndexEntry_class, "path", mrb_Git_IndexEntry_get_path, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_IndexEntry_path_FIELD_WRITER
  mrb_define_method(mrb, IndexEntry_class, "path=", mrb_Git_IndexEntry_set_path, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
