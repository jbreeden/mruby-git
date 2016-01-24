/*
 * git_revert_options
 * Defined in file revert.h @ line 26
 */

#include "mruby_Git.h"

#if BIND_RevertOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: RevertOptions::initialize */
/* sha: e47034713b7e34bedd7009d6623226edef12348ed3e75ff5a6b011afa36c94b6 */
#if BIND_RevertOptions_INITIALIZE
mrb_value
mrb_Git_RevertOptions_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_revert_options* native_object = (git_revert_options*)calloc(1, sizeof(git_revert_options));
  mruby_gift_git_revert_options_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RevertOptions::disown */
/* sha: f3e8b023ce5d03613af4afb663619bb0f8e980f0a5a2d2c5b0d02beac7c55794 */
mrb_value
mrb_Git_RevertOptions_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::RevertOptions.disown only accepts objects of type Git::RevertOptions");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RevertOptions::belongs_to_ruby */
/* sha: 1fc4007a81e85ab0e595e7a4dac2c5291e2162bcde6a7de155653fd1d8b8197b */
mrb_value
mrb_Git_RevertOptions_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::RevertOptions.belongs_to_ruby only accepts objects of type Git::RevertOptions");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: RevertOptions::version_reader */
/* sha: a44ad6a997c572ab3e08cc6ba00ddd8e92a8ffce35322f33d40129770a834de0 */
#if BIND_RevertOptions_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_RevertOptions_get_version(mrb_state* mrb, mrb_value self) {
  git_revert_options * native_self = mruby_unbox_git_revert_options(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RevertOptions::version_writer */
/* sha: d7af938a4fd18855817f9153b69e53a2a7b311d939c3ad9e659922778b2e7b91 */
#if BIND_RevertOptions_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_RevertOptions_set_version(mrb_state* mrb, mrb_value self) {
  git_revert_options * native_self = mruby_unbox_git_revert_options(self);
  mrb_int native_version;

  mrb_get_args(mrb, "i", &native_version);

  native_self->version = native_version;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RevertOptions::mainline_reader */
/* sha: f5555cd677f66b6d8754327f622eb612ad99b69256353e9b49905f066b3b98ca */
#if BIND_RevertOptions_mainline_FIELD_READER
/* get_mainline
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_RevertOptions_get_mainline(mrb_state* mrb, mrb_value self) {
  git_revert_options * native_self = mruby_unbox_git_revert_options(self);

  unsigned int native_mainline = native_self->mainline;

  mrb_value mainline = mrb_fixnum_value(native_mainline);

  return mainline;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RevertOptions::mainline_writer */
/* sha: d9b098039281bb06cf4aecdeaf45d3daf0d1a537ae690228e6d6ff22c97ae312 */
#if BIND_RevertOptions_mainline_FIELD_WRITER
/* set_mainline
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_RevertOptions_set_mainline(mrb_state* mrb, mrb_value self) {
  git_revert_options * native_self = mruby_unbox_git_revert_options(self);
  mrb_int native_mainline;

  mrb_get_args(mrb, "i", &native_mainline);

  native_self->mainline = native_mainline;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RevertOptions::merge_opts_reader */
/* sha: 2e4f7b336a21c56e55fa4907248b7ccbb491d0ce93090455c8faa7f22916b91a */
#if BIND_RevertOptions_merge_opts_FIELD_READER
/* get_merge_opts
 *
 * Return Type: git_merge_options
 */
mrb_value
mrb_Git_RevertOptions_get_merge_opts(mrb_state* mrb, mrb_value self) {
  git_revert_options * native_self = mruby_unbox_git_revert_options(self);

  git_merge_options native_merge_opts = native_self->merge_opts;

  git_merge_options* new_merge_opts = TODO_move_git_merge_options_to_heap(native_merge_opts);
  mrb_value merge_opts = mruby_box_git_merge_options(mrb, &native_merge_opts);

  return merge_opts;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RevertOptions::merge_opts_writer */
/* sha: 20b58a71a352c30aa448aa3ca9d2d31e68e0378ff9df3300867b77e27ee10dd3 */
#if BIND_RevertOptions_merge_opts_FIELD_WRITER
/* set_merge_opts
 *
 * Parameters:
 * - value: git_merge_options
 */
mrb_value
mrb_Git_RevertOptions_set_merge_opts(mrb_state* mrb, mrb_value self) {
  git_revert_options * native_self = mruby_unbox_git_revert_options(self);
  mrb_value merge_opts;

  mrb_get_args(mrb, "o", &merge_opts);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, merge_opts, MergeOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "MergeOptions expected");
    return mrb_nil_value();
  }

  git_merge_options native_merge_opts = *(mruby_unbox_git_merge_options(merge_opts));

  native_self->merge_opts = native_merge_opts;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RevertOptions::checkout_opts_reader */
/* sha: 2344ca3baba9a09d1d71080d22980e7c42677b9838b066acac8ac3409c115b70 */
#if BIND_RevertOptions_checkout_opts_FIELD_READER
/* get_checkout_opts
 *
 * Return Type: git_checkout_options
 */
mrb_value
mrb_Git_RevertOptions_get_checkout_opts(mrb_state* mrb, mrb_value self) {
  git_revert_options * native_self = mruby_unbox_git_revert_options(self);

  git_checkout_options native_checkout_opts = native_self->checkout_opts;

  git_checkout_options* new_checkout_opts = TODO_move_git_checkout_options_to_heap(native_checkout_opts);
  mrb_value checkout_opts = mruby_box_git_checkout_options(mrb, &native_checkout_opts);

  return checkout_opts;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RevertOptions::checkout_opts_writer */
/* sha: dc4c979941b90d1ef70fedf8e846f519b019c7f6825a420875ddc55d70695a4f */
#if BIND_RevertOptions_checkout_opts_FIELD_WRITER
/* set_checkout_opts
 *
 * Parameters:
 * - value: git_checkout_options
 */
mrb_value
mrb_Git_RevertOptions_set_checkout_opts(mrb_state* mrb, mrb_value self) {
  git_revert_options * native_self = mruby_unbox_git_revert_options(self);
  mrb_value checkout_opts;

  mrb_get_args(mrb, "o", &checkout_opts);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, checkout_opts, CheckoutOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CheckoutOptions expected");
    return mrb_nil_value();
  }

  git_checkout_options native_checkout_opts = *(mruby_unbox_git_checkout_options(checkout_opts));

  native_self->checkout_opts = native_checkout_opts;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_RevertOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: RevertOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RevertOptions::class_definition */
/* sha: 9f54cda56a28c855fb8234f0a07ffe9692e42412bd7076d690ca7fa427466a82 */
  struct RClass* RevertOptions_class = mrb_define_class_under(mrb, Git_module(mrb), "RevertOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(RevertOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RevertOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RevertOptions::class_method_definitions */
/* sha: 2edcbb92a84437125e8e3d3fc32bbcb07bbc766e1055be67538d5413f73d3c65 */
#if BIND_RevertOptions_INITIALIZE
  mrb_define_method(mrb, RevertOptions_class, "initialize", mrb_Git_RevertOptions_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, RevertOptions_class, "disown", mrb_Git_RevertOptions_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, RevertOptions_class, "belongs_to_ruby?", mrb_Git_RevertOptions_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RevertOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RevertOptions::attr_definitions */
/* sha: 7d6c680e7c9ed4390aa7d87e1bd8babe6160333701197c77af2cfdfad1b630b4 */
  /*
   * Fields
   */
#if BIND_RevertOptions_version_FIELD_READER
  mrb_define_method(mrb, RevertOptions_class, "version", mrb_Git_RevertOptions_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RevertOptions_version_FIELD_WRITER
  mrb_define_method(mrb, RevertOptions_class, "version=", mrb_Git_RevertOptions_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RevertOptions_mainline_FIELD_READER
  mrb_define_method(mrb, RevertOptions_class, "mainline", mrb_Git_RevertOptions_get_mainline, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RevertOptions_mainline_FIELD_WRITER
  mrb_define_method(mrb, RevertOptions_class, "mainline=", mrb_Git_RevertOptions_set_mainline, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RevertOptions_merge_opts_FIELD_READER
  mrb_define_method(mrb, RevertOptions_class, "merge_opts", mrb_Git_RevertOptions_get_merge_opts, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RevertOptions_merge_opts_FIELD_WRITER
  mrb_define_method(mrb, RevertOptions_class, "merge_opts=", mrb_Git_RevertOptions_set_merge_opts, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RevertOptions_checkout_opts_FIELD_READER
  mrb_define_method(mrb, RevertOptions_class, "checkout_opts", mrb_Git_RevertOptions_get_checkout_opts, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RevertOptions_checkout_opts_FIELD_WRITER
  mrb_define_method(mrb, RevertOptions_class, "checkout_opts=", mrb_Git_RevertOptions_set_checkout_opts, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RevertOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RevertOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RevertOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
