/*
 * git_tag
 * Defined in file types.h @ line 114
 */

#include "mruby_Git.h"

#if BIND_Tag_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tag::initialize */
/* sha: 2dbd04e0b0de61482bf943f904f0a92f5cc4076ab8ca530b28b377145c806b54 */
#if BIND_Tag_INITIALIZE
mrb_value
mrb_Git_Tag_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_tag* native_object = (git_tag*)calloc(1, sizeof(git_tag));
  mruby_gift_git_tag_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Tag_init(mrb_state* mrb) {
/* MRUBY_BINDING: Tag::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tag::class_definition */
/* sha: 0272b3f9d3131c798597925f8e0667e9ed1cacb5ac61bcc95457188335d75ab3 */
  struct RClass* Tag_class = mrb_define_class_under(mrb, Git_module(mrb), "Tag", mrb->object_class);
  MRB_SET_INSTANCE_TT(Tag_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tag::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tag::class_method_definitions */
/* sha: d9d10cd5d16c58606932b70f7154ccdb5293e56029c1c388cb5470af42a0ba85 */
#if BIND_Tag_INITIALIZE
  mrb_define_method(mrb, Tag_class, "initialize", mrb_Git_Tag_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Tag_class, "disown", mrb_Git_Tag_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Tag_class, "belongs_to_ruby?", mrb_Git_Tag_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tag::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tag::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tag::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tag::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tag::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
