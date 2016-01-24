/*
 * git_describe_options
 * Defined in file describe.h @ line 44
 */

#include "mruby_Git.h"

#if BIND_DescribeOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: DescribeOptions::initialize */
/* sha: 14fe666162d3b27f41037f6409b6c4b3b8ffd3e0beeaca6334867cb4fab0d71a */
#if BIND_DescribeOptions_INITIALIZE
mrb_value
mrb_Git_DescribeOptions_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_describe_options* native_object = (git_describe_options*)calloc(1, sizeof(git_describe_options));
  mruby_gift_git_describe_options_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::disown */
/* sha: c031ee9339e0f721e8a04a9e08daabd3c27cbde7bd0c7b2f44fcccab1b24343f */
mrb_value
mrb_Git_DescribeOptions_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::DescribeOptions.disown only accepts objects of type Git::DescribeOptions");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::belongs_to_ruby */
/* sha: cd377813fc3f0c24df2117dd287dfdc9f4d11df7e7ae12b1975c25d0bd29e4b5 */
mrb_value
mrb_Git_DescribeOptions_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::DescribeOptions.belongs_to_ruby only accepts objects of type Git::DescribeOptions");
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

/* MRUBY_BINDING: DescribeOptions::version_reader */
/* sha: f8eae9e5434785d2d4ae64e1e55faa2a876463df8368b9ba25c1551c986ec316 */
#if BIND_DescribeOptions_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_DescribeOptions_get_version(mrb_state* mrb, mrb_value self) {
  git_describe_options * native_self = mruby_unbox_git_describe_options(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::version_writer */
/* sha: ebf6bd44ccc85b20fd05e886e4e32aa49eb5e580ff5b8e02e7fcbf5bffaf36d3 */
#if BIND_DescribeOptions_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_DescribeOptions_set_version(mrb_state* mrb, mrb_value self) {
  git_describe_options * native_self = mruby_unbox_git_describe_options(self);
  mrb_int native_version;

  mrb_get_args(mrb, "i", &native_version);

  native_self->version = native_version;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::max_candidates_tags_reader */
/* sha: 57f043452f3eab652598ac26dd79c6ba0ff6383dfce961ea573074350d5536a6 */
#if BIND_DescribeOptions_max_candidates_tags_FIELD_READER
/* get_max_candidates_tags
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_DescribeOptions_get_max_candidates_tags(mrb_state* mrb, mrb_value self) {
  git_describe_options * native_self = mruby_unbox_git_describe_options(self);

  unsigned int native_max_candidates_tags = native_self->max_candidates_tags;

  mrb_value max_candidates_tags = mrb_fixnum_value(native_max_candidates_tags);

  return max_candidates_tags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::max_candidates_tags_writer */
/* sha: ef4c11c22fe154a4814c994ab885514b49cc50787081d7096c66cdb4e049572f */
#if BIND_DescribeOptions_max_candidates_tags_FIELD_WRITER
/* set_max_candidates_tags
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_DescribeOptions_set_max_candidates_tags(mrb_state* mrb, mrb_value self) {
  git_describe_options * native_self = mruby_unbox_git_describe_options(self);
  mrb_int native_max_candidates_tags;

  mrb_get_args(mrb, "i", &native_max_candidates_tags);

  native_self->max_candidates_tags = native_max_candidates_tags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::describe_strategy_reader */
/* sha: 3fe1f9005a1221402677c489f17705c989a63b62353ae559208d3d6f9f36578f */
#if BIND_DescribeOptions_describe_strategy_FIELD_READER
/* get_describe_strategy
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_DescribeOptions_get_describe_strategy(mrb_state* mrb, mrb_value self) {
  git_describe_options * native_self = mruby_unbox_git_describe_options(self);

  unsigned int native_describe_strategy = native_self->describe_strategy;

  mrb_value describe_strategy = mrb_fixnum_value(native_describe_strategy);

  return describe_strategy;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::describe_strategy_writer */
/* sha: 31c1683a4218998e398d85945e1549d650f2063904e011a0084cb0b35f08f981 */
#if BIND_DescribeOptions_describe_strategy_FIELD_WRITER
/* set_describe_strategy
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_DescribeOptions_set_describe_strategy(mrb_state* mrb, mrb_value self) {
  git_describe_options * native_self = mruby_unbox_git_describe_options(self);
  mrb_int native_describe_strategy;

  mrb_get_args(mrb, "i", &native_describe_strategy);

  native_self->describe_strategy = native_describe_strategy;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::pattern_reader */
/* sha: af588bba343af091710da30939d4ccead746d5f543ab59f6e78eb964c7f5409a */
#if BIND_DescribeOptions_pattern_FIELD_READER
/* get_pattern
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_DescribeOptions_get_pattern(mrb_state* mrb, mrb_value self) {
  git_describe_options * native_self = mruby_unbox_git_describe_options(self);

  const char * native_pattern = native_self->pattern;

  mrb_value pattern = native_pattern == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_pattern);

  return pattern;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::pattern_writer */
/* sha: cca1565cbc4e09eb410eeaeae3af8e922e9e4860ad4af3b3965f143e739c5dd7 */
#if BIND_DescribeOptions_pattern_FIELD_WRITER
/* set_pattern
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_DescribeOptions_set_pattern(mrb_state* mrb, mrb_value self) {
  git_describe_options * native_self = mruby_unbox_git_describe_options(self);
  char * native_pattern = NULL;

  mrb_get_args(mrb, "z", &native_pattern);

  native_self->pattern = native_pattern;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::only_follow_first_parent_reader */
/* sha: 99d96ac59d5ebc5068f83fe4cb44af5c0f3208e06ea7f412a034b03d2c49788f */
#if BIND_DescribeOptions_only_follow_first_parent_FIELD_READER
/* get_only_follow_first_parent
 *
 * Return Type: int
 */
mrb_value
mrb_Git_DescribeOptions_get_only_follow_first_parent(mrb_state* mrb, mrb_value self) {
  git_describe_options * native_self = mruby_unbox_git_describe_options(self);

  int native_only_follow_first_parent = native_self->only_follow_first_parent;

  mrb_value only_follow_first_parent = mrb_fixnum_value(native_only_follow_first_parent);

  return only_follow_first_parent;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::only_follow_first_parent_writer */
/* sha: 3b8bc2e6f1a385bb465c0edfc13e9757fe38bc84cb45fa43f00665c97415d416 */
#if BIND_DescribeOptions_only_follow_first_parent_FIELD_WRITER
/* set_only_follow_first_parent
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_DescribeOptions_set_only_follow_first_parent(mrb_state* mrb, mrb_value self) {
  git_describe_options * native_self = mruby_unbox_git_describe_options(self);
  mrb_int native_only_follow_first_parent;

  mrb_get_args(mrb, "i", &native_only_follow_first_parent);

  native_self->only_follow_first_parent = native_only_follow_first_parent;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::show_commit_oid_as_fallback_reader */
/* sha: 6f5a9a606d96ae213ad301d12359308d5bb17dbb81774d22107c0824d72f0bcc */
#if BIND_DescribeOptions_show_commit_oid_as_fallback_FIELD_READER
/* get_show_commit_oid_as_fallback
 *
 * Return Type: int
 */
mrb_value
mrb_Git_DescribeOptions_get_show_commit_oid_as_fallback(mrb_state* mrb, mrb_value self) {
  git_describe_options * native_self = mruby_unbox_git_describe_options(self);

  int native_show_commit_oid_as_fallback = native_self->show_commit_oid_as_fallback;

  mrb_value show_commit_oid_as_fallback = mrb_fixnum_value(native_show_commit_oid_as_fallback);

  return show_commit_oid_as_fallback;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::show_commit_oid_as_fallback_writer */
/* sha: b50b25b0584f6b50e699ad6865a28292421f90181dc17d7cd64822ecdf3ef25f */
#if BIND_DescribeOptions_show_commit_oid_as_fallback_FIELD_WRITER
/* set_show_commit_oid_as_fallback
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_DescribeOptions_set_show_commit_oid_as_fallback(mrb_state* mrb, mrb_value self) {
  git_describe_options * native_self = mruby_unbox_git_describe_options(self);
  mrb_int native_show_commit_oid_as_fallback;

  mrb_get_args(mrb, "i", &native_show_commit_oid_as_fallback);

  native_self->show_commit_oid_as_fallback = native_show_commit_oid_as_fallback;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_DescribeOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: DescribeOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::class_definition */
/* sha: 7a135ecc402032515449d8326e7277182d4cdc9dd06e8ade6e9959021c57f521 */
  struct RClass* DescribeOptions_class = mrb_define_class_under(mrb, Git_module(mrb), "DescribeOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(DescribeOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::class_method_definitions */
/* sha: f294722afb53496c28ef74c499679545fb3ba94ecd56c5ecce1961590aaa9cf6 */
#if BIND_DescribeOptions_INITIALIZE
  mrb_define_method(mrb, DescribeOptions_class, "initialize", mrb_Git_DescribeOptions_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, DescribeOptions_class, "disown", mrb_Git_DescribeOptions_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, DescribeOptions_class, "belongs_to_ruby?", mrb_Git_DescribeOptions_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::attr_definitions */
/* sha: c54737273355dd6f4dd823ac65e3f4ce1c7aeee6c0f828847170bc0a1846da1c */
  /*
   * Fields
   */
#if BIND_DescribeOptions_version_FIELD_READER
  mrb_define_method(mrb, DescribeOptions_class, "version", mrb_Git_DescribeOptions_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DescribeOptions_version_FIELD_WRITER
  mrb_define_method(mrb, DescribeOptions_class, "version=", mrb_Git_DescribeOptions_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DescribeOptions_max_candidates_tags_FIELD_READER
  mrb_define_method(mrb, DescribeOptions_class, "max_candidates_tags", mrb_Git_DescribeOptions_get_max_candidates_tags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DescribeOptions_max_candidates_tags_FIELD_WRITER
  mrb_define_method(mrb, DescribeOptions_class, "max_candidates_tags=", mrb_Git_DescribeOptions_set_max_candidates_tags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DescribeOptions_describe_strategy_FIELD_READER
  mrb_define_method(mrb, DescribeOptions_class, "describe_strategy", mrb_Git_DescribeOptions_get_describe_strategy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DescribeOptions_describe_strategy_FIELD_WRITER
  mrb_define_method(mrb, DescribeOptions_class, "describe_strategy=", mrb_Git_DescribeOptions_set_describe_strategy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DescribeOptions_pattern_FIELD_READER
  mrb_define_method(mrb, DescribeOptions_class, "pattern", mrb_Git_DescribeOptions_get_pattern, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DescribeOptions_pattern_FIELD_WRITER
  mrb_define_method(mrb, DescribeOptions_class, "pattern=", mrb_Git_DescribeOptions_set_pattern, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DescribeOptions_only_follow_first_parent_FIELD_READER
  mrb_define_method(mrb, DescribeOptions_class, "only_follow_first_parent", mrb_Git_DescribeOptions_get_only_follow_first_parent, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DescribeOptions_only_follow_first_parent_FIELD_WRITER
  mrb_define_method(mrb, DescribeOptions_class, "only_follow_first_parent=", mrb_Git_DescribeOptions_set_only_follow_first_parent, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DescribeOptions_show_commit_oid_as_fallback_FIELD_READER
  mrb_define_method(mrb, DescribeOptions_class, "show_commit_oid_as_fallback", mrb_Git_DescribeOptions_get_show_commit_oid_as_fallback, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DescribeOptions_show_commit_oid_as_fallback_FIELD_WRITER
  mrb_define_method(mrb, DescribeOptions_class, "show_commit_oid_as_fallback=", mrb_Git_DescribeOptions_set_show_commit_oid_as_fallback, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
