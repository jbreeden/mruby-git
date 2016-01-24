/* - MRUBY_BINDINGS_NO_CLOBBER -
 * git_buf
 * Defined in file buffer.h @ line 52
 */

#include "mruby_Git.h"


/** Excerpt from libgit2 header
 * A data buffer for exporting data from libgit2
 *
 * Sometimes libgit2 wants to return an allocated data buffer to the
 * caller and have the caller take responsibility for freeing that memory.
 * This can be awkward if the caller does not have easy access to the same
 * allocation functions that libgit2 is using.  In those cases, libgit2
 * will fill in a `git_buf` and the caller can use `git_buf_free()` to
 * release it when they are done.
 *
 * A `git_buf` may also be used for the caller to pass in a reference to
 * a block of memory they hold.  In this case, libgit2 will not resize or
 * free the memory, but will read from it as needed.
 *
 * A `git_buf` is a public structure with three fields:
 *
 * - `ptr` points to the start of the allocated memory.  If it is NULL,
 *   then the `git_buf` is considered empty and libgit2 will feel free
 *   to overwrite it with new data.
 *
 * - `size` holds the size (in bytes) of the data that is actually used.
 *
 * - `asize` holds the known total amount of allocated memory if the `ptr`
 *    was allocated by libgit2.  It may be larger than `size`.  If `ptr`
 *    was not allocated by libgit2 and should not be resized and/or freed,
 *    then `asize` will be set to zero.
 *
 * Some APIs may occasionally do something slightly unusual with a buffer,
 * such as setting `ptr` to a value that was passed in by the user.  In
 * those cases, the behavior will be clearly documented by the API.
 */
 
/* IMPORTANT: GC INFORMATION 
 * -------------------------
 *
 * The `asize` member communicates who owns the buffer. This lets us
 * easily determine what to do on GC of the Ruby handle to the buffer.
 * I wish all libraries did something like that.
 */


#if BIND_Buf_TYPE
/*
 * Class Methods
 */

/* MRUBY_BINDING: Buf::initialize */
/* sha: 004b10b48973a520c4e1b9d44590be4627288d0cee124bcfb9847de0f0aa343e */
#if BIND_Buf_INITIALIZE
mrb_value
mrb_Git_Buf_initialize(mrb_state* mrb, mrb_value self) {
  git_buf* native_object = (git_buf*)calloc(1, sizeof(git_buf));
  mruby_gift_git_buf_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: Buf::asize_reader */
/* sha: c9103c448ca494fb57979dcf225872453d3775b1bc6a163182a7db5795e708dd */
#if BIND_Buf_asize_FIELD_READER
/* get_asize
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_Buf_get_asize(mrb_state* mrb, mrb_value self) {
  git_buf * native_self = mruby_unbox_git_buf(self);

  size_t native_asize = native_self->asize;

  mrb_value asize = mrb_fixnum_value(native_asize);

  return asize;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Buf::asize_writer */
/* sha: 8ff5f34f6f656898692df8cb7ff9ab2598e32124f79005735ea2da5ccddf54b7 */
#if BIND_Buf_asize_FIELD_WRITER
/* set_asize
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_Buf_set_asize(mrb_state* mrb, mrb_value self) {
  git_buf * native_self = mruby_unbox_git_buf(self);
  mrb_int native_asize;

  mrb_get_args(mrb, "i", &native_asize);

  native_self->asize = native_asize;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Buf::size_reader */
/* sha: e388a48770cfad7d33e85900958f300a4674c263a22d5d5a922e8baa5f051ab0 */
#if BIND_Buf_size_FIELD_READER
/* get_size
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_Buf_get_size(mrb_state* mrb, mrb_value self) {
  git_buf * native_self = mruby_unbox_git_buf(self);

  size_t native_size = native_self->size;

  mrb_value size = mrb_fixnum_value(native_size);

  return size;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Buf::size_writer */
/* sha: a86fee24fea0bde49352666e5dd0337e40d0b84cab83d9556a589c1432ae34d1 */
#if BIND_Buf_size_FIELD_WRITER
/* set_size
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_Buf_set_size(mrb_state* mrb, mrb_value self) {
  git_buf * native_self = mruby_unbox_git_buf(self);
  mrb_int native_size;

  mrb_get_args(mrb, "i", &native_size);

  native_self->size = native_size;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Buf_init(mrb_state* mrb) {
/* MRUBY_BINDING: Buf::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Buf::class_definition */
/* sha: ec5ed7cdd86c6645e0f5bbfe0276932588fdd5303fdec47d8db5b45ab8d68f66 */
  struct RClass* Buf_class = mrb_define_class_under(mrb, Git_module(mrb), "Buf", mrb->object_class);
  MRB_SET_INSTANCE_TT(Buf_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Buf::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Buf::class_method_definitions */
/* sha: cb24fdefd2ec9d5251aec7e9a7c2f0670038ef18976badb22bfbf840301ab8fb */
#if BIND_Buf_INITIALIZE
  mrb_define_method(mrb, Buf_class, "initialize", mrb_Git_Buf_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Buf::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Buf::attr_definitions */
/* sha: 8da034e6aef9ae45b319b797d9845f1270c37dde52a2c08be32a9e8bf45fd06a */
  /*
   * Fields
   */
#if BIND_Buf_ptr_FIELD_READER
  mrb_define_method(mrb, Buf_class, "ptr", mrb_Git_Buf_get_ptr, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Buf_ptr_FIELD_WRITER
  mrb_define_method(mrb, Buf_class, "ptr=", mrb_Git_Buf_set_ptr, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Buf_asize_FIELD_READER
  mrb_define_method(mrb, Buf_class, "asize", mrb_Git_Buf_get_asize, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Buf_asize_FIELD_WRITER
  mrb_define_method(mrb, Buf_class, "asize=", mrb_Git_Buf_set_asize, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Buf_size_FIELD_READER
  mrb_define_method(mrb, Buf_class, "size", mrb_Git_Buf_get_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Buf_size_FIELD_WRITER
  mrb_define_method(mrb, Buf_class, "size=", mrb_Git_Buf_set_size, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Buf::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Buf::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Buf::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
