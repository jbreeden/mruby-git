/*
 * git_status_list
 * Defined in file types.h @ line 184
 */

#include "mruby_Git.h"

#if BIND_StatusList_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusList::initialize */
/* sha: 1c369c1907f9a09656b94c9be555587a6fae5cdcdfb212526689c29157e29a74 */
#if BIND_StatusList_INITIALIZE
mrb_value
mrb_Git_StatusList_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_status_list* native_object = (git_status_list*)calloc(1, sizeof(git_status_list));
  mruby_gift_git_status_list_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_StatusList_init(mrb_state* mrb) {
/* MRUBY_BINDING: StatusList::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusList::class_definition */
/* sha: 2413332af6fc7179b7a2e107188191286fc66c6392d854ae2c20b165dad6913b */
  struct RClass* StatusList_class = mrb_define_class_under(mrb, Git_module(mrb), "StatusList", mrb->object_class);
  MRB_SET_INSTANCE_TT(StatusList_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusList::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusList::class_method_definitions */
/* sha: c5468a812c4f88da3772db3df3e2e6b0b850dd0802c40a3b1dd6685e59b35913 */
#if BIND_StatusList_INITIALIZE
  mrb_define_method(mrb, StatusList_class, "initialize", mrb_Git_StatusList_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, StatusList_class, "disown", mrb_Git_StatusList_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, StatusList_class, "belongs_to_ruby?", mrb_Git_StatusList_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusList::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusList::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusList::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusList::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusList::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
