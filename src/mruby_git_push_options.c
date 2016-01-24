/*
 * git_push_options
 * Defined in file remote.h @ line 577
 */

#include "mruby_Git.h"

#if BIND_PushOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: PushOptions::initialize */
/* sha: 9676fb4921367daa205c04315b0df3abd84e27e0f446739126d67b9236f58238 */
#if BIND_PushOptions_INITIALIZE
mrb_value
mrb_Git_PushOptions_initialize(mrb_state* mrb, mrb_value self) {
  git_push_options* native_object = (git_push_options*)calloc(1, sizeof(git_push_options));
  mruby_gift_git_push_options_data_ptr(self, native_object);
  git_push_init_options(native_object, GIT_PUSH_OPTIONS_VERSION);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushOptions::disown */
/* sha: 1e31823f6e67401b447209e43d2f55c7a36207e8fa84e16085ed1e6ddc3205c7 */
mrb_value
mrb_Git_PushOptions_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::PushOptions.disown only accepts objects of type Git::PushOptions");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushOptions::belongs_to_ruby */
/* sha: bfd3f0834e424849502fa2346461f4843e8c8648b4d4321830b1342375603a2f */
mrb_value
mrb_Git_PushOptions_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::PushOptions.belongs_to_ruby only accepts objects of type Git::PushOptions");
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

/* MRUBY_BINDING: PushOptions::version_reader */
/* sha: 28790c4194df7404dfa950db972c75d8ded82fabab374d43674d129da51b361f */
#if BIND_PushOptions_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_PushOptions_get_version(mrb_state* mrb, mrb_value self) {
  git_push_options * native_self = mruby_unbox_git_push_options(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushOptions::version_writer */
/* sha: acfdce4cae9da2f1bc86618742acf1cfeb6008384a89f86dc7e3e10e62b7545d */
#if BIND_PushOptions_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_PushOptions_set_version(mrb_state* mrb, mrb_value self) {
  git_push_options * native_self = mruby_unbox_git_push_options(self);
  mrb_int native_version;

  mrb_get_args(mrb, "i", &native_version);

  native_self->version = native_version;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushOptions::pb_parallelism_reader */
/* sha: 076a177c7f8306f7645675e518ecf3ca10d5cfc285858912a60c1073e195d2c6 */
#if BIND_PushOptions_pb_parallelism_FIELD_READER
/* get_pb_parallelism
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_PushOptions_get_pb_parallelism(mrb_state* mrb, mrb_value self) {
  git_push_options * native_self = mruby_unbox_git_push_options(self);

  unsigned int native_pb_parallelism = native_self->pb_parallelism;

  mrb_value pb_parallelism = mrb_fixnum_value(native_pb_parallelism);

  return pb_parallelism;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushOptions::pb_parallelism_writer */
/* sha: 047263bb1f104faeca0f7e9eefcdc9ad8eaefb6b0bd0acadc22b3c4798c53a52 */
#if BIND_PushOptions_pb_parallelism_FIELD_WRITER
/* set_pb_parallelism
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_PushOptions_set_pb_parallelism(mrb_state* mrb, mrb_value self) {
  git_push_options * native_self = mruby_unbox_git_push_options(self);
  mrb_int native_pb_parallelism;

  mrb_get_args(mrb, "i", &native_pb_parallelism);

  native_self->pb_parallelism = native_pb_parallelism;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushOptions::callbacks_reader */
/* sha: f6ad6ff2608628f5e28f0589a0ca091ffbdb6b920d68e4215e18098ea0b5b41e */
#if BIND_PushOptions_callbacks_FIELD_READER
/* get_callbacks
 *
 * Return Type: git_remote_callbacks
 */
mrb_value
mrb_Git_PushOptions_get_callbacks(mrb_state* mrb, mrb_value self) {
  git_push_options * native_self = mruby_unbox_git_push_options(self);

  git_remote_callbacks native_callbacks = native_self->callbacks;

  git_remote_callbacks* new_callbacks = TODO_move_git_remote_callbacks_to_heap(native_callbacks);
  mrb_value callbacks = mruby_box_git_remote_callbacks(mrb, &native_callbacks);

  return callbacks;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushOptions::callbacks_writer */
/* sha: b9d4195cbb6fa3447270ace02d65c8e379f387891e13fdbfab4c70ea38c25e8d */
#if BIND_PushOptions_callbacks_FIELD_WRITER
/* set_callbacks
 *
 * Parameters:
 * - value: git_remote_callbacks
 */
mrb_value
mrb_Git_PushOptions_set_callbacks(mrb_state* mrb, mrb_value self) {
  git_push_options * native_self = mruby_unbox_git_push_options(self);
  mrb_value callbacks;

  mrb_get_args(mrb, "o", &callbacks);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, callbacks, RemoteCallbacks_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RemoteCallbacks expected");
    return mrb_nil_value();
  }

  git_remote_callbacks native_callbacks = *(mruby_unbox_git_remote_callbacks(callbacks));

  native_self->callbacks = native_callbacks;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushOptions::custom_headers_reader */
/* sha: caf382e0de3cae33f656a0d0087dd440ae606f050fa322685715569aae95c5e9 */
#if BIND_PushOptions_custom_headers_FIELD_READER
/* get_custom_headers
 *
 * Return Type: git_strarray
 */
mrb_value
mrb_Git_PushOptions_get_custom_headers(mrb_state* mrb, mrb_value self) {
  git_push_options * native_self = mruby_unbox_git_push_options(self);

  git_strarray native_custom_headers = native_self->custom_headers;

  git_strarray* new_custom_headers = TODO_move_git_strarray_to_heap(native_custom_headers);
  mrb_value custom_headers = mruby_box_git_strarray(mrb, &native_custom_headers);

  return custom_headers;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushOptions::custom_headers_writer */
/* sha: 9e7f53d8efcf5ad442bef5b897931cef3a6ee2dcfb4bb10dee8c4fa1e021fd3c */
#if BIND_PushOptions_custom_headers_FIELD_WRITER
/* set_custom_headers
 *
 * Parameters:
 * - value: git_strarray
 */
mrb_value
mrb_Git_PushOptions_set_custom_headers(mrb_state* mrb, mrb_value self) {
  git_push_options * native_self = mruby_unbox_git_push_options(self);
  mrb_value custom_headers;

  mrb_get_args(mrb, "o", &custom_headers);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, custom_headers, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }

  git_strarray native_custom_headers = *(mruby_unbox_git_strarray(custom_headers));

  native_self->custom_headers = native_custom_headers;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_PushOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: PushOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushOptions::class_definition */
/* sha: 10f86fc2649d54525e5e3095f31ad406645a41080e6a62d4569311412541a7bd */
  struct RClass* PushOptions_class = mrb_define_class_under(mrb, Git_module(mrb), "PushOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(PushOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushOptions::class_method_definitions */
/* sha: ae819d5e8001512cc734dcaba17983c7a98ebe7c734323ad3380d82d87bfdc61 */
#if BIND_PushOptions_INITIALIZE
  mrb_define_method(mrb, PushOptions_class, "initialize", mrb_Git_PushOptions_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, PushOptions_class, "disown", mrb_Git_PushOptions_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, PushOptions_class, "belongs_to_ruby?", mrb_Git_PushOptions_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushOptions::attr_definitions */
/* sha: 382073cf36d2a37976a75ccfb24b767da941ad108f050c37b808e0b4586fb24f */
  /*
   * Fields
   */
#if BIND_PushOptions_version_FIELD_READER
  mrb_define_method(mrb, PushOptions_class, "version", mrb_Git_PushOptions_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_PushOptions_version_FIELD_WRITER
  mrb_define_method(mrb, PushOptions_class, "version=", mrb_Git_PushOptions_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_PushOptions_pb_parallelism_FIELD_READER
  mrb_define_method(mrb, PushOptions_class, "pb_parallelism", mrb_Git_PushOptions_get_pb_parallelism, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_PushOptions_pb_parallelism_FIELD_WRITER
  mrb_define_method(mrb, PushOptions_class, "pb_parallelism=", mrb_Git_PushOptions_set_pb_parallelism, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_PushOptions_callbacks_FIELD_READER
  mrb_define_method(mrb, PushOptions_class, "callbacks", mrb_Git_PushOptions_get_callbacks, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_PushOptions_callbacks_FIELD_WRITER
  mrb_define_method(mrb, PushOptions_class, "callbacks=", mrb_Git_PushOptions_set_callbacks, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_PushOptions_custom_headers_FIELD_READER
  mrb_define_method(mrb, PushOptions_class, "custom_headers", mrb_Git_PushOptions_get_custom_headers, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_PushOptions_custom_headers_FIELD_WRITER
  mrb_define_method(mrb, PushOptions_class, "custom_headers=", mrb_Git_PushOptions_set_custom_headers, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
