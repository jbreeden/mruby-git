/*
 * git_merge_file_input
 * Defined in file merge.h @ line 32
 */

#include "mruby_Git.h"

#if BIND_MergeFileInput_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileInput::initialize */
/* sha: 48c0ce18cbdd1769864da3df33be9b79a45faf46db9281b06eb7c21ca395dc7b */
#if BIND_MergeFileInput_INITIALIZE
mrb_value
mrb_Git_MergeFileInput_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_merge_file_input* native_object = (git_merge_file_input*)calloc(1, sizeof(git_merge_file_input));
  mruby_gift_git_merge_file_input_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: MergeFileInput::version_reader */
/* sha: fcc47b8cd09e79a00637fb2985da4886b5a9048c4a451c1e720abbb24318997e */
#if BIND_MergeFileInput_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_MergeFileInput_get_version(mrb_state* mrb, mrb_value self) {
  git_merge_file_input * native_self = mruby_unbox_git_merge_file_input(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileInput::version_writer */
/* sha: c66a323542bee26528e7d51c403b95ef32d036ddebf453244f0d11f18fd6a741 */
#if BIND_MergeFileInput_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_MergeFileInput_set_version(mrb_state* mrb, mrb_value self) {
  git_merge_file_input * native_self = mruby_unbox_git_merge_file_input(self);
  mrb_int native_version;

  mrb_get_args(mrb, "i", &native_version);

  native_self->version = native_version;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileInput::ptr_reader */
/* sha: deea93170ac35457a9a4b8e2acc9fef8e30ad052cbda7764aa9f368481c07e77 */
#if BIND_MergeFileInput_ptr_FIELD_READER
/* get_ptr
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_MergeFileInput_get_ptr(mrb_state* mrb, mrb_value self) {
  git_merge_file_input * native_self = mruby_unbox_git_merge_file_input(self);

  const char * native_ptr = native_self->ptr;

  mrb_value ptr = native_ptr == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_ptr);

  return ptr;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileInput::ptr_writer */
/* sha: f651f97b4c363a7c898b7e262e1fcca69d38b21181d739190e46161ef6808e90 */
#if BIND_MergeFileInput_ptr_FIELD_WRITER
/* set_ptr
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_MergeFileInput_set_ptr(mrb_state* mrb, mrb_value self) {
  git_merge_file_input * native_self = mruby_unbox_git_merge_file_input(self);
  char * native_ptr = NULL;

  mrb_get_args(mrb, "z", &native_ptr);

  native_self->ptr = native_ptr;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileInput::size_reader */
/* sha: e5e0840d800f5a122e0dd8339e2f022334f32e17751dedd384ec62bb54714c05 */
#if BIND_MergeFileInput_size_FIELD_READER
/* get_size
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_MergeFileInput_get_size(mrb_state* mrb, mrb_value self) {
  git_merge_file_input * native_self = mruby_unbox_git_merge_file_input(self);

  size_t native_size = native_self->size;

  mrb_value size = mrb_fixnum_value(native_size);

  return size;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileInput::size_writer */
/* sha: 10306498401fdcae16f3d7517d0fa2679deacadec8ff195d4e9986d219b39043 */
#if BIND_MergeFileInput_size_FIELD_WRITER
/* set_size
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_MergeFileInput_set_size(mrb_state* mrb, mrb_value self) {
  git_merge_file_input * native_self = mruby_unbox_git_merge_file_input(self);
  mrb_int native_size;

  mrb_get_args(mrb, "i", &native_size);

  native_self->size = native_size;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileInput::path_reader */
/* sha: b4e6e13e0e239ed5ebd43ae5b1b04d3aec48d8f4c0fa6d4b79a0fa8ea37543f7 */
#if BIND_MergeFileInput_path_FIELD_READER
/* get_path
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_MergeFileInput_get_path(mrb_state* mrb, mrb_value self) {
  git_merge_file_input * native_self = mruby_unbox_git_merge_file_input(self);

  const char * native_path = native_self->path;

  mrb_value path = native_path == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_path);

  return path;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileInput::path_writer */
/* sha: c98690bd1b6ae48d670ef62e669429efbe920915b401d91faed6db821cb027ea */
#if BIND_MergeFileInput_path_FIELD_WRITER
/* set_path
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_MergeFileInput_set_path(mrb_state* mrb, mrb_value self) {
  git_merge_file_input * native_self = mruby_unbox_git_merge_file_input(self);
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

/* MRUBY_BINDING: MergeFileInput::mode_reader */
/* sha: 19b422b92cc639b6183f16d0864d66b18ce751f895dbfac67afb52e2c9780118 */
#if BIND_MergeFileInput_mode_FIELD_READER
/* get_mode
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_MergeFileInput_get_mode(mrb_state* mrb, mrb_value self) {
  git_merge_file_input * native_self = mruby_unbox_git_merge_file_input(self);

  unsigned int native_mode = native_self->mode;

  mrb_value mode = mrb_fixnum_value(native_mode);

  return mode;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileInput::mode_writer */
/* sha: 6ee2672ae43623d2cede39863ab649cc76d352a45c36724561696fe45c86f164 */
#if BIND_MergeFileInput_mode_FIELD_WRITER
/* set_mode
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_MergeFileInput_set_mode(mrb_state* mrb, mrb_value self) {
  git_merge_file_input * native_self = mruby_unbox_git_merge_file_input(self);
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


void mrb_Git_MergeFileInput_init(mrb_state* mrb) {
/* MRUBY_BINDING: MergeFileInput::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileInput::class_definition */
/* sha: 97833682a4900742d52352443ae997c43a5b5e6441e388ab198c01c350c78826 */
  struct RClass* MergeFileInput_class = mrb_define_class_under(mrb, Git_module(mrb), "MergeFileInput", mrb->object_class);
  MRB_SET_INSTANCE_TT(MergeFileInput_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileInput::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileInput::class_method_definitions */
/* sha: f5de86abc1bf5f6bc84be0a1b9be743104d07e7a32aa1dbddc4942293336f086 */
#if BIND_MergeFileInput_INITIALIZE
  mrb_define_method(mrb, MergeFileInput_class, "initialize", mrb_Git_MergeFileInput_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileInput::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileInput::attr_definitions */
/* sha: ccace563cc53576fdc2dccf9ca8a6863e28eddb18e1d0cc6718bb0003bcea541 */
  /*
   * Fields
   */
#if BIND_MergeFileInput_version_FIELD_READER
  mrb_define_method(mrb, MergeFileInput_class, "version", mrb_Git_MergeFileInput_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeFileInput_version_FIELD_WRITER
  mrb_define_method(mrb, MergeFileInput_class, "version=", mrb_Git_MergeFileInput_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeFileInput_ptr_FIELD_READER
  mrb_define_method(mrb, MergeFileInput_class, "ptr", mrb_Git_MergeFileInput_get_ptr, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeFileInput_ptr_FIELD_WRITER
  mrb_define_method(mrb, MergeFileInput_class, "ptr=", mrb_Git_MergeFileInput_set_ptr, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeFileInput_size_FIELD_READER
  mrb_define_method(mrb, MergeFileInput_class, "size", mrb_Git_MergeFileInput_get_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeFileInput_size_FIELD_WRITER
  mrb_define_method(mrb, MergeFileInput_class, "size=", mrb_Git_MergeFileInput_set_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeFileInput_path_FIELD_READER
  mrb_define_method(mrb, MergeFileInput_class, "path", mrb_Git_MergeFileInput_get_path, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeFileInput_path_FIELD_WRITER
  mrb_define_method(mrb, MergeFileInput_class, "path=", mrb_Git_MergeFileInput_set_path, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeFileInput_mode_FIELD_READER
  mrb_define_method(mrb, MergeFileInput_class, "mode", mrb_Git_MergeFileInput_get_mode, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeFileInput_mode_FIELD_WRITER
  mrb_define_method(mrb, MergeFileInput_class, "mode=", mrb_Git_MergeFileInput_set_mode, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileInput::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileInput::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileInput::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
