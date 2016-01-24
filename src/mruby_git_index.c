/*
 * git_index
 * Defined in file types.h @ line 132
 */

#include "mruby_Git.h"

#if BIND_Index_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Index::initialize */
/* sha: be497f9284ae55f511f2a519ce4403bcd313a654fcdd315c99834100aa61bcff */
#if BIND_Index_INITIALIZE
mrb_value
mrb_Git_Index_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_index* native_object = (git_index*)calloc(1, sizeof(git_index));
  mruby_gift_git_index_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Index_init(mrb_state* mrb) {
/* MRUBY_BINDING: Index::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Index::class_definition */
/* sha: 2a347ecdf8ec0cd653d38f5c7333df94967e0daf356222727e6675fc7e8a3b36 */
  struct RClass* Index_class = mrb_define_class_under(mrb, Git_module(mrb), "Index", mrb->object_class);
  MRB_SET_INSTANCE_TT(Index_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Index::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Index::class_method_definitions */
/* sha: 1ead50cc39162cd9a919ca8e695f7774d05d484d32af606917b29fbabce9e7c4 */
#if BIND_Index_INITIALIZE
  mrb_define_method(mrb, Index_class, "initialize", mrb_Git_Index_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Index_class, "disown", mrb_Git_Index_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Index_class, "belongs_to_ruby?", mrb_Git_Index_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Index::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Index::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Index::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Index::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Index::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
