/*
 * git_merge_file_options
 * Defined in file merge.h @ line 168
 */

#include "mruby_Git.h"

#if BIND_MergeFileOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: MergeFileOptions::initialize */
/* sha: 7628f57e2554b343ee5161944e137970d19f76bba26298a5be53ba741a97ce1f */
#if BIND_MergeFileOptions_INITIALIZE
mrb_value
mrb_Git_MergeFileOptions_initialize(mrb_state* mrb, mrb_value self) {
  git_merge_file_options* native_object = (git_merge_file_options*)calloc(1, sizeof(git_merge_file_options));
  mruby_gift_git_merge_file_options_data_ptr(self, native_object);
  git_merge_file_init_options(native_object, GIT_MERGE_FILE_OPTIONS_VERSION);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::disown */
/* sha: 9b34215be1e11c4b723d35ffa8e21e4d05bba77717be27220c650b12664ed4b2 */
mrb_value
mrb_Git_MergeFileOptions_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::MergeFileOptions.disown only accepts objects of type Git::MergeFileOptions");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::belongs_to_ruby */
/* sha: 7e38d21f038ec719f3dc6ec17acbbec02a596f0aec0d4cf049bc26ef4848a3a2 */
mrb_value
mrb_Git_MergeFileOptions_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::MergeFileOptions.belongs_to_ruby only accepts objects of type Git::MergeFileOptions");
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

/* MRUBY_BINDING: MergeFileOptions::version_reader */
/* sha: 705a08c75f27f8eac5fb1db78831d386d912fce4d4e35bfdc45bb4792f9bc8fc */
#if BIND_MergeFileOptions_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_MergeFileOptions_get_version(mrb_state* mrb, mrb_value self) {
  git_merge_file_options * native_self = mruby_unbox_git_merge_file_options(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::version_writer */
/* sha: a0af2af2197ebd501471097dd03edbe2de1052b813873e36a5b4b826bb34da61 */
#if BIND_MergeFileOptions_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_MergeFileOptions_set_version(mrb_state* mrb, mrb_value self) {
  git_merge_file_options * native_self = mruby_unbox_git_merge_file_options(self);
  mrb_int native_version;

  mrb_get_args(mrb, "i", &native_version);

  native_self->version = native_version;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::ancestor_label_reader */
/* sha: 198deff9eb9902b9c88520a46c2dea0973d36590802e27a808dc31e9dda8b34c */
#if BIND_MergeFileOptions_ancestor_label_FIELD_READER
/* get_ancestor_label
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_MergeFileOptions_get_ancestor_label(mrb_state* mrb, mrb_value self) {
  git_merge_file_options * native_self = mruby_unbox_git_merge_file_options(self);

  const char * native_ancestor_label = native_self->ancestor_label;

  mrb_value ancestor_label = native_ancestor_label == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_ancestor_label);

  return ancestor_label;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::ancestor_label_writer */
/* sha: bc19279e24d777be0513eeabbe9ab44bb4c7fec2d1c2d528f36be624d6aa4665 */
#if BIND_MergeFileOptions_ancestor_label_FIELD_WRITER
/* set_ancestor_label
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_MergeFileOptions_set_ancestor_label(mrb_state* mrb, mrb_value self) {
  git_merge_file_options * native_self = mruby_unbox_git_merge_file_options(self);
  char * native_ancestor_label = NULL;

  mrb_get_args(mrb, "z", &native_ancestor_label);

  native_self->ancestor_label = native_ancestor_label;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::our_label_reader */
/* sha: a7c8bff3fbd117c901e253db3170033139a4e90396ce82d0ac7e3d08491aa2ee */
#if BIND_MergeFileOptions_our_label_FIELD_READER
/* get_our_label
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_MergeFileOptions_get_our_label(mrb_state* mrb, mrb_value self) {
  git_merge_file_options * native_self = mruby_unbox_git_merge_file_options(self);

  const char * native_our_label = native_self->our_label;

  mrb_value our_label = native_our_label == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_our_label);

  return our_label;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::our_label_writer */
/* sha: f6fe034bc3a3deb7b365c7a8ae679a5c8bf80294a605c96ca501911e899ec45d */
#if BIND_MergeFileOptions_our_label_FIELD_WRITER
/* set_our_label
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_MergeFileOptions_set_our_label(mrb_state* mrb, mrb_value self) {
  git_merge_file_options * native_self = mruby_unbox_git_merge_file_options(self);
  char * native_our_label = NULL;

  mrb_get_args(mrb, "z", &native_our_label);

  native_self->our_label = native_our_label;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::their_label_reader */
/* sha: ac5f7e11c0d5031ec13511eb04794ef5351bc7bb3ffda32fd4d6b56d8660ab4f */
#if BIND_MergeFileOptions_their_label_FIELD_READER
/* get_their_label
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_MergeFileOptions_get_their_label(mrb_state* mrb, mrb_value self) {
  git_merge_file_options * native_self = mruby_unbox_git_merge_file_options(self);

  const char * native_their_label = native_self->their_label;

  mrb_value their_label = native_their_label == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_their_label);

  return their_label;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::their_label_writer */
/* sha: 905d8fc0a7cf7ae08a9c771acfec64f6583980674f3f742f4028bab55c323801 */
#if BIND_MergeFileOptions_their_label_FIELD_WRITER
/* set_their_label
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_MergeFileOptions_set_their_label(mrb_state* mrb, mrb_value self) {
  git_merge_file_options * native_self = mruby_unbox_git_merge_file_options(self);
  char * native_their_label = NULL;

  mrb_get_args(mrb, "z", &native_their_label);

  native_self->their_label = native_their_label;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::favor_reader */
/* sha: 0119325de42310a1035536d2fa19b1b7ee8e780de1681d5fdfa48ef3263ed974 */
#if BIND_MergeFileOptions_favor_FIELD_READER
/* get_favor
 *
 * Return Type: git_merge_file_favor_t
 */
mrb_value
mrb_Git_MergeFileOptions_get_favor(mrb_state* mrb, mrb_value self) {
  git_merge_file_options * native_self = mruby_unbox_git_merge_file_options(self);

  git_merge_file_favor_t native_favor = native_self->favor;

  mrb_value favor = mrb_fixnum_value(native_favor);

  return favor;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::favor_writer */
/* sha: d3166e8cc68c75687f6ff3fc168229ecaffe10d1665f55e9ae83b9e938989841 */
#if BIND_MergeFileOptions_favor_FIELD_WRITER
/* set_favor
 *
 * Parameters:
 * - value: git_merge_file_favor_t
 */
mrb_value
mrb_Git_MergeFileOptions_set_favor(mrb_state* mrb, mrb_value self) {
  git_merge_file_options * native_self = mruby_unbox_git_merge_file_options(self);
  mrb_int native_favor;

  mrb_get_args(mrb, "i", &native_favor);

  native_self->favor = native_favor;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::flags_reader */
/* sha: db3207245b84b3a9315a4dda3dc31c2c4bd377825905ce102a34e2514cf2de6d */
#if BIND_MergeFileOptions_flags_FIELD_READER
/* get_flags
 *
 * Return Type: git_merge_file_flag_t
 */
mrb_value
mrb_Git_MergeFileOptions_get_flags(mrb_state* mrb, mrb_value self) {
  git_merge_file_options * native_self = mruby_unbox_git_merge_file_options(self);

  git_merge_file_flag_t native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::flags_writer */
/* sha: 2ddb053e8321b410a74ec226bad63431d064d0edf1e1f00c19a98fb92b9a0432 */
#if BIND_MergeFileOptions_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: git_merge_file_flag_t
 */
mrb_value
mrb_Git_MergeFileOptions_set_flags(mrb_state* mrb, mrb_value self) {
  git_merge_file_options * native_self = mruby_unbox_git_merge_file_options(self);
  mrb_int native_flags;

  mrb_get_args(mrb, "i", &native_flags);

  native_self->flags = native_flags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_MergeFileOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: MergeFileOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::class_definition */
/* sha: bb8fa03e08376d5bfbd2b33a03d1885e063cd8d74ae1bb4ac725227f3f12352d */
  struct RClass* MergeFileOptions_class = mrb_define_class_under(mrb, Git_module(mrb), "MergeFileOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(MergeFileOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::class_method_definitions */
/* sha: ccbf1819373e54e7dac089184e6ae88d3d192067dd11a8c27a2c260d654fbd8b */
#if BIND_MergeFileOptions_INITIALIZE
  mrb_define_method(mrb, MergeFileOptions_class, "initialize", mrb_Git_MergeFileOptions_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, MergeFileOptions_class, "disown", mrb_Git_MergeFileOptions_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, MergeFileOptions_class, "belongs_to_ruby?", mrb_Git_MergeFileOptions_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::attr_definitions */
/* sha: 09dc8c324e5571bcfbcb1b03b16825e65fe8deeff87c55157cfa0cce0c02a82a */
  /*
   * Fields
   */
#if BIND_MergeFileOptions_version_FIELD_READER
  mrb_define_method(mrb, MergeFileOptions_class, "version", mrb_Git_MergeFileOptions_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeFileOptions_version_FIELD_WRITER
  mrb_define_method(mrb, MergeFileOptions_class, "version=", mrb_Git_MergeFileOptions_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeFileOptions_ancestor_label_FIELD_READER
  mrb_define_method(mrb, MergeFileOptions_class, "ancestor_label", mrb_Git_MergeFileOptions_get_ancestor_label, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeFileOptions_ancestor_label_FIELD_WRITER
  mrb_define_method(mrb, MergeFileOptions_class, "ancestor_label=", mrb_Git_MergeFileOptions_set_ancestor_label, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeFileOptions_our_label_FIELD_READER
  mrb_define_method(mrb, MergeFileOptions_class, "our_label", mrb_Git_MergeFileOptions_get_our_label, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeFileOptions_our_label_FIELD_WRITER
  mrb_define_method(mrb, MergeFileOptions_class, "our_label=", mrb_Git_MergeFileOptions_set_our_label, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeFileOptions_their_label_FIELD_READER
  mrb_define_method(mrb, MergeFileOptions_class, "their_label", mrb_Git_MergeFileOptions_get_their_label, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeFileOptions_their_label_FIELD_WRITER
  mrb_define_method(mrb, MergeFileOptions_class, "their_label=", mrb_Git_MergeFileOptions_set_their_label, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeFileOptions_favor_FIELD_READER
  mrb_define_method(mrb, MergeFileOptions_class, "favor", mrb_Git_MergeFileOptions_get_favor, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeFileOptions_favor_FIELD_WRITER
  mrb_define_method(mrb, MergeFileOptions_class, "favor=", mrb_Git_MergeFileOptions_set_favor, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeFileOptions_flags_FIELD_READER
  mrb_define_method(mrb, MergeFileOptions_class, "flags", mrb_Git_MergeFileOptions_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeFileOptions_flags_FIELD_WRITER
  mrb_define_method(mrb, MergeFileOptions_class, "flags=", mrb_Git_MergeFileOptions_set_flags, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
