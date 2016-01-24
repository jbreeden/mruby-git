/*
 * git_time
 * Defined in file types.h @ line 156
 */

#include "mruby_Git.h"

#if BIND_Time_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Time::initialize */
/* sha: dfae0af4f24b81fe9008f635871711e06bac1c153c244aaf28971a0f5681f534 */
#if BIND_Time_INITIALIZE
mrb_value
mrb_Git_Time_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_time* native_object = (git_time*)calloc(1, sizeof(git_time));
  mruby_gift_git_time_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Time::time_reader */
/* sha: 98caed6bd88fff0649d4b0fa52dfca144c3a34888450a7802218f033aec69461 */
#if BIND_Time_time_FIELD_READER
/* get_time
 *
 * Return Type: git_time_t
 */
mrb_value
mrb_Git_Time_get_time(mrb_state* mrb, mrb_value self) {
  git_time * native_self = mruby_unbox_git_time(self);

  git_time_t native_time = native_self->time;

  mrb_value time = mrb_fixnum_value(native_time);

  return time;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Time::time_writer */
/* sha: c76020404b26dbe1463f19287297a39ef8794540d2d434ac60f172b4a317350a */
#if BIND_Time_time_FIELD_WRITER
/* set_time
 *
 * Parameters:
 * - value: git_time_t
 */
mrb_value
mrb_Git_Time_set_time(mrb_state* mrb, mrb_value self) {
  git_time * native_self = mruby_unbox_git_time(self);
  mrb_int native_time;

  mrb_get_args(mrb, "i", &native_time);

  native_self->time = native_time;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Time::offset_reader */
/* sha: ab683bc5d2f92a81bf1c3c2576baa99ac707c43bc9d7c088982df7e772474f60 */
#if BIND_Time_offset_FIELD_READER
/* get_offset
 *
 * Return Type: int
 */
mrb_value
mrb_Git_Time_get_offset(mrb_state* mrb, mrb_value self) {
  git_time * native_self = mruby_unbox_git_time(self);

  int native_offset = native_self->offset;

  mrb_value offset = mrb_fixnum_value(native_offset);

  return offset;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Time::offset_writer */
/* sha: 9aac7a4557307be32ad12b1b5944e29e47ca77d532705ef630ebeebd5e904d93 */
#if BIND_Time_offset_FIELD_WRITER
/* set_offset
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_Time_set_offset(mrb_state* mrb, mrb_value self) {
  git_time * native_self = mruby_unbox_git_time(self);
  mrb_int native_offset;

  mrb_get_args(mrb, "i", &native_offset);

  native_self->offset = native_offset;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Time_init(mrb_state* mrb) {
/* MRUBY_BINDING: Time::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Time::class_definition */
/* sha: 37c0de27860178d09802173eebf45cb937ecd5ce860731dfd4b777f510fe6c68 */
  struct RClass* Time_class = mrb_define_class_under(mrb, Git_module(mrb), "Time", mrb->object_class);
  MRB_SET_INSTANCE_TT(Time_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Time::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Time::class_method_definitions */
/* sha: a62cd93142dbef224d1272bad26c8ea81f82dc422b3a859a16714c42817c0e7a */
#if BIND_Time_INITIALIZE
  mrb_define_method(mrb, Time_class, "initialize", mrb_Git_Time_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Time_class, "disown", mrb_Git_Time_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Time_class, "belongs_to_ruby?", mrb_Git_Time_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Time::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Time::attr_definitions */
/* sha: edab9cf6f6f9cf4c437c32b31734522225576547ac4d0979354e326d541d12df */
  /*
   * Fields
   */
#if BIND_Time_time_FIELD_READER
  mrb_define_method(mrb, Time_class, "time", mrb_Git_Time_get_time, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Time_time_FIELD_WRITER
  mrb_define_method(mrb, Time_class, "time=", mrb_Git_Time_set_time, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Time_offset_FIELD_READER
  mrb_define_method(mrb, Time_class, "offset", mrb_Git_Time_get_offset, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Time_offset_FIELD_WRITER
  mrb_define_method(mrb, Time_class, "offset=", mrb_Git_Time_set_offset, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Time::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Time::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Time::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
