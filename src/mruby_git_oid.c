/*
 * git_oid
 * Defined in file oid.h @ line 33
 */

#include "mruby_Git.h"

#if BIND_Oid_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oid::initialize */
/* sha: 12d76466c6425716858897d0f25a6c23d818852d09f0c6d25ee0c1f93a4a7703 */
#if BIND_Oid_INITIALIZE
mrb_value
mrb_Git_Oid_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_oid* native_object = (git_oid*)calloc(1, sizeof(git_oid));
  mruby_gift_git_oid_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Oid::id_reader */
/* sha: e5c8e9b2da8ed50db51ac99f33fdd8872a041dc4ae8720c95dc40c85d9aa2877 */
#if BIND_Oid_id_FIELD_READER
/* get_id
 *
 * Return Type: unsigned char [20]
 */
mrb_value
mrb_Git_Oid_get_id(mrb_state* mrb, mrb_value self) {
  git_oid * native_self = mruby_unbox_git_oid(self);

  unsigned char [20] native_id = native_self->id;

  mrb_value id = TODO_mruby_box_unsigned_char_[20](mrb, native_id);

  return id;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oid::id_writer */
/* sha: 21026e4c34c48b72449d371e4e3c8c5cf4e6f9f664dfda28e3eb472f0ef165a5 */
#if BIND_Oid_id_FIELD_WRITER
/* set_id
 *
 * Parameters:
 * - value: unsigned char [20]
 */
mrb_value
mrb_Git_Oid_set_id(mrb_state* mrb, mrb_value self) {
  git_oid * native_self = mruby_unbox_git_oid(self);
  mrb_value id;

  mrb_get_args(mrb, "o", &id);

  /* type checking */
  TODO_type_check_unsigned_char_[20](id);

  unsigned char [20] native_id = TODO_mruby_unbox_unsigned_char_[20](id);

  native_self->id = native_id;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Oid_init(mrb_state* mrb) {
/* MRUBY_BINDING: Oid::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oid::class_definition */
/* sha: 04759cdba6fe9c5cf13c4fe363dbd8cbde6bbc3366ace10454f74cf631abe95d */
  struct RClass* Oid_class = mrb_define_class_under(mrb, Git_module(mrb), "Oid", mrb->object_class);
  MRB_SET_INSTANCE_TT(Oid_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oid::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oid::class_method_definitions */
/* sha: 3f4d365ebebb0d159c0b4cf3d0bfeb4e224bcd465e1c067885f13e19b1487645 */
#if BIND_Oid_INITIALIZE
  mrb_define_method(mrb, Oid_class, "initialize", mrb_Git_Oid_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oid::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oid::attr_definitions */
/* sha: 607082eea3d5838c17d58ee12c079f3c29cf382c2792055d1a84e6bddd6b8a29 */
  /*
   * Fields
   */
#if BIND_Oid_id_FIELD_READER
  mrb_define_method(mrb, Oid_class, "id", mrb_Git_Oid_get_id, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Oid_id_FIELD_WRITER
  mrb_define_method(mrb, Oid_class, "id=", mrb_Git_Oid_set_id, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oid::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oid::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oid::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
