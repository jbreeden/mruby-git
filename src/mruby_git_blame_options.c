/*
 * git_blame_options
 * Defined in file blame.h @ line 70
 */

#include "mruby_Git.h"

#if BIND_BlameOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::initialize */
/* sha: f21a64432007669025b3709a123c7cf4f66538dc3ac9c43d1e9e4630266b0aeb */
#if BIND_BlameOptions_INITIALIZE
mrb_value
mrb_Git_BlameOptions_initialize(mrb_state* mrb, mrb_value self) {
  git_blame_options* native_object = (git_blame_options*)calloc(1, sizeof(git_blame_options));
  mruby_gift_git_blame_options_data_ptr(self, native_object);
  git_blame_init_options(native_object, GIT_BLAME_OPTIONS_VERSION);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: BlameOptions::version_reader */
/* sha: 9f29ebcef9fc77f0b1bac7973626e96bda65674e85693f654c887de23efbff6b */
#if BIND_BlameOptions_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_BlameOptions_get_version(mrb_state* mrb, mrb_value self) {
  git_blame_options * native_self = mruby_unbox_git_blame_options(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::version_writer */
/* sha: 79f5cf0bf28540da4ec81bd1b266a85e174ff9af228f1c586dedac4bc0b46807 */
#if BIND_BlameOptions_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_BlameOptions_set_version(mrb_state* mrb, mrb_value self) {
  git_blame_options * native_self = mruby_unbox_git_blame_options(self);
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

/* MRUBY_BINDING: BlameOptions::flags_reader */
/* sha: e98c87daba48ed5a438008cf62584131148c8136095fe9e9a5fc712e18c428fb */
#if BIND_BlameOptions_flags_FIELD_READER
/* get_flags
 *
 * Return Type: uint32_t
 */
mrb_value
mrb_Git_BlameOptions_get_flags(mrb_state* mrb, mrb_value self) {
  git_blame_options * native_self = mruby_unbox_git_blame_options(self);

  uint32_t native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::flags_writer */
/* sha: 6692a1da37278f6c0dcadfd0179cc694f28108eae33ade7c32590c99fbab22ca */
#if BIND_BlameOptions_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: uint32_t
 */
mrb_value
mrb_Git_BlameOptions_set_flags(mrb_state* mrb, mrb_value self) {
  git_blame_options * native_self = mruby_unbox_git_blame_options(self);
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

/* MRUBY_BINDING: BlameOptions::min_match_characters_reader */
/* sha: 3e2c9b444030552c509d5a704e9b531270cc8b4ae8aee615071e155fafc5c677 */
#if BIND_BlameOptions_min_match_characters_FIELD_READER
/* get_min_match_characters
 *
 * Return Type: uint16_t
 */
mrb_value
mrb_Git_BlameOptions_get_min_match_characters(mrb_state* mrb, mrb_value self) {
  git_blame_options * native_self = mruby_unbox_git_blame_options(self);

  uint16_t native_min_match_characters = native_self->min_match_characters;

  mrb_value min_match_characters = mrb_fixnum_value(native_min_match_characters);

  return min_match_characters;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::min_match_characters_writer */
/* sha: af65219eec684e6785c781a6ba42d096ffb72575d455485bf822276125484b5b */
#if BIND_BlameOptions_min_match_characters_FIELD_WRITER
/* set_min_match_characters
 *
 * Parameters:
 * - value: uint16_t
 */
mrb_value
mrb_Git_BlameOptions_set_min_match_characters(mrb_state* mrb, mrb_value self) {
  git_blame_options * native_self = mruby_unbox_git_blame_options(self);
  mrb_int native_min_match_characters;

  mrb_get_args(mrb, "i", &native_min_match_characters);

  native_self->min_match_characters = native_min_match_characters;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::newest_commit_reader */
/* sha: 217aa2cc38803acb69a28ed3e2282420816aa6c29c3fb6948b68c0525399df3c */
#if BIND_BlameOptions_newest_commit_FIELD_READER
/* get_newest_commit
 *
 * Return Type: git_oid
 */
mrb_value
mrb_Git_BlameOptions_get_newest_commit(mrb_state* mrb, mrb_value self) {
  git_blame_options * native_self = mruby_unbox_git_blame_options(self);

  git_oid native_newest_commit = native_self->newest_commit;

  git_oid* new_newest_commit = TODO_move_git_oid_to_heap(native_newest_commit);
  mrb_value newest_commit = mruby_box_git_oid(mrb, &native_newest_commit);

  return newest_commit;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::newest_commit_writer */
/* sha: 71ddfc57771575667a666f7d310ce5592f4f89613c508c70f3dc5220471d331b */
#if BIND_BlameOptions_newest_commit_FIELD_WRITER
/* set_newest_commit
 *
 * Parameters:
 * - value: git_oid
 */
mrb_value
mrb_Git_BlameOptions_set_newest_commit(mrb_state* mrb, mrb_value self) {
  git_blame_options * native_self = mruby_unbox_git_blame_options(self);
  mrb_value newest_commit;

  mrb_get_args(mrb, "o", &newest_commit);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, newest_commit, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  git_oid native_newest_commit = *(mruby_unbox_git_oid(newest_commit));

  native_self->newest_commit = native_newest_commit;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::oldest_commit_reader */
/* sha: 7696bb9efbbeef8ffd663cc4f7a4c5521fd10af55414ab47bae66d6c09830b8a */
#if BIND_BlameOptions_oldest_commit_FIELD_READER
/* get_oldest_commit
 *
 * Return Type: git_oid
 */
mrb_value
mrb_Git_BlameOptions_get_oldest_commit(mrb_state* mrb, mrb_value self) {
  git_blame_options * native_self = mruby_unbox_git_blame_options(self);

  git_oid native_oldest_commit = native_self->oldest_commit;

  git_oid* new_oldest_commit = TODO_move_git_oid_to_heap(native_oldest_commit);
  mrb_value oldest_commit = mruby_box_git_oid(mrb, &native_oldest_commit);

  return oldest_commit;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::oldest_commit_writer */
/* sha: 17dced3a7ae0cd3d5d64ceaebf7424d9d8474c132dcc2e554c24fbbe150e0b41 */
#if BIND_BlameOptions_oldest_commit_FIELD_WRITER
/* set_oldest_commit
 *
 * Parameters:
 * - value: git_oid
 */
mrb_value
mrb_Git_BlameOptions_set_oldest_commit(mrb_state* mrb, mrb_value self) {
  git_blame_options * native_self = mruby_unbox_git_blame_options(self);
  mrb_value oldest_commit;

  mrb_get_args(mrb, "o", &oldest_commit);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, oldest_commit, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  git_oid native_oldest_commit = *(mruby_unbox_git_oid(oldest_commit));

  native_self->oldest_commit = native_oldest_commit;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::min_line_reader */
/* sha: d1a933edb190bd3b5fa4e2d812174b6f3be4b20d4c30801dcdbe6637369c8a2a */
#if BIND_BlameOptions_min_line_FIELD_READER
/* get_min_line
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_BlameOptions_get_min_line(mrb_state* mrb, mrb_value self) {
  git_blame_options * native_self = mruby_unbox_git_blame_options(self);

  size_t native_min_line = native_self->min_line;

  mrb_value min_line = mrb_fixnum_value(native_min_line);

  return min_line;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::min_line_writer */
/* sha: be7c6dfe16a253e9b0e479bb406c2d324e71c0ee3141455969609ff908dfa006 */
#if BIND_BlameOptions_min_line_FIELD_WRITER
/* set_min_line
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_BlameOptions_set_min_line(mrb_state* mrb, mrb_value self) {
  git_blame_options * native_self = mruby_unbox_git_blame_options(self);
  mrb_int native_min_line;

  mrb_get_args(mrb, "i", &native_min_line);

  native_self->min_line = native_min_line;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::max_line_reader */
/* sha: c8f3c5d77359733e61e39b90b42492d2ad2dc4369d879569bbfaf1d627f078c6 */
#if BIND_BlameOptions_max_line_FIELD_READER
/* get_max_line
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_BlameOptions_get_max_line(mrb_state* mrb, mrb_value self) {
  git_blame_options * native_self = mruby_unbox_git_blame_options(self);

  size_t native_max_line = native_self->max_line;

  mrb_value max_line = mrb_fixnum_value(native_max_line);

  return max_line;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::max_line_writer */
/* sha: ed966f59197383f9d45f281706cadea0c5e3570f5be91a4b5b6eb3425f707576 */
#if BIND_BlameOptions_max_line_FIELD_WRITER
/* set_max_line
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_BlameOptions_set_max_line(mrb_state* mrb, mrb_value self) {
  git_blame_options * native_self = mruby_unbox_git_blame_options(self);
  mrb_int native_max_line;

  mrb_get_args(mrb, "i", &native_max_line);

  native_self->max_line = native_max_line;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_BlameOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: BlameOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::class_definition */
/* sha: fca507d7b281351dbd5660c912d55cdee256b3a25f32dd86982693722d03f84d */
  struct RClass* BlameOptions_class = mrb_define_class_under(mrb, Git_module(mrb), "BlameOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(BlameOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::class_method_definitions */
/* sha: 832d76ee1446cd4fa67f88a0319d5a059791a982d2173988d8894268c4616d89 */
#if BIND_BlameOptions_INITIALIZE
  mrb_define_method(mrb, BlameOptions_class, "initialize", mrb_Git_BlameOptions_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::attr_definitions */
/* sha: 4b68697757f5bfa49b4187d7ede13fbea4dfd2e0301e4d10dcf3666919ecec01 */
  /*
   * Fields
   */
#if BIND_BlameOptions_version_FIELD_READER
  mrb_define_method(mrb, BlameOptions_class, "version", mrb_Git_BlameOptions_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_BlameOptions_version_FIELD_WRITER
  mrb_define_method(mrb, BlameOptions_class, "version=", mrb_Git_BlameOptions_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_BlameOptions_flags_FIELD_READER
  mrb_define_method(mrb, BlameOptions_class, "flags", mrb_Git_BlameOptions_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_BlameOptions_flags_FIELD_WRITER
  mrb_define_method(mrb, BlameOptions_class, "flags=", mrb_Git_BlameOptions_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_BlameOptions_min_match_characters_FIELD_READER
  mrb_define_method(mrb, BlameOptions_class, "min_match_characters", mrb_Git_BlameOptions_get_min_match_characters, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_BlameOptions_min_match_characters_FIELD_WRITER
  mrb_define_method(mrb, BlameOptions_class, "min_match_characters=", mrb_Git_BlameOptions_set_min_match_characters, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_BlameOptions_newest_commit_FIELD_READER
  mrb_define_method(mrb, BlameOptions_class, "newest_commit", mrb_Git_BlameOptions_get_newest_commit, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_BlameOptions_newest_commit_FIELD_WRITER
  mrb_define_method(mrb, BlameOptions_class, "newest_commit=", mrb_Git_BlameOptions_set_newest_commit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_BlameOptions_oldest_commit_FIELD_READER
  mrb_define_method(mrb, BlameOptions_class, "oldest_commit", mrb_Git_BlameOptions_get_oldest_commit, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_BlameOptions_oldest_commit_FIELD_WRITER
  mrb_define_method(mrb, BlameOptions_class, "oldest_commit=", mrb_Git_BlameOptions_set_oldest_commit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_BlameOptions_min_line_FIELD_READER
  mrb_define_method(mrb, BlameOptions_class, "min_line", mrb_Git_BlameOptions_get_min_line, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_BlameOptions_min_line_FIELD_WRITER
  mrb_define_method(mrb, BlameOptions_class, "min_line=", mrb_Git_BlameOptions_set_min_line, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_BlameOptions_max_line_FIELD_READER
  mrb_define_method(mrb, BlameOptions_class, "max_line", mrb_Git_BlameOptions_get_max_line, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_BlameOptions_max_line_FIELD_WRITER
  mrb_define_method(mrb, BlameOptions_class, "max_line=", mrb_Git_BlameOptions_set_max_line, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
