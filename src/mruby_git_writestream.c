/*
 * git_writestream
 * Defined in file types.h @ line 425
 */

#include "mruby_Git.h"

#if BIND_Writestream_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Writestream::initialize */
/* sha: b148e59daaa000617c34e03a5f520d62c6b727193e3d007696d38ab1a534faf0 */
#if BIND_Writestream_INITIALIZE
mrb_value
mrb_Git_Writestream_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_writestream* native_object = (git_writestream*)calloc(1, sizeof(git_writestream));
  mruby_gift_git_writestream_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Writestream::write_reader */
/* sha: d2b529e3a19d331012f94f689716b9d0909823cb4b50264e66b79e656ea6d826 */
#if BIND_Writestream_write_FIELD_READER
/* get_write
 *
 * Return Type: int (*)(git_writestream *, const char *, size_t)
 */
mrb_value
mrb_Git_Writestream_get_write(mrb_state* mrb, mrb_value self) {
  git_writestream * native_self = mruby_unbox_git_writestream(self);

  int (*)(git_writestream *, const char *, size_t) native_write = native_self->write;

  mrb_value write = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_git_writestream_PTR_COMMAchar_PTR_COMMA_size_t_RPAREN(mrb, native_write);

  return write;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Writestream::write_writer */
/* sha: 7fa4a01b7073608afecf63cba593c8a1dbd54a3e5dd570398c91929cd4461c84 */
#if BIND_Writestream_write_FIELD_WRITER
/* set_write
 *
 * Parameters:
 * - value: int (*)(git_writestream *, const char *, size_t)
 */
mrb_value
mrb_Git_Writestream_set_write(mrb_state* mrb, mrb_value self) {
  git_writestream * native_self = mruby_unbox_git_writestream(self);
  mrb_value write;

  mrb_get_args(mrb, "o", &write);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_git_writestream_PTR_COMMAchar_PTR_COMMA_size_t_RPAREN(write);

  int (*native_write)(git_writestream *, const char *, size_t) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_git_writestream_PTR_COMMAchar_PTR_COMMA_size_t_RPAREN(write);

  native_self->write = native_write;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Writestream::close_reader */
/* sha: fbf5e24385b1888776f8f5bb1e2d5a7de74ae2ee89e0da8d134169c0885c3ecc */
#if BIND_Writestream_close_FIELD_READER
/* get_close
 *
 * Return Type: int (*)(git_writestream *)
 */
mrb_value
mrb_Git_Writestream_get_close(mrb_state* mrb, mrb_value self) {
  git_writestream * native_self = mruby_unbox_git_writestream(self);

  int (*)(git_writestream *) native_close = native_self->close;

  mrb_value close = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_git_writestream_PTR_RPAREN(mrb, native_close);

  return close;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Writestream::close_writer */
/* sha: 01fec06abce9ab57f98e3d3ef2b6901da750c77f2309afb63d1cb9061ea69e12 */
#if BIND_Writestream_close_FIELD_WRITER
/* set_close
 *
 * Parameters:
 * - value: int (*)(git_writestream *)
 */
mrb_value
mrb_Git_Writestream_set_close(mrb_state* mrb, mrb_value self) {
  git_writestream * native_self = mruby_unbox_git_writestream(self);
  mrb_value close;

  mrb_get_args(mrb, "o", &close);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_git_writestream_PTR_RPAREN(close);

  int (*native_close)(git_writestream *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_git_writestream_PTR_RPAREN(close);

  native_self->close = native_close;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Writestream::free_reader */
/* sha: a352f51a5742eb93cc4e22aacd710afe5edf93b8c0a91cac474f19c493a60a33 */
#if BIND_Writestream_free_FIELD_READER
/* get_free
 *
 * Return Type: void (*)(git_writestream *)
 */
mrb_value
mrb_Git_Writestream_get_free(mrb_state* mrb, mrb_value self) {
  git_writestream * native_self = mruby_unbox_git_writestream(self);

  void (*)(git_writestream *) native_free = native_self->free;

  mrb_value free = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_git_writestream_PTR_RPAREN(mrb, native_free);

  return free;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Writestream::free_writer */
/* sha: 06bba8ea7ca333f7c9ac82553f0431cd597f47de5c7fa9aa60fc66b134685461 */
#if BIND_Writestream_free_FIELD_WRITER
/* set_free
 *
 * Parameters:
 * - value: void (*)(git_writestream *)
 */
mrb_value
mrb_Git_Writestream_set_free(mrb_state* mrb, mrb_value self) {
  git_writestream * native_self = mruby_unbox_git_writestream(self);
  mrb_value free;

  mrb_get_args(mrb, "o", &free);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_git_writestream_PTR_RPAREN(free);

  void (*native_free)(git_writestream *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_git_writestream_PTR_RPAREN(free);

  native_self->free = native_free;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Writestream_init(mrb_state* mrb) {
/* MRUBY_BINDING: Writestream::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Writestream::class_definition */
/* sha: f6e1140e5d91d6c0946b232835ae84ba1d8afdbedffce595e0de51929ad196fe */
  struct RClass* Writestream_class = mrb_define_class_under(mrb, Git_module(mrb), "Writestream", mrb->object_class);
  MRB_SET_INSTANCE_TT(Writestream_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Writestream::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Writestream::class_method_definitions */
/* sha: 2f335c53ac59e06a28d1942d3e0f621c494c896336668a6a32c3bbfc8253360e */
#if BIND_Writestream_INITIALIZE
  mrb_define_method(mrb, Writestream_class, "initialize", mrb_Git_Writestream_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Writestream::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Writestream::attr_definitions */
/* sha: 1bb542000ba512468921bed820eaf57995d504f288fb20f6f5009adbb5e70bbe */
  /*
   * Fields
   */
#if BIND_Writestream_write_FIELD_READER
  mrb_define_method(mrb, Writestream_class, "write", mrb_Git_Writestream_get_write, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Writestream_write_FIELD_WRITER
  mrb_define_method(mrb, Writestream_class, "write=", mrb_Git_Writestream_set_write, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Writestream_close_FIELD_READER
  mrb_define_method(mrb, Writestream_class, "close", mrb_Git_Writestream_get_close, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Writestream_close_FIELD_WRITER
  mrb_define_method(mrb, Writestream_class, "close=", mrb_Git_Writestream_set_close, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Writestream_free_FIELD_READER
  mrb_define_method(mrb, Writestream_class, "free", mrb_Git_Writestream_get_free, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Writestream_free_FIELD_WRITER
  mrb_define_method(mrb, Writestream_class, "free=", mrb_Git_Writestream_set_free, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Writestream::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Writestream::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Writestream::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
