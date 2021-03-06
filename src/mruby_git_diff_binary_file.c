/*
 * git_diff_binary_file
 * Defined in file diff.h @ line 469
 */

#include "mruby_Git.h"

#if BIND_DiffBinaryFile_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinaryFile::initialize */
/* sha: ff2e0085cacf7bf97ddf8a7d304247c566d467893cbdf68718a936491a3412fb */
#if BIND_DiffBinaryFile_INITIALIZE
mrb_value
mrb_Git_DiffBinaryFile_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_diff_binary_file* native_object = (git_diff_binary_file*)calloc(1, sizeof(git_diff_binary_file));
  mruby_gift_git_diff_binary_file_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: DiffBinaryFile::type_reader */
/* sha: f9524e8e6d9829a5c91c05af98f538674f8307185011f0d963f972a2adf24c2a */
#if BIND_DiffBinaryFile_type_FIELD_READER
/* get_type
 *
 * Return Type: git_diff_binary_t
 */
mrb_value
mrb_Git_DiffBinaryFile_get_type(mrb_state* mrb, mrb_value self) {
  git_diff_binary_file * native_self = mruby_unbox_git_diff_binary_file(self);

  git_diff_binary_t native_type = native_self->type;

  mrb_value type = mrb_fixnum_value(native_type);

  return type;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinaryFile::type_writer */
/* sha: 90ed5c7d1761b53a2d47364bab50b14ae0646d615be9180ea86c0db71985e8cb */
#if BIND_DiffBinaryFile_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: git_diff_binary_t
 */
mrb_value
mrb_Git_DiffBinaryFile_set_type(mrb_state* mrb, mrb_value self) {
  git_diff_binary_file * native_self = mruby_unbox_git_diff_binary_file(self);
  mrb_int native_type;

  mrb_get_args(mrb, "i", &native_type);

  native_self->type = native_type;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinaryFile::data_reader */
/* sha: cb5b650d3179b63c702ad7264e1724f4d06c98efc6afccc491c28526f12af746 */
#if BIND_DiffBinaryFile_data_FIELD_READER
/* get_data
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_DiffBinaryFile_get_data(mrb_state* mrb, mrb_value self) {
  git_diff_binary_file * native_self = mruby_unbox_git_diff_binary_file(self);

  const char * native_data = native_self->data;

  mrb_value data = native_data == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_data);

  return data;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinaryFile::data_writer */
/* sha: 8ce65e7dbe31455c963d7fcea7485ea029bcac360b94a930b3f21b99093aa1b8 */
#if BIND_DiffBinaryFile_data_FIELD_WRITER
/* set_data
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_DiffBinaryFile_set_data(mrb_state* mrb, mrb_value self) {
  git_diff_binary_file * native_self = mruby_unbox_git_diff_binary_file(self);
  char * native_data = NULL;

  mrb_get_args(mrb, "z", &native_data);

  native_self->data = native_data;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinaryFile::datalen_reader */
/* sha: 7dea912514d02de2ad13b7130e8e936a0fd7b71e7200d532dbedb770f0c3eb1d */
#if BIND_DiffBinaryFile_datalen_FIELD_READER
/* get_datalen
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_DiffBinaryFile_get_datalen(mrb_state* mrb, mrb_value self) {
  git_diff_binary_file * native_self = mruby_unbox_git_diff_binary_file(self);

  size_t native_datalen = native_self->datalen;

  mrb_value datalen = mrb_fixnum_value(native_datalen);

  return datalen;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinaryFile::datalen_writer */
/* sha: d1e0085ffd5108b86ffed4c637deac28172b09654504489fedfd0c77a6cbeb05 */
#if BIND_DiffBinaryFile_datalen_FIELD_WRITER
/* set_datalen
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_DiffBinaryFile_set_datalen(mrb_state* mrb, mrb_value self) {
  git_diff_binary_file * native_self = mruby_unbox_git_diff_binary_file(self);
  mrb_int native_datalen;

  mrb_get_args(mrb, "i", &native_datalen);

  native_self->datalen = native_datalen;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinaryFile::inflatedlen_reader */
/* sha: bc6e465e83eef113ba8f2d0c6ddf4744b3fcfdab8c0e82d929b50fa03bdf4f81 */
#if BIND_DiffBinaryFile_inflatedlen_FIELD_READER
/* get_inflatedlen
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_DiffBinaryFile_get_inflatedlen(mrb_state* mrb, mrb_value self) {
  git_diff_binary_file * native_self = mruby_unbox_git_diff_binary_file(self);

  size_t native_inflatedlen = native_self->inflatedlen;

  mrb_value inflatedlen = mrb_fixnum_value(native_inflatedlen);

  return inflatedlen;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinaryFile::inflatedlen_writer */
/* sha: 31d9583038f1897e099a2259437523813f0318ab7c08784dbeab527484ab67ab */
#if BIND_DiffBinaryFile_inflatedlen_FIELD_WRITER
/* set_inflatedlen
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_DiffBinaryFile_set_inflatedlen(mrb_state* mrb, mrb_value self) {
  git_diff_binary_file * native_self = mruby_unbox_git_diff_binary_file(self);
  mrb_int native_inflatedlen;

  mrb_get_args(mrb, "i", &native_inflatedlen);

  native_self->inflatedlen = native_inflatedlen;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_DiffBinaryFile_init(mrb_state* mrb) {
/* MRUBY_BINDING: DiffBinaryFile::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinaryFile::class_definition */
/* sha: e98b203d0491e1362a20a6a922ef7208f955acfbf60cb3334acf85cce6511c1a */
  struct RClass* DiffBinaryFile_class = mrb_define_class_under(mrb, Git_module(mrb), "DiffBinaryFile", mrb->object_class);
  MRB_SET_INSTANCE_TT(DiffBinaryFile_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinaryFile::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinaryFile::class_method_definitions */
/* sha: 83b1d9c1b1e96d624dd98980dcf3f8d740f9cc09b90644c5fd99e6cc888af256 */
#if BIND_DiffBinaryFile_INITIALIZE
  mrb_define_method(mrb, DiffBinaryFile_class, "initialize", mrb_Git_DiffBinaryFile_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinaryFile::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinaryFile::attr_definitions */
/* sha: 8bf78b5afe7d194ee80e1e838aa0b3eb3517d2ec20e847aadc623eb210c4678a */
  /*
   * Fields
   */
#if BIND_DiffBinaryFile_type_FIELD_READER
  mrb_define_method(mrb, DiffBinaryFile_class, "type", mrb_Git_DiffBinaryFile_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffBinaryFile_type_FIELD_WRITER
  mrb_define_method(mrb, DiffBinaryFile_class, "type=", mrb_Git_DiffBinaryFile_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffBinaryFile_data_FIELD_READER
  mrb_define_method(mrb, DiffBinaryFile_class, "data", mrb_Git_DiffBinaryFile_get_data, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffBinaryFile_data_FIELD_WRITER
  mrb_define_method(mrb, DiffBinaryFile_class, "data=", mrb_Git_DiffBinaryFile_set_data, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffBinaryFile_datalen_FIELD_READER
  mrb_define_method(mrb, DiffBinaryFile_class, "datalen", mrb_Git_DiffBinaryFile_get_datalen, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffBinaryFile_datalen_FIELD_WRITER
  mrb_define_method(mrb, DiffBinaryFile_class, "datalen=", mrb_Git_DiffBinaryFile_set_datalen, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffBinaryFile_inflatedlen_FIELD_READER
  mrb_define_method(mrb, DiffBinaryFile_class, "inflatedlen", mrb_Git_DiffBinaryFile_get_inflatedlen, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffBinaryFile_inflatedlen_FIELD_WRITER
  mrb_define_method(mrb, DiffBinaryFile_class, "inflatedlen=", mrb_Git_DiffBinaryFile_set_inflatedlen, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinaryFile::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinaryFile::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinaryFile::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
