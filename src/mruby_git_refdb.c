/*
 * git_refdb
 * Defined in file types.h @ line 96
 */

#include "mruby_Git.h"

#if BIND_Refdb_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refdb::initialize */
/* sha: 7157417b7fa38eccc2bcf76e0a12ccd201becfbf8ab4acd5991337e751a35e2e */
#if BIND_Refdb_INITIALIZE
mrb_value
mrb_Git_Refdb_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_refdb* native_object = (git_refdb*)calloc(1, sizeof(git_refdb));
  mruby_gift_git_refdb_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Refdb_init(mrb_state* mrb) {
/* MRUBY_BINDING: Refdb::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refdb::class_definition */
/* sha: d6e6ae5a1f1d8104f0bf946a080f2068f0f07706333499ac98fb997f71249d5b */
  struct RClass* Refdb_class = mrb_define_class_under(mrb, Git_module(mrb), "Refdb", mrb->object_class);
  MRB_SET_INSTANCE_TT(Refdb_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refdb::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refdb::class_method_definitions */
/* sha: ab930286043132b4042df26d89d54d88f855f68d0616005e33c82d515e752240 */
#if BIND_Refdb_INITIALIZE
  mrb_define_method(mrb, Refdb_class, "initialize", mrb_Git_Refdb_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Refdb_class, "disown", mrb_Git_Refdb_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Refdb_class, "belongs_to_ruby?", mrb_Git_Refdb_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refdb::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refdb::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refdb::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refdb::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refdb::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
