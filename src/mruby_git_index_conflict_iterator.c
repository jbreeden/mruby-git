/*
 * git_index_conflict_iterator
 * Defined in file types.h @ line 135
 */

#include "mruby_Git.h"

#if BIND_IndexConflictIterator_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexConflictIterator::initialize */
/* sha: 5c0bd526a7e76936d69a90a71888f9b3cbbadebb39c7249811297d8dc652ab91 */
#if BIND_IndexConflictIterator_INITIALIZE
mrb_value
mrb_Git_IndexConflictIterator_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_index_conflict_iterator* native_object = (git_index_conflict_iterator*)calloc(1, sizeof(git_index_conflict_iterator));
  mruby_gift_git_index_conflict_iterator_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_IndexConflictIterator_init(mrb_state* mrb) {
/* MRUBY_BINDING: IndexConflictIterator::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexConflictIterator::class_definition */
/* sha: 9ac21d23d8fe9446f2e22d55ad3d92272f915b7e40ee8d2f0fcf00d1b24d33f1 */
  struct RClass* IndexConflictIterator_class = mrb_define_class_under(mrb, Git_module(mrb), "IndexConflictIterator", mrb->object_class);
  MRB_SET_INSTANCE_TT(IndexConflictIterator_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexConflictIterator::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexConflictIterator::class_method_definitions */
/* sha: 77316ba1798f3ba0262cfe64c5426a984dc75b6e2888cfcc218b8f5a908e5c75 */
#if BIND_IndexConflictIterator_INITIALIZE
  mrb_define_method(mrb, IndexConflictIterator_class, "initialize", mrb_Git_IndexConflictIterator_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, IndexConflictIterator_class, "disown", mrb_Git_IndexConflictIterator_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, IndexConflictIterator_class, "belongs_to_ruby?", mrb_Git_IndexConflictIterator_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexConflictIterator::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexConflictIterator::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexConflictIterator::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexConflictIterator::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexConflictIterator::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
