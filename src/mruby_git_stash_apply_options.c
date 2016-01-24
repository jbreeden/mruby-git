/*
 * git_stash_apply_options
 * Defined in file stash.h @ line 125
 */

#include "mruby_Git.h"

#if BIND_StashApplyOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StashApplyOptions::initialize */
/* sha: 5edb9e9733c2c5becca76452f36af9a0d11e9d4ca128ad1560abc93be8f40238 */
#if BIND_StashApplyOptions_INITIALIZE
mrb_value
mrb_Git_StashApplyOptions_initialize(mrb_state* mrb, mrb_value self) {
  git_stash_apply_options* native_object = (git_stash_apply_options*)calloc(1, sizeof(git_stash_apply_options));
  mruby_gift_git_stash_apply_options_data_ptr(self, native_object);
  git_stash_apply_init_options(native_object, GIT_STASH_APPLY_OPTIONS_VERSION);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: StashApplyOptions::version_reader */
/* sha: a88e1f999d04d55956897b41af7b30ee48f406fd9ab59bc80201f7900d97a16f */
#if BIND_StashApplyOptions_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_StashApplyOptions_get_version(mrb_state* mrb, mrb_value self) {
  git_stash_apply_options * native_self = mruby_unbox_git_stash_apply_options(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StashApplyOptions::version_writer */
/* sha: 5e45737f3779c6c6f8ede77ab0c0d887aab6cfaa05fb7eff752c3de71c421aa1 */
#if BIND_StashApplyOptions_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_StashApplyOptions_set_version(mrb_state* mrb, mrb_value self) {
  git_stash_apply_options * native_self = mruby_unbox_git_stash_apply_options(self);
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

/* MRUBY_BINDING: StashApplyOptions::flags_reader */
/* sha: 932d69d39dbf59edff9c16d1805c959785772cac86447c704e9985ceaebf8e3b */
#if BIND_StashApplyOptions_flags_FIELD_READER
/* get_flags
 *
 * Return Type: git_stash_apply_flags
 */
mrb_value
mrb_Git_StashApplyOptions_get_flags(mrb_state* mrb, mrb_value self) {
  git_stash_apply_options * native_self = mruby_unbox_git_stash_apply_options(self);

  git_stash_apply_flags native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StashApplyOptions::flags_writer */
/* sha: 0c7393ac74f7562ab43eb8a205af4e86d18697f0246d5cdb4e1a1143b3b1fc07 */
#if BIND_StashApplyOptions_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: git_stash_apply_flags
 */
mrb_value
mrb_Git_StashApplyOptions_set_flags(mrb_state* mrb, mrb_value self) {
  git_stash_apply_options * native_self = mruby_unbox_git_stash_apply_options(self);
  mrb_int native_flags;

  mrb_get_args(mrb, "i", &native_flags);

  native_self->flags = native_flags;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StashApplyOptions::checkout_options_reader */
/* sha: f6b061409bc064febf5db60d2830a490e6e0b72b2daf583a319a2c46a7d2b474 */
#if BIND_StashApplyOptions_checkout_options_FIELD_READER
/* get_checkout_options
 *
 * Return Type: int
 */
mrb_value
mrb_Git_StashApplyOptions_get_checkout_options(mrb_state* mrb, mrb_value self) {
  git_stash_apply_options * native_self = mruby_unbox_git_stash_apply_options(self);
  return mruby_box_git_checkout_options(mrb, &native_self->checkout_options);
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StashApplyOptions::checkout_options_writer */
/* sha: dbe0618ba2bf3ef40e6aba7ddb435bc54b44a11a665b08c58685638180b6df2c */
#if BIND_StashApplyOptions_checkout_options_FIELD_WRITER
/* set_checkout_options
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_StashApplyOptions_set_checkout_options(mrb_state* mrb, mrb_value self) {
  git_stash_apply_options * native_self = mruby_unbox_git_stash_apply_options(self);
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

/* MRUBY_BINDING: StashApplyOptions::progress_cb_reader */
/* sha: 8a3519382ad96fe20aeaaf2f61b1e8363a9d148a8f65307b03867ce53f90861e */
#if BIND_StashApplyOptions_progress_cb_FIELD_READER
/* get_progress_cb
 *
 * Return Type: git_stash_apply_progress_cb
 */
mrb_value
mrb_Git_StashApplyOptions_get_progress_cb(mrb_state* mrb, mrb_value self) {
  git_stash_apply_options * native_self = mruby_unbox_git_stash_apply_options(self);

  git_stash_apply_progress_cb native_progress_cb = native_self->progress_cb;

  mrb_value progress_cb = TODO_mruby_box_git_stash_apply_progress_cb(mrb, native_progress_cb);

  return progress_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StashApplyOptions::progress_cb_writer */
/* sha: d16f175be2033a5adc6422849ba9ba353e344d76adbff733b4b06f67c063aa19 */
#if BIND_StashApplyOptions_progress_cb_FIELD_WRITER
/* set_progress_cb
 *
 * Parameters:
 * - value: git_stash_apply_progress_cb
 */
mrb_value
mrb_Git_StashApplyOptions_set_progress_cb(mrb_state* mrb, mrb_value self) {
  git_stash_apply_options * native_self = mruby_unbox_git_stash_apply_options(self);
  mrb_value progress_cb;

  mrb_get_args(mrb, "o", &progress_cb);

  /* type checking */
  TODO_type_check_git_stash_apply_progress_cb(progress_cb);

  git_stash_apply_progress_cb native_progress_cb = TODO_mruby_unbox_git_stash_apply_progress_cb(progress_cb);

  native_self->progress_cb = native_progress_cb;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StashApplyOptions::progress_payload_reader */
/* sha: 4612f08fc9158d14e578df12ec536770ed4a1c98a2e9f1ec878268576533a4cb */
#if BIND_StashApplyOptions_progress_payload_FIELD_READER
/* get_progress_payload
 *
 * Return Type: void *
 */
mrb_value
mrb_Git_StashApplyOptions_get_progress_payload(mrb_state* mrb, mrb_value self) {
  git_stash_apply_options * native_self = mruby_unbox_git_stash_apply_options(self);

  void * native_progress_payload = native_self->progress_payload;

  mrb_value progress_payload = TODO_mruby_box_void_PTR(mrb, native_progress_payload);

  return progress_payload;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StashApplyOptions::progress_payload_writer */
/* sha: 4fa95ccbc043e8910c920f5abba04a99cc7bcbd092a5f3fe64c203c557c1b426 */
#if BIND_StashApplyOptions_progress_payload_FIELD_WRITER
/* set_progress_payload
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_Git_StashApplyOptions_set_progress_payload(mrb_state* mrb, mrb_value self) {
  git_stash_apply_options * native_self = mruby_unbox_git_stash_apply_options(self);
  mrb_value progress_payload;

  mrb_get_args(mrb, "o", &progress_payload);

  /* type checking */
  TODO_type_check_void_PTR(progress_payload);

  void * native_progress_payload = TODO_mruby_unbox_void_PTR(progress_payload);

  native_self->progress_payload = native_progress_payload;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_StashApplyOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: StashApplyOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StashApplyOptions::class_definition */
/* sha: f607443f8d078225374f60bf47839a70d4bcea71568e56b795a64d3106b0b0f7 */
  struct RClass* StashApplyOptions_class = mrb_define_class_under(mrb, Git_module(mrb), "StashApplyOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(StashApplyOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StashApplyOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StashApplyOptions::class_method_definitions */
/* sha: 97a751ba24d6f9e431583482df08fb3705151251478796d13f06606e9649e111 */
#if BIND_StashApplyOptions_INITIALIZE
  mrb_define_method(mrb, StashApplyOptions_class, "initialize", mrb_Git_StashApplyOptions_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, StashApplyOptions_class, "disown", mrb_Git_StashApplyOptions_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, StashApplyOptions_class, "belongs_to_ruby?", mrb_Git_StashApplyOptions_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StashApplyOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StashApplyOptions::attr_definitions */
/* sha: 61bb59d8848bae4266823ef2c54448f7872825268e972475ed0a7dd4198c113c */
  /*
   * Fields
   */
#if BIND_StashApplyOptions_version_FIELD_READER
  mrb_define_method(mrb, StashApplyOptions_class, "version", mrb_Git_StashApplyOptions_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_StashApplyOptions_version_FIELD_WRITER
  mrb_define_method(mrb, StashApplyOptions_class, "version=", mrb_Git_StashApplyOptions_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_StashApplyOptions_flags_FIELD_READER
  mrb_define_method(mrb, StashApplyOptions_class, "flags", mrb_Git_StashApplyOptions_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_StashApplyOptions_flags_FIELD_WRITER
  mrb_define_method(mrb, StashApplyOptions_class, "flags=", mrb_Git_StashApplyOptions_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_StashApplyOptions_checkout_options_FIELD_READER
  mrb_define_method(mrb, StashApplyOptions_class, "checkout_options", mrb_Git_StashApplyOptions_get_checkout_options, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_StashApplyOptions_checkout_options_FIELD_WRITER
  mrb_define_method(mrb, StashApplyOptions_class, "checkout_options=", mrb_Git_StashApplyOptions_set_checkout_options, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_StashApplyOptions_progress_cb_FIELD_READER
  mrb_define_method(mrb, StashApplyOptions_class, "progress_cb", mrb_Git_StashApplyOptions_get_progress_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_StashApplyOptions_progress_cb_FIELD_WRITER
  mrb_define_method(mrb, StashApplyOptions_class, "progress_cb=", mrb_Git_StashApplyOptions_set_progress_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_StashApplyOptions_progress_payload_FIELD_READER
  mrb_define_method(mrb, StashApplyOptions_class, "progress_payload", mrb_Git_StashApplyOptions_get_progress_payload, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_StashApplyOptions_progress_payload_FIELD_WRITER
  mrb_define_method(mrb, StashApplyOptions_class, "progress_payload=", mrb_Git_StashApplyOptions_set_progress_payload, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StashApplyOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StashApplyOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StashApplyOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
