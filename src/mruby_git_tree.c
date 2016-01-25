/*
 * git_tree
 * Defined in file types.h @ line 126
 */

#include "mruby_Git.h"

#if BIND_Tree_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tree::initialize */
/* sha: 440e85af8283ab86b66a79832083d8be56ee2f4879a6c37cf9f9eb2e4ea2b61a */
#if BIND_Tree_INITIALIZE
mrb_value
mrb_Git_Tree_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_tree* native_object = (git_tree*)calloc(1, sizeof(git_tree));
  mruby_gift_git_tree_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Tree_init(mrb_state* mrb) {
/* MRUBY_BINDING: Tree::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tree::class_definition */
/* sha: e4e30deb472c9375a31f37eac38a218850d10095dbb2e665d1d402b9b00b9651 */
  struct RClass* Tree_class = mrb_define_class_under(mrb, Git_module(mrb), "Tree", Object_class(mrb));
  MRB_SET_INSTANCE_TT(Tree_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tree::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tree::class_method_definitions */
/* sha: d07d332b7390879c648e7e66fd8fbaa3b250c0e88b6d988e27631bc1c45db828 */
#if BIND_Tree_INITIALIZE
  mrb_define_method(mrb, Tree_class, "initialize", mrb_Git_Tree_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tree::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tree::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tree::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tree::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tree::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
