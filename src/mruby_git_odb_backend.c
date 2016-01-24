/*
 * git_odb_backend
 * Defined in file types.h @ line 84
 */

#include "mruby_Git.h"

#if BIND_OdbBackend_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbBackend::initialize */
/* sha: 17afa1382849c5b041be55163f0294c0c5e7ad36159c520e07fd670ef5c4eec9 */
#if BIND_OdbBackend_INITIALIZE
mrb_value
mrb_Git_OdbBackend_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_odb_backend* native_object = (git_odb_backend*)calloc(1, sizeof(git_odb_backend));
  mruby_gift_git_odb_backend_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_OdbBackend_init(mrb_state* mrb) {
/* MRUBY_BINDING: OdbBackend::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbBackend::class_definition */
/* sha: 19f5573badfcb7b0860083947fb8c3e0270b6b7dd14b7c9b7794ba5748edf52f */
  struct RClass* OdbBackend_class = mrb_define_class_under(mrb, Git_module(mrb), "OdbBackend", mrb->object_class);
  MRB_SET_INSTANCE_TT(OdbBackend_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbBackend::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbBackend::class_method_definitions */
/* sha: d7a0496d895816abb8c1f29d3e2c1e9498ad53887ef39a6709f8cee7b1eda949 */
#if BIND_OdbBackend_INITIALIZE
  mrb_define_method(mrb, OdbBackend_class, "initialize", mrb_Git_OdbBackend_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbBackend::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbBackend::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbBackend::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbBackend::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbBackend::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
