/*
 * git_fetch_options
 * Defined in file remote.h @ line 523
 */

#include "mruby_Git.h"

#if BIND_FetchOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::initialize */
/* sha: 5f7d0f937fab4efdf7832d82addcc682b7ee552958737ea6551f968c51ca7f91 */
#if BIND_FetchOptions_INITIALIZE
mrb_value
mrb_Git_FetchOptions_initialize(mrb_state* mrb, mrb_value self) {
  git_fetch_options* native_object = (git_fetch_options*)calloc(1, sizeof(git_fetch_options));
  mruby_gift_git_fetch_options_data_ptr(self, native_object);
  git_fetch_init_options(native_object, GIT_FETCH_OPTIONS_VERSION);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: FetchOptions::version_reader */
/* sha: b3f2e47ae5ecfbe122b7fa8508d7f6715674dad82863287d16b34eb0acdb7a5c */
#if BIND_FetchOptions_version_FIELD_READER
/* get_version
 *
 * Return Type: int
 */
mrb_value
mrb_Git_FetchOptions_get_version(mrb_state* mrb, mrb_value self) {
  git_fetch_options * native_self = mruby_unbox_git_fetch_options(self);

  int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::version_writer */
/* sha: 872e9be938cb0139708ad437b7d1a70b21f51fcd3d29fde7b14016227996a849 */
#if BIND_FetchOptions_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_FetchOptions_set_version(mrb_state* mrb, mrb_value self) {
  git_fetch_options * native_self = mruby_unbox_git_fetch_options(self);
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

/* MRUBY_BINDING: FetchOptions::callbacks_reader */
/* sha: 17bc10b6b2de694521c7863f122b5046c44a79b8116c2571245621368d9eecc6 */
#if BIND_FetchOptions_callbacks_FIELD_READER
/* get_callbacks
 *
 * Return Type: git_remote_callbacks
 */
mrb_value
mrb_Git_FetchOptions_get_callbacks(mrb_state* mrb, mrb_value self) {
  git_fetch_options * native_self = mruby_unbox_git_fetch_options(self);

  git_remote_callbacks native_callbacks = native_self->callbacks;

  git_remote_callbacks* new_callbacks = TODO_move_git_remote_callbacks_to_heap(native_callbacks);
  mrb_value callbacks = mruby_box_git_remote_callbacks(mrb, &native_callbacks);

  return callbacks;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::callbacks_writer */
/* sha: 80e5143f51bb1c898cd452f1aab43729b721079ef8141bf374ba067c098bc10f */
#if BIND_FetchOptions_callbacks_FIELD_WRITER
/* set_callbacks
 *
 * Parameters:
 * - value: git_remote_callbacks
 */
mrb_value
mrb_Git_FetchOptions_set_callbacks(mrb_state* mrb, mrb_value self) {
  git_fetch_options * native_self = mruby_unbox_git_fetch_options(self);
  mrb_value callbacks;

  mrb_get_args(mrb, "o", &callbacks);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, callbacks, RemoteCallbacks_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "RemoteCallbacks expected");
    return mrb_nil_value();
  }

  git_remote_callbacks native_callbacks = *(mruby_unbox_git_remote_callbacks(callbacks));

  native_self->callbacks = native_callbacks;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::prune_reader */
/* sha: 87e4827fc910c0e1cc87be25ef90202e2ec52883c2b2d35cc3fcbd0e1d2a6785 */
#if BIND_FetchOptions_prune_FIELD_READER
/* get_prune
 *
 * Return Type: git_fetch_prune_t
 */
mrb_value
mrb_Git_FetchOptions_get_prune(mrb_state* mrb, mrb_value self) {
  git_fetch_options * native_self = mruby_unbox_git_fetch_options(self);

  git_fetch_prune_t native_prune = native_self->prune;

  mrb_value prune = mrb_fixnum_value(native_prune);

  return prune;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::prune_writer */
/* sha: 31f5bc1d12f9a9286e56ddf21ebc8a1989ada522634396bb31ca3d464e90abb6 */
#if BIND_FetchOptions_prune_FIELD_WRITER
/* set_prune
 *
 * Parameters:
 * - value: git_fetch_prune_t
 */
mrb_value
mrb_Git_FetchOptions_set_prune(mrb_state* mrb, mrb_value self) {
  git_fetch_options * native_self = mruby_unbox_git_fetch_options(self);
  mrb_int native_prune;

  mrb_get_args(mrb, "i", &native_prune);

  native_self->prune = native_prune;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::update_fetchhead_reader */
/* sha: 8a026b4a3d4c7348c61542c1e6e0defc5c10214ea2069062dcf33f99fb5f33d3 */
#if BIND_FetchOptions_update_fetchhead_FIELD_READER
/* get_update_fetchhead
 *
 * Return Type: int
 */
mrb_value
mrb_Git_FetchOptions_get_update_fetchhead(mrb_state* mrb, mrb_value self) {
  git_fetch_options * native_self = mruby_unbox_git_fetch_options(self);

  int native_update_fetchhead = native_self->update_fetchhead;

  mrb_value update_fetchhead = mrb_fixnum_value(native_update_fetchhead);

  return update_fetchhead;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::update_fetchhead_writer */
/* sha: cc7295daad5aed2a2a7462b95c98ef264e6e2cd7b1c76e54d00dd976dbd6290f */
#if BIND_FetchOptions_update_fetchhead_FIELD_WRITER
/* set_update_fetchhead
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_FetchOptions_set_update_fetchhead(mrb_state* mrb, mrb_value self) {
  git_fetch_options * native_self = mruby_unbox_git_fetch_options(self);
  mrb_int native_update_fetchhead;

  mrb_get_args(mrb, "i", &native_update_fetchhead);

  native_self->update_fetchhead = native_update_fetchhead;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::download_tags_reader */
/* sha: b6b50ac477dd7e9d1fdb2af229fcc4bf6f62a91497b2dfcaaba0682b8672b0c2 */
#if BIND_FetchOptions_download_tags_FIELD_READER
/* get_download_tags
 *
 * Return Type: git_remote_autotag_option_t
 */
mrb_value
mrb_Git_FetchOptions_get_download_tags(mrb_state* mrb, mrb_value self) {
  git_fetch_options * native_self = mruby_unbox_git_fetch_options(self);

  git_remote_autotag_option_t native_download_tags = native_self->download_tags;

  mrb_value download_tags = mrb_fixnum_value(native_download_tags);

  return download_tags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::download_tags_writer */
/* sha: 5bb4e326f8fcaa6d52fe899632ba31a8691dd0e14f08ff2b7dd4a6080490053e */
#if BIND_FetchOptions_download_tags_FIELD_WRITER
/* set_download_tags
 *
 * Parameters:
 * - value: git_remote_autotag_option_t
 */
mrb_value
mrb_Git_FetchOptions_set_download_tags(mrb_state* mrb, mrb_value self) {
  git_fetch_options * native_self = mruby_unbox_git_fetch_options(self);
  mrb_int native_download_tags;

  mrb_get_args(mrb, "i", &native_download_tags);

  native_self->download_tags = native_download_tags;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::custom_headers_reader */
/* sha: ce71e61e308937b074e1f309ec30760a5f346cd933b6b6c53d70c1b8f3d4eab9 */
#if BIND_FetchOptions_custom_headers_FIELD_READER
/* get_custom_headers
 *
 * Return Type: git_strarray
 */
mrb_value
mrb_Git_FetchOptions_get_custom_headers(mrb_state* mrb, mrb_value self) {
  git_fetch_options * native_self = mruby_unbox_git_fetch_options(self);

  git_strarray native_custom_headers = native_self->custom_headers;

  git_strarray* new_custom_headers = TODO_move_git_strarray_to_heap(native_custom_headers);
  mrb_value custom_headers = mruby_box_git_strarray(mrb, &native_custom_headers);

  return custom_headers;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::custom_headers_writer */
/* sha: 0251d0dd7db46b3e7419d721126d42fd536f9400185d0f3f36ba8e5abee0b365 */
#if BIND_FetchOptions_custom_headers_FIELD_WRITER
/* set_custom_headers
 *
 * Parameters:
 * - value: git_strarray
 */
mrb_value
mrb_Git_FetchOptions_set_custom_headers(mrb_state* mrb, mrb_value self) {
  git_fetch_options * native_self = mruby_unbox_git_fetch_options(self);
  mrb_value custom_headers;

  mrb_get_args(mrb, "o", &custom_headers);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, custom_headers, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }

  git_strarray native_custom_headers = *(mruby_unbox_git_strarray(custom_headers));

  native_self->custom_headers = native_custom_headers;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_FetchOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: FetchOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::class_definition */
/* sha: 794a93f541fcfe0c7a40c51c7ad49833b25df7dee907c8016084ba5413e1822f */
  struct RClass* FetchOptions_class = mrb_define_class_under(mrb, Git_module(mrb), "FetchOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(FetchOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::class_method_definitions */
/* sha: 1a8477ffd35895bd94b4c3fd16a8e7e98260ebf72291177bcd843dbea6fac3a7 */
#if BIND_FetchOptions_INITIALIZE
  mrb_define_method(mrb, FetchOptions_class, "initialize", mrb_Git_FetchOptions_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::attr_definitions */
/* sha: c0eb00cdfc0c97bee621445d8f3ec402fd0c219077877947dc3ed43e4be8d3af */
  /*
   * Fields
   */
#if BIND_FetchOptions_version_FIELD_READER
  mrb_define_method(mrb, FetchOptions_class, "version", mrb_Git_FetchOptions_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_FetchOptions_version_FIELD_WRITER
  mrb_define_method(mrb, FetchOptions_class, "version=", mrb_Git_FetchOptions_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_FetchOptions_callbacks_FIELD_READER
  mrb_define_method(mrb, FetchOptions_class, "callbacks", mrb_Git_FetchOptions_get_callbacks, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_FetchOptions_callbacks_FIELD_WRITER
  mrb_define_method(mrb, FetchOptions_class, "callbacks=", mrb_Git_FetchOptions_set_callbacks, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_FetchOptions_prune_FIELD_READER
  mrb_define_method(mrb, FetchOptions_class, "prune", mrb_Git_FetchOptions_get_prune, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_FetchOptions_prune_FIELD_WRITER
  mrb_define_method(mrb, FetchOptions_class, "prune=", mrb_Git_FetchOptions_set_prune, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_FetchOptions_update_fetchhead_FIELD_READER
  mrb_define_method(mrb, FetchOptions_class, "update_fetchhead", mrb_Git_FetchOptions_get_update_fetchhead, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_FetchOptions_update_fetchhead_FIELD_WRITER
  mrb_define_method(mrb, FetchOptions_class, "update_fetchhead=", mrb_Git_FetchOptions_set_update_fetchhead, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_FetchOptions_download_tags_FIELD_READER
  mrb_define_method(mrb, FetchOptions_class, "download_tags", mrb_Git_FetchOptions_get_download_tags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_FetchOptions_download_tags_FIELD_WRITER
  mrb_define_method(mrb, FetchOptions_class, "download_tags=", mrb_Git_FetchOptions_set_download_tags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_FetchOptions_custom_headers_FIELD_READER
  mrb_define_method(mrb, FetchOptions_class, "custom_headers", mrb_Git_FetchOptions_get_custom_headers, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_FetchOptions_custom_headers_FIELD_WRITER
  mrb_define_method(mrb, FetchOptions_class, "custom_headers=", mrb_Git_FetchOptions_set_custom_headers, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
