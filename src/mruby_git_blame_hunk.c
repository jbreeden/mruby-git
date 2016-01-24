/*
 * git_blame_hunk
 * Defined in file blame.h @ line 115
 */

#include "mruby_Git.h"

#if BIND_BlameHunk_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: BlameHunk::initialize */
/* sha: 19edbabf087e48f762d6982d40f65747923f7b0d4b7f2e874e3b3fdb9604629f */
#if BIND_BlameHunk_INITIALIZE
mrb_value
mrb_Git_BlameHunk_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_blame_hunk* native_object = (git_blame_hunk*)calloc(1, sizeof(git_blame_hunk));
  mruby_gift_git_blame_hunk_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::disown */
/* sha: a31bd13cc2d5127089b344be4bdd0a3361dfd14d9746f850f295dfc46bbe9382 */
mrb_value
mrb_Git_BlameHunk_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::BlameHunk.disown only accepts objects of type Git::BlameHunk");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::belongs_to_ruby */
/* sha: 18af378425e6dd4580713347503b392610f6b0169f1132cfb1f73cfb74f60cf6 */
mrb_value
mrb_Git_BlameHunk_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::BlameHunk.belongs_to_ruby only accepts objects of type Git::BlameHunk");
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

/* MRUBY_BINDING: BlameHunk::lines_in_hunk_reader */
/* sha: 81d8a2a48643cfa4c7fbbe46250f86e76aa76e7bf45a8c5a5827c4d6a860bb86 */
#if BIND_BlameHunk_lines_in_hunk_FIELD_READER
/* get_lines_in_hunk
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_BlameHunk_get_lines_in_hunk(mrb_state* mrb, mrb_value self) {
  git_blame_hunk * native_self = mruby_unbox_git_blame_hunk(self);

  size_t native_lines_in_hunk = native_self->lines_in_hunk;

  mrb_value lines_in_hunk = mrb_fixnum_value(native_lines_in_hunk);

  return lines_in_hunk;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::lines_in_hunk_writer */
/* sha: 29e9524ddade9640acca85fe41974e0956e5e8ef0490f10092c08c88acedb9b1 */
#if BIND_BlameHunk_lines_in_hunk_FIELD_WRITER
/* set_lines_in_hunk
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_BlameHunk_set_lines_in_hunk(mrb_state* mrb, mrb_value self) {
  git_blame_hunk * native_self = mruby_unbox_git_blame_hunk(self);
  mrb_int native_lines_in_hunk;

  mrb_get_args(mrb, "i", &native_lines_in_hunk);

  native_self->lines_in_hunk = native_lines_in_hunk;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::final_commit_id_reader */
/* sha: 62bda0a7bfa5e6e66adbb192de3294593e9bace5fc6fbb8d2ed0454f7e085d29 */
#if BIND_BlameHunk_final_commit_id_FIELD_READER
/* get_final_commit_id
 *
 * Return Type: git_oid
 */
mrb_value
mrb_Git_BlameHunk_get_final_commit_id(mrb_state* mrb, mrb_value self) {
  git_blame_hunk * native_self = mruby_unbox_git_blame_hunk(self);

  git_oid native_final_commit_id = native_self->final_commit_id;

  git_oid* new_final_commit_id = TODO_move_git_oid_to_heap(native_final_commit_id);
  mrb_value final_commit_id = mruby_box_git_oid(mrb, &native_final_commit_id);

  return final_commit_id;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::final_commit_id_writer */
/* sha: 7b280f88adc966587f28e633aae989d9589920020cd9dda101129f8dde1d8024 */
#if BIND_BlameHunk_final_commit_id_FIELD_WRITER
/* set_final_commit_id
 *
 * Parameters:
 * - value: git_oid
 */
mrb_value
mrb_Git_BlameHunk_set_final_commit_id(mrb_state* mrb, mrb_value self) {
  git_blame_hunk * native_self = mruby_unbox_git_blame_hunk(self);
  mrb_value final_commit_id;

  mrb_get_args(mrb, "o", &final_commit_id);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, final_commit_id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  git_oid native_final_commit_id = *(mruby_unbox_git_oid(final_commit_id));

  native_self->final_commit_id = native_final_commit_id;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::final_start_line_number_reader */
/* sha: 920f38ae6c83836b7d4531437eec90a029a39700c6888200a86a382aaf4f26d0 */
#if BIND_BlameHunk_final_start_line_number_FIELD_READER
/* get_final_start_line_number
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_BlameHunk_get_final_start_line_number(mrb_state* mrb, mrb_value self) {
  git_blame_hunk * native_self = mruby_unbox_git_blame_hunk(self);

  size_t native_final_start_line_number = native_self->final_start_line_number;

  mrb_value final_start_line_number = mrb_fixnum_value(native_final_start_line_number);

  return final_start_line_number;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::final_start_line_number_writer */
/* sha: 1781d0c6a491eb3a40ad24bd6069489d183d304ecd419e26cf1fb72a978ebe03 */
#if BIND_BlameHunk_final_start_line_number_FIELD_WRITER
/* set_final_start_line_number
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_BlameHunk_set_final_start_line_number(mrb_state* mrb, mrb_value self) {
  git_blame_hunk * native_self = mruby_unbox_git_blame_hunk(self);
  mrb_int native_final_start_line_number;

  mrb_get_args(mrb, "i", &native_final_start_line_number);

  native_self->final_start_line_number = native_final_start_line_number;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::final_signature_reader */
/* sha: bffe58d48027d8d56b61258b901e41b4bc592ce9a6c0271bf92f0dfb39f7d358 */
#if BIND_BlameHunk_final_signature_FIELD_READER
/* get_final_signature
 *
 * Return Type: git_signature *
 */
mrb_value
mrb_Git_BlameHunk_get_final_signature(mrb_state* mrb, mrb_value self) {
  git_blame_hunk * native_self = mruby_unbox_git_blame_hunk(self);

  git_signature * native_final_signature = native_self->final_signature;

  mrb_value final_signature = (native_final_signature == NULL ? mrb_nil_value() : mruby_box_git_signature(mrb, native_final_signature));

  return final_signature;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::final_signature_writer */
/* sha: 63c731d87c95d9ab4f048bd4b45ae9eaec95bbb2bf266f7205fc760399c55312 */
#if BIND_BlameHunk_final_signature_FIELD_WRITER
/* set_final_signature
 *
 * Parameters:
 * - value: git_signature *
 */
mrb_value
mrb_Git_BlameHunk_set_final_signature(mrb_state* mrb, mrb_value self) {
  git_blame_hunk * native_self = mruby_unbox_git_blame_hunk(self);
  mrb_value final_signature;

  mrb_get_args(mrb, "o", &final_signature);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, final_signature, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }

  git_signature * native_final_signature = (mrb_nil_p(final_signature) ? NULL : mruby_unbox_git_signature(final_signature));

  native_self->final_signature = native_final_signature;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::orig_commit_id_reader */
/* sha: ba06392fa4c6c08bb41314b64a397d08c23a150f28b258d3424a63a7fa015df0 */
#if BIND_BlameHunk_orig_commit_id_FIELD_READER
/* get_orig_commit_id
 *
 * Return Type: git_oid
 */
mrb_value
mrb_Git_BlameHunk_get_orig_commit_id(mrb_state* mrb, mrb_value self) {
  git_blame_hunk * native_self = mruby_unbox_git_blame_hunk(self);

  git_oid native_orig_commit_id = native_self->orig_commit_id;

  git_oid* new_orig_commit_id = TODO_move_git_oid_to_heap(native_orig_commit_id);
  mrb_value orig_commit_id = mruby_box_git_oid(mrb, &native_orig_commit_id);

  return orig_commit_id;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::orig_commit_id_writer */
/* sha: b04fa66e94508f05e6505b604f15c6ca3f2fc77ad1ba777c5d78e8b121438a18 */
#if BIND_BlameHunk_orig_commit_id_FIELD_WRITER
/* set_orig_commit_id
 *
 * Parameters:
 * - value: git_oid
 */
mrb_value
mrb_Git_BlameHunk_set_orig_commit_id(mrb_state* mrb, mrb_value self) {
  git_blame_hunk * native_self = mruby_unbox_git_blame_hunk(self);
  mrb_value orig_commit_id;

  mrb_get_args(mrb, "o", &orig_commit_id);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, orig_commit_id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  git_oid native_orig_commit_id = *(mruby_unbox_git_oid(orig_commit_id));

  native_self->orig_commit_id = native_orig_commit_id;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::orig_path_reader */
/* sha: fab2c554f30a4225e19e331ffe185226780f4b71bf55df8d64f10914159b74d7 */
#if BIND_BlameHunk_orig_path_FIELD_READER
/* get_orig_path
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_BlameHunk_get_orig_path(mrb_state* mrb, mrb_value self) {
  git_blame_hunk * native_self = mruby_unbox_git_blame_hunk(self);

  const char * native_orig_path = native_self->orig_path;

  mrb_value orig_path = native_orig_path == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_orig_path);

  return orig_path;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::orig_path_writer */
/* sha: 7d90d04bca8f0fee0565e279d252e5b76ffc23a37c1234b18361d01f4d2c41d6 */
#if BIND_BlameHunk_orig_path_FIELD_WRITER
/* set_orig_path
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_BlameHunk_set_orig_path(mrb_state* mrb, mrb_value self) {
  git_blame_hunk * native_self = mruby_unbox_git_blame_hunk(self);
  char * native_orig_path = NULL;

  mrb_get_args(mrb, "z", &native_orig_path);

  native_self->orig_path = native_orig_path;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::orig_start_line_number_reader */
/* sha: 4de5f60808d2a67c63a2abeb49091b2a4f74360132ad2a51fdd349f8484d2a32 */
#if BIND_BlameHunk_orig_start_line_number_FIELD_READER
/* get_orig_start_line_number
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_BlameHunk_get_orig_start_line_number(mrb_state* mrb, mrb_value self) {
  git_blame_hunk * native_self = mruby_unbox_git_blame_hunk(self);

  size_t native_orig_start_line_number = native_self->orig_start_line_number;

  mrb_value orig_start_line_number = mrb_fixnum_value(native_orig_start_line_number);

  return orig_start_line_number;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::orig_start_line_number_writer */
/* sha: 6f78b64a9fa1e282494961a0a0da4313c34ee93df5fe835254cd660efb773d45 */
#if BIND_BlameHunk_orig_start_line_number_FIELD_WRITER
/* set_orig_start_line_number
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_BlameHunk_set_orig_start_line_number(mrb_state* mrb, mrb_value self) {
  git_blame_hunk * native_self = mruby_unbox_git_blame_hunk(self);
  mrb_int native_orig_start_line_number;

  mrb_get_args(mrb, "i", &native_orig_start_line_number);

  native_self->orig_start_line_number = native_orig_start_line_number;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::orig_signature_reader */
/* sha: 0f8f050bc123ecccee86721be42d994d22c627103ac39d4f80053f2f9a80049f */
#if BIND_BlameHunk_orig_signature_FIELD_READER
/* get_orig_signature
 *
 * Return Type: git_signature *
 */
mrb_value
mrb_Git_BlameHunk_get_orig_signature(mrb_state* mrb, mrb_value self) {
  git_blame_hunk * native_self = mruby_unbox_git_blame_hunk(self);

  git_signature * native_orig_signature = native_self->orig_signature;

  mrb_value orig_signature = (native_orig_signature == NULL ? mrb_nil_value() : mruby_box_git_signature(mrb, native_orig_signature));

  return orig_signature;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::orig_signature_writer */
/* sha: 2adc2e25be8cd2486b13d5d7c08472f48da3d454bac4edcd09660ee51a2d580c */
#if BIND_BlameHunk_orig_signature_FIELD_WRITER
/* set_orig_signature
 *
 * Parameters:
 * - value: git_signature *
 */
mrb_value
mrb_Git_BlameHunk_set_orig_signature(mrb_state* mrb, mrb_value self) {
  git_blame_hunk * native_self = mruby_unbox_git_blame_hunk(self);
  mrb_value orig_signature;

  mrb_get_args(mrb, "o", &orig_signature);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, orig_signature, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }

  git_signature * native_orig_signature = (mrb_nil_p(orig_signature) ? NULL : mruby_unbox_git_signature(orig_signature));

  native_self->orig_signature = native_orig_signature;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::boundary_reader */
/* sha: 2e9be3dd7cb7d39ddf9c088c463d68d0f03f82700d62a3b8461e86e6b03dc354 */
#if BIND_BlameHunk_boundary_FIELD_READER
/* get_boundary
 *
 * Return Type: char
 */
mrb_value
mrb_Git_BlameHunk_get_boundary(mrb_state* mrb, mrb_value self) {
  git_blame_hunk * native_self = mruby_unbox_git_blame_hunk(self);

  char native_boundary = native_self->boundary;

  mrb_value boundary = mrb_fixnum_value(native_boundary);

  return boundary;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::boundary_writer */
/* sha: 5cce21e9c40152fe5868e9165d8f179e9ce6f57f9b5b505e029a14e9e4df1f01 */
#if BIND_BlameHunk_boundary_FIELD_WRITER
/* set_boundary
 *
 * Parameters:
 * - value: char
 */
mrb_value
mrb_Git_BlameHunk_set_boundary(mrb_state* mrb, mrb_value self) {
  git_blame_hunk * native_self = mruby_unbox_git_blame_hunk(self);
  mrb_int native_boundary;

  mrb_get_args(mrb, "i", &native_boundary);

  native_self->boundary = native_boundary;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_BlameHunk_init(mrb_state* mrb) {
/* MRUBY_BINDING: BlameHunk::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::class_definition */
/* sha: 37a99027066ae6b8572e797382291d7d0682cfb930e5374d5eafe152695b0a2e */
  struct RClass* BlameHunk_class = mrb_define_class_under(mrb, Git_module(mrb), "BlameHunk", mrb->object_class);
  MRB_SET_INSTANCE_TT(BlameHunk_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::class_method_definitions */
/* sha: d316ef7f84cfba141936c8f205efe3d0f70dc518786adb8ec84161fc20f1eda7 */
#if BIND_BlameHunk_INITIALIZE
  mrb_define_method(mrb, BlameHunk_class, "initialize", mrb_Git_BlameHunk_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, BlameHunk_class, "disown", mrb_Git_BlameHunk_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, BlameHunk_class, "belongs_to_ruby?", mrb_Git_BlameHunk_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::attr_definitions */
/* sha: e62ff3d02fbcd6055a6b47ba733c63a0f2b3504ff84da2a0fba18a20c1518c6c */
  /*
   * Fields
   */
#if BIND_BlameHunk_lines_in_hunk_FIELD_READER
  mrb_define_method(mrb, BlameHunk_class, "lines_in_hunk", mrb_Git_BlameHunk_get_lines_in_hunk, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_BlameHunk_lines_in_hunk_FIELD_WRITER
  mrb_define_method(mrb, BlameHunk_class, "lines_in_hunk=", mrb_Git_BlameHunk_set_lines_in_hunk, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_BlameHunk_final_commit_id_FIELD_READER
  mrb_define_method(mrb, BlameHunk_class, "final_commit_id", mrb_Git_BlameHunk_get_final_commit_id, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_BlameHunk_final_commit_id_FIELD_WRITER
  mrb_define_method(mrb, BlameHunk_class, "final_commit_id=", mrb_Git_BlameHunk_set_final_commit_id, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_BlameHunk_final_start_line_number_FIELD_READER
  mrb_define_method(mrb, BlameHunk_class, "final_start_line_number", mrb_Git_BlameHunk_get_final_start_line_number, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_BlameHunk_final_start_line_number_FIELD_WRITER
  mrb_define_method(mrb, BlameHunk_class, "final_start_line_number=", mrb_Git_BlameHunk_set_final_start_line_number, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_BlameHunk_final_signature_FIELD_READER
  mrb_define_method(mrb, BlameHunk_class, "final_signature", mrb_Git_BlameHunk_get_final_signature, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_BlameHunk_final_signature_FIELD_WRITER
  mrb_define_method(mrb, BlameHunk_class, "final_signature=", mrb_Git_BlameHunk_set_final_signature, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_BlameHunk_orig_commit_id_FIELD_READER
  mrb_define_method(mrb, BlameHunk_class, "orig_commit_id", mrb_Git_BlameHunk_get_orig_commit_id, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_BlameHunk_orig_commit_id_FIELD_WRITER
  mrb_define_method(mrb, BlameHunk_class, "orig_commit_id=", mrb_Git_BlameHunk_set_orig_commit_id, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_BlameHunk_orig_path_FIELD_READER
  mrb_define_method(mrb, BlameHunk_class, "orig_path", mrb_Git_BlameHunk_get_orig_path, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_BlameHunk_orig_path_FIELD_WRITER
  mrb_define_method(mrb, BlameHunk_class, "orig_path=", mrb_Git_BlameHunk_set_orig_path, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_BlameHunk_orig_start_line_number_FIELD_READER
  mrb_define_method(mrb, BlameHunk_class, "orig_start_line_number", mrb_Git_BlameHunk_get_orig_start_line_number, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_BlameHunk_orig_start_line_number_FIELD_WRITER
  mrb_define_method(mrb, BlameHunk_class, "orig_start_line_number=", mrb_Git_BlameHunk_set_orig_start_line_number, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_BlameHunk_orig_signature_FIELD_READER
  mrb_define_method(mrb, BlameHunk_class, "orig_signature", mrb_Git_BlameHunk_get_orig_signature, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_BlameHunk_orig_signature_FIELD_WRITER
  mrb_define_method(mrb, BlameHunk_class, "orig_signature=", mrb_Git_BlameHunk_set_orig_signature, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_BlameHunk_boundary_FIELD_READER
  mrb_define_method(mrb, BlameHunk_class, "boundary", mrb_Git_BlameHunk_get_boundary, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_BlameHunk_boundary_FIELD_WRITER
  mrb_define_method(mrb, BlameHunk_class, "boundary=", mrb_Git_BlameHunk_set_boundary, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
