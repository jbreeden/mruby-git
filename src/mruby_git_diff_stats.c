/*
 * git_diff_stats
 * Defined in file diff.h @ line 1174
 */

#include "mruby_Git.h"

#if BIND_DiffStats_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffStats::initialize */
/* sha: f28db06e15b862c04f1bcde5b9394a2bf9f6f5077e323b838b614150acc4dd9b */
#if BIND_DiffStats_INITIALIZE
mrb_value
mrb_Git_DiffStats_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_diff_stats* native_object = (git_diff_stats*)calloc(1, sizeof(git_diff_stats));
  mruby_gift_git_diff_stats_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_DiffStats_init(mrb_state* mrb) {
/* MRUBY_BINDING: DiffStats::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffStats::class_definition */
/* sha: 96e352b6c73b60c9d2e0b7aeb7cd4ae8f20da031eb6c5bd6fd6cc1c88c9f8b75 */
  struct RClass* DiffStats_class = mrb_define_class_under(mrb, Git_module(mrb), "DiffStats", mrb->object_class);
  MRB_SET_INSTANCE_TT(DiffStats_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffStats::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffStats::class_method_definitions */
/* sha: f269ff17583467d1549258401b8d898f6f7fa4bcc0170a14894227f473f67165 */
#if BIND_DiffStats_INITIALIZE
  mrb_define_method(mrb, DiffStats_class, "initialize", mrb_Git_DiffStats_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, DiffStats_class, "disown", mrb_Git_DiffStats_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, DiffStats_class, "belongs_to_ruby?", mrb_Git_DiffStats_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffStats::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffStats::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffStats::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffStats::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffStats::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
