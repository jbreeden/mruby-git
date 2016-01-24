/*
 * git_reference_iterator
 * Defined in file types.h @ line 172
 */

#include "mruby_Git.h"

#if BIND_ReferenceIterator_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReferenceIterator::initialize */
/* sha: 343d4aa63d4e785c10af6d504004a834f564a41649742316707358c28888beec */
#if BIND_ReferenceIterator_INITIALIZE
mrb_value
mrb_Git_ReferenceIterator_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_reference_iterator* native_object = (git_reference_iterator*)calloc(1, sizeof(git_reference_iterator));
  mruby_gift_git_reference_iterator_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_ReferenceIterator_init(mrb_state* mrb) {
/* MRUBY_BINDING: ReferenceIterator::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReferenceIterator::class_definition */
/* sha: 3b1b7eb16fdddc81aa8e46ea59c28a66eab72843d9b72794de710c3c1e100051 */
  struct RClass* ReferenceIterator_class = mrb_define_class_under(mrb, Git_module(mrb), "ReferenceIterator", mrb->object_class);
  MRB_SET_INSTANCE_TT(ReferenceIterator_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReferenceIterator::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReferenceIterator::class_method_definitions */
/* sha: 56b9b75f3e90658b9fd44814400d24035c9952915ea366450d154b57cfcb5b3f */
#if BIND_ReferenceIterator_INITIALIZE
  mrb_define_method(mrb, ReferenceIterator_class, "initialize", mrb_Git_ReferenceIterator_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, ReferenceIterator_class, "disown", mrb_Git_ReferenceIterator_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, ReferenceIterator_class, "belongs_to_ruby?", mrb_Git_ReferenceIterator_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReferenceIterator::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReferenceIterator::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReferenceIterator::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReferenceIterator::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReferenceIterator::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
