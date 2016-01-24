/*
 * git_rebase_options
 * Defined in file rebase.h @ line 29
 */

#include "mruby_Git.h"

#if BIND_RebaseOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: RebaseOptions::initialize */
/* sha: 198bc83d70f84e1b13f7b77a959984bd7a059b227abbb8e456cd26fbb4460236 */
#if BIND_RebaseOptions_INITIALIZE
mrb_value
mrb_Git_RebaseOptions_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_rebase_options* native_object = (git_rebase_options*)calloc(1, sizeof(git_rebase_options));
  mruby_gift_git_rebase_options_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOptions::disown */
/* sha: 2b058cfdae8c6415e9a026202066a97381b3a9d8a8999de92988eb34a387a506 */
mrb_value
mrb_Git_RebaseOptions_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::RebaseOptions.disown only accepts objects of type Git::RebaseOptions");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOptions::belongs_to_ruby */
/* sha: 854e10317c8e4845c2179878491d7b8980344f69123aebb542db9d6a1d4bb534 */
mrb_value
mrb_Git_RebaseOptions_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::RebaseOptions.belongs_to_ruby only accepts objects of type Git::RebaseOptions");
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
/* sha: d8a972bd760fcf2a8e4cbc67addf4dca6d63b025097024bec1a8d048c35e26b7 */
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
/* sha: 3e919346e5c6d79291e6b4b910242be04ccd2a0e2e870f58e737b62b89911104 */
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
/* sha: 20b0d10d027a569421624957f004a5ea213bba5a502b68b8e1e45d35ee5ec396 */
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
/* sha: 5cf3b9e108aeb58322bbd2af562b41380766011a41adeb67edfbc844e7c571c0 */
#if BIND_RebaseOptions_INITIALIZE
  mrb_define_method(mrb, RebaseOptions_class, "initialize", mrb_Git_RebaseOptions_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, RebaseOptions_class, "disown", mrb_Git_RebaseOptions_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, RebaseOptions_class, "belongs_to_ruby?", mrb_Git_RebaseOptions_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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
