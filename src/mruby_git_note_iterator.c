/*
 * git_note_iterator
 * Defined in file notes.h @ line 35
 */

#include "mruby_Git.h"

#if BIND_NoteIterator_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: NoteIterator::initialize */
/* sha: d0cd88bf7cb7aaa7dc0cdd4dbf0b627d31b8e3eccb2ab181a9081ea5eb4cb546 */
#if BIND_NoteIterator_INITIALIZE
mrb_value
mrb_Git_NoteIterator_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_note_iterator* native_object = (git_note_iterator*)calloc(1, sizeof(git_note_iterator));
  mruby_gift_git_note_iterator_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_NoteIterator_init(mrb_state* mrb) {
/* MRUBY_BINDING: NoteIterator::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: NoteIterator::class_definition */
/* sha: 4ab644e8f3f70f2e318b1036b5e67493b1ab04927049eb350035107608e0bac4 */
  struct RClass* NoteIterator_class = mrb_define_class_under(mrb, Git_module(mrb), "NoteIterator", mrb->object_class);
  MRB_SET_INSTANCE_TT(NoteIterator_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: NoteIterator::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: NoteIterator::class_method_definitions */
/* sha: 5443464e0407ef3d0e61c9cbc22d4c03037c522f713c7734ea683eee16085621 */
#if BIND_NoteIterator_INITIALIZE
  mrb_define_method(mrb, NoteIterator_class, "initialize", mrb_Git_NoteIterator_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, NoteIterator_class, "disown", mrb_Git_NoteIterator_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, NoteIterator_class, "belongs_to_ruby?", mrb_Git_NoteIterator_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: NoteIterator::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: NoteIterator::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: NoteIterator::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: NoteIterator::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: NoteIterator::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
