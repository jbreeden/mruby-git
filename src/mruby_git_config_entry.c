/*
 * git_config_entry
 * Defined in file config.h @ line 64
 */

#include "mruby_Git.h"

#if BIND_ConfigEntry_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry::initialize */
/* sha: ff419bc0b5ade479d7615a6fb7c35dd5c83f73f812c25b742662add10980817c */
#if BIND_ConfigEntry_INITIALIZE
mrb_value
mrb_Git_ConfigEntry_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_config_entry* native_object = (git_config_entry*)calloc(1, sizeof(git_config_entry));
  mruby_gift_git_config_entry_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: ConfigEntry::name_reader */
/* sha: fe7be9230b10943646b9b0a4052183f02d8b2d089cf7b1b2af605c09ef9bae92 */
#if BIND_ConfigEntry_name_FIELD_READER
/* get_name
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_ConfigEntry_get_name(mrb_state* mrb, mrb_value self) {
  git_config_entry * native_self = mruby_unbox_git_config_entry(self);

  const char * native_name = native_self->name;

  mrb_value name = native_name == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_name);

  return name;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry::name_writer */
/* sha: d115eb1ec29b95e17fe73464ac45f92a0a5499221eb7e5973ef3f298c473789b */
#if BIND_ConfigEntry_name_FIELD_WRITER
/* set_name
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_ConfigEntry_set_name(mrb_state* mrb, mrb_value self) {
  git_config_entry * native_self = mruby_unbox_git_config_entry(self);
  char * native_name = NULL;

  mrb_get_args(mrb, "z", &native_name);

  native_self->name = native_name;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry::value_reader */
/* sha: d255db63698bcb91ced4d090675008167adb469b8418bc0964abddb7ccac2daf */
#if BIND_ConfigEntry_value_FIELD_READER
/* get_value
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_ConfigEntry_get_value(mrb_state* mrb, mrb_value self) {
  git_config_entry * native_self = mruby_unbox_git_config_entry(self);

  const char * native_value = native_self->value;

  mrb_value value = native_value == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_value);

  return value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry::value_writer */
/* sha: f7dec00724bb5be8766cca97931c8bb335566d143cf65364e5179579ef61dfd5 */
#if BIND_ConfigEntry_value_FIELD_WRITER
/* set_value
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_ConfigEntry_set_value(mrb_state* mrb, mrb_value self) {
  git_config_entry * native_self = mruby_unbox_git_config_entry(self);
  char * native_value = NULL;

  mrb_get_args(mrb, "z", &native_value);

  native_self->value = native_value;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry::level_reader */
/* sha: 597e435d4df0678912bf4d7220a30df320544462ccb34eb0f69dbfc274bf5f18 */
#if BIND_ConfigEntry_level_FIELD_READER
/* get_level
 *
 * Return Type: git_config_level_t
 */
mrb_value
mrb_Git_ConfigEntry_get_level(mrb_state* mrb, mrb_value self) {
  git_config_entry * native_self = mruby_unbox_git_config_entry(self);

  git_config_level_t native_level = native_self->level;

  mrb_value level = mrb_fixnum_value(native_level);

  return level;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry::level_writer */
/* sha: f49156032efd4ef47826a9dce1116c0e240d7847d71f04939bf93df310342d7f */
#if BIND_ConfigEntry_level_FIELD_WRITER
/* set_level
 *
 * Parameters:
 * - value: git_config_level_t
 */
mrb_value
mrb_Git_ConfigEntry_set_level(mrb_state* mrb, mrb_value self) {
  git_config_entry * native_self = mruby_unbox_git_config_entry(self);
  mrb_int native_level;

  mrb_get_args(mrb, "i", &native_level);

  native_self->level = native_level;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry::free_reader */
/* sha: e35f2f5a1d6fc770a0095d0bdc560f669aaca01148202272f0368606202c73ca */
#if BIND_ConfigEntry_free_FIELD_READER
/* get_free
 *
 * Return Type: void (*)(struct git_config_entry *)
 */
mrb_value
mrb_Git_ConfigEntry_get_free(mrb_state* mrb, mrb_value self) {
  git_config_entry * native_self = mruby_unbox_git_config_entry(self);

  void (*)(struct git_config_entry *) native_free = native_self->free;

  mrb_value free = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_git_config_entry_PTR_RPAREN(mrb, native_free);

  return free;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry::free_writer */
/* sha: f61341fcd6acd87cb5db87553fb640d331251eee6ec3d50f9b2a664598f9f4e3 */
#if BIND_ConfigEntry_free_FIELD_WRITER
/* set_free
 *
 * Parameters:
 * - value: void (*)(struct git_config_entry *)
 */
mrb_value
mrb_Git_ConfigEntry_set_free(mrb_state* mrb, mrb_value self) {
  git_config_entry * native_self = mruby_unbox_git_config_entry(self);
  mrb_value free;

  mrb_get_args(mrb, "o", &free);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_git_config_entry_PTR_RPAREN(free);

  void (*native_free)(struct git_config_entry *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_git_config_entry_PTR_RPAREN(free);

  native_self->free = native_free;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry::payload_reader */
/* sha: b8b2834d09f5961504447c4a8f87c9e4ad7b54d950ab635b9d3ef0156b23f287 */
#if BIND_ConfigEntry_payload_FIELD_READER
/* get_payload
 *
 * Return Type: void *
 */
mrb_value
mrb_Git_ConfigEntry_get_payload(mrb_state* mrb, mrb_value self) {
  git_config_entry * native_self = mruby_unbox_git_config_entry(self);

  void * native_payload = native_self->payload;

  mrb_value payload = TODO_mruby_box_void_PTR(mrb, native_payload);

  return payload;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry::payload_writer */
/* sha: 8bc85acefeff0c15735712204d12e368920ccba2591fab7daa441a0338f081a6 */
#if BIND_ConfigEntry_payload_FIELD_WRITER
/* set_payload
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_Git_ConfigEntry_set_payload(mrb_state* mrb, mrb_value self) {
  git_config_entry * native_self = mruby_unbox_git_config_entry(self);
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


void mrb_Git_ConfigEntry_init(mrb_state* mrb) {
/* MRUBY_BINDING: ConfigEntry::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry::class_definition */
/* sha: 15381a94d0bacb11f8534fbee08859ac63436b30a99d2c2b5fd89715b4a6a6df */
  struct RClass* ConfigEntry_class = mrb_define_class_under(mrb, Git_module(mrb), "ConfigEntry", mrb->object_class);
  MRB_SET_INSTANCE_TT(ConfigEntry_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry::class_method_definitions */
/* sha: 7941c0ad1916c57615d4cddcbca04aa3a9aafabd3da396c013b9507de4ec50f0 */
#if BIND_ConfigEntry_INITIALIZE
  mrb_define_method(mrb, ConfigEntry_class, "initialize", mrb_Git_ConfigEntry_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry::attr_definitions */
/* sha: 7e415b8cac97d0e95ffa83103189f7b836dcf969469c45b189e4a0f23fe37601 */
  /*
   * Fields
   */
#if BIND_ConfigEntry_name_FIELD_READER
  mrb_define_method(mrb, ConfigEntry_class, "name", mrb_Git_ConfigEntry_get_name, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_ConfigEntry_name_FIELD_WRITER
  mrb_define_method(mrb, ConfigEntry_class, "name=", mrb_Git_ConfigEntry_set_name, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_ConfigEntry_value_FIELD_READER
  mrb_define_method(mrb, ConfigEntry_class, "value", mrb_Git_ConfigEntry_get_value, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_ConfigEntry_value_FIELD_WRITER
  mrb_define_method(mrb, ConfigEntry_class, "value=", mrb_Git_ConfigEntry_set_value, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_ConfigEntry_level_FIELD_READER
  mrb_define_method(mrb, ConfigEntry_class, "level", mrb_Git_ConfigEntry_get_level, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_ConfigEntry_level_FIELD_WRITER
  mrb_define_method(mrb, ConfigEntry_class, "level=", mrb_Git_ConfigEntry_set_level, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_ConfigEntry_free_FIELD_READER
  mrb_define_method(mrb, ConfigEntry_class, "free", mrb_Git_ConfigEntry_get_free, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_ConfigEntry_free_FIELD_WRITER
  mrb_define_method(mrb, ConfigEntry_class, "free=", mrb_Git_ConfigEntry_set_free, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_ConfigEntry_payload_FIELD_READER
  mrb_define_method(mrb, ConfigEntry_class, "payload", mrb_Git_ConfigEntry_get_payload, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_ConfigEntry_payload_FIELD_WRITER
  mrb_define_method(mrb, ConfigEntry_class, "payload=", mrb_Git_ConfigEntry_set_payload, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
