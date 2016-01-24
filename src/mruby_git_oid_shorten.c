/*
 * git_oid_shorten
 * Defined in file oid.h @ line 216
 */

#include "mruby_Git.h"

#if BIND_OidShorten_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::initialize */
/* sha: f4d20d0b85fc4645994c297de2794768dc7cc5c383f55135d0e0a1480c9de796 */
#if BIND_OidShorten_INITIALIZE
mrb_value
mrb_Git_OidShorten_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_oid_shorten* native_object = (git_oid_shorten*)calloc(1, sizeof(git_oid_shorten));
  mruby_gift_git_oid_shorten_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_OidShorten_init(mrb_state* mrb) {
/* MRUBY_BINDING: OidShorten::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::class_definition */
/* sha: e8815ef477b6ef03c3d332368b55315b51323b8665fb059a4db0549743bd9f38 */
  struct RClass* OidShorten_class = mrb_define_class_under(mrb, Git_module(mrb), "OidShorten", mrb->object_class);
  MRB_SET_INSTANCE_TT(OidShorten_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::class_method_definitions */
/* sha: f6023374c80ba1c7539f0ad67c56d891feb708633962cd80f697b54fb18b5b27 */
#if BIND_OidShorten_INITIALIZE
  mrb_define_method(mrb, OidShorten_class, "initialize", mrb_Git_OidShorten_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
