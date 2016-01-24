#include "mruby_Git.h"

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

void
mruby_Git_define_macro_constants(mrb_state* mrb) {
/* MRUBY_BINDING: pre_macro_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

#ifdef LIBGIT2_VER_MAJOR
  do {
    mrb_value macro = mrb_fixnum_value(LIBGIT2_VER_MAJOR);
    mrb_define_const(mrb, Git_module(mrb), "LIBGIT2_VER_MAJOR", macro);
  } while (0);
#endif
#ifdef LIBGIT2_VER_MINOR
  do {
    mrb_value macro = mrb_fixnum_value(LIBGIT2_VER_MINOR);
    mrb_define_const(mrb, Git_module(mrb), "LIBGIT2_VER_MINOR", macro);
  } while (0);
#endif
#ifdef LIBGIT2_VER_PATCH
  do {
    mrb_value macro = mrb_fixnum_value(LIBGIT2_VER_PATCH);
    mrb_define_const(mrb, Git_module(mrb), "LIBGIT2_VER_PATCH", macro);
  } while (0);
#endif
#ifdef LIBGIT2_VER_REVISION
  do {
    mrb_value macro = mrb_fixnum_value(LIBGIT2_VER_REVISION);
    mrb_define_const(mrb, Git_module(mrb), "LIBGIT2_VER_REVISION", macro);
  } while (0);
#endif
#ifdef LIBGIT2_VERSION
  do {
    mrb_value macro = mrb_fixnum_value(LIBGIT2_VERSION);
    mrb_define_const(mrb, Git_module(mrb), "LIBGIT2_VERSION", macro);
  } while (0);
#endif

/* MRUBY_BINDING: post_macro_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
