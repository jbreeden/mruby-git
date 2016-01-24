/*
 * git_diff_find_options
 * Defined in file diff.h @ line 681
 */

#include "mruby_Git.h"

#if BIND_DiffFindOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::initialize */
/* sha: a9a068422dd497068f0bbc10ba236ecb119c5fa943a6338028f6c07ebbeaa9e2 */
#if BIND_DiffFindOptions_INITIALIZE
mrb_value
mrb_Git_DiffFindOptions_initialize(mrb_state* mrb, mrb_value self) {
  git_diff_find_options* native_object = (git_diff_find_options*)calloc(1, sizeof(git_diff_find_options));
  mruby_gift_git_diff_find_options_data_ptr(self, native_object);
  git_diff_find_init_options(native_object, GIT_DIFF_FIND_OPTIONS_VERSION);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: DiffFindOptions::version_reader */
/* sha: f6d4f07477ab175a215a2071fd7c8e720459a250a4bd049189b079aa55d505f7 */
#if BIND_DiffFindOptions_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_DiffFindOptions_get_version(mrb_state* mrb, mrb_value self) {
  git_diff_find_options * native_self = mruby_unbox_git_diff_find_options(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::version_writer */
/* sha: fc33d369880091d9d5f04f17739d5d1ac4baec572ce331580683eebe9f5795d2 */
#if BIND_DiffFindOptions_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_DiffFindOptions_set_version(mrb_state* mrb, mrb_value self) {
  git_diff_find_options * native_self = mruby_unbox_git_diff_find_options(self);
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

/* MRUBY_BINDING: DiffFindOptions::flags_reader */
/* sha: aaf1f238fd6852b7129e1b5d655a1ca7b36ecc04592b07f3d8ceb5c6a182b653 */
#if BIND_DiffFindOptions_flags_FIELD_READER
/* get_flags
 *
 * Return Type: uint32_t
 */
mrb_value
mrb_Git_DiffFindOptions_get_flags(mrb_state* mrb, mrb_value self) {
  git_diff_find_options * native_self = mruby_unbox_git_diff_find_options(self);

  uint32_t native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::flags_writer */
/* sha: 1ab3317a160ad18136c7d61da3c7bf508ada38a21cdcce8cecdb954310bcef41 */
#if BIND_DiffFindOptions_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: uint32_t
 */
mrb_value
mrb_Git_DiffFindOptions_set_flags(mrb_state* mrb, mrb_value self) {
  git_diff_find_options * native_self = mruby_unbox_git_diff_find_options(self);
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

/* MRUBY_BINDING: DiffFindOptions::rename_threshold_reader */
/* sha: 91932cdf13c429ca4a8e3897a6ccafb8a33a35244add29a19cb093ce360455c6 */
#if BIND_DiffFindOptions_rename_threshold_FIELD_READER
/* get_rename_threshold
 *
 * Return Type: uint16_t
 */
mrb_value
mrb_Git_DiffFindOptions_get_rename_threshold(mrb_state* mrb, mrb_value self) {
  git_diff_find_options * native_self = mruby_unbox_git_diff_find_options(self);

  uint16_t native_rename_threshold = native_self->rename_threshold;

  mrb_value rename_threshold = mrb_fixnum_value(native_rename_threshold);

  return rename_threshold;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::rename_threshold_writer */
/* sha: bdc0b9abaf1d6a7b5a772124fc23da822217a33465a9a6a6a836e82e60b88e2c */
#if BIND_DiffFindOptions_rename_threshold_FIELD_WRITER
/* set_rename_threshold
 *
 * Parameters:
 * - value: uint16_t
 */
mrb_value
mrb_Git_DiffFindOptions_set_rename_threshold(mrb_state* mrb, mrb_value self) {
  git_diff_find_options * native_self = mruby_unbox_git_diff_find_options(self);
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

/* MRUBY_BINDING: DiffFindOptions::rename_from_rewrite_threshold_reader */
/* sha: b85e6dc6587ee5623c7716e816c42d529addd596d1dfc10ae4436bf4460398b2 */
#if BIND_DiffFindOptions_rename_from_rewrite_threshold_FIELD_READER
/* get_rename_from_rewrite_threshold
 *
 * Return Type: uint16_t
 */
mrb_value
mrb_Git_DiffFindOptions_get_rename_from_rewrite_threshold(mrb_state* mrb, mrb_value self) {
  git_diff_find_options * native_self = mruby_unbox_git_diff_find_options(self);

  uint16_t native_rename_from_rewrite_threshold = native_self->rename_from_rewrite_threshold;

  mrb_value rename_from_rewrite_threshold = mrb_fixnum_value(native_rename_from_rewrite_threshold);

  return rename_from_rewrite_threshold;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::rename_from_rewrite_threshold_writer */
/* sha: 8b2f1b50e17b81c6ec74147fa4af7f13affb5e55324923abccfc7656588bb837 */
#if BIND_DiffFindOptions_rename_from_rewrite_threshold_FIELD_WRITER
/* set_rename_from_rewrite_threshold
 *
 * Parameters:
 * - value: uint16_t
 */
mrb_value
mrb_Git_DiffFindOptions_set_rename_from_rewrite_threshold(mrb_state* mrb, mrb_value self) {
  git_diff_find_options * native_self = mruby_unbox_git_diff_find_options(self);
  mrb_int native_rename_from_rewrite_threshold;

  mrb_get_args(mrb, "i", &native_rename_from_rewrite_threshold);

  native_self->rename_from_rewrite_threshold = native_rename_from_rewrite_threshold;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::copy_threshold_reader */
/* sha: f44ccfd51a8136a05f4970c92105c2069d7b72d72a90ceaf92d3022358c90e97 */
#if BIND_DiffFindOptions_copy_threshold_FIELD_READER
/* get_copy_threshold
 *
 * Return Type: uint16_t
 */
mrb_value
mrb_Git_DiffFindOptions_get_copy_threshold(mrb_state* mrb, mrb_value self) {
  git_diff_find_options * native_self = mruby_unbox_git_diff_find_options(self);

  uint16_t native_copy_threshold = native_self->copy_threshold;

  mrb_value copy_threshold = mrb_fixnum_value(native_copy_threshold);

  return copy_threshold;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::copy_threshold_writer */
/* sha: efe2d1e5849a996fb06ba159bbfc75fc8b63172f3d765949fc04f7efb72e14ec */
#if BIND_DiffFindOptions_copy_threshold_FIELD_WRITER
/* set_copy_threshold
 *
 * Parameters:
 * - value: uint16_t
 */
mrb_value
mrb_Git_DiffFindOptions_set_copy_threshold(mrb_state* mrb, mrb_value self) {
  git_diff_find_options * native_self = mruby_unbox_git_diff_find_options(self);
  mrb_int native_copy_threshold;

  mrb_get_args(mrb, "i", &native_copy_threshold);

  native_self->copy_threshold = native_copy_threshold;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::break_rewrite_threshold_reader */
/* sha: 1f2949cd907deabbed955ff11cce6a14c842bbfba01ed278232d83e86637c8dc */
#if BIND_DiffFindOptions_break_rewrite_threshold_FIELD_READER
/* get_break_rewrite_threshold
 *
 * Return Type: uint16_t
 */
mrb_value
mrb_Git_DiffFindOptions_get_break_rewrite_threshold(mrb_state* mrb, mrb_value self) {
  git_diff_find_options * native_self = mruby_unbox_git_diff_find_options(self);

  uint16_t native_break_rewrite_threshold = native_self->break_rewrite_threshold;

  mrb_value break_rewrite_threshold = mrb_fixnum_value(native_break_rewrite_threshold);

  return break_rewrite_threshold;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::break_rewrite_threshold_writer */
/* sha: 376d6a17703adcab0aeaa40509791690824595b115b967817f2f08848dc84ff1 */
#if BIND_DiffFindOptions_break_rewrite_threshold_FIELD_WRITER
/* set_break_rewrite_threshold
 *
 * Parameters:
 * - value: uint16_t
 */
mrb_value
mrb_Git_DiffFindOptions_set_break_rewrite_threshold(mrb_state* mrb, mrb_value self) {
  git_diff_find_options * native_self = mruby_unbox_git_diff_find_options(self);
  mrb_int native_break_rewrite_threshold;

  mrb_get_args(mrb, "i", &native_break_rewrite_threshold);

  native_self->break_rewrite_threshold = native_break_rewrite_threshold;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::rename_limit_reader */
/* sha: c77e5fd5ebf71076788148239785907861146a4a644df1fa622019740d760d09 */
#if BIND_DiffFindOptions_rename_limit_FIELD_READER
/* get_rename_limit
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_DiffFindOptions_get_rename_limit(mrb_state* mrb, mrb_value self) {
  git_diff_find_options * native_self = mruby_unbox_git_diff_find_options(self);

  size_t native_rename_limit = native_self->rename_limit;

  mrb_value rename_limit = mrb_fixnum_value(native_rename_limit);

  return rename_limit;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::rename_limit_writer */
/* sha: 915737b8e7da442f480c67c07e62dac37ef937c605f55d64431e058ceabf30f6 */
#if BIND_DiffFindOptions_rename_limit_FIELD_WRITER
/* set_rename_limit
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_DiffFindOptions_set_rename_limit(mrb_state* mrb, mrb_value self) {
  git_diff_find_options * native_self = mruby_unbox_git_diff_find_options(self);
  mrb_int native_rename_limit;

  mrb_get_args(mrb, "i", &native_rename_limit);

  native_self->rename_limit = native_rename_limit;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::metric_reader */
/* sha: 05e60124376f8aab3b5630998951f7af679da5429ba44a4286a2bd259b374695 */
#if BIND_DiffFindOptions_metric_FIELD_READER
/* get_metric
 *
 * Return Type: git_diff_similarity_metric *
 */
mrb_value
mrb_Git_DiffFindOptions_get_metric(mrb_state* mrb, mrb_value self) {
  git_diff_find_options * native_self = mruby_unbox_git_diff_find_options(self);

  git_diff_similarity_metric * native_metric = native_self->metric;

  mrb_value metric = (native_metric == NULL ? mrb_nil_value() : mruby_box_git_diff_similarity_metric(mrb, native_metric));

  return metric;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::metric_writer */
/* sha: 8db7752bcd035056446fb28419eaeba81949c8192b7270bf67c5e82fd7b0bfe2 */
#if BIND_DiffFindOptions_metric_FIELD_WRITER
/* set_metric
 *
 * Parameters:
 * - value: git_diff_similarity_metric *
 */
mrb_value
mrb_Git_DiffFindOptions_set_metric(mrb_state* mrb, mrb_value self) {
  git_diff_find_options * native_self = mruby_unbox_git_diff_find_options(self);
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


void mrb_Git_DiffFindOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: DiffFindOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::class_definition */
/* sha: 8ce9d0c18befb1dce2b55473c109f7d74138227731db25703053b7ac3f2300a5 */
  struct RClass* DiffFindOptions_class = mrb_define_class_under(mrb, Git_module(mrb), "DiffFindOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(DiffFindOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::class_method_definitions */
/* sha: b7dd4add85553bbdf7a74a622113dc08b599b8474fab9c866aab20fd5f4b6c06 */
#if BIND_DiffFindOptions_INITIALIZE
  mrb_define_method(mrb, DiffFindOptions_class, "initialize", mrb_Git_DiffFindOptions_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, DiffFindOptions_class, "disown", mrb_Git_DiffFindOptions_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, DiffFindOptions_class, "belongs_to_ruby?", mrb_Git_DiffFindOptions_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::attr_definitions */
/* sha: 275e32d33bf927f8bfaa48a3588baf283351d644d1e4beeb92523e8afb73d065 */
  /*
   * Fields
   */
#if BIND_DiffFindOptions_version_FIELD_READER
  mrb_define_method(mrb, DiffFindOptions_class, "version", mrb_Git_DiffFindOptions_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFindOptions_version_FIELD_WRITER
  mrb_define_method(mrb, DiffFindOptions_class, "version=", mrb_Git_DiffFindOptions_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffFindOptions_flags_FIELD_READER
  mrb_define_method(mrb, DiffFindOptions_class, "flags", mrb_Git_DiffFindOptions_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFindOptions_flags_FIELD_WRITER
  mrb_define_method(mrb, DiffFindOptions_class, "flags=", mrb_Git_DiffFindOptions_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffFindOptions_rename_threshold_FIELD_READER
  mrb_define_method(mrb, DiffFindOptions_class, "rename_threshold", mrb_Git_DiffFindOptions_get_rename_threshold, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFindOptions_rename_threshold_FIELD_WRITER
  mrb_define_method(mrb, DiffFindOptions_class, "rename_threshold=", mrb_Git_DiffFindOptions_set_rename_threshold, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffFindOptions_rename_from_rewrite_threshold_FIELD_READER
  mrb_define_method(mrb, DiffFindOptions_class, "rename_from_rewrite_threshold", mrb_Git_DiffFindOptions_get_rename_from_rewrite_threshold, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFindOptions_rename_from_rewrite_threshold_FIELD_WRITER
  mrb_define_method(mrb, DiffFindOptions_class, "rename_from_rewrite_threshold=", mrb_Git_DiffFindOptions_set_rename_from_rewrite_threshold, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffFindOptions_copy_threshold_FIELD_READER
  mrb_define_method(mrb, DiffFindOptions_class, "copy_threshold", mrb_Git_DiffFindOptions_get_copy_threshold, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFindOptions_copy_threshold_FIELD_WRITER
  mrb_define_method(mrb, DiffFindOptions_class, "copy_threshold=", mrb_Git_DiffFindOptions_set_copy_threshold, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffFindOptions_break_rewrite_threshold_FIELD_READER
  mrb_define_method(mrb, DiffFindOptions_class, "break_rewrite_threshold", mrb_Git_DiffFindOptions_get_break_rewrite_threshold, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFindOptions_break_rewrite_threshold_FIELD_WRITER
  mrb_define_method(mrb, DiffFindOptions_class, "break_rewrite_threshold=", mrb_Git_DiffFindOptions_set_break_rewrite_threshold, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffFindOptions_rename_limit_FIELD_READER
  mrb_define_method(mrb, DiffFindOptions_class, "rename_limit", mrb_Git_DiffFindOptions_get_rename_limit, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFindOptions_rename_limit_FIELD_WRITER
  mrb_define_method(mrb, DiffFindOptions_class, "rename_limit=", mrb_Git_DiffFindOptions_set_rename_limit, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffFindOptions_metric_FIELD_READER
  mrb_define_method(mrb, DiffFindOptions_class, "metric", mrb_Git_DiffFindOptions_get_metric, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFindOptions_metric_FIELD_WRITER
  mrb_define_method(mrb, DiffFindOptions_class, "metric=", mrb_Git_DiffFindOptions_set_metric, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
