/*
 * git_refdb_backend
 * Defined in file types.h @ line 99
 */

#include "mruby_Git.h"

#if BIND_RefdbBackend_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RefdbBackend::initialize */
/* sha: efc97760532a066c82be2f698c2d11e9a856ab873b2c27c2214a1b5f8777151f */
#if BIND_RefdbBackend_INITIALIZE
mrb_value
mrb_Git_RefdbBackend_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_refdb_backend* native_object = (git_refdb_backend*)calloc(1, sizeof(git_refdb_backend));
  mruby_gift_git_refdb_backend_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_RefdbBackend_init(mrb_state* mrb) {
/* MRUBY_BINDING: RefdbBackend::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RefdbBackend::class_definition */
/* sha: ad34c55c1d870cb7b6eb8cc28d5c2c49b57f97259186bd0d5e4eaaa77afae9e2 */
  struct RClass* RefdbBackend_class = mrb_define_class_under(mrb, Git_module(mrb), "RefdbBackend", mrb->object_class);
  MRB_SET_INSTANCE_TT(RefdbBackend_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RefdbBackend::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RefdbBackend::class_method_definitions */
/* sha: 9c14ce005341aded76473ea33ff8214065d9aa7a5819643ac20ab6a0dd5f141a */
#if BIND_RefdbBackend_INITIALIZE
  mrb_define_method(mrb, RefdbBackend_class, "initialize", mrb_Git_RefdbBackend_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RefdbBackend::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RefdbBackend::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RefdbBackend::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RefdbBackend::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RefdbBackend::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
