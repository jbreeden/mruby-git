/*
 * git_merge_options
 * Defined in file merge.h @ line 241
 */

#include "mruby_Git.h"

#if BIND_MergeOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::initialize */
/* sha: f0538ce168fa411e7b788a3efc303ce9547f967f2532f264b8795ca83b10875e */
#if BIND_MergeOptions_INITIALIZE
mrb_value
mrb_Git_MergeOptions_initialize(mrb_state* mrb, mrb_value self) {
  git_merge_options* native_object = (git_merge_options*)calloc(1, sizeof(git_merge_options));
  mruby_gift_git_merge_options_data_ptr(self, native_object);
  git_merge_init_options(native_object, GIT_MERGE_OPTIONS_VERSION);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: MergeOptions::version_reader */
/* sha: 8c1fb209278e5b24c9e79a67085aa500ac9e199dbae4f98aec3c8b9b1d4bb902 */
#if BIND_MergeOptions_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_MergeOptions_get_version(mrb_state* mrb, mrb_value self) {
  git_merge_options * native_self = mruby_unbox_git_merge_options(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::version_writer */
/* sha: eb3e7bd23cfbf4e69afd91a7d0ab5b0df1992c33e51af2fc2cbfa7a2816f3d9c */
#if BIND_MergeOptions_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_MergeOptions_set_version(mrb_state* mrb, mrb_value self) {
  git_merge_options * native_self = mruby_unbox_git_merge_options(self);
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

/* MRUBY_BINDING: MergeOptions::flags_reader */
/* sha: 3bc83ec761d948b652667bc651ad8b1af580eccd6f3aca2f564db4bd61e1ecc1 */
#if BIND_MergeOptions_flags_FIELD_READER
/* get_flags
 *
 * Return Type: git_merge_flag_t
 */
mrb_value
mrb_Git_MergeOptions_get_flags(mrb_state* mrb, mrb_value self) {
  git_merge_options * native_self = mruby_unbox_git_merge_options(self);

  git_merge_flag_t native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::flags_writer */
/* sha: 06fe778206125d92494710f275e314de962a3c6e8c17a0e65a30ddd0ed313388 */
#if BIND_MergeOptions_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: git_merge_flag_t
 */
mrb_value
mrb_Git_MergeOptions_set_flags(mrb_state* mrb, mrb_value self) {
  git_merge_options * native_self = mruby_unbox_git_merge_options(self);
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

/* MRUBY_BINDING: MergeOptions::rename_threshold_reader */
/* sha: 25ed49481a2066afc0f60b072ab67404e7cf8b2da18fe36dc95385c4b73c2b73 */
#if BIND_MergeOptions_rename_threshold_FIELD_READER
/* get_rename_threshold
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_MergeOptions_get_rename_threshold(mrb_state* mrb, mrb_value self) {
  git_merge_options * native_self = mruby_unbox_git_merge_options(self);

  unsigned int native_rename_threshold = native_self->rename_threshold;

  mrb_value rename_threshold = mrb_fixnum_value(native_rename_threshold);

  return rename_threshold;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::rename_threshold_writer */
/* sha: bca2d65bb2347d83de8b0e77f971416ece28de227e59a17f55fd425c6be092e5 */
#if BIND_MergeOptions_rename_threshold_FIELD_WRITER
/* set_rename_threshold
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_MergeOptions_set_rename_threshold(mrb_state* mrb, mrb_value self) {
  git_merge_options * native_self = mruby_unbox_git_merge_options(self);
  mrb_int native_rename_threshold;

  mrb_get_args(mrb, "i", &native_rename_threshold);

  native_self->rename_threshold = native_rename_threshold;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::target_limit_reader */
/* sha: cf664fc7206017a476b7c6374614540e9f17d67173a9d04ad9a34ba4c8853751 */
#if BIND_MergeOptions_target_limit_FIELD_READER
/* get_target_limit
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_MergeOptions_get_target_limit(mrb_state* mrb, mrb_value self) {
  git_merge_options * native_self = mruby_unbox_git_merge_options(self);

  unsigned int native_target_limit = native_self->target_limit;

  mrb_value target_limit = mrb_fixnum_value(native_target_limit);

  return target_limit;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::target_limit_writer */
/* sha: c126781ed4b4abf149565b7ba5f08bd8b064d5564b8b344ce6dd279ca67e8e40 */
#if BIND_MergeOptions_target_limit_FIELD_WRITER
/* set_target_limit
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_MergeOptions_set_target_limit(mrb_state* mrb, mrb_value self) {
  git_merge_options * native_self = mruby_unbox_git_merge_options(self);
  mrb_int native_target_limit;

  mrb_get_args(mrb, "i", &native_target_limit);

  native_self->target_limit = native_target_limit;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::metric_reader */
/* sha: 2c22ce773d9cd96f84925af874a095115e2d42fefc6dbae1c3be8f36e650a353 */
#if BIND_MergeOptions_metric_FIELD_READER
/* get_metric
 *
 * Return Type: git_diff_similarity_metric *
 */
mrb_value
mrb_Git_MergeOptions_get_metric(mrb_state* mrb, mrb_value self) {
  git_merge_options * native_self = mruby_unbox_git_merge_options(self);

  git_diff_similarity_metric * native_metric = native_self->metric;

  mrb_value metric = (native_metric == NULL ? mrb_nil_value() : mruby_box_git_diff_similarity_metric(mrb, native_metric));

  return metric;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::metric_writer */
/* sha: 6c48b3eff5236942f5fb85535930a85506b177fb1252d3ef8938ccbe1dd2059d */
#if BIND_MergeOptions_metric_FIELD_WRITER
/* set_metric
 *
 * Parameters:
 * - value: git_diff_similarity_metric *
 */
mrb_value
mrb_Git_MergeOptions_set_metric(mrb_state* mrb, mrb_value self) {
  git_merge_options * native_self = mruby_unbox_git_merge_options(self);
  mrb_value metric;

  mrb_get_args(mrb, "o", &metric);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, metric, DiffSimilarityMetric_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffSimilarityMetric expected");
    return mrb_nil_value();
  }

  git_diff_similarity_metric * native_metric = (mrb_nil_p(metric) ? NULL : mruby_unbox_git_diff_similarity_metric(metric));

  native_self->metric = native_metric;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::recursion_limit_reader */
/* sha: 38179e703367e3fece92464c8538e1634d1bafec691736bbfba7fdb59816b82f */
#if BIND_MergeOptions_recursion_limit_FIELD_READER
/* get_recursion_limit
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_MergeOptions_get_recursion_limit(mrb_state* mrb, mrb_value self) {
  git_merge_options * native_self = mruby_unbox_git_merge_options(self);

  unsigned int native_recursion_limit = native_self->recursion_limit;

  mrb_value recursion_limit = mrb_fixnum_value(native_recursion_limit);

  return recursion_limit;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::recursion_limit_writer */
/* sha: d5e91f779be8c2ce71af95410a38bf82ec01f8ab620d2e686542996b72ddf8bc */
#if BIND_MergeOptions_recursion_limit_FIELD_WRITER
/* set_recursion_limit
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_MergeOptions_set_recursion_limit(mrb_state* mrb, mrb_value self) {
  git_merge_options * native_self = mruby_unbox_git_merge_options(self);
  mrb_int native_recursion_limit;

  mrb_get_args(mrb, "i", &native_recursion_limit);

  native_self->recursion_limit = native_recursion_limit;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::file_favor_reader */
/* sha: 57db63ea64b443955bd224c92b4b66372c7aea690604ba2e49730082377b7587 */
#if BIND_MergeOptions_file_favor_FIELD_READER
/* get_file_favor
 *
 * Return Type: git_merge_file_favor_t
 */
mrb_value
mrb_Git_MergeOptions_get_file_favor(mrb_state* mrb, mrb_value self) {
  git_merge_options * native_self = mruby_unbox_git_merge_options(self);

  git_merge_file_favor_t native_file_favor = native_self->file_favor;

  mrb_value file_favor = mrb_fixnum_value(native_file_favor);

  return file_favor;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::file_favor_writer */
/* sha: 32e1ab72f9749256272d35e473103c66ba919d20baa6090a3e7c75ba8911a310 */
#if BIND_MergeOptions_file_favor_FIELD_WRITER
/* set_file_favor
 *
 * Parameters:
 * - value: git_merge_file_favor_t
 */
mrb_value
mrb_Git_MergeOptions_set_file_favor(mrb_state* mrb, mrb_value self) {
  git_merge_options * native_self = mruby_unbox_git_merge_options(self);
  mrb_int native_file_favor;

  mrb_get_args(mrb, "i", &native_file_favor);

  native_self->file_favor = native_file_favor;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::file_flags_reader */
/* sha: 4ed9db7439591939ca449a5b86a7b5b6f267e1b55c0c6a386660c0356a27b36c */
#if BIND_MergeOptions_file_flags_FIELD_READER
/* get_file_flags
 *
 * Return Type: git_merge_file_flag_t
 */
mrb_value
mrb_Git_MergeOptions_get_file_flags(mrb_state* mrb, mrb_value self) {
  git_merge_options * native_self = mruby_unbox_git_merge_options(self);

  git_merge_file_flag_t native_file_flags = native_self->file_flags;

  mrb_value file_flags = mrb_fixnum_value(native_file_flags);

  return file_flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::file_flags_writer */
/* sha: 2c763104b82e0d85c90c808decfdd137e34d9e62d79c7e6a7e2abe12e5bcf689 */
#if BIND_MergeOptions_file_flags_FIELD_WRITER
/* set_file_flags
 *
 * Parameters:
 * - value: git_merge_file_flag_t
 */
mrb_value
mrb_Git_MergeOptions_set_file_flags(mrb_state* mrb, mrb_value self) {
  git_merge_options * native_self = mruby_unbox_git_merge_options(self);
  mrb_int native_file_flags;

  mrb_get_args(mrb, "i", &native_file_flags);

  native_self->file_flags = native_file_flags;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_MergeOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: MergeOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::class_definition */
/* sha: 4aaea9e1f1149a491d24ecd41b0cb5527d5b0ea9c4ac0890b7b9271a0ab2eec6 */
  struct RClass* MergeOptions_class = mrb_define_class_under(mrb, Git_module(mrb), "MergeOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(MergeOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::class_method_definitions */
/* sha: fffec9396a2b2a1dd81baf827b3f930d7d676d57bd14564fc265ee3b2996040e */
#if BIND_MergeOptions_INITIALIZE
  mrb_define_method(mrb, MergeOptions_class, "initialize", mrb_Git_MergeOptions_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::attr_definitions */
/* sha: 76db16e81ff485d0504a1329d9fee15de69afd4f35bd0a83386ec7489163698c */
  /*
   * Fields
   */
#if BIND_MergeOptions_version_FIELD_READER
  mrb_define_method(mrb, MergeOptions_class, "version", mrb_Git_MergeOptions_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeOptions_version_FIELD_WRITER
  mrb_define_method(mrb, MergeOptions_class, "version=", mrb_Git_MergeOptions_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeOptions_flags_FIELD_READER
  mrb_define_method(mrb, MergeOptions_class, "flags", mrb_Git_MergeOptions_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeOptions_flags_FIELD_WRITER
  mrb_define_method(mrb, MergeOptions_class, "flags=", mrb_Git_MergeOptions_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeOptions_rename_threshold_FIELD_READER
  mrb_define_method(mrb, MergeOptions_class, "rename_threshold", mrb_Git_MergeOptions_get_rename_threshold, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeOptions_rename_threshold_FIELD_WRITER
  mrb_define_method(mrb, MergeOptions_class, "rename_threshold=", mrb_Git_MergeOptions_set_rename_threshold, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeOptions_target_limit_FIELD_READER
  mrb_define_method(mrb, MergeOptions_class, "target_limit", mrb_Git_MergeOptions_get_target_limit, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeOptions_target_limit_FIELD_WRITER
  mrb_define_method(mrb, MergeOptions_class, "target_limit=", mrb_Git_MergeOptions_set_target_limit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeOptions_metric_FIELD_READER
  mrb_define_method(mrb, MergeOptions_class, "metric", mrb_Git_MergeOptions_get_metric, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeOptions_metric_FIELD_WRITER
  mrb_define_method(mrb, MergeOptions_class, "metric=", mrb_Git_MergeOptions_set_metric, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeOptions_recursion_limit_FIELD_READER
  mrb_define_method(mrb, MergeOptions_class, "recursion_limit", mrb_Git_MergeOptions_get_recursion_limit, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeOptions_recursion_limit_FIELD_WRITER
  mrb_define_method(mrb, MergeOptions_class, "recursion_limit=", mrb_Git_MergeOptions_set_recursion_limit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeOptions_file_favor_FIELD_READER
  mrb_define_method(mrb, MergeOptions_class, "file_favor", mrb_Git_MergeOptions_get_file_favor, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeOptions_file_favor_FIELD_WRITER
  mrb_define_method(mrb, MergeOptions_class, "file_favor=", mrb_Git_MergeOptions_set_file_favor, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_MergeOptions_file_flags_FIELD_READER
  mrb_define_method(mrb, MergeOptions_class, "file_flags", mrb_Git_MergeOptions_get_file_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_MergeOptions_file_flags_FIELD_WRITER
  mrb_define_method(mrb, MergeOptions_class, "file_flags=", mrb_Git_MergeOptions_set_file_flags, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
