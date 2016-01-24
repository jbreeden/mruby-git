#include "mruby_Git.h"

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

void
mruby_Git_define_macro_constants(mrb_state* mrb) {
/* MRUBY_BINDING: pre_macro_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

#ifdef GIT_DEFAULT_PORT
  do {
    mrb_value macro = GIT_DEFAULT_PORT == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, GIT_DEFAULT_PORT);
    mrb_define_const(mrb, Git_module(mrb), "GIT_DEFAULT_PORT", macro);
  } while (0);
#endif
#ifdef GIT_DESCRIBE_DEFAULT_ABBREVIATED_SIZE
  do {
    mrb_value macro = mrb_fixnum_value(GIT_DESCRIBE_DEFAULT_ABBREVIATED_SIZE);
    mrb_define_const(mrb, Git_module(mrb), "GIT_DESCRIBE_DEFAULT_ABBREVIATED_SIZE", macro);
  } while (0);
#endif
#ifdef GIT_DESCRIBE_DEFAULT_MAX_CANDIDATES_TAGS
  do {
    mrb_value macro = mrb_fixnum_value(GIT_DESCRIBE_DEFAULT_MAX_CANDIDATES_TAGS);
    mrb_define_const(mrb, Git_module(mrb), "GIT_DESCRIBE_DEFAULT_MAX_CANDIDATES_TAGS", macro);
  } while (0);
#endif
#ifdef GIT_IDXENTRY_NAMEMASK
  do {
    mrb_value macro = mrb_fixnum_value(GIT_IDXENTRY_NAMEMASK);
    mrb_define_const(mrb, Git_module(mrb), "GIT_IDXENTRY_NAMEMASK", macro);
  } while (0);
#endif
#ifdef GIT_IDXENTRY_STAGEMASK
  do {
    mrb_value macro = mrb_fixnum_value(GIT_IDXENTRY_STAGEMASK);
    mrb_define_const(mrb, Git_module(mrb), "GIT_IDXENTRY_STAGEMASK", macro);
  } while (0);
#endif
#ifdef GIT_IDXENTRY_STAGESHIFT
  do {
    mrb_value macro = mrb_fixnum_value(GIT_IDXENTRY_STAGESHIFT);
    mrb_define_const(mrb, Git_module(mrb), "GIT_IDXENTRY_STAGESHIFT", macro);
  } while (0);
#endif
#ifdef GIT_OID_HEX_ZERO
  do {
    mrb_value macro = GIT_OID_HEX_ZERO == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, GIT_OID_HEX_ZERO);
    mrb_define_const(mrb, Git_module(mrb), "GIT_OID_HEX_ZERO", macro);
  } while (0);
#endif
#ifdef GIT_OID_HEXSZ
  do {
    mrb_value macro = mrb_fixnum_value(GIT_OID_HEXSZ);
    mrb_define_const(mrb, Git_module(mrb), "GIT_OID_HEXSZ", macro);
  } while (0);
#endif
#ifdef GIT_OID_MINPREFIXLEN
  do {
    mrb_value macro = mrb_fixnum_value(GIT_OID_MINPREFIXLEN);
    mrb_define_const(mrb, Git_module(mrb), "GIT_OID_MINPREFIXLEN", macro);
  } while (0);
#endif
#ifdef GIT_OID_RAWSZ
  do {
    mrb_value macro = mrb_fixnum_value(GIT_OID_RAWSZ);
    mrb_define_const(mrb, Git_module(mrb), "GIT_OID_RAWSZ", macro);
  } while (0);
#endif
#ifdef GIT_PATH_LIST_SEPARATOR
  do {
    mrb_value macro = mrb_fixnum_value(GIT_PATH_LIST_SEPARATOR);
    mrb_define_const(mrb, Git_module(mrb), "GIT_PATH_LIST_SEPARATOR", macro);
  } while (0);
#endif
#ifdef GIT_PATH_MAX
  do {
    mrb_value macro = mrb_fixnum_value(GIT_PATH_MAX);
    mrb_define_const(mrb, Git_module(mrb), "GIT_PATH_MAX", macro);
  } while (0);
#endif
#ifdef GIT_REBASE_NO_OPERATION
  do {
    mrb_value macro = mrb_fixnum_value(GIT_REBASE_NO_OPERATION);
    mrb_define_const(mrb, Git_module(mrb), "GIT_REBASE_NO_OPERATION", macro);
  } while (0);
#endif
#ifdef GIT_STATUS_OPT_DEFAULTS
  do {
    mrb_value macro = mrb_fixnum_value(GIT_STATUS_OPT_DEFAULTS);
    mrb_define_const(mrb, Git_module(mrb), "GIT_STATUS_OPT_DEFAULTS", macro);
  } while (0);
#endif
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
    mrb_value macro = LIBGIT2_VERSION == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, LIBGIT2_VERSION);
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
