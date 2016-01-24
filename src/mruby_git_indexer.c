/*
 * git_indexer
 * Defined in file indexer.h @ line 16
 */

#include "mruby_Git.h"

#if BIND_Indexer_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Indexer::initialize */
/* sha: 7c7c6f4992ab45b1c51c0d7bcda8027e6dfda7bdd3cbbb901950b81a4a662b68 */
#if BIND_Indexer_INITIALIZE
mrb_value
mrb_Git_Indexer_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_indexer* native_object = (git_indexer*)calloc(1, sizeof(git_indexer));
  mruby_gift_git_indexer_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Indexer::disown */
/* sha: e25cafcc4ca649bc58947f3acc9bd44c9faf160bbfe452097e019ae7894c3d25 */
mrb_value
mrb_Git_Indexer_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Indexer.disown only accepts objects of type Git::Indexer");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Indexer::belongs_to_ruby */
/* sha: 9fab832ae3c73ed0fdc16432afd2c5c74d022712fb4c24def9bbc0e5eec32c57 */
mrb_value
mrb_Git_Indexer_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Indexer.belongs_to_ruby only accepts objects of type Git::Indexer");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_Indexer_init(mrb_state* mrb) {
/* MRUBY_BINDING: Indexer::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Indexer::class_definition */
/* sha: 55a7a2a1da065a5e15f652ecc06d9f4e99a348a4e28cef0e024bd9cd5d9f3e15 */
  struct RClass* Indexer_class = mrb_define_class_under(mrb, Git_module(mrb), "Indexer", mrb->object_class);
  MRB_SET_INSTANCE_TT(Indexer_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Indexer::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Indexer::class_method_definitions */
/* sha: 40d459ddde677031cd849c14aee4347a493c88bfe2316b436e4f48b86f7d2aaf */
#if BIND_Indexer_INITIALIZE
  mrb_define_method(mrb, Indexer_class, "initialize", mrb_Git_Indexer_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Indexer_class, "disown", mrb_Git_Indexer_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Indexer_class, "belongs_to_ruby?", mrb_Git_Indexer_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Indexer::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Indexer::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Indexer::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Indexer::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Indexer::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
