/*
 * git_diff_similarity_metric
 * Defined in file diff.h @ line 649
 */

#include "mruby_Git.h"

#if BIND_DiffSimilarityMetric_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: DiffSimilarityMetric::initialize */
/* sha: 2b891e9d37bd0773be4aa41625d2365ab0e0332faee13233c5871b9ca5e866f7 */
#if BIND_DiffSimilarityMetric_INITIALIZE
mrb_value
mrb_Git_DiffSimilarityMetric_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_diff_similarity_metric* native_object = (git_diff_similarity_metric*)calloc(1, sizeof(git_diff_similarity_metric));
  mruby_gift_git_diff_similarity_metric_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::disown */
/* sha: 567303f7266f42444dfe99a56bcdfc3f42cc32cb5ccf074790d96b841ed282f8 */
mrb_value
mrb_Git_DiffSimilarityMetric_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::DiffSimilarityMetric.disown only accepts objects of type Git::DiffSimilarityMetric");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::belongs_to_ruby */
/* sha: 6fb221babfae6bd6aaa116112797ff8cab3e555a10d11b9a80066fd7ec9075f6 */
mrb_value
mrb_Git_DiffSimilarityMetric_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::DiffSimilarityMetric.belongs_to_ruby only accepts objects of type Git::DiffSimilarityMetric");
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

/* MRUBY_BINDING: DiffSimilarityMetric::file_signature_reader */
/* sha: f1a6c0666e04e029aa1f0def4462043cb8a1d193d3e665abf0de498fdcc69c4b */
#if BIND_DiffSimilarityMetric_file_signature_FIELD_READER
/* get_file_signature
 *
 * Return Type: int (*)(void **, const git_diff_file *, const char *, void *)
 */
mrb_value
mrb_Git_DiffSimilarityMetric_get_file_signature(mrb_state* mrb, mrb_value self) {
  git_diff_similarity_metric * native_self = mruby_unbox_git_diff_similarity_metric(self);

  int (*)(void **, const git_diff_file *, const char *, void *) native_file_signature = native_self->file_signature;

  mrb_value file_signature = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_PTR_COMMAgit_diff_file_PTR_COMMA_const_char_PTR_COMMA_void_PTR_RPAREN(mrb, native_file_signature);

  return file_signature;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::file_signature_writer */
/* sha: 1df9e2517bdab499c68be35e5574d31a76caf2aab8c9b832a8caf0191776e8aa */
#if BIND_DiffSimilarityMetric_file_signature_FIELD_WRITER
/* set_file_signature
 *
 * Parameters:
 * - value: int (*)(void **, const git_diff_file *, const char *, void *)
 */
mrb_value
mrb_Git_DiffSimilarityMetric_set_file_signature(mrb_state* mrb, mrb_value self) {
  git_diff_similarity_metric * native_self = mruby_unbox_git_diff_similarity_metric(self);
  mrb_value file_signature;

  mrb_get_args(mrb, "o", &file_signature);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_PTR_COMMAgit_diff_file_PTR_COMMA_const_char_PTR_COMMA_void_PTR_RPAREN(file_signature);

  int (*native_file_signature)(void **, const git_diff_file *, const char *, void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_PTR_COMMAgit_diff_file_PTR_COMMA_const_char_PTR_COMMA_void_PTR_RPAREN(file_signature);

  native_self->file_signature = native_file_signature;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::buffer_signature_reader */
/* sha: 561605ff5bb747d2e6bb8065d43880d09e0d0ef9b51d307c277a5bd5ac521e59 */
#if BIND_DiffSimilarityMetric_buffer_signature_FIELD_READER
/* get_buffer_signature
 *
 * Return Type: int (*)(void **, const git_diff_file *, const char *, size_t, void *)
 */
mrb_value
mrb_Git_DiffSimilarityMetric_get_buffer_signature(mrb_state* mrb, mrb_value self) {
  git_diff_similarity_metric * native_self = mruby_unbox_git_diff_similarity_metric(self);

  int (*)(void **, const git_diff_file *, const char *, size_t, void *) native_buffer_signature = native_self->buffer_signature;

  mrb_value buffer_signature = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_PTR_COMMAgit_diff_file_PTR_COMMA_const_char_PTR_COMMA_size_tCOMMA_void_PTR_RPAREN(mrb, native_buffer_signature);

  return buffer_signature;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::buffer_signature_writer */
/* sha: 06afc11d7e875f3fad7e9638996da57a78146c83d3fbb18b0d306456bf25d1aa */
#if BIND_DiffSimilarityMetric_buffer_signature_FIELD_WRITER
/* set_buffer_signature
 *
 * Parameters:
 * - value: int (*)(void **, const git_diff_file *, const char *, size_t, void *)
 */
mrb_value
mrb_Git_DiffSimilarityMetric_set_buffer_signature(mrb_state* mrb, mrb_value self) {
  git_diff_similarity_metric * native_self = mruby_unbox_git_diff_similarity_metric(self);
  mrb_value buffer_signature;

  mrb_get_args(mrb, "o", &buffer_signature);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_PTR_COMMAgit_diff_file_PTR_COMMA_const_char_PTR_COMMA_size_tCOMMA_void_PTR_RPAREN(buffer_signature);

  int (*native_buffer_signature)(void **, const git_diff_file *, const char *, size_t, void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_void_PTR_PTR_COMMAgit_diff_file_PTR_COMMA_const_char_PTR_COMMA_size_tCOMMA_void_PTR_RPAREN(buffer_signature);

  native_self->buffer_signature = native_buffer_signature;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::free_signature_reader */
/* sha: 4671d693572620a23009759dbd31376698cb60cb360c4c1b26cff9ab281d5671 */
#if BIND_DiffSimilarityMetric_free_signature_FIELD_READER
/* get_free_signature
 *
 * Return Type: void (*)(void *, void *)
 */
mrb_value
mrb_Git_DiffSimilarityMetric_get_free_signature(mrb_state* mrb, mrb_value self) {
  git_diff_similarity_metric * native_self = mruby_unbox_git_diff_similarity_metric(self);

  void (*)(void *, void *) native_free_signature = native_self->free_signature;

  mrb_value free_signature = TODO_mruby_box_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_void_PTR_RPAREN(mrb, native_free_signature);

  return free_signature;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::free_signature_writer */
/* sha: 4644d9eb6e336680962d3988a34c9413a3b44494a589e50d6afb8a65b741bc99 */
#if BIND_DiffSimilarityMetric_free_signature_FIELD_WRITER
/* set_free_signature
 *
 * Parameters:
 * - value: void (*)(void *, void *)
 */
mrb_value
mrb_Git_DiffSimilarityMetric_set_free_signature(mrb_state* mrb, mrb_value self) {
  git_diff_similarity_metric * native_self = mruby_unbox_git_diff_similarity_metric(self);
  mrb_value free_signature;

  mrb_get_args(mrb, "o", &free_signature);

  /* type checking */
  TODO_type_check_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_void_PTR_RPAREN(free_signature);

  void (*native_free_signature)(void *, void *) = TODO_mruby_unbox_void_LPAREN_PTR_RPAREN_LPAREN_void_PTR_COMMA_void_PTR_RPAREN(free_signature);

  native_self->free_signature = native_free_signature;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::similarity_reader */
/* sha: 082ccae309a8b932cbffafff8548269a722d5f1c9a1d75fe459c726eee3527ad */
#if BIND_DiffSimilarityMetric_similarity_FIELD_READER
/* get_similarity
 *
 * Return Type: int (*)(int *, void *, void *, void *)
 */
mrb_value
mrb_Git_DiffSimilarityMetric_get_similarity(mrb_state* mrb, mrb_value self) {
  git_diff_similarity_metric * native_self = mruby_unbox_git_diff_similarity_metric(self);

  int (*)(int *, void *, void *, void *) native_similarity = native_self->similarity;

  mrb_value similarity = TODO_mruby_box_int_LPAREN_PTR_RPAREN_LPAREN_int_PTR_COMMA_void_PTR_COMMA_void_PTR_COMMA_void_PTR_RPAREN(mrb, native_similarity);

  return similarity;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::similarity_writer */
/* sha: f7c0949a4d3eb2691119cdbd8edd9847b0ae7df2907975768fb6fcdfd705813b */
#if BIND_DiffSimilarityMetric_similarity_FIELD_WRITER
/* set_similarity
 *
 * Parameters:
 * - value: int (*)(int *, void *, void *, void *)
 */
mrb_value
mrb_Git_DiffSimilarityMetric_set_similarity(mrb_state* mrb, mrb_value self) {
  git_diff_similarity_metric * native_self = mruby_unbox_git_diff_similarity_metric(self);
  mrb_value similarity;

  mrb_get_args(mrb, "o", &similarity);

  /* type checking */
  TODO_type_check_int_LPAREN_PTR_RPAREN_LPAREN_int_PTR_COMMA_void_PTR_COMMA_void_PTR_COMMA_void_PTR_RPAREN(similarity);

  int (*native_similarity)(int *, void *, void *, void *) = TODO_mruby_unbox_int_LPAREN_PTR_RPAREN_LPAREN_int_PTR_COMMA_void_PTR_COMMA_void_PTR_COMMA_void_PTR_RPAREN(similarity);

  native_self->similarity = native_similarity;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::payload_reader */
/* sha: 9c7c72ddddd1d3e664d5ea0c94ccb0b48dc7a2027a9130b1e2db4c3b6415d967 */
#if BIND_DiffSimilarityMetric_payload_FIELD_READER
/* get_payload
 *
 * Return Type: void *
 */
mrb_value
mrb_Git_DiffSimilarityMetric_get_payload(mrb_state* mrb, mrb_value self) {
  git_diff_similarity_metric * native_self = mruby_unbox_git_diff_similarity_metric(self);

  void * native_payload = native_self->payload;

  mrb_value payload = TODO_mruby_box_void_PTR(mrb, native_payload);

  return payload;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::payload_writer */
/* sha: 386b07e2055f373fe32f4b6924006ab40ba4b6848b6e01fb93b353b48df2cc72 */
#if BIND_DiffSimilarityMetric_payload_FIELD_WRITER
/* set_payload
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_Git_DiffSimilarityMetric_set_payload(mrb_state* mrb, mrb_value self) {
  git_diff_similarity_metric * native_self = mruby_unbox_git_diff_similarity_metric(self);
  mrb_value payload;

  mrb_get_args(mrb, "o", &payload);

  /* type checking */
  TODO_type_check_void_PTR(payload);

  void * native_payload = TODO_mruby_unbox_void_PTR(payload);

  native_self->payload = native_payload;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_DiffSimilarityMetric_init(mrb_state* mrb) {
/* MRUBY_BINDING: DiffSimilarityMetric::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::class_definition */
/* sha: f21f635679b7e29f5506e3e7e3282a39be9ea1972ad3a21b9b803e8fa1f01b89 */
  struct RClass* DiffSimilarityMetric_class = mrb_define_class_under(mrb, Git_module(mrb), "DiffSimilarityMetric", mrb->object_class);
  MRB_SET_INSTANCE_TT(DiffSimilarityMetric_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::class_method_definitions */
/* sha: 9c75163260393d0f227538b30cb4d85cf7b4cbee6b7b09954f61227d3a843cb0 */
#if BIND_DiffSimilarityMetric_INITIALIZE
  mrb_define_method(mrb, DiffSimilarityMetric_class, "initialize", mrb_Git_DiffSimilarityMetric_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, DiffSimilarityMetric_class, "disown", mrb_Git_DiffSimilarityMetric_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, DiffSimilarityMetric_class, "belongs_to_ruby?", mrb_Git_DiffSimilarityMetric_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::attr_definitions */
/* sha: 74d2c4b26eb860be5165f10040ea23ecf284f54c2a25438232213f841b4064af */
  /*
   * Fields
   */
#if BIND_DiffSimilarityMetric_file_signature_FIELD_READER
  mrb_define_method(mrb, DiffSimilarityMetric_class, "file_signature", mrb_Git_DiffSimilarityMetric_get_file_signature, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffSimilarityMetric_file_signature_FIELD_WRITER
  mrb_define_method(mrb, DiffSimilarityMetric_class, "file_signature=", mrb_Git_DiffSimilarityMetric_set_file_signature, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffSimilarityMetric_buffer_signature_FIELD_READER
  mrb_define_method(mrb, DiffSimilarityMetric_class, "buffer_signature", mrb_Git_DiffSimilarityMetric_get_buffer_signature, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffSimilarityMetric_buffer_signature_FIELD_WRITER
  mrb_define_method(mrb, DiffSimilarityMetric_class, "buffer_signature=", mrb_Git_DiffSimilarityMetric_set_buffer_signature, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffSimilarityMetric_free_signature_FIELD_READER
  mrb_define_method(mrb, DiffSimilarityMetric_class, "free_signature", mrb_Git_DiffSimilarityMetric_get_free_signature, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffSimilarityMetric_free_signature_FIELD_WRITER
  mrb_define_method(mrb, DiffSimilarityMetric_class, "free_signature=", mrb_Git_DiffSimilarityMetric_set_free_signature, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffSimilarityMetric_similarity_FIELD_READER
  mrb_define_method(mrb, DiffSimilarityMetric_class, "similarity", mrb_Git_DiffSimilarityMetric_get_similarity, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffSimilarityMetric_similarity_FIELD_WRITER
  mrb_define_method(mrb, DiffSimilarityMetric_class, "similarity=", mrb_Git_DiffSimilarityMetric_set_similarity, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffSimilarityMetric_payload_FIELD_READER
  mrb_define_method(mrb, DiffSimilarityMetric_class, "payload", mrb_Git_DiffSimilarityMetric_get_payload, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffSimilarityMetric_payload_FIELD_WRITER
  mrb_define_method(mrb, DiffSimilarityMetric_class, "payload=", mrb_Git_DiffSimilarityMetric_set_payload, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
