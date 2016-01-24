/*
 * git_oidarray
 * Defined in file oidarray.h @ line 16
 */

#include "mruby_Git.h"

#if BIND_Oidarray_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oidarray::initialize */
/* sha: 9c869e8e32aae409e024aa32cc6ec471a09da02679664ded5ec7ccef808021da */
#if BIND_Oidarray_INITIALIZE
mrb_value
mrb_Git_Oidarray_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_oidarray* native_object = (git_oidarray*)calloc(1, sizeof(git_oidarray));
  mruby_gift_git_oidarray_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Oidarray::ids_reader */
/* sha: 61c2070552a43e5dc83225187777195e79e64d395804706f9e9dbd0d142e18b5 */
#if BIND_Oidarray_ids_FIELD_READER
/* get_ids
 *
 * Return Type: git_oid *
 */
mrb_value
mrb_Git_Oidarray_get_ids(mrb_state* mrb, mrb_value self) {
  git_oidarray * native_self = mruby_unbox_git_oidarray(self);

  git_oid * native_ids = native_self->ids;

  mrb_value ids = (native_ids == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_ids));

  return ids;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oidarray::ids_writer */
/* sha: 4f2c968a07b31e3a29899237b39f1b54a76e75cd84f35921512b512c6eafdbbc */
#if BIND_Oidarray_ids_FIELD_WRITER
/* set_ids
 *
 * Parameters:
 * - value: git_oid *
 */
mrb_value
mrb_Git_Oidarray_set_ids(mrb_state* mrb, mrb_value self) {
  git_oidarray * native_self = mruby_unbox_git_oidarray(self);
  mrb_value ids;

  mrb_get_args(mrb, "o", &ids);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, ids, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  git_oid * native_ids = (mrb_nil_p(ids) ? NULL : mruby_unbox_git_oid(ids));

  native_self->ids = native_ids;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oidarray::count_reader */
/* sha: c6fca041069b47088d9d24c0f5b92496801d01b543b0d43f8a028095656b457b */
#if BIND_Oidarray_count_FIELD_READER
/* get_count
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_Oidarray_get_count(mrb_state* mrb, mrb_value self) {
  git_oidarray * native_self = mruby_unbox_git_oidarray(self);

  size_t native_count = native_self->count;

  mrb_value count = mrb_fixnum_value(native_count);

  return count;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oidarray::count_writer */
/* sha: 44f2a4d5d83ad540ff4f8ecc8c90889dd115d20d6bb43f0b421699b05264d21c */
#if BIND_Oidarray_count_FIELD_WRITER
/* set_count
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_Oidarray_set_count(mrb_state* mrb, mrb_value self) {
  git_oidarray * native_self = mruby_unbox_git_oidarray(self);
  mrb_int native_count;

  mrb_get_args(mrb, "i", &native_count);

  native_self->count = native_count;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Oidarray_init(mrb_state* mrb) {
/* MRUBY_BINDING: Oidarray::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oidarray::class_definition */
/* sha: 496b5d3f61811e84d1ca660ebcc072c5bbc26c6a6196bcc7b9021ea9b8b09489 */
  struct RClass* Oidarray_class = mrb_define_class_under(mrb, Git_module(mrb), "Oidarray", mrb->object_class);
  MRB_SET_INSTANCE_TT(Oidarray_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oidarray::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oidarray::class_method_definitions */
/* sha: c25fce615eba911c1c54f5b6ee03cc523284accfeb9bf9c9eac63bc06fcbba3d */
#if BIND_Oidarray_INITIALIZE
  mrb_define_method(mrb, Oidarray_class, "initialize", mrb_Git_Oidarray_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oidarray::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oidarray::attr_definitions */
/* sha: 6ca8d26b88ea2fe2dfee9c877d169ea76c61a56ec739552aa1b929f747595e65 */
  /*
   * Fields
   */
#if BIND_Oidarray_ids_FIELD_READER
  mrb_define_method(mrb, Oidarray_class, "ids", mrb_Git_Oidarray_get_ids, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Oidarray_ids_FIELD_WRITER
  mrb_define_method(mrb, Oidarray_class, "ids=", mrb_Git_Oidarray_set_ids, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Oidarray_count_FIELD_READER
  mrb_define_method(mrb, Oidarray_class, "count", mrb_Git_Oidarray_get_count, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Oidarray_count_FIELD_WRITER
  mrb_define_method(mrb, Oidarray_class, "count=", mrb_Git_Oidarray_set_count, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oidarray::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oidarray::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oidarray::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
