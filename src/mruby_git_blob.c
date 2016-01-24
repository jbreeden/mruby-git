/*
 * git_blob
 * Defined in file types.h @ line 117
 */

#include "mruby_Git.h"

#if BIND_Blob_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blob::initialize */
/* sha: fc2873205898432a76cedd1f55cb262ecfa448dc88f5bb5db74fdc2f2576deab */
#if BIND_Blob_INITIALIZE
mrb_value
mrb_Git_Blob_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_blob* native_object = (git_blob*)calloc(1, sizeof(git_blob));
  mruby_gift_git_blob_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Blob_init(mrb_state* mrb) {
/* MRUBY_BINDING: Blob::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blob::class_definition */
/* sha: b35bc6a3ea7d40f81b2c0ee35b582d4a50058685bd670da202bc606f85e83dd6 */
  struct RClass* Blob_class = mrb_define_class_under(mrb, Git_module(mrb), "Blob", mrb->object_class);
  MRB_SET_INSTANCE_TT(Blob_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blob::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blob::class_method_definitions */
/* sha: 33e97b4c72a4010529d883a0ee255542b20f6d31f240ad8db2c4205376b6d50c */
#if BIND_Blob_INITIALIZE
  mrb_define_method(mrb, Blob_class, "initialize", mrb_Git_Blob_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Blob_class, "disown", mrb_Git_Blob_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Blob_class, "belongs_to_ruby?", mrb_Git_Blob_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blob::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blob::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blob::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blob::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blob::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
