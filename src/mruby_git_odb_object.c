/*
 * git_odb_object
 * Defined in file types.h @ line 87
 */

#include "mruby_Git.h"

#if BIND_OdbObject_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::initialize */
/* sha: 229087e9cfaf85bd62da0369875d12bb80a0c5459cd5bd16038100972a149a7f */
#if BIND_OdbObject_INITIALIZE
mrb_value
mrb_Git_OdbObject_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_odb_object* native_object = (git_odb_object*)calloc(1, sizeof(git_odb_object));
  mruby_gift_git_odb_object_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_OdbObject_init(mrb_state* mrb) {
/* MRUBY_BINDING: OdbObject::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::class_definition */
/* sha: 80ec89673e55c5eb3988369b39e16aa13aed8f2f731592f9368ae593da43b723 */
  struct RClass* OdbObject_class = mrb_define_class_under(mrb, Git_module(mrb), "OdbObject", mrb->object_class);
  MRB_SET_INSTANCE_TT(OdbObject_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::class_method_definitions */
/* sha: 684cf719c38b12cb44831f922ea4a45761c339990faa3edef3fe3ba45d831340 */
#if BIND_OdbObject_INITIALIZE
  mrb_define_method(mrb, OdbObject_class, "initialize", mrb_Git_OdbObject_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
