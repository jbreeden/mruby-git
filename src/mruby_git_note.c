/*
 * git_note
 * Defined in file types.h @ line 150
 */

#include "mruby_Git.h"

#if BIND_Note_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Note::initialize */
/* sha: 4e6fccb1e6099af209f51660b49c7ea4e22f0fbfc473567e95413aefb4959d3d */
#if BIND_Note_INITIALIZE
mrb_value
mrb_Git_Note_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_note* native_object = (git_note*)calloc(1, sizeof(git_note));
  mruby_gift_git_note_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Note_init(mrb_state* mrb) {
/* MRUBY_BINDING: Note::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Note::class_definition */
/* sha: 87a9c0e4f34db80d436b94ee93d57f86bf32b5de9f1fef5315b637c94ccecd0a */
  struct RClass* Note_class = mrb_define_class_under(mrb, Git_module(mrb), "Note", mrb->object_class);
  MRB_SET_INSTANCE_TT(Note_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Note::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Note::class_method_definitions */
/* sha: 03cfc3415728a2bd15ab00d69edefd7a6c69fc22d839f3632175686b6a918124 */
#if BIND_Note_INITIALIZE
  mrb_define_method(mrb, Note_class, "initialize", mrb_Git_Note_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Note_class, "disown", mrb_Git_Note_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Note_class, "belongs_to_ruby?", mrb_Git_Note_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Note::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Note::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Note::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Note::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Note::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
