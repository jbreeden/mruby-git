/*
 * git_reflog_entry
 * Defined in file types.h @ line 144
 */

#include "mruby_Git.h"

#if BIND_ReflogEntry_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::initialize */
/* sha: 0734b536cdbbb5dfeb736b156d571a6f55728109aef6c121b60f6f22e6f1e86c */
#if BIND_ReflogEntry_INITIALIZE
mrb_value
mrb_Git_ReflogEntry_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_reflog_entry* native_object = (git_reflog_entry*)calloc(1, sizeof(git_reflog_entry));
  mruby_gift_git_reflog_entry_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_ReflogEntry_init(mrb_state* mrb) {
/* MRUBY_BINDING: ReflogEntry::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::class_definition */
/* sha: a154fb8cab7aaf0154b3e8b4741652a735c018b06bc32e0cf410fa580ad7f746 */
  struct RClass* ReflogEntry_class = mrb_define_class_under(mrb, Git_module(mrb), "ReflogEntry", mrb->object_class);
  MRB_SET_INSTANCE_TT(ReflogEntry_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::class_method_definitions */
/* sha: 7b02ae3eb9aa19deff7ff0442426e6795e50108dfc9e038e23eff2f19d7967d8 */
#if BIND_ReflogEntry_INITIALIZE
  mrb_define_method(mrb, ReflogEntry_class, "initialize", mrb_Git_ReflogEntry_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
