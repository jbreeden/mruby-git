/*
 * git_filter_list
 * Defined in file filter.h @ line 73
 */

#include "mruby_Git.h"

#if BIND_FilterList_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FilterList::initialize */
/* sha: f85da5ed241f08f7a39035e44867b497ffa33dec0cdc96cced24c53a8d86099a */
#if BIND_FilterList_INITIALIZE
mrb_value
mrb_Git_FilterList_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_filter_list* native_object = (git_filter_list*)calloc(1, sizeof(git_filter_list));
  mruby_gift_git_filter_list_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_FilterList_init(mrb_state* mrb) {
/* MRUBY_BINDING: FilterList::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FilterList::class_definition */
/* sha: c63e024489c143a7f8be33e4454d480d16d14961af4bbe0b0f0c93e7c16cbdfb */
  struct RClass* FilterList_class = mrb_define_class_under(mrb, Git_module(mrb), "FilterList", mrb->object_class);
  MRB_SET_INSTANCE_TT(FilterList_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FilterList::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FilterList::class_method_definitions */
/* sha: 2f46f3cd8a6c90f99f2f3f23228c8919621a1381e05f63828eb7e51abe91a269 */
#if BIND_FilterList_INITIALIZE
  mrb_define_method(mrb, FilterList_class, "initialize", mrb_Git_FilterList_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FilterList::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FilterList::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FilterList::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FilterList::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FilterList::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
