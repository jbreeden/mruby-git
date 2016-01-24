/*
 * git_error
 * Defined in file errors.h @ line 64
 */

#include "mruby_Git.h"

#if BIND_Error_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Error::initialize */
/* sha: ec6358c65f6e254e041b66449ce07c8fd4a00243ea7b0a892884f2839fca5b59 */
#if BIND_Error_INITIALIZE
mrb_value
mrb_Git_Error_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_error* native_object = (git_error*)calloc(1, sizeof(git_error));
  mruby_gift_git_error_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Error::message_reader */
/* sha: 8583e13d546bd581ea4e5b19ab0f235dfad221e8d1edd89c3bbfb7759d18172e */
#if BIND_Error_message_FIELD_READER
/* get_message
 *
 * Return Type: char *
 */
mrb_value
mrb_Git_Error_get_message(mrb_state* mrb, mrb_value self) {
  git_error * native_self = mruby_unbox_git_error(self);

  char * native_message = native_self->message;

  mrb_value message = mrb_str_new_cstr(mrb, native_message);

  return message;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Error::message_writer */
/* sha: d026d357a829734c17cdc48d26ecb35cffe1984c88146ba50eea983040869ca9 */
#if BIND_Error_message_FIELD_WRITER
/* set_message
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_Git_Error_set_message(mrb_state* mrb, mrb_value self) {
  git_error * native_self = mruby_unbox_git_error(self);
  mrb_value message;

  mrb_get_args(mrb, "o", &message);

  /* type checking */
  TODO_type_check_char_PTR(message);

  char * native_message = TODO_mruby_unbox_char_PTR(message);

  native_self->message = native_message;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Error::klass_reader */
/* sha: 7458b93fe228ed3cc61df0eaca0dadb06b98084cdc0617e915b1ce983b04606f */
#if BIND_Error_klass_FIELD_READER
/* get_klass
 *
 * Return Type: int
 */
mrb_value
mrb_Git_Error_get_klass(mrb_state* mrb, mrb_value self) {
  git_error * native_self = mruby_unbox_git_error(self);

  int native_klass = native_self->klass;

  mrb_value klass = mrb_fixnum_value(native_klass);

  return klass;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Error::klass_writer */
/* sha: d30bbd8c585c222cdfe24fbf8ad53558bcfacab54fc8539592a16e1063f66b14 */
#if BIND_Error_klass_FIELD_WRITER
/* set_klass
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_Error_set_klass(mrb_state* mrb, mrb_value self) {
  git_error * native_self = mruby_unbox_git_error(self);
  mrb_int native_klass;

  mrb_get_args(mrb, "i", &native_klass);

  native_self->klass = native_klass;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Error_init(mrb_state* mrb) {
/* MRUBY_BINDING: Error::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Error::class_definition */
/* sha: a2e83b058d8c75ee56c40a66762ea3b58bb292ca4e91ae99b7b924a97e0d1767 */
  struct RClass* Error_class = mrb_define_class_under(mrb, Git_module(mrb), "Error", mrb->object_class);
  MRB_SET_INSTANCE_TT(Error_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Error::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Error::class_method_definitions */
/* sha: ccb74b916b4263a037ea2ee289b01e73babd67f9d7a032804a3f96c821aa2956 */
#if BIND_Error_INITIALIZE
  mrb_define_method(mrb, Error_class, "initialize", mrb_Git_Error_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Error_class, "disown", mrb_Git_Error_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Error_class, "belongs_to_ruby?", mrb_Git_Error_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Error::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Error::attr_definitions */
/* sha: 9d99b33e66a2f462ff2b3041368233405a53391a184fd9e086ee33552c560be6 */
  /*
   * Fields
   */
#if BIND_Error_message_FIELD_READER
  mrb_define_method(mrb, Error_class, "message", mrb_Git_Error_get_message, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Error_message_FIELD_WRITER
  mrb_define_method(mrb, Error_class, "message=", mrb_Git_Error_set_message, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Error_klass_FIELD_READER
  mrb_define_method(mrb, Error_class, "klass", mrb_Git_Error_get_klass, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Error_klass_FIELD_WRITER
  mrb_define_method(mrb, Error_class, "klass=", mrb_Git_Error_set_klass, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Error::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Error::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Error::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
