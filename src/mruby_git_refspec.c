/*
 * git_refspec
 * Defined in file types.h @ line 218
 */

#include "mruby_Git.h"

#if BIND_Refspec_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::initialize */
/* sha: 0c446ea4dac8ebcd273f69635805ab70976658771992fdef99f9d6e39a2ddf21 */
#if BIND_Refspec_INITIALIZE
mrb_value
mrb_Git_Refspec_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_refspec* native_object = (git_refspec*)calloc(1, sizeof(git_refspec));
  mruby_gift_git_refspec_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Refspec_init(mrb_state* mrb) {
/* MRUBY_BINDING: Refspec::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::class_definition */
/* sha: e4aea1c2a3b2e168fa76386143c3da34dc096107fb3ca5b5a37a4204b45a491a */
  struct RClass* Refspec_class = mrb_define_class_under(mrb, Git_module(mrb), "Refspec", mrb->object_class);
  MRB_SET_INSTANCE_TT(Refspec_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::class_method_definitions */
/* sha: 6541db2bda7f0be3ec8d8ef225dc170e6d5b95eff8f95eb30c65976d36503470 */
#if BIND_Refspec_INITIALIZE
  mrb_define_method(mrb, Refspec_class, "initialize", mrb_Git_Refspec_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
