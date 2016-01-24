/*
 * git_repository
 * Defined in file types.h @ line 105
 */

#include "mruby_Git.h"

#if BIND_Repository_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Repository::initialize */
/* sha: 04f8af107090131c26391844c94ff9272be1af4d1a5cdd14d96789e6b2b060c4 */
#if BIND_Repository_INITIALIZE
mrb_value
mrb_Git_Repository_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_repository* native_object = (git_repository*)calloc(1, sizeof(git_repository));
  mruby_gift_git_repository_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Repository_init(mrb_state* mrb) {
/* MRUBY_BINDING: Repository::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Repository::class_definition */
/* sha: 133d733868b9a7bbb4b19f3de72439635f98893657f7ef1229598fc0bd34124e */
  struct RClass* Repository_class = mrb_define_class_under(mrb, Git_module(mrb), "Repository", mrb->object_class);
  MRB_SET_INSTANCE_TT(Repository_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Repository::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Repository::class_method_definitions */
/* sha: 4a5d4a65fec32aadb95ecc04ac093b487b3f3eba805fa5e0e7701e45ba7e79b7 */
#if BIND_Repository_INITIALIZE
  mrb_define_method(mrb, Repository_class, "initialize", mrb_Git_Repository_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Repository::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Repository::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Repository::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Repository::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Repository::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
