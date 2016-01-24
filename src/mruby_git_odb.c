/*
 * git_odb
 * Defined in file types.h @ line 81
 */

#include "mruby_Git.h"

#if BIND_Odb_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::initialize */
/* sha: 83fa23fcfe6657c3543b43488b25565c62d2c1a5823cfe5594b38b12f81ae0ce */
#if BIND_Odb_INITIALIZE
mrb_value
mrb_Git_Odb_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_odb* native_object = (git_odb*)calloc(1, sizeof(git_odb));
  mruby_gift_git_odb_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Odb_init(mrb_state* mrb) {
/* MRUBY_BINDING: Odb::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::class_definition */
/* sha: 93d98bb56ad58eea44f9a23e0e8ca301089089c81b8c1b229baa4f7cb7b68aad */
  struct RClass* Odb_class = mrb_define_class_under(mrb, Git_module(mrb), "Odb", mrb->object_class);
  MRB_SET_INSTANCE_TT(Odb_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::class_method_definitions */
/* sha: bd3cf3f3d1209d97bfd7e96e2a26f05a475c4831277a17c90bc22437d3e2a690 */
#if BIND_Odb_INITIALIZE
  mrb_define_method(mrb, Odb_class, "initialize", mrb_Git_Odb_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
