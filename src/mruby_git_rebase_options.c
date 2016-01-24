/*
 * git_rebase_options
 * Defined in file rebase.h @ line 29
 */

#include "mruby_Git.h"

#if BIND_RebaseOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOptions::initialize */
/* sha: 198bc83d70f84e1b13f7b77a959984bd7a059b227abbb8e456cd26fbb4460236 */
#if BIND_RebaseOptions_INITIALIZE
mrb_value
mrb_Git_RebaseOptions_initialize(mrb_state* mrb, mrb_value self) {
  git_rebase_options* native_object = (git_rebase_options*)calloc(1, sizeof(git_rebase_options));
  mruby_gift_git_rebase_options_data_ptr(self, native_object);
  git_rebase_init_options(native_object, GIT_REBASE_OPTIONS_VERSION);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: RebaseOptions::version_reader */
/* sha: 076202ba695bb0eae7469eecde978d3bf2163d39397ed61f1b29a6b6f62759d8 */
#if BIND_RebaseOptions_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_RebaseOptions_get_version(mrb_state* mrb, mrb_value self) {
  git_rebase_options * native_self = mruby_unbox_git_rebase_options(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOptions::version_writer */
/* sha: 7aff28508e83ae0b528ba5c7f22f634b3f14bb63e9661286940074741360640a */
#if BIND_RebaseOptions_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_RebaseOptions_set_version(mrb_state* mrb, mrb_value self) {
  git_rebase_options * native_self = mruby_unbox_git_rebase_options(self);
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

/* MRUBY_BINDING: RebaseOptions::quiet_reader */
/* sha: cd211eeb20ffa7bb1478b518fd00626711f5a26daa6afdcfeac06578928f9a82 */
#if BIND_RebaseOptions_quiet_FIELD_READER
/* get_quiet
 *
 * Return Type: int
 */
mrb_value
mrb_Git_RebaseOptions_get_quiet(mrb_state* mrb, mrb_value self) {
  git_rebase_options * native_self = mruby_unbox_git_rebase_options(self);

  int native_quiet = native_self->quiet;

  mrb_value quiet = mrb_fixnum_value(native_quiet);

  return quiet;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOptions::quiet_writer */
/* sha: f76a62adda68ed8b8b1651e97b6c17539fc0f17d7a81b99f4e30a6e4dbbb72d8 */
#if BIND_RebaseOptions_quiet_FIELD_WRITER
/* set_quiet
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_RebaseOptions_set_quiet(mrb_state* mrb, mrb_value self) {
  git_rebase_options * native_self = mruby_unbox_git_rebase_options(self);
  mrb_int native_quiet;

  mrb_get_args(mrb, "i", &native_quiet);

  native_self->quiet = native_quiet;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOptions::rewrite_notes_ref_reader */
/* sha: e7e603133e269afe13e70ae36a2146fd263dfb34e5f4bac9655c9e93435664d8 */
#if BIND_RebaseOptions_rewrite_notes_ref_FIELD_READER
/* get_rewrite_notes_ref
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_RebaseOptions_get_rewrite_notes_ref(mrb_state* mrb, mrb_value self) {
  git_rebase_options * native_self = mruby_unbox_git_rebase_options(self);

  const char * native_rewrite_notes_ref = native_self->rewrite_notes_ref;

  mrb_value rewrite_notes_ref = native_rewrite_notes_ref == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_rewrite_notes_ref);

  return rewrite_notes_ref;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOptions::rewrite_notes_ref_writer */
/* sha: be3d02ae03cc41c9b68ac00725e07dfe1aa5ad43fd6aebe84d05ecc2ed388de8 */
#if BIND_RebaseOptions_rewrite_notes_ref_FIELD_WRITER
/* set_rewrite_notes_ref
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_RebaseOptions_set_rewrite_notes_ref(mrb_state* mrb, mrb_value self) {
  git_rebase_options * native_self = mruby_unbox_git_rebase_options(self);
  char * native_rewrite_notes_ref = NULL;

  mrb_get_args(mrb, "z", &native_rewrite_notes_ref);

  native_self->rewrite_notes_ref = native_rewrite_notes_ref;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOptions::checkout_options_reader */
/* sha: 37fa4a641f985e3c3e4f73c241e9e6d3b1f01f4902a129e8bc22f3a00ae5ade4 */
#if BIND_RebaseOptions_checkout_options_FIELD_READER
/* get_checkout_options
 *
 * Return Type: git_checkout_options
 */
mrb_value
mrb_Git_RebaseOptions_get_checkout_options(mrb_state* mrb, mrb_value self) {
  git_rebase_options * native_self = mruby_unbox_git_rebase_options(self);
  return mruby_box_git_checkout_options(mrb, &native_self->checkout_options);
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOptions::checkout_options_writer */
/* sha: 5a92759cd968e453e43ca253d1582fa70d24abc48799e42566031d667808d5f4 */
#if BIND_RebaseOptions_checkout_options_FIELD_WRITER
/* set_checkout_options
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_RebaseOptions_set_checkout_options(mrb_state* mrb, mrb_value self) {
  git_rebase_options * native_self = mruby_unbox_git_rebase_options(self);
  mrb_value checkout_options;
  git_checkout_options * native_checkout_options;

  mrb_get_args(mrb, "o", &checkout_options);
  if (!mrb_obj_is_kind_of(mrb, checkout_options, CheckoutOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CheckoutOptions expected");
    return mrb_nil_value();
  }

  native_self->checkout_options = *mruby_unbox_git_checkout_options(checkout_options);
  
  return checkout_options;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_RebaseOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: RebaseOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOptions::class_definition */
/* sha: f01e61e86061cc4937e91768f80f094aeaa3835394d9ad9a36e9300f19844db1 */
  struct RClass* RebaseOptions_class = mrb_define_class_under(mrb, Git_module(mrb), "RebaseOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(RebaseOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOptions::class_method_definitions */
/* sha: 0a26dc507bf0116f2da821e54c2a8e1a30a8ec708e2f801a9f0f7e40c082ffb7 */
#if BIND_RebaseOptions_INITIALIZE
  mrb_define_method(mrb, RebaseOptions_class, "initialize", mrb_Git_RebaseOptions_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOptions::attr_definitions */
/* sha: bd769285b9ec2abcd132bb84ddd2043cd5ac4966a32c2deda720ba102dcc7207 */
  /*
   * Fields
   */
#if BIND_RebaseOptions_version_FIELD_READER
  mrb_define_method(mrb, RebaseOptions_class, "version", mrb_Git_RebaseOptions_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RebaseOptions_version_FIELD_WRITER
  mrb_define_method(mrb, RebaseOptions_class, "version=", mrb_Git_RebaseOptions_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RebaseOptions_quiet_FIELD_READER
  mrb_define_method(mrb, RebaseOptions_class, "quiet", mrb_Git_RebaseOptions_get_quiet, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RebaseOptions_quiet_FIELD_WRITER
  mrb_define_method(mrb, RebaseOptions_class, "quiet=", mrb_Git_RebaseOptions_set_quiet, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RebaseOptions_rewrite_notes_ref_FIELD_READER
  mrb_define_method(mrb, RebaseOptions_class, "rewrite_notes_ref", mrb_Git_RebaseOptions_get_rewrite_notes_ref, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RebaseOptions_rewrite_notes_ref_FIELD_WRITER
  mrb_define_method(mrb, RebaseOptions_class, "rewrite_notes_ref=", mrb_Git_RebaseOptions_set_rewrite_notes_ref, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RebaseOptions_checkout_options_FIELD_READER
  mrb_define_method(mrb, RebaseOptions_class, "checkout_options", mrb_Git_RebaseOptions_get_checkout_options, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RebaseOptions_checkout_options_FIELD_WRITER
  mrb_define_method(mrb, RebaseOptions_class, "checkout_options=", mrb_Git_RebaseOptions_set_checkout_options, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
