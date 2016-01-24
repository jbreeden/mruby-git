/*
 * git_commit
 * Defined in file types.h @ line 120
 */

#include "mruby_Git.h"

#if BIND_Commit_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Commit::initialize */
/* sha: a44c84c9a83a140a23c9fea9fcfadfe72223f240caf9ec34be409f037f3f5fc4 */
#if BIND_Commit_INITIALIZE
mrb_value
mrb_Git_Commit_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_commit* native_object = (git_commit*)calloc(1, sizeof(git_commit));
  mruby_gift_git_commit_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::disown */
/* sha: 15dae7f4c9af418546597b58f9b393232ad0816e1d476884da329d2ad492dc09 */
mrb_value
mrb_Git_Commit_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Commit.disown only accepts objects of type Git::Commit");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::belongs_to_ruby */
/* sha: a1db3e372154a2a07cd01f7d91aa3712673d6efb03432aa54bc45b339d5fbf11 */
mrb_value
mrb_Git_Commit_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Commit.belongs_to_ruby only accepts objects of type Git::Commit");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_Commit_init(mrb_state* mrb) {
/* MRUBY_BINDING: Commit::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::class_definition */
/* sha: 862e126147c7b0da857a2500a0c0605ed2018a5ba5462e1965b470aa4327c0ff */
  struct RClass* Commit_class = mrb_define_class_under(mrb, Git_module(mrb), "Commit", mrb->object_class);
  MRB_SET_INSTANCE_TT(Commit_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::class_method_definitions */
/* sha: f8b4cde92ea11d8a8cf4d383009a0cf3a37a53425e975f6a8fe7d9bce9077943 */
#if BIND_Commit_INITIALIZE
  mrb_define_method(mrb, Commit_class, "initialize", mrb_Git_Commit_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Commit_class, "disown", mrb_Git_Commit_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Commit_class, "belongs_to_ruby?", mrb_Git_Commit_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
