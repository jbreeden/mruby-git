/*
 * git_tree_entry
 * Defined in file types.h @ line 123
 */

#include "mruby_Git.h"

#if BIND_TreeEntry_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TreeEntry::initialize */
/* sha: 48e86dd82071d4bc6ebc1033b6637240693b8e1719314f1311f1e9c7ac7926ea */
#if BIND_TreeEntry_INITIALIZE
mrb_value
mrb_Git_TreeEntry_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_tree_entry* native_object = (git_tree_entry*)calloc(1, sizeof(git_tree_entry));
  mruby_gift_git_tree_entry_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_TreeEntry_init(mrb_state* mrb) {
/* MRUBY_BINDING: TreeEntry::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TreeEntry::class_definition */
/* sha: 3c6ca92b7bf9c78c89bee01b231b3525846a1d379afe2f0ca86e910854176725 */
  struct RClass* TreeEntry_class = mrb_define_class_under(mrb, Git_module(mrb), "TreeEntry", mrb->object_class);
  MRB_SET_INSTANCE_TT(TreeEntry_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TreeEntry::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TreeEntry::class_method_definitions */
/* sha: cd2b3f879788d17ffe538a527aae7772866e6ea588d8fa404759271bc8ae485f */
#if BIND_TreeEntry_INITIALIZE
  mrb_define_method(mrb, TreeEntry_class, "initialize", mrb_Git_TreeEntry_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TreeEntry::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TreeEntry::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TreeEntry::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TreeEntry::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TreeEntry::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
