/*
 * git_repository_init_options
 * Defined in file repository.h @ line 259
 */

#include "mruby_Git.h"

#if BIND_RepositoryInitOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: RepositoryInitOptions::initialize */
/* sha: 2802ab0a9acab6846c98229b1918e3c0b4ba1cbd396d49fcbb831d2739d05d12 */
#if BIND_RepositoryInitOptions_INITIALIZE
mrb_value
mrb_Git_RepositoryInitOptions_initialize(mrb_state* mrb, mrb_value self) {
  git_repository_init_options* native_object = (git_repository_init_options*)calloc(1, sizeof(git_repository_init_options));
  mruby_gift_git_repository_init_options_data_ptr(self, native_object);
  git_repository_init_init_options(native_object, GIT_REPOSITORY_INIT_OPTIONS_VERSION);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::disown */
/* sha: bbba50ad5f6275207bb633ef61e0f5023b76c6be8c7d9abc27a546c601827b99 */
mrb_value
mrb_Git_RepositoryInitOptions_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::RepositoryInitOptions.disown only accepts objects of type Git::RepositoryInitOptions");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::belongs_to_ruby */
/* sha: 5ff2dd4239ef57bc3833f3748cf3275bbe582ef44aa770f716c5f4b940b18796 */
mrb_value
mrb_Git_RepositoryInitOptions_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::RepositoryInitOptions.belongs_to_ruby only accepts objects of type Git::RepositoryInitOptions");
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

/* MRUBY_BINDING: RepositoryInitOptions::version_reader */
/* sha: fa738157bb64b803691c6f9b19bd92cdf07a22901d0c409e66fb400a9275ab82 */
#if BIND_RepositoryInitOptions_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_RepositoryInitOptions_get_version(mrb_state* mrb, mrb_value self) {
  git_repository_init_options * native_self = mruby_unbox_git_repository_init_options(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::version_writer */
/* sha: 80c9ff27c8df3619f07165dac8de04c91533204454ed34598ed913e49b1d9149 */
#if BIND_RepositoryInitOptions_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_RepositoryInitOptions_set_version(mrb_state* mrb, mrb_value self) {
  git_repository_init_options * native_self = mruby_unbox_git_repository_init_options(self);
  mrb_int native_version;

  mrb_get_args(mrb, "i", &native_version);

  native_self->version = native_version;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::flags_reader */
/* sha: c8f4f531ebcc085946f6de9555b595ba23e031ad37854e25f28cf599e9dccf9e */
#if BIND_RepositoryInitOptions_flags_FIELD_READER
/* get_flags
 *
 * Return Type: uint32_t
 */
mrb_value
mrb_Git_RepositoryInitOptions_get_flags(mrb_state* mrb, mrb_value self) {
  git_repository_init_options * native_self = mruby_unbox_git_repository_init_options(self);

  uint32_t native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::flags_writer */
/* sha: 515d2d3aa31610fa6aa1f7ea3b60dbab55185b057124c7da2510ce8fbec7d371 */
#if BIND_RepositoryInitOptions_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: uint32_t
 */
mrb_value
mrb_Git_RepositoryInitOptions_set_flags(mrb_state* mrb, mrb_value self) {
  git_repository_init_options * native_self = mruby_unbox_git_repository_init_options(self);
  mrb_int native_flags;

  mrb_get_args(mrb, "i", &native_flags);

  native_self->flags = native_flags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::mode_reader */
/* sha: 8e60a3860a603f544c03c22456fccf79822f7ed4d8d6695c56e034a10d1a2e85 */
#if BIND_RepositoryInitOptions_mode_FIELD_READER
/* get_mode
 *
 * Return Type: uint32_t
 */
mrb_value
mrb_Git_RepositoryInitOptions_get_mode(mrb_state* mrb, mrb_value self) {
  git_repository_init_options * native_self = mruby_unbox_git_repository_init_options(self);

  uint32_t native_mode = native_self->mode;

  mrb_value mode = mrb_fixnum_value(native_mode);

  return mode;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::mode_writer */
/* sha: 66efbb7aa08c0b3dd0d17d2ca30bc882513ccbb172c011ee3e16d344f56a35e7 */
#if BIND_RepositoryInitOptions_mode_FIELD_WRITER
/* set_mode
 *
 * Parameters:
 * - value: uint32_t
 */
mrb_value
mrb_Git_RepositoryInitOptions_set_mode(mrb_state* mrb, mrb_value self) {
  git_repository_init_options * native_self = mruby_unbox_git_repository_init_options(self);
  mrb_int native_mode;

  mrb_get_args(mrb, "i", &native_mode);

  native_self->mode = native_mode;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::workdir_path_reader */
/* sha: b46b060688ef90fdc4e1d56356ddf4f290f2b652d0456f8630471ae710bb8780 */
#if BIND_RepositoryInitOptions_workdir_path_FIELD_READER
/* get_workdir_path
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_RepositoryInitOptions_get_workdir_path(mrb_state* mrb, mrb_value self) {
  git_repository_init_options * native_self = mruby_unbox_git_repository_init_options(self);

  const char * native_workdir_path = native_self->workdir_path;

  mrb_value workdir_path = native_workdir_path == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_workdir_path);

  return workdir_path;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::workdir_path_writer */
/* sha: dd0cba6d6ada06e6e063b610fd229811127d1691d290f3e114d7724522879e3b */
#if BIND_RepositoryInitOptions_workdir_path_FIELD_WRITER
/* set_workdir_path
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_RepositoryInitOptions_set_workdir_path(mrb_state* mrb, mrb_value self) {
  git_repository_init_options * native_self = mruby_unbox_git_repository_init_options(self);
  char * native_workdir_path = NULL;

  mrb_get_args(mrb, "z", &native_workdir_path);

  native_self->workdir_path = native_workdir_path;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::description_reader */
/* sha: 662a3c19b512ba34c0b4b5a37f80238914e7b6e80e113f46ae06c9eeee2dd7c6 */
#if BIND_RepositoryInitOptions_description_FIELD_READER
/* get_description
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_RepositoryInitOptions_get_description(mrb_state* mrb, mrb_value self) {
  git_repository_init_options * native_self = mruby_unbox_git_repository_init_options(self);

  const char * native_description = native_self->description;

  mrb_value description = native_description == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_description);

  return description;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::description_writer */
/* sha: c1068e561e9f92303911050249cc42f144a2fa607556fd081602f59de2eb5339 */
#if BIND_RepositoryInitOptions_description_FIELD_WRITER
/* set_description
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_RepositoryInitOptions_set_description(mrb_state* mrb, mrb_value self) {
  git_repository_init_options * native_self = mruby_unbox_git_repository_init_options(self);
  char * native_description = NULL;

  mrb_get_args(mrb, "z", &native_description);

  native_self->description = native_description;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::template_path_reader */
/* sha: f2b372334ce9a783b0d3d4352531d85457b846c2b1e605abb17dd359d823d436 */
#if BIND_RepositoryInitOptions_template_path_FIELD_READER
/* get_template_path
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_RepositoryInitOptions_get_template_path(mrb_state* mrb, mrb_value self) {
  git_repository_init_options * native_self = mruby_unbox_git_repository_init_options(self);

  const char * native_template_path = native_self->template_path;

  mrb_value template_path = native_template_path == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_template_path);

  return template_path;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::template_path_writer */
/* sha: 7045d25671c620ecbc5b82827f17940ae7c8078522be8823fb741f4171ac34ad */
#if BIND_RepositoryInitOptions_template_path_FIELD_WRITER
/* set_template_path
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_RepositoryInitOptions_set_template_path(mrb_state* mrb, mrb_value self) {
  git_repository_init_options * native_self = mruby_unbox_git_repository_init_options(self);
  char * native_template_path = NULL;

  mrb_get_args(mrb, "z", &native_template_path);

  native_self->template_path = native_template_path;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::initial_head_reader */
/* sha: 2c543e37ce1b4e485315ce1de611e57d3b297b36e0e16a4cd341ce5162666167 */
#if BIND_RepositoryInitOptions_initial_head_FIELD_READER
/* get_initial_head
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_RepositoryInitOptions_get_initial_head(mrb_state* mrb, mrb_value self) {
  git_repository_init_options * native_self = mruby_unbox_git_repository_init_options(self);

  const char * native_initial_head = native_self->initial_head;

  mrb_value initial_head = native_initial_head == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_initial_head);

  return initial_head;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::initial_head_writer */
/* sha: 50a9a8a1efaf2bd508d8ba11464da8b2b50a950871032b2e9c06188d4a670433 */
#if BIND_RepositoryInitOptions_initial_head_FIELD_WRITER
/* set_initial_head
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_RepositoryInitOptions_set_initial_head(mrb_state* mrb, mrb_value self) {
  git_repository_init_options * native_self = mruby_unbox_git_repository_init_options(self);
  char * native_initial_head = NULL;

  mrb_get_args(mrb, "z", &native_initial_head);

  native_self->initial_head = native_initial_head;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::origin_url_reader */
/* sha: 1c181e0d01bc20496db550fe2f25d25d2585e6908b5d463102d04dea2c6b94c3 */
#if BIND_RepositoryInitOptions_origin_url_FIELD_READER
/* get_origin_url
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_RepositoryInitOptions_get_origin_url(mrb_state* mrb, mrb_value self) {
  git_repository_init_options * native_self = mruby_unbox_git_repository_init_options(self);

  const char * native_origin_url = native_self->origin_url;

  mrb_value origin_url = native_origin_url == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_origin_url);

  return origin_url;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::origin_url_writer */
/* sha: eaf9c54f3d458e71852b426e3c77445c6149d047b35901abda1cb30fbe035751 */
#if BIND_RepositoryInitOptions_origin_url_FIELD_WRITER
/* set_origin_url
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_RepositoryInitOptions_set_origin_url(mrb_state* mrb, mrb_value self) {
  git_repository_init_options * native_self = mruby_unbox_git_repository_init_options(self);
  char * native_origin_url = NULL;

  mrb_get_args(mrb, "z", &native_origin_url);

  native_self->origin_url = native_origin_url;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_RepositoryInitOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: RepositoryInitOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::class_definition */
/* sha: 564485fe356b212478588ab022cb75f155282cbe6f02df403e5507a296a64ff1 */
  struct RClass* RepositoryInitOptions_class = mrb_define_class_under(mrb, Git_module(mrb), "RepositoryInitOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(RepositoryInitOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::class_method_definitions */
/* sha: f6703c07d02cea8017a545576f8527e89365e10f47a2a1c11000b1b8265586da */
#if BIND_RepositoryInitOptions_INITIALIZE
  mrb_define_method(mrb, RepositoryInitOptions_class, "initialize", mrb_Git_RepositoryInitOptions_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, RepositoryInitOptions_class, "disown", mrb_Git_RepositoryInitOptions_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, RepositoryInitOptions_class, "belongs_to_ruby?", mrb_Git_RepositoryInitOptions_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::attr_definitions */
/* sha: f7f80d3f5c73e62d1c2c3864e25f6c72c938756ced2794d04edaea17bd8b2f77 */
  /*
   * Fields
   */
#if BIND_RepositoryInitOptions_version_FIELD_READER
  mrb_define_method(mrb, RepositoryInitOptions_class, "version", mrb_Git_RepositoryInitOptions_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RepositoryInitOptions_version_FIELD_WRITER
  mrb_define_method(mrb, RepositoryInitOptions_class, "version=", mrb_Git_RepositoryInitOptions_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RepositoryInitOptions_flags_FIELD_READER
  mrb_define_method(mrb, RepositoryInitOptions_class, "flags", mrb_Git_RepositoryInitOptions_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RepositoryInitOptions_flags_FIELD_WRITER
  mrb_define_method(mrb, RepositoryInitOptions_class, "flags=", mrb_Git_RepositoryInitOptions_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RepositoryInitOptions_mode_FIELD_READER
  mrb_define_method(mrb, RepositoryInitOptions_class, "mode", mrb_Git_RepositoryInitOptions_get_mode, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RepositoryInitOptions_mode_FIELD_WRITER
  mrb_define_method(mrb, RepositoryInitOptions_class, "mode=", mrb_Git_RepositoryInitOptions_set_mode, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RepositoryInitOptions_workdir_path_FIELD_READER
  mrb_define_method(mrb, RepositoryInitOptions_class, "workdir_path", mrb_Git_RepositoryInitOptions_get_workdir_path, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RepositoryInitOptions_workdir_path_FIELD_WRITER
  mrb_define_method(mrb, RepositoryInitOptions_class, "workdir_path=", mrb_Git_RepositoryInitOptions_set_workdir_path, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RepositoryInitOptions_description_FIELD_READER
  mrb_define_method(mrb, RepositoryInitOptions_class, "description", mrb_Git_RepositoryInitOptions_get_description, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RepositoryInitOptions_description_FIELD_WRITER
  mrb_define_method(mrb, RepositoryInitOptions_class, "description=", mrb_Git_RepositoryInitOptions_set_description, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RepositoryInitOptions_template_path_FIELD_READER
  mrb_define_method(mrb, RepositoryInitOptions_class, "template_path", mrb_Git_RepositoryInitOptions_get_template_path, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RepositoryInitOptions_template_path_FIELD_WRITER
  mrb_define_method(mrb, RepositoryInitOptions_class, "template_path=", mrb_Git_RepositoryInitOptions_set_template_path, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RepositoryInitOptions_initial_head_FIELD_READER
  mrb_define_method(mrb, RepositoryInitOptions_class, "initial_head", mrb_Git_RepositoryInitOptions_get_initial_head, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RepositoryInitOptions_initial_head_FIELD_WRITER
  mrb_define_method(mrb, RepositoryInitOptions_class, "initial_head=", mrb_Git_RepositoryInitOptions_set_initial_head, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RepositoryInitOptions_origin_url_FIELD_READER
  mrb_define_method(mrb, RepositoryInitOptions_class, "origin_url", mrb_Git_RepositoryInitOptions_get_origin_url, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RepositoryInitOptions_origin_url_FIELD_WRITER
  mrb_define_method(mrb, RepositoryInitOptions_class, "origin_url=", mrb_Git_RepositoryInitOptions_set_origin_url, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
