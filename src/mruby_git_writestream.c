/*
 * git_writestream
 * Defined in file types.h @ line 425
 */

#include "mruby_Git.h"

#if BIND_Writestream_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

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

/* MRUBY_BINDING: Writestream::disown */
/* sha: 6b78f7f22bf47a6fc82cf122563008bb638070e8dd793a1c01bff151cae2b5be */
mrb_value
mrb_Git_Writestream_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Writestream.disown only accepts objects of type Git::Writestream");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Writestream::belongs_to_ruby */
/* sha: 677cbff90a5e3426bd50a950bc4ff97717a029ebce8bf90129f3543eba2ed2f3 */
mrb_value
mrb_Git_Writestream_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Writestream.belongs_to_ruby only accepts objects of type Git::Writestream");
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
/* sha: 8ade12c4b0ed41c4d2e1ac7e23a578f99026fe452ae1b8f5d625df4af714d65f */
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
/* sha: 2ddc29e468b0cdd4a5d77ba34e6248db138f7b8b02cb62366d67589c17d74830 */
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
/* sha: 6d1269bba5bd5c7ffec24ef70804b4bbb3993b1b074eeab2c2ee448ddee2327a */
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
/* sha: f82d09ba20da6b2be5aee83a32d2e4a265b5be30a6edcb0669e780c0d83a15c8 */
#if BIND_Writestream_INITIALIZE
  mrb_define_method(mrb, Writestream_class, "initialize", mrb_Git_Writestream_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Writestream_class, "disown", mrb_Git_Writestream_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Writestream_class, "belongs_to_ruby?", mrb_Git_Writestream_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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
