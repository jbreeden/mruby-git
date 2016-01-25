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


#if BIND_Buf_TYPE

mrb_value
mrb_Git_Buf_initialize(mrb_state* mrb, mrb_value self) {
  mrb_value str = mrb_nil_value();
  mrb_get_args(mrb, "S", str);
  
  git_buf* native_object = (git_buf*)calloc(1, sizeof(git_buf));
  mruby_gift_git_buf_data_ptr(self, native_object);
  
  if (!mrb_nil_p(str)) {
    git_buf_set(native_object, RSTRING_PTR(str), RSTRING_LEN(str));
  }
  
  return self;
}

mrb_value
mrb_Git_Buf_to_s(mrb_state * mrb, mrb_value self) {
  git_buf * native_self = mruby_unbox_git_buf(self);
  if (native_self->ptr == NULL) {
    return mrb_nil_value();
  } else {
    return mrb_str_new(mrb, native_self->ptr, native_self->size);
  }
}

mrb_value
mrb_Git_Buf_replace(mrb_state * mrb, mrb_value self) {
  giterr_clear();
  git_buf * native_self = mruby_unbox_git_buf(self);
  mrb_value str = mrb_nil_value();
  mrb_get_args(mrb, "S", str);
  int err = git_buf_set(native_self, RSTRING_PTR(str), RSTRING_LEN(str));
  RAISE_GIT_ERROR(err);
  return str;
}

void mrb_Git_Buf_init(mrb_state* mrb) {
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;

  struct RClass* Buf_class = mrb_define_class_under(mrb, Git_module(mrb), "Buf", mrb->object_class);
  MRB_SET_INSTANCE_TT(Buf_class, MRB_TT_DATA);

  mrb_define_method(mrb, Buf_class, "initialize", mrb_Git_Buf_initialize, MRB_ARGS_NONE());
  mrb_define_method(mrb, Buf_class, "to_s", mrb_Git_Buf_to_s, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Buf_class, "to_str", mrb_Git_Buf_to_s, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, Buf_class, "replace", mrb_Git_Buf_replace, MRB_ARGS_ARG(1, 0));
}
#endif
