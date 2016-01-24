/*
 * git_index_time
 * Defined in file index.h @ line 26
 */

#include "mruby_Git.h"

#if BIND_IndexTime_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexTime::initialize */
/* sha: e67c5781daa7343dd51804bc4f4cb18166679617ecfe12cf55e9871c5131f118 */
#if BIND_IndexTime_INITIALIZE
mrb_value
mrb_Git_IndexTime_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_index_time* native_object = (git_index_time*)calloc(1, sizeof(git_index_time));
  mruby_gift_git_index_time_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: IndexTime::seconds_reader */
/* sha: c7b68c6413c2da1a75ed744bcadf5d9cf1d77b1f6ca92601dee1f1225b1e20e8 */
#if BIND_IndexTime_seconds_FIELD_READER
/* get_seconds
 *
 * Return Type: int32_t
 */
mrb_value
mrb_Git_IndexTime_get_seconds(mrb_state* mrb, mrb_value self) {
  git_index_time * native_self = mruby_unbox_git_index_time(self);

  int32_t native_seconds = native_self->seconds;

  mrb_value seconds = mrb_fixnum_value(native_seconds);

  return seconds;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexTime::seconds_writer */
/* sha: 192334d8bf3f59a8971985907055a156ee802426ec3dbea987e4d6000ed0446e */
#if BIND_IndexTime_seconds_FIELD_WRITER
/* set_seconds
 *
 * Parameters:
 * - value: int32_t
 */
mrb_value
mrb_Git_IndexTime_set_seconds(mrb_state* mrb, mrb_value self) {
  git_index_time * native_self = mruby_unbox_git_index_time(self);
  mrb_int native_seconds;

  mrb_get_args(mrb, "i", &native_seconds);

  native_self->seconds = native_seconds;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexTime::nanoseconds_reader */
/* sha: 7ee6443a3fa6942ae89db10d16e25c4c1340a0bc66f5676506219453dad71f6e */
#if BIND_IndexTime_nanoseconds_FIELD_READER
/* get_nanoseconds
 *
 * Return Type: uint32_t
 */
mrb_value
mrb_Git_IndexTime_get_nanoseconds(mrb_state* mrb, mrb_value self) {
  git_index_time * native_self = mruby_unbox_git_index_time(self);

  uint32_t native_nanoseconds = native_self->nanoseconds;

  mrb_value nanoseconds = mrb_fixnum_value(native_nanoseconds);

  return nanoseconds;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexTime::nanoseconds_writer */
/* sha: 97dc2620bcaffa39e7cfd2768cf5ba5b23f879bf91d28e2f93e3cdaac815c5f7 */
#if BIND_IndexTime_nanoseconds_FIELD_WRITER
/* set_nanoseconds
 *
 * Parameters:
 * - value: uint32_t
 */
mrb_value
mrb_Git_IndexTime_set_nanoseconds(mrb_state* mrb, mrb_value self) {
  git_index_time * native_self = mruby_unbox_git_index_time(self);
  mrb_int native_nanoseconds;

  mrb_get_args(mrb, "i", &native_nanoseconds);

  native_self->nanoseconds = native_nanoseconds;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_IndexTime_init(mrb_state* mrb) {
/* MRUBY_BINDING: IndexTime::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexTime::class_definition */
/* sha: f48c5ba5145fec0a3f47a4de190d555898606a964f750d831c16746c4cdfcaa9 */
  struct RClass* IndexTime_class = mrb_define_class_under(mrb, Git_module(mrb), "IndexTime", mrb->object_class);
  MRB_SET_INSTANCE_TT(IndexTime_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexTime::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexTime::class_method_definitions */
/* sha: 921429fbda3a140205cbefa060f1f0f274daf218e842a50cfcf6553195925a40 */
#if BIND_IndexTime_INITIALIZE
  mrb_define_method(mrb, IndexTime_class, "initialize", mrb_Git_IndexTime_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, IndexTime_class, "disown", mrb_Git_IndexTime_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, IndexTime_class, "belongs_to_ruby?", mrb_Git_IndexTime_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexTime::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexTime::attr_definitions */
/* sha: 81badb8392ff44685bf04924dcb0afa8572536607b637da80fc97cd544ac4dd1 */
  /*
   * Fields
   */
#if BIND_IndexTime_seconds_FIELD_READER
  mrb_define_method(mrb, IndexTime_class, "seconds", mrb_Git_IndexTime_get_seconds, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_IndexTime_seconds_FIELD_WRITER
  mrb_define_method(mrb, IndexTime_class, "seconds=", mrb_Git_IndexTime_set_seconds, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_IndexTime_nanoseconds_FIELD_READER
  mrb_define_method(mrb, IndexTime_class, "nanoseconds", mrb_Git_IndexTime_get_nanoseconds, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_IndexTime_nanoseconds_FIELD_WRITER
  mrb_define_method(mrb, IndexTime_class, "nanoseconds=", mrb_Git_IndexTime_set_nanoseconds, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexTime::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexTime::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexTime::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
