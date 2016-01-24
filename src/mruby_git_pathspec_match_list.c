/*
 * git_pathspec_match_list
 * Defined in file pathspec.h @ line 25
 */

#include "mruby_Git.h"

#if BIND_PathspecMatchList_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: PathspecMatchList::initialize */
/* sha: afe1f1b6f33d81b77dee4f2a59909d901bc29d63a1bd4399d13e26d4bdfdba42 */
#if BIND_PathspecMatchList_INITIALIZE
mrb_value
mrb_Git_PathspecMatchList_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_pathspec_match_list* native_object = (git_pathspec_match_list*)calloc(1, sizeof(git_pathspec_match_list));
  mruby_gift_git_pathspec_match_list_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PathspecMatchList::disown */
/* sha: b72ca958946aa1661a6b14f285e8254b3ea556b816720744cf813e17a0eeca81 */
mrb_value
mrb_Git_PathspecMatchList_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::PathspecMatchList.disown only accepts objects of type Git::PathspecMatchList");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PathspecMatchList::belongs_to_ruby */
/* sha: 55e87f1e9922cfd615383eca55449dc241f5084b3eb6ad5a7eea531731a56944 */
mrb_value
mrb_Git_PathspecMatchList_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::PathspecMatchList.belongs_to_ruby only accepts objects of type Git::PathspecMatchList");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_PathspecMatchList_init(mrb_state* mrb) {
/* MRUBY_BINDING: PathspecMatchList::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PathspecMatchList::class_definition */
/* sha: bdeb3589bcd296ef4577198e86a3aeacadccf740d6afdb11ef05e89e8b207021 */
  struct RClass* PathspecMatchList_class = mrb_define_class_under(mrb, Git_module(mrb), "PathspecMatchList", mrb->object_class);
  MRB_SET_INSTANCE_TT(PathspecMatchList_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PathspecMatchList::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PathspecMatchList::class_method_definitions */
/* sha: b758c5bcc94979ad5917944bd7f0b7ad0f6f05c675f1b8ba6cdc557aaf270abb */
#if BIND_PathspecMatchList_INITIALIZE
  mrb_define_method(mrb, PathspecMatchList_class, "initialize", mrb_Git_PathspecMatchList_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, PathspecMatchList_class, "disown", mrb_Git_PathspecMatchList_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, PathspecMatchList_class, "belongs_to_ruby?", mrb_Git_PathspecMatchList_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PathspecMatchList::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PathspecMatchList::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PathspecMatchList::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PathspecMatchList::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PathspecMatchList::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
