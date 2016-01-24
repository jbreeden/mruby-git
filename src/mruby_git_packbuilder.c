/*
 * git_packbuilder
 * Defined in file types.h @ line 153
 */

#include "mruby_Git.h"

#if BIND_Packbuilder_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Packbuilder::initialize */
/* sha: bf7f5a55966fcb993e3850333c32141b91bd76e5b6840e3bdffa2d5ffc0d68df */
#if BIND_Packbuilder_INITIALIZE
mrb_value
mrb_Git_Packbuilder_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_packbuilder* native_object = (git_packbuilder*)calloc(1, sizeof(git_packbuilder));
  mruby_gift_git_packbuilder_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Packbuilder_init(mrb_state* mrb) {
/* MRUBY_BINDING: Packbuilder::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Packbuilder::class_definition */
/* sha: fe3c8eba7cc3eade884d5b5ac722f3c6097faab085eac22f461cda474a376c27 */
  struct RClass* Packbuilder_class = mrb_define_class_under(mrb, Git_module(mrb), "Packbuilder", mrb->object_class);
  MRB_SET_INSTANCE_TT(Packbuilder_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Packbuilder::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Packbuilder::class_method_definitions */
/* sha: eab74bd123d071c4ad0af07b629ea4f22f2df9a033982853e67dfee137c0c7e2 */
#if BIND_Packbuilder_INITIALIZE
  mrb_define_method(mrb, Packbuilder_class, "initialize", mrb_Git_Packbuilder_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Packbuilder_class, "disown", mrb_Git_Packbuilder_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Packbuilder_class, "belongs_to_ruby?", mrb_Git_Packbuilder_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Packbuilder::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Packbuilder::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Packbuilder::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Packbuilder::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Packbuilder::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
