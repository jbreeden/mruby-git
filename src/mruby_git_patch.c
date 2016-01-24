/*
 * git_patch
 * Defined in file patch.h @ line 30
 */

#include "mruby_Git.h"

#if BIND_Patch_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Patch::initialize */
/* sha: e4162407c65b0e5e3420f2ba42c6ef11fdb2bd757e911ee281449018562f6a40 */
#if BIND_Patch_INITIALIZE
mrb_value
mrb_Git_Patch_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_patch* native_object = (git_patch*)calloc(1, sizeof(git_patch));
  mruby_gift_git_patch_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::disown */
/* sha: 28a17f8c11a236568e6c39bd5d8c263cca3ab10d5af4841f820e9be9777ff15c */
mrb_value
mrb_Git_Patch_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Patch.disown only accepts objects of type Git::Patch");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::belongs_to_ruby */
/* sha: 36f453c9f00825bc282aa68be4528f9b6d69f5fbd47457445bed84422e58c278 */
mrb_value
mrb_Git_Patch_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Patch.belongs_to_ruby only accepts objects of type Git::Patch");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_Patch_init(mrb_state* mrb) {
/* MRUBY_BINDING: Patch::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::class_definition */
/* sha: a33f0cac3703b61d98340cc807ba331a471d202fc059706f91da25eaa9cd1902 */
  struct RClass* Patch_class = mrb_define_class_under(mrb, Git_module(mrb), "Patch", mrb->object_class);
  MRB_SET_INSTANCE_TT(Patch_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::class_method_definitions */
/* sha: d6bcefbff0c7bb21d099cbd5ded25170bc31f7805280a103e46e91c15b877ecf */
#if BIND_Patch_INITIALIZE
  mrb_define_method(mrb, Patch_class, "initialize", mrb_Git_Patch_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Patch_class, "disown", mrb_Git_Patch_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Patch_class, "belongs_to_ruby?", mrb_Git_Patch_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
