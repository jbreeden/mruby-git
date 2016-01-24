/*
 * git_diff_options
 * Defined in file diff.h @ line 396
 */

#include "mruby_Git.h"

#if BIND_DiffOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: DiffOptions::initialize */
/* sha: 6444d208fe57ee3ce092b6c0542423b366bff8b469129bcea915255e8322e104 */
#if BIND_DiffOptions_INITIALIZE
mrb_value
mrb_Git_DiffOptions_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_diff_options* native_object = (git_diff_options*)calloc(1, sizeof(git_diff_options));
  mruby_gift_git_diff_options_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::disown */
/* sha: a67cfcdd937ec2322133564d6479f433570f7f3eef6a827340986958f41b0107 */
mrb_value
mrb_Git_DiffOptions_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::DiffOptions.disown only accepts objects of type Git::DiffOptions");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::belongs_to_ruby */
/* sha: 16ac0dfe16c63901261c82d473f5210424d4754eaec3e059196c38f8cf59f1ef */
mrb_value
mrb_Git_DiffOptions_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::DiffOptions.belongs_to_ruby only accepts objects of type Git::DiffOptions");
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

/* MRUBY_BINDING: DiffOptions::version_reader */
/* sha: 73575174b403bd90bd60dc33907d7a8b0e844e716c6bff7e1c46ff148f8a29f5 */
#if BIND_DiffOptions_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_DiffOptions_get_version(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::version_writer */
/* sha: 0586183d7cc52beb802bdfb29c59212e560b0426e734acbfdef06e38527ae7a8 */
#if BIND_DiffOptions_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_DiffOptions_set_version(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);
  mrb_int native_version;

  mrb_get_args(mrb, "i", &native_version);

  native_self->version = native_version;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::flags_reader */
/* sha: 47bdc6bab1dfd7a77ec348d4befa7433416b0ed246458470ece43fd478aa60d6 */
#if BIND_DiffOptions_flags_FIELD_READER
/* get_flags
 *
 * Return Type: uint32_t
 */
mrb_value
mrb_Git_DiffOptions_get_flags(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);

  uint32_t native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::flags_writer */
/* sha: e503027a53e7de103d1f29f2342f1568858d8a58f37822fb00f8423d6aa2ae66 */
#if BIND_DiffOptions_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: uint32_t
 */
mrb_value
mrb_Git_DiffOptions_set_flags(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);
  mrb_int native_flags;

  mrb_get_args(mrb, "i", &native_flags);

  native_self->flags = native_flags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::ignore_submodules_reader */
/* sha: d14b1ab492726eb76ecf4c669034e36bfd704d9946570d5e158652ea2013814d */
#if BIND_DiffOptions_ignore_submodules_FIELD_READER
/* get_ignore_submodules
 *
 * Return Type: git_submodule_ignore_t
 */
mrb_value
mrb_Git_DiffOptions_get_ignore_submodules(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);

  git_submodule_ignore_t native_ignore_submodules = native_self->ignore_submodules;

  mrb_value ignore_submodules = mrb_fixnum_value(native_ignore_submodules);

  return ignore_submodules;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::ignore_submodules_writer */
/* sha: 090b6556998b4adfd91fa7bdde7ddc65c3b7b95318f903a32518ee5600d14af2 */
#if BIND_DiffOptions_ignore_submodules_FIELD_WRITER
/* set_ignore_submodules
 *
 * Parameters:
 * - value: git_submodule_ignore_t
 */
mrb_value
mrb_Git_DiffOptions_set_ignore_submodules(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);
  mrb_int native_ignore_submodules;

  mrb_get_args(mrb, "i", &native_ignore_submodules);

  native_self->ignore_submodules = native_ignore_submodules;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::pathspec_reader */
/* sha: acb8fc77e8e77f1cfea8cc306516ac82139a576918b1d967efcd842ea5b5c79d */
#if BIND_DiffOptions_pathspec_FIELD_READER
/* get_pathspec
 *
 * Return Type: git_strarray
 */
mrb_value
mrb_Git_DiffOptions_get_pathspec(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);

  git_strarray native_pathspec = native_self->pathspec;

  git_strarray* new_pathspec = TODO_move_git_strarray_to_heap(native_pathspec);
  mrb_value pathspec = mruby_box_git_strarray(mrb, &native_pathspec);

  return pathspec;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::pathspec_writer */
/* sha: b22d91e28f4bc198bec938d14b3991773f6a5e13a8fdc2539417183b668e1873 */
#if BIND_DiffOptions_pathspec_FIELD_WRITER
/* set_pathspec
 *
 * Parameters:
 * - value: git_strarray
 */
mrb_value
mrb_Git_DiffOptions_set_pathspec(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);
  mrb_value pathspec;

  mrb_get_args(mrb, "o", &pathspec);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, pathspec, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }

  git_strarray native_pathspec = *(mruby_unbox_git_strarray(pathspec));

  native_self->pathspec = native_pathspec;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::notify_cb_reader */
/* sha: 0a07623253045375d663a30ea76c65c1b49e2749f5670ec99718679cb778a891 */
#if BIND_DiffOptions_notify_cb_FIELD_READER
/* get_notify_cb
 *
 * Return Type: git_diff_notify_cb
 */
mrb_value
mrb_Git_DiffOptions_get_notify_cb(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);

  git_diff_notify_cb native_notify_cb = native_self->notify_cb;

  mrb_value notify_cb = TODO_mruby_box_git_diff_notify_cb(mrb, native_notify_cb);

  return notify_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::notify_cb_writer */
/* sha: bcf488b907491f6a1a0ef8e064c3edd0ae0a69252c65039b8d711e854c5ef6b0 */
#if BIND_DiffOptions_notify_cb_FIELD_WRITER
/* set_notify_cb
 *
 * Parameters:
 * - value: git_diff_notify_cb
 */
mrb_value
mrb_Git_DiffOptions_set_notify_cb(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);
  mrb_value notify_cb;

  mrb_get_args(mrb, "o", &notify_cb);

  /* type checking */
  TODO_type_check_git_diff_notify_cb(notify_cb);

  git_diff_notify_cb native_notify_cb = TODO_mruby_unbox_git_diff_notify_cb(notify_cb);

  native_self->notify_cb = native_notify_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::progress_cb_reader */
/* sha: 26e7528c1b110142f2db9d6ca4fff232df625456d1aa9203732d3e832cf10283 */
#if BIND_DiffOptions_progress_cb_FIELD_READER
/* get_progress_cb
 *
 * Return Type: git_diff_progress_cb
 */
mrb_value
mrb_Git_DiffOptions_get_progress_cb(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);

  git_diff_progress_cb native_progress_cb = native_self->progress_cb;

  mrb_value progress_cb = TODO_mruby_box_git_diff_progress_cb(mrb, native_progress_cb);

  return progress_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::progress_cb_writer */
/* sha: dcb6872a1c5ae91a243597dec2082ae8100bcc7807133d952978faa33e6ec9c6 */
#if BIND_DiffOptions_progress_cb_FIELD_WRITER
/* set_progress_cb
 *
 * Parameters:
 * - value: git_diff_progress_cb
 */
mrb_value
mrb_Git_DiffOptions_set_progress_cb(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);
  mrb_value progress_cb;

  mrb_get_args(mrb, "o", &progress_cb);

  /* type checking */
  TODO_type_check_git_diff_progress_cb(progress_cb);

  git_diff_progress_cb native_progress_cb = TODO_mruby_unbox_git_diff_progress_cb(progress_cb);

  native_self->progress_cb = native_progress_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::payload_reader */
/* sha: aa95f4a63d4aea373981973b6285ac44f8247f9c3fafa286e24c64f9fa3e5a59 */
#if BIND_DiffOptions_payload_FIELD_READER
/* get_payload
 *
 * Return Type: void *
 */
mrb_value
mrb_Git_DiffOptions_get_payload(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);

  void * native_payload = native_self->payload;

  mrb_value payload = TODO_mruby_box_void_PTR(mrb, native_payload);

  return payload;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::payload_writer */
/* sha: 160369399d3ce6d20c10e121cff94b5cab6b0f2b0c1ab96d3a2031873fac51e2 */
#if BIND_DiffOptions_payload_FIELD_WRITER
/* set_payload
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_Git_DiffOptions_set_payload(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);
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

/* MRUBY_BINDING: DiffOptions::context_lines_reader */
/* sha: 5f4698ded8e06f478998f6d60eab138d6171303ae87798aacb5920f991d89567 */
#if BIND_DiffOptions_context_lines_FIELD_READER
/* get_context_lines
 *
 * Return Type: uint32_t
 */
mrb_value
mrb_Git_DiffOptions_get_context_lines(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);

  uint32_t native_context_lines = native_self->context_lines;

  mrb_value context_lines = mrb_fixnum_value(native_context_lines);

  return context_lines;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::context_lines_writer */
/* sha: e63cc670c16e88206668723c2d098f8568754c09003f4e43b10daca716f1ef0b */
#if BIND_DiffOptions_context_lines_FIELD_WRITER
/* set_context_lines
 *
 * Parameters:
 * - value: uint32_t
 */
mrb_value
mrb_Git_DiffOptions_set_context_lines(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);
  mrb_int native_context_lines;

  mrb_get_args(mrb, "i", &native_context_lines);

  native_self->context_lines = native_context_lines;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::interhunk_lines_reader */
/* sha: 77e19820aa6c666b269ac20054f50e2ee581050965a306e462d251b8378cef51 */
#if BIND_DiffOptions_interhunk_lines_FIELD_READER
/* get_interhunk_lines
 *
 * Return Type: uint32_t
 */
mrb_value
mrb_Git_DiffOptions_get_interhunk_lines(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);

  uint32_t native_interhunk_lines = native_self->interhunk_lines;

  mrb_value interhunk_lines = mrb_fixnum_value(native_interhunk_lines);

  return interhunk_lines;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::interhunk_lines_writer */
/* sha: 40d790b10f5d9dca1390236a5952806b9d645056a97b229327265583c5dcb0c4 */
#if BIND_DiffOptions_interhunk_lines_FIELD_WRITER
/* set_interhunk_lines
 *
 * Parameters:
 * - value: uint32_t
 */
mrb_value
mrb_Git_DiffOptions_set_interhunk_lines(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);
  mrb_int native_interhunk_lines;

  mrb_get_args(mrb, "i", &native_interhunk_lines);

  native_self->interhunk_lines = native_interhunk_lines;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::id_abbrev_reader */
/* sha: c50ebae40820b4041de00a6f565b74e55c11df67f2a43299c7bf5d7291b81177 */
#if BIND_DiffOptions_id_abbrev_FIELD_READER
/* get_id_abbrev
 *
 * Return Type: uint16_t
 */
mrb_value
mrb_Git_DiffOptions_get_id_abbrev(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);

  uint16_t native_id_abbrev = native_self->id_abbrev;

  mrb_value id_abbrev = mrb_fixnum_value(native_id_abbrev);

  return id_abbrev;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::id_abbrev_writer */
/* sha: 859a8bc7a38d3ef5cdd18bfcb1069bf3eb5d4d73e162d892f3638f9a92381fbd */
#if BIND_DiffOptions_id_abbrev_FIELD_WRITER
/* set_id_abbrev
 *
 * Parameters:
 * - value: uint16_t
 */
mrb_value
mrb_Git_DiffOptions_set_id_abbrev(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);
  mrb_int native_id_abbrev;

  mrb_get_args(mrb, "i", &native_id_abbrev);

  native_self->id_abbrev = native_id_abbrev;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::max_size_reader */
/* sha: 8b9f86458eb1d290070a6fa76c9fb402c18df160485ef2293a6a80890f2d5e73 */
#if BIND_DiffOptions_max_size_FIELD_READER
/* get_max_size
 *
 * Return Type: git_off_t
 */
mrb_value
mrb_Git_DiffOptions_get_max_size(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);

  git_off_t native_max_size = native_self->max_size;

  mrb_value max_size = mrb_fixnum_value(native_max_size);

  return max_size;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::max_size_writer */
/* sha: b1b642d75a29685ea96ffae4bf36501d39aada6f031fbf1012ce8b6e9606f310 */
#if BIND_DiffOptions_max_size_FIELD_WRITER
/* set_max_size
 *
 * Parameters:
 * - value: git_off_t
 */
mrb_value
mrb_Git_DiffOptions_set_max_size(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);
  mrb_int native_max_size;

  mrb_get_args(mrb, "i", &native_max_size);

  native_self->max_size = native_max_size;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::old_prefix_reader */
/* sha: 8e9cc44a4a1a594db6e8e8990fdcaf223ef17b06cf71e3e33373e66b07a5ee77 */
#if BIND_DiffOptions_old_prefix_FIELD_READER
/* get_old_prefix
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_DiffOptions_get_old_prefix(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);

  const char * native_old_prefix = native_self->old_prefix;

  mrb_value old_prefix = native_old_prefix == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_old_prefix);

  return old_prefix;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::old_prefix_writer */
/* sha: c65f441902b07aa0a018f2b1a0ad996260a77ae957898199c996382270d312bc */
#if BIND_DiffOptions_old_prefix_FIELD_WRITER
/* set_old_prefix
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_DiffOptions_set_old_prefix(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);
  char * native_old_prefix = NULL;

  mrb_get_args(mrb, "z", &native_old_prefix);

  native_self->old_prefix = native_old_prefix;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::new_prefix_reader */
/* sha: 003581623b5b4b8ba27f88bc183b06668e0fb8e0f2d56baf5750fc25f8f617e7 */
#if BIND_DiffOptions_new_prefix_FIELD_READER
/* get_new_prefix
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_DiffOptions_get_new_prefix(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);

  const char * native_new_prefix = native_self->new_prefix;

  mrb_value new_prefix = native_new_prefix == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_new_prefix);

  return new_prefix;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::new_prefix_writer */
/* sha: 9fbfcc70a6acab94cb8c3959c7058daa2c2d9ddd85ffa117cf1f97241c0d4650 */
#if BIND_DiffOptions_new_prefix_FIELD_WRITER
/* set_new_prefix
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_DiffOptions_set_new_prefix(mrb_state* mrb, mrb_value self) {
  git_diff_options * native_self = mruby_unbox_git_diff_options(self);
  char * native_new_prefix = NULL;

  mrb_get_args(mrb, "z", &native_new_prefix);

  native_self->new_prefix = native_new_prefix;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_DiffOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: DiffOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::class_definition */
/* sha: 3a8e59fefe5080f84638706821bd4a5286a04d1e8998d0a13e7c58495732adec */
  struct RClass* DiffOptions_class = mrb_define_class_under(mrb, Git_module(mrb), "DiffOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(DiffOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::class_method_definitions */
/* sha: 070b20e9a73c20b4be491bce262c8534a305dac184a41d19bfedace4692f943e */
#if BIND_DiffOptions_INITIALIZE
  mrb_define_method(mrb, DiffOptions_class, "initialize", mrb_Git_DiffOptions_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, DiffOptions_class, "disown", mrb_Git_DiffOptions_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, DiffOptions_class, "belongs_to_ruby?", mrb_Git_DiffOptions_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::attr_definitions */
/* sha: 1c91c40c0b563560026ba43ac0d49f515fde03a195249744209f6868e11a8130 */
  /*
   * Fields
   */
#if BIND_DiffOptions_version_FIELD_READER
  mrb_define_method(mrb, DiffOptions_class, "version", mrb_Git_DiffOptions_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffOptions_version_FIELD_WRITER
  mrb_define_method(mrb, DiffOptions_class, "version=", mrb_Git_DiffOptions_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffOptions_flags_FIELD_READER
  mrb_define_method(mrb, DiffOptions_class, "flags", mrb_Git_DiffOptions_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffOptions_flags_FIELD_WRITER
  mrb_define_method(mrb, DiffOptions_class, "flags=", mrb_Git_DiffOptions_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffOptions_ignore_submodules_FIELD_READER
  mrb_define_method(mrb, DiffOptions_class, "ignore_submodules", mrb_Git_DiffOptions_get_ignore_submodules, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffOptions_ignore_submodules_FIELD_WRITER
  mrb_define_method(mrb, DiffOptions_class, "ignore_submodules=", mrb_Git_DiffOptions_set_ignore_submodules, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffOptions_pathspec_FIELD_READER
  mrb_define_method(mrb, DiffOptions_class, "pathspec", mrb_Git_DiffOptions_get_pathspec, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffOptions_pathspec_FIELD_WRITER
  mrb_define_method(mrb, DiffOptions_class, "pathspec=", mrb_Git_DiffOptions_set_pathspec, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffOptions_notify_cb_FIELD_READER
  mrb_define_method(mrb, DiffOptions_class, "notify_cb", mrb_Git_DiffOptions_get_notify_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffOptions_notify_cb_FIELD_WRITER
  mrb_define_method(mrb, DiffOptions_class, "notify_cb=", mrb_Git_DiffOptions_set_notify_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffOptions_progress_cb_FIELD_READER
  mrb_define_method(mrb, DiffOptions_class, "progress_cb", mrb_Git_DiffOptions_get_progress_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffOptions_progress_cb_FIELD_WRITER
  mrb_define_method(mrb, DiffOptions_class, "progress_cb=", mrb_Git_DiffOptions_set_progress_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffOptions_payload_FIELD_READER
  mrb_define_method(mrb, DiffOptions_class, "payload", mrb_Git_DiffOptions_get_payload, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffOptions_payload_FIELD_WRITER
  mrb_define_method(mrb, DiffOptions_class, "payload=", mrb_Git_DiffOptions_set_payload, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffOptions_context_lines_FIELD_READER
  mrb_define_method(mrb, DiffOptions_class, "context_lines", mrb_Git_DiffOptions_get_context_lines, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffOptions_context_lines_FIELD_WRITER
  mrb_define_method(mrb, DiffOptions_class, "context_lines=", mrb_Git_DiffOptions_set_context_lines, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffOptions_interhunk_lines_FIELD_READER
  mrb_define_method(mrb, DiffOptions_class, "interhunk_lines", mrb_Git_DiffOptions_get_interhunk_lines, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffOptions_interhunk_lines_FIELD_WRITER
  mrb_define_method(mrb, DiffOptions_class, "interhunk_lines=", mrb_Git_DiffOptions_set_interhunk_lines, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffOptions_id_abbrev_FIELD_READER
  mrb_define_method(mrb, DiffOptions_class, "id_abbrev", mrb_Git_DiffOptions_get_id_abbrev, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffOptions_id_abbrev_FIELD_WRITER
  mrb_define_method(mrb, DiffOptions_class, "id_abbrev=", mrb_Git_DiffOptions_set_id_abbrev, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffOptions_max_size_FIELD_READER
  mrb_define_method(mrb, DiffOptions_class, "max_size", mrb_Git_DiffOptions_get_max_size, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffOptions_max_size_FIELD_WRITER
  mrb_define_method(mrb, DiffOptions_class, "max_size=", mrb_Git_DiffOptions_set_max_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffOptions_old_prefix_FIELD_READER
  mrb_define_method(mrb, DiffOptions_class, "old_prefix", mrb_Git_DiffOptions_get_old_prefix, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffOptions_old_prefix_FIELD_WRITER
  mrb_define_method(mrb, DiffOptions_class, "old_prefix=", mrb_Git_DiffOptions_set_old_prefix, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffOptions_new_prefix_FIELD_READER
  mrb_define_method(mrb, DiffOptions_class, "new_prefix", mrb_Git_DiffOptions_get_new_prefix, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffOptions_new_prefix_FIELD_WRITER
  mrb_define_method(mrb, DiffOptions_class, "new_prefix=", mrb_Git_DiffOptions_set_new_prefix, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
