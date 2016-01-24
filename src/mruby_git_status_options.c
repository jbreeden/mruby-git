/*
 * git_status_options
 * Defined in file status.h @ line 178
 */

#include "mruby_Git.h"

#if BIND_StatusOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: StatusOptions::initialize */
/* sha: fb85e2b297d91acd74c67fd56ff1ccba8f73550e99443be1b2c0f256cefd4031 */
#if BIND_StatusOptions_INITIALIZE
mrb_value
mrb_Git_StatusOptions_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_status_options* native_object = (git_status_options*)calloc(1, sizeof(git_status_options));
  mruby_gift_git_status_options_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusOptions::disown */
/* sha: da9729474331a201be13734590691a60a6d15a277910be4ab2d62a62f32bbf9c */
mrb_value
mrb_Git_StatusOptions_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::StatusOptions.disown only accepts objects of type Git::StatusOptions");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusOptions::belongs_to_ruby */
/* sha: 6215b44af321a26b6942449cffdb54d9ee1c7f20422de9802299fd98fff5b2f4 */
mrb_value
mrb_Git_StatusOptions_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::StatusOptions.belongs_to_ruby only accepts objects of type Git::StatusOptions");
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

/* MRUBY_BINDING: StatusOptions::version_reader */
/* sha: a3b85c1e7429af6a91119ee2f2c69ed383d3cbe31b9aa124067ea09c4cd09504 */
#if BIND_StatusOptions_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_StatusOptions_get_version(mrb_state* mrb, mrb_value self) {
  git_status_options * native_self = mruby_unbox_git_status_options(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusOptions::version_writer */
/* sha: 17b86d6d07c9f1c6bf9c8c580c6c89e1db78372ec50210b9e289a713fd487d83 */
#if BIND_StatusOptions_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_StatusOptions_set_version(mrb_state* mrb, mrb_value self) {
  git_status_options * native_self = mruby_unbox_git_status_options(self);
  mrb_int native_version;

  mrb_get_args(mrb, "i", &native_version);

  native_self->version = native_version;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusOptions::show_reader */
/* sha: 343bbf348a92520c7e85f7043efb1e6e1f45031cd391fa10be2db6fc708ec51c */
#if BIND_StatusOptions_show_FIELD_READER
/* get_show
 *
 * Return Type: git_status_show_t
 */
mrb_value
mrb_Git_StatusOptions_get_show(mrb_state* mrb, mrb_value self) {
  git_status_options * native_self = mruby_unbox_git_status_options(self);

  git_status_show_t native_show = native_self->show;

  mrb_value show = mrb_fixnum_value(native_show);

  return show;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusOptions::show_writer */
/* sha: 12698897c29a6ef83369443365015371614cb60baef30b3aee94ba4843432642 */
#if BIND_StatusOptions_show_FIELD_WRITER
/* set_show
 *
 * Parameters:
 * - value: git_status_show_t
 */
mrb_value
mrb_Git_StatusOptions_set_show(mrb_state* mrb, mrb_value self) {
  git_status_options * native_self = mruby_unbox_git_status_options(self);
  mrb_int native_show;

  mrb_get_args(mrb, "i", &native_show);

  native_self->show = native_show;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusOptions::flags_reader */
/* sha: ceac300bbd149eb32924dcf87543d619d2d2bcac373d66b462c9652e64927d88 */
#if BIND_StatusOptions_flags_FIELD_READER
/* get_flags
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_StatusOptions_get_flags(mrb_state* mrb, mrb_value self) {
  git_status_options * native_self = mruby_unbox_git_status_options(self);

  unsigned int native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusOptions::flags_writer */
/* sha: fc830241f476b55410116a2df7a5db3983d6ea9aa2370c745e5801697160aace */
#if BIND_StatusOptions_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_StatusOptions_set_flags(mrb_state* mrb, mrb_value self) {
  git_status_options * native_self = mruby_unbox_git_status_options(self);
  mrb_int native_flags;

  mrb_get_args(mrb, "i", &native_flags);

  native_self->flags = native_flags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusOptions::pathspec_reader */
/* sha: c48d23f3237bc25fa70f3c2694286c2426fcc33ac4eb9daf02bfac11c418a6b7 */
#if BIND_StatusOptions_pathspec_FIELD_READER
/* get_pathspec
 *
 * Return Type: git_strarray
 */
mrb_value
mrb_Git_StatusOptions_get_pathspec(mrb_state* mrb, mrb_value self) {
  git_status_options * native_self = mruby_unbox_git_status_options(self);

  git_strarray native_pathspec = native_self->pathspec;

  mrb_value pathspec = mruby_box_git_strarray(mrb, &native_pathspec);

  return pathspec;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusOptions::pathspec_writer */
/* sha: d06e571aef32f0a629ce0a88b82c69e3b07cd9c4aa37fe90d9ff48561854bdf9 */
#if BIND_StatusOptions_pathspec_FIELD_WRITER
/* set_pathspec
 *
 * Parameters:
 * - value: git_strarray
 */
mrb_value
mrb_Git_StatusOptions_set_pathspec(mrb_state* mrb, mrb_value self) {
  git_status_options * native_self = mruby_unbox_git_status_options(self);
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


void mrb_Git_StatusOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: StatusOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusOptions::class_definition */
/* sha: 6d0d1dff94eee21488e43260f8a61790f03be52004784da0b584cffa3bb20630 */
  struct RClass* StatusOptions_class = mrb_define_class_under(mrb, Git_module(mrb), "StatusOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(StatusOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusOptions::class_method_definitions */
/* sha: 2149b90462d7f3232576eee401e2dbb36e98ec1865a6dacbbc6dd9c1de7e5ade */
#if BIND_StatusOptions_INITIALIZE
  mrb_define_method(mrb, StatusOptions_class, "initialize", mrb_Git_StatusOptions_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, StatusOptions_class, "disown", mrb_Git_StatusOptions_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, StatusOptions_class, "belongs_to_ruby?", mrb_Git_StatusOptions_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusOptions::attr_definitions */
/* sha: c4d52d86cc9b20bfe1d0e817db1e2e0356a61e8f3c4467b841f621e4b62e7c17 */
  /*
   * Fields
   */
#if BIND_StatusOptions_version_FIELD_READER
  mrb_define_method(mrb, StatusOptions_class, "version", mrb_Git_StatusOptions_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_StatusOptions_version_FIELD_WRITER
  mrb_define_method(mrb, StatusOptions_class, "version=", mrb_Git_StatusOptions_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_StatusOptions_show_FIELD_READER
  mrb_define_method(mrb, StatusOptions_class, "show", mrb_Git_StatusOptions_get_show, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_StatusOptions_show_FIELD_WRITER
  mrb_define_method(mrb, StatusOptions_class, "show=", mrb_Git_StatusOptions_set_show, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_StatusOptions_flags_FIELD_READER
  mrb_define_method(mrb, StatusOptions_class, "flags", mrb_Git_StatusOptions_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_StatusOptions_flags_FIELD_WRITER
  mrb_define_method(mrb, StatusOptions_class, "flags=", mrb_Git_StatusOptions_set_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_StatusOptions_pathspec_FIELD_READER
  mrb_define_method(mrb, StatusOptions_class, "pathspec", mrb_Git_StatusOptions_get_pathspec, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_StatusOptions_pathspec_FIELD_WRITER
  mrb_define_method(mrb, StatusOptions_class, "pathspec=", mrb_Git_StatusOptions_set_pathspec, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
