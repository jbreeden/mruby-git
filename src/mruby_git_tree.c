/*
 * git_tree
 * Defined in file types.h @ line 126
 */

#include "mruby_Git.h"

#if BIND_Tree_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

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

/* MRUBY_BINDING: Tree::disown */
/* sha: 6f25efbbe8e0854327c7ef37d6b8112072db783cdf92cf4636270034bba1ed59 */
mrb_value
mrb_Git_Tree_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Tree.disown only accepts objects of type Git::Tree");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tree::belongs_to_ruby */
/* sha: c16a68ef497712a164100a54903d4b47b301d806597ff06186c46a0936aca688 */
mrb_value
mrb_Git_Tree_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Tree.belongs_to_ruby only accepts objects of type Git::Tree");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
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
  struct RClass* Tree_class = mrb_define_class_under(mrb, Git_module(mrb), "Tree", mrb->object_class);
  MRB_SET_INSTANCE_TT(Tree_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tree::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tree::class_method_definitions */
/* sha: f517ca6b1cb5c14c5b6f8ea5833dd57887ed556c850a3180917f72d0242eebfa */
#if BIND_Tree_INITIALIZE
  mrb_define_method(mrb, Tree_class, "initialize", mrb_Git_Tree_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Tree_class, "disown", mrb_Git_Tree_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Tree_class, "belongs_to_ruby?", mrb_Git_Tree_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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
