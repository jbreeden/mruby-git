/*
 * git_index_entry
 * Defined in file index.h @ line 53
 */

#include "mruby_Git.h"

#if BIND_IndexEntry_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

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

/* MRUBY_BINDING: IndexEntry::disown */
/* sha: 651ada5cdab02c513ac6b3501decbdbcbcfe59de3f33f711ed415622bddad0a9 */
mrb_value
mrb_Git_IndexEntry_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::IndexEntry.disown only accepts objects of type Git::IndexEntry");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::belongs_to_ruby */
/* sha: 950db18083ec69f59defa327382839d86df828889ab145114e406d52d9a98ad5 */
mrb_value
mrb_Git_IndexEntry_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::IndexEntry.belongs_to_ruby only accepts objects of type Git::IndexEntry");
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
/* sha: 76fc9310caf810d1c312f15248ed49ec49d3106633e4b690f29445a8ac1483c7 */
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
/* sha: 788a151932171309206f236e01bb69903da1509abd86da9208b8182df53f5b04 */
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
/* sha: f5fdc9b6159a4e4509eace62904c413e7722c072c95aee2e77593b693c26f92e */
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
/* sha: c45ee83ea98ef64fba80e528f4a2b9e5fb34569e0405da26650d53aec35e1623 */
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
/* sha: 23ab510d95684c8c04b1a5cafaab311d24aed5646e27cd092b974ece5ed7e08e */
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
/* sha: afdc6755e9a2cb05f31af23216cb766057a29190c4d1465e86a1a2b5f18e12ec */
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
/* sha: 26a45523564e63c2400d18b256cea83ec44f9381a3746c6b6704c456a21270eb */
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
/* sha: 948e1dca5eb273a59b1301bc491b86a3da13a890d36527254d33379ec5aa2dce */
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
/* sha: b18e6683772886c241c96edadeacfd2c66c19fb2898dbb4802d5baaacafc8fc1 */
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
/* sha: ec075ed82caf1dca4771efdda0f465ccafb30435bd3dbb56cd6f11ceefa53917 */
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
/* sha: f64739a07beb2b1b180922bcf39bbea977213ea539876da537b465fb120260df */
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
/* sha: 0d4f2482248ce0e4c93b05c8d3fd5fa6fb8f804a9b010b6bf6c370e99d553d71 */
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
