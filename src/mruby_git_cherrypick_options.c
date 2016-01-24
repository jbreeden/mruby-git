/*
 * git_cherrypick_options
 * Defined in file cherrypick.h @ line 26
 */

#include "mruby_Git.h"

#if BIND_CherrypickOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CherrypickOptions::initialize */
/* sha: 5518d48016f6f58a5d843d832c83b6b8f10a83b2513c572ce43d2733f4cca4de */
#if BIND_CherrypickOptions_INITIALIZE
mrb_value
mrb_Git_CherrypickOptions_initialize(mrb_state* mrb, mrb_value self) {
  git_cherrypick_options* native_object = (git_cherrypick_options*)calloc(1, sizeof(git_cherrypick_options));
  mruby_gift_git_cherrypick_options_data_ptr(self, native_object);
  git_cherrypick_init_options(native_object, GIT_CHERRYPICK_OPTIONS_VERSION);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: CherrypickOptions::version_reader */
/* sha: b19a3029a64fd28ddf78a90fb65cbbe870325f8c28602aeb92c00e73fdeaeafb */
#if BIND_CherrypickOptions_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_CherrypickOptions_get_version(mrb_state* mrb, mrb_value self) {
  git_cherrypick_options * native_self = mruby_unbox_git_cherrypick_options(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CherrypickOptions::version_writer */
/* sha: 3fa28ebb63fca73bd23e78418724b3a06152960526ed5d1f69f574c99ea7ba37 */
#if BIND_CherrypickOptions_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_CherrypickOptions_set_version(mrb_state* mrb, mrb_value self) {
  git_cherrypick_options * native_self = mruby_unbox_git_cherrypick_options(self);
  mrb_int native_version;

  mrb_get_args(mrb, "i", &native_version);

  native_self->version = native_version;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CherrypickOptions::mainline_reader */
/* sha: a7d1a92f8a1b25ad66fd35c551ff034cc830c6abb74452c823a200014eb9435e */
#if BIND_CherrypickOptions_mainline_FIELD_READER
/* get_mainline
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_CherrypickOptions_get_mainline(mrb_state* mrb, mrb_value self) {
  git_cherrypick_options * native_self = mruby_unbox_git_cherrypick_options(self);

  unsigned int native_mainline = native_self->mainline;

  mrb_value mainline = mrb_fixnum_value(native_mainline);

  return mainline;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CherrypickOptions::mainline_writer */
/* sha: 37179fe926b510dadf4cdd5b063c3a9d4e7d980490364934643d107f49613e1b */
#if BIND_CherrypickOptions_mainline_FIELD_WRITER
/* set_mainline
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_CherrypickOptions_set_mainline(mrb_state* mrb, mrb_value self) {
  git_cherrypick_options * native_self = mruby_unbox_git_cherrypick_options(self);
  mrb_int native_mainline;

  mrb_get_args(mrb, "i", &native_mainline);

  native_self->mainline = native_mainline;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CherrypickOptions::merge_opts_reader */
/* sha: e6f38b310a999478a506e9700154fa7393f6a29305c26192dc8450f64663c16e */
#if BIND_CherrypickOptions_merge_opts_FIELD_READER
/* get_merge_opts
 *
 * Return Type: git_merge_options
 */
mrb_value
mrb_Git_CherrypickOptions_get_merge_opts(mrb_state* mrb, mrb_value self) {
  git_cherrypick_options * native_self = mruby_unbox_git_cherrypick_options(self);

  git_merge_options native_merge_opts = native_self->merge_opts;

  git_merge_options* new_merge_opts = TODO_move_git_merge_options_to_heap(native_merge_opts);
  mrb_value merge_opts = mruby_box_git_merge_options(mrb, &native_merge_opts);

  return merge_opts;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CherrypickOptions::merge_opts_writer */
/* sha: 6607e85a51f81810c56ae0526de324f57aef00a119902fda4a3d4e2bcfc0a9ea */
#if BIND_CherrypickOptions_merge_opts_FIELD_WRITER
/* set_merge_opts
 *
 * Parameters:
 * - value: git_merge_options
 */
mrb_value
mrb_Git_CherrypickOptions_set_merge_opts(mrb_state* mrb, mrb_value self) {
  git_cherrypick_options * native_self = mruby_unbox_git_cherrypick_options(self);
  mrb_value merge_opts;

  mrb_get_args(mrb, "o", &merge_opts);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, merge_opts, MergeOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MergeOptions expected");
    return mrb_nil_value();
  }

  git_merge_options native_merge_opts = *(mruby_unbox_git_merge_options(merge_opts));

  native_self->merge_opts = native_merge_opts;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CherrypickOptions::checkout_opts_reader */
/* sha: 3a17466762538a846ac8b4edbd8c0882c0a64b5e458c5ce85d830b1d44f42590 */
#if BIND_CherrypickOptions_checkout_opts_FIELD_READER
/* get_checkout_opts
 *
 * Return Type: git_checkout_options
 */
mrb_value
mrb_Git_CherrypickOptions_get_checkout_opts(mrb_state* mrb, mrb_value self) {
  git_cherrypick_options * native_self = mruby_unbox_git_cherrypick_options(self);

  git_checkout_options native_checkout_opts = native_self->checkout_opts;

  git_checkout_options* new_checkout_opts = TODO_move_git_checkout_options_to_heap(native_checkout_opts);
  mrb_value checkout_opts = mruby_box_git_checkout_options(mrb, &native_checkout_opts);

  return checkout_opts;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CherrypickOptions::checkout_opts_writer */
/* sha: b1307d6e01c059790b0e148c544a0fad5a7b96ef662efcbf495eda0c6f55de68 */
#if BIND_CherrypickOptions_checkout_opts_FIELD_WRITER
/* set_checkout_opts
 *
 * Parameters:
 * - value: git_checkout_options
 */
mrb_value
mrb_Git_CherrypickOptions_set_checkout_opts(mrb_state* mrb, mrb_value self) {
  git_cherrypick_options * native_self = mruby_unbox_git_cherrypick_options(self);
  mrb_value checkout_opts;

  mrb_get_args(mrb, "o", &checkout_opts);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, checkout_opts, CheckoutOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CheckoutOptions expected");
    return mrb_nil_value();
  }

  git_checkout_options native_checkout_opts = *(mruby_unbox_git_checkout_options(checkout_opts));

  native_self->checkout_opts = native_checkout_opts;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_CherrypickOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: CherrypickOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CherrypickOptions::class_definition */
/* sha: 99dbc2ef76ab81ab76d9da848b6886fb7cc82ab96b5b7d34c45100508188d321 */
  struct RClass* CherrypickOptions_class = mrb_define_class_under(mrb, Git_module(mrb), "CherrypickOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(CherrypickOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CherrypickOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CherrypickOptions::class_method_definitions */
/* sha: 2d72b051a28b270ebeea7eff8a5771d031a0b32238fbb706e4e91003be810d6f */
#if BIND_CherrypickOptions_INITIALIZE
  mrb_define_method(mrb, CherrypickOptions_class, "initialize", mrb_Git_CherrypickOptions_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CherrypickOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CherrypickOptions::attr_definitions */
/* sha: fc789c6b5c7310b0179ba92ecb63135c4158b794b05e4547ac57ccaa2cc0452e */
  /*
   * Fields
   */
#if BIND_CherrypickOptions_version_FIELD_READER
  mrb_define_method(mrb, CherrypickOptions_class, "version", mrb_Git_CherrypickOptions_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CherrypickOptions_version_FIELD_WRITER
  mrb_define_method(mrb, CherrypickOptions_class, "version=", mrb_Git_CherrypickOptions_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CherrypickOptions_mainline_FIELD_READER
  mrb_define_method(mrb, CherrypickOptions_class, "mainline", mrb_Git_CherrypickOptions_get_mainline, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CherrypickOptions_mainline_FIELD_WRITER
  mrb_define_method(mrb, CherrypickOptions_class, "mainline=", mrb_Git_CherrypickOptions_set_mainline, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CherrypickOptions_merge_opts_FIELD_READER
  mrb_define_method(mrb, CherrypickOptions_class, "merge_opts", mrb_Git_CherrypickOptions_get_merge_opts, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CherrypickOptions_merge_opts_FIELD_WRITER
  mrb_define_method(mrb, CherrypickOptions_class, "merge_opts=", mrb_Git_CherrypickOptions_set_merge_opts, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CherrypickOptions_checkout_opts_FIELD_READER
  mrb_define_method(mrb, CherrypickOptions_class, "checkout_opts", mrb_Git_CherrypickOptions_get_checkout_opts, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CherrypickOptions_checkout_opts_FIELD_WRITER
  mrb_define_method(mrb, CherrypickOptions_class, "checkout_opts=", mrb_Git_CherrypickOptions_set_checkout_opts, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CherrypickOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CherrypickOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CherrypickOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
