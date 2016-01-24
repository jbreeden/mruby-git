/*
 * git_diff_format_email_options
 * Defined in file diff.h @ line 1272
 */

#include "mruby_Git.h"

#if BIND_DiffFormatEmailOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::initialize */
/* sha: aca18892fef0d35ee25727ac53eb411ab645e816c938a05489050ecc84ecd90e */
#if BIND_DiffFormatEmailOptions_INITIALIZE
mrb_value
mrb_Git_DiffFormatEmailOptions_initialize(mrb_state* mrb, mrb_value self) {
  git_diff_format_email_options* native_object = (git_diff_format_email_options*)calloc(1, sizeof(git_diff_format_email_options));
  mruby_gift_git_diff_format_email_options_data_ptr(self, native_object);
  git_diff_format_email_init_options(native_object, GIT_DIFF_FORMAT_EMAIL_OPTIONS_VERSION);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: DiffFormatEmailOptions::version_reader */
/* sha: b73aebdbd37093c6946167bf35bd4155f1151dc2a5ed29a725dfff0537ba2f20 */
#if BIND_DiffFormatEmailOptions_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_DiffFormatEmailOptions_get_version(mrb_state* mrb, mrb_value self) {
  git_diff_format_email_options * native_self = mruby_unbox_git_diff_format_email_options(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::version_writer */
/* sha: 2bdee1827e9d8f6584ee6e87a889209ef2f726543d5a5a4cf2b0d9f33c3cf142 */
#if BIND_DiffFormatEmailOptions_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_DiffFormatEmailOptions_set_version(mrb_state* mrb, mrb_value self) {
  git_diff_format_email_options * native_self = mruby_unbox_git_diff_format_email_options(self);
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

/* MRUBY_BINDING: DiffFormatEmailOptions::flags_reader */
/* sha: 70731c3321d5c8c4c27dc331615a1e71c836cd612f57fda69cca27696198aa42 */
#if BIND_DiffFormatEmailOptions_flags_FIELD_READER
/* get_flags
 *
 * Return Type: git_diff_format_email_flags_t
 */
mrb_value
mrb_Git_DiffFormatEmailOptions_get_flags(mrb_state* mrb, mrb_value self) {
  git_diff_format_email_options * native_self = mruby_unbox_git_diff_format_email_options(self);

  git_diff_format_email_flags_t native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::flags_writer */
/* sha: b62bf023003cac4c452446da0dbf99957af372e9e5420a4942e9c944d73bbb80 */
#if BIND_DiffFormatEmailOptions_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: git_diff_format_email_flags_t
 */
mrb_value
mrb_Git_DiffFormatEmailOptions_set_flags(mrb_state* mrb, mrb_value self) {
  git_diff_format_email_options * native_self = mruby_unbox_git_diff_format_email_options(self);
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

/* MRUBY_BINDING: DiffFormatEmailOptions::patch_no_reader */
/* sha: 99bc0a827ed224f5a8af13723a63b96afc0e8316025f517278c8a76e45226e95 */
#if BIND_DiffFormatEmailOptions_patch_no_FIELD_READER
/* get_patch_no
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_DiffFormatEmailOptions_get_patch_no(mrb_state* mrb, mrb_value self) {
  git_diff_format_email_options * native_self = mruby_unbox_git_diff_format_email_options(self);

  size_t native_patch_no = native_self->patch_no;

  mrb_value patch_no = mrb_fixnum_value(native_patch_no);

  return patch_no;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::patch_no_writer */
/* sha: 4353e8d86a7031693ddf3d87f0f97cf063e4e48ef73bc232653fa539d684dfe8 */
#if BIND_DiffFormatEmailOptions_patch_no_FIELD_WRITER
/* set_patch_no
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_DiffFormatEmailOptions_set_patch_no(mrb_state* mrb, mrb_value self) {
  git_diff_format_email_options * native_self = mruby_unbox_git_diff_format_email_options(self);
  mrb_int native_patch_no;

  mrb_get_args(mrb, "i", &native_patch_no);

  native_self->patch_no = native_patch_no;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::total_patches_reader */
/* sha: a73393a365963d7f437d22f6d661fda6a9b9c70f2a2cc1024cb8a6a005d7191f */
#if BIND_DiffFormatEmailOptions_total_patches_FIELD_READER
/* get_total_patches
 *
 * Return Type: size_t
 */
mrb_value
mrb_Git_DiffFormatEmailOptions_get_total_patches(mrb_state* mrb, mrb_value self) {
  git_diff_format_email_options * native_self = mruby_unbox_git_diff_format_email_options(self);

  size_t native_total_patches = native_self->total_patches;

  mrb_value total_patches = mrb_fixnum_value(native_total_patches);

  return total_patches;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::total_patches_writer */
/* sha: c9336e844752f4bee8b16a96bc0ff1fb063fe84f9a7e0780a7e2852f2f0099d0 */
#if BIND_DiffFormatEmailOptions_total_patches_FIELD_WRITER
/* set_total_patches
 *
 * Parameters:
 * - value: size_t
 */
mrb_value
mrb_Git_DiffFormatEmailOptions_set_total_patches(mrb_state* mrb, mrb_value self) {
  git_diff_format_email_options * native_self = mruby_unbox_git_diff_format_email_options(self);
  mrb_int native_total_patches;

  mrb_get_args(mrb, "i", &native_total_patches);

  native_self->total_patches = native_total_patches;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::id_reader */
/* sha: 78e7c04c72cb4802bb1c0a7f44fe7833e0392531c4a6e6752560d6f4a343ccb4 */
#if BIND_DiffFormatEmailOptions_id_FIELD_READER
/* get_id
 *
 * Return Type: const git_oid *
 */
mrb_value
mrb_Git_DiffFormatEmailOptions_get_id(mrb_state* mrb, mrb_value self) {
  git_diff_format_email_options * native_self = mruby_unbox_git_diff_format_email_options(self);

  const git_oid * native_id = native_self->id;

  mrb_value id = (native_id == NULL ? mrb_nil_value() : mruby_box_git_oid(mrb, native_id));

  return id;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::id_writer */
/* sha: 6c86b106bfc549ef397d7f9f573e6626cef04080531512bb7a11fed1865a8687 */
#if BIND_DiffFormatEmailOptions_id_FIELD_WRITER
/* set_id
 *
 * Parameters:
 * - value: const git_oid *
 */
mrb_value
mrb_Git_DiffFormatEmailOptions_set_id(mrb_state* mrb, mrb_value self) {
  git_diff_format_email_options * native_self = mruby_unbox_git_diff_format_email_options(self);
  mrb_value id;

  mrb_get_args(mrb, "o", &id);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, id, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  const git_oid * native_id = (mrb_nil_p(id) ? NULL : mruby_unbox_git_oid(id));

  native_self->id = native_id;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::summary_reader */
/* sha: 454bd739a60e15ac1a832995efd4ba7f859f385f8cbbfe35435739005ce34013 */
#if BIND_DiffFormatEmailOptions_summary_FIELD_READER
/* get_summary
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_DiffFormatEmailOptions_get_summary(mrb_state* mrb, mrb_value self) {
  git_diff_format_email_options * native_self = mruby_unbox_git_diff_format_email_options(self);

  const char * native_summary = native_self->summary;

  mrb_value summary = native_summary == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_summary);

  return summary;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::summary_writer */
/* sha: a95161658e908c76c9810813bb05f912c011e3d7073b0892a15ea788086d1868 */
#if BIND_DiffFormatEmailOptions_summary_FIELD_WRITER
/* set_summary
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_DiffFormatEmailOptions_set_summary(mrb_state* mrb, mrb_value self) {
  git_diff_format_email_options * native_self = mruby_unbox_git_diff_format_email_options(self);
  char * native_summary = NULL;

  mrb_get_args(mrb, "z", &native_summary);

  native_self->summary = native_summary;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::body_reader */
/* sha: a4a61f4cd038f960abf64f8a1514fffee820b464a80589af1e89f9f01166da6c */
#if BIND_DiffFormatEmailOptions_body_FIELD_READER
/* get_body
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_DiffFormatEmailOptions_get_body(mrb_state* mrb, mrb_value self) {
  git_diff_format_email_options * native_self = mruby_unbox_git_diff_format_email_options(self);

  const char * native_body = native_self->body;

  mrb_value body = native_body == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_body);

  return body;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::body_writer */
/* sha: 41c3e144499cd075513236e2d325ab622c8e3bb81c2233437aef46e2aebac81f */
#if BIND_DiffFormatEmailOptions_body_FIELD_WRITER
/* set_body
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_DiffFormatEmailOptions_set_body(mrb_state* mrb, mrb_value self) {
  git_diff_format_email_options * native_self = mruby_unbox_git_diff_format_email_options(self);
  char * native_body = NULL;

  mrb_get_args(mrb, "z", &native_body);

  native_self->body = native_body;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::author_reader */
/* sha: 7d8de029824b329b8e64f58d9cd52ebcefc463d232fb0126eb39b8c8ca32fc1c */
#if BIND_DiffFormatEmailOptions_author_FIELD_READER
/* get_author
 *
 * Return Type: const git_signature *
 */
mrb_value
mrb_Git_DiffFormatEmailOptions_get_author(mrb_state* mrb, mrb_value self) {
  git_diff_format_email_options * native_self = mruby_unbox_git_diff_format_email_options(self);

  const git_signature * native_author = native_self->author;

  mrb_value author = (native_author == NULL ? mrb_nil_value() : mruby_box_git_signature(mrb, native_author));

  return author;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::author_writer */
/* sha: ddc79e5749409f594108ffe2a0ec59696b407623a8c8bc15e3603ce012431805 */
#if BIND_DiffFormatEmailOptions_author_FIELD_WRITER
/* set_author
 *
 * Parameters:
 * - value: const git_signature *
 */
mrb_value
mrb_Git_DiffFormatEmailOptions_set_author(mrb_state* mrb, mrb_value self) {
  git_diff_format_email_options * native_self = mruby_unbox_git_diff_format_email_options(self);
  mrb_value author;

  mrb_get_args(mrb, "o", &author);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, author, Signature_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Signature expected");
    return mrb_nil_value();
  }

  const git_signature * native_author = (mrb_nil_p(author) ? NULL : mruby_unbox_git_signature(author));

  native_self->author = native_author;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_DiffFormatEmailOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: DiffFormatEmailOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::class_definition */
/* sha: 1a2b920eff6663e50cd0e12c36ba1ee77419b7e2744375a6a538a08d9ea50312 */
  struct RClass* DiffFormatEmailOptions_class = mrb_define_class_under(mrb, Git_module(mrb), "DiffFormatEmailOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(DiffFormatEmailOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::class_method_definitions */
/* sha: b89cf150095686a23c9189c87f5c5c83f31b48efdfb4a8bd4ea895c581d3e230 */
#if BIND_DiffFormatEmailOptions_INITIALIZE
  mrb_define_method(mrb, DiffFormatEmailOptions_class, "initialize", mrb_Git_DiffFormatEmailOptions_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::attr_definitions */
/* sha: 76b3fa0ddffec4449cf9862dc8ddf6e1b6d22a4dea94f011cd20870666f2c973 */
  /*
   * Fields
   */
#if BIND_DiffFormatEmailOptions_version_FIELD_READER
  mrb_define_method(mrb, DiffFormatEmailOptions_class, "version", mrb_Git_DiffFormatEmailOptions_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFormatEmailOptions_version_FIELD_WRITER
  mrb_define_method(mrb, DiffFormatEmailOptions_class, "version=", mrb_Git_DiffFormatEmailOptions_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffFormatEmailOptions_flags_FIELD_READER
  mrb_define_method(mrb, DiffFormatEmailOptions_class, "flags", mrb_Git_DiffFormatEmailOptions_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFormatEmailOptions_flags_FIELD_WRITER
  mrb_define_method(mrb, DiffFormatEmailOptions_class, "flags=", mrb_Git_DiffFormatEmailOptions_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffFormatEmailOptions_patch_no_FIELD_READER
  mrb_define_method(mrb, DiffFormatEmailOptions_class, "patch_no", mrb_Git_DiffFormatEmailOptions_get_patch_no, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFormatEmailOptions_patch_no_FIELD_WRITER
  mrb_define_method(mrb, DiffFormatEmailOptions_class, "patch_no=", mrb_Git_DiffFormatEmailOptions_set_patch_no, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffFormatEmailOptions_total_patches_FIELD_READER
  mrb_define_method(mrb, DiffFormatEmailOptions_class, "total_patches", mrb_Git_DiffFormatEmailOptions_get_total_patches, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFormatEmailOptions_total_patches_FIELD_WRITER
  mrb_define_method(mrb, DiffFormatEmailOptions_class, "total_patches=", mrb_Git_DiffFormatEmailOptions_set_total_patches, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffFormatEmailOptions_id_FIELD_READER
  mrb_define_method(mrb, DiffFormatEmailOptions_class, "id", mrb_Git_DiffFormatEmailOptions_get_id, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFormatEmailOptions_id_FIELD_WRITER
  mrb_define_method(mrb, DiffFormatEmailOptions_class, "id=", mrb_Git_DiffFormatEmailOptions_set_id, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffFormatEmailOptions_summary_FIELD_READER
  mrb_define_method(mrb, DiffFormatEmailOptions_class, "summary", mrb_Git_DiffFormatEmailOptions_get_summary, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFormatEmailOptions_summary_FIELD_WRITER
  mrb_define_method(mrb, DiffFormatEmailOptions_class, "summary=", mrb_Git_DiffFormatEmailOptions_set_summary, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffFormatEmailOptions_body_FIELD_READER
  mrb_define_method(mrb, DiffFormatEmailOptions_class, "body", mrb_Git_DiffFormatEmailOptions_get_body, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFormatEmailOptions_body_FIELD_WRITER
  mrb_define_method(mrb, DiffFormatEmailOptions_class, "body=", mrb_Git_DiffFormatEmailOptions_set_body, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_DiffFormatEmailOptions_author_FIELD_READER
  mrb_define_method(mrb, DiffFormatEmailOptions_class, "author", mrb_Git_DiffFormatEmailOptions_get_author, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_DiffFormatEmailOptions_author_FIELD_WRITER
  mrb_define_method(mrb, DiffFormatEmailOptions_class, "author=", mrb_Git_DiffFormatEmailOptions_set_author, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
