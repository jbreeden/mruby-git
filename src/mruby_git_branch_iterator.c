/*
 * git_branch_iterator
 * Defined in file branch.h @ line 89
 */

#include "mruby_Git.h"

#if BIND_BranchIterator_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BranchIterator::initialize */
/* sha: 679b15bcc87a740cbd49e2910107f3595bd0ffeee8bf20e2292858a6055222fc */
#if BIND_BranchIterator_INITIALIZE
mrb_value
mrb_Git_BranchIterator_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_branch_iterator* native_object = (git_branch_iterator*)calloc(1, sizeof(git_branch_iterator));
  mruby_gift_git_branch_iterator_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_BranchIterator_init(mrb_state* mrb) {
/* MRUBY_BINDING: BranchIterator::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BranchIterator::class_definition */
/* sha: ed58b2b515f1f5910fdd96b34f8be2f5e707a95fc693f3e98bd924b721760426 */
  struct RClass* BranchIterator_class = mrb_define_class_under(mrb, Git_module(mrb), "BranchIterator", mrb->object_class);
  MRB_SET_INSTANCE_TT(BranchIterator_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BranchIterator::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BranchIterator::class_method_definitions */
/* sha: 13e4d4c7453c77cc9c9738460bf074de1088060b204f67874b7c94106aa14fcf */
#if BIND_BranchIterator_INITIALIZE
  mrb_define_method(mrb, BranchIterator_class, "initialize", mrb_Git_BranchIterator_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, BranchIterator_class, "disown", mrb_Git_BranchIterator_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, BranchIterator_class, "belongs_to_ruby?", mrb_Git_BranchIterator_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BranchIterator::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BranchIterator::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BranchIterator::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BranchIterator::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BranchIterator::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
