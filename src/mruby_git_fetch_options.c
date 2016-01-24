/*
 * git_fetch_options
 * Defined in file remote.h @ line 523
 */

#include "mruby_Git.h"

#if BIND_FetchOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: FetchOptions::initialize */
/* sha: 5f7d0f937fab4efdf7832d82addcc682b7ee552958737ea6551f968c51ca7f91 */
#if BIND_FetchOptions_INITIALIZE
mrb_value
mrb_Git_FetchOptions_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_fetch_options* native_object = (git_fetch_options*)calloc(1, sizeof(git_fetch_options));
  mruby_gift_git_fetch_options_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::disown */
/* sha: 9d513f1439f4606cf369c837b34bf8ab870f576a0c6d7c62906fd8cce1c9aa8c */
mrb_value
mrb_Git_FetchOptions_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::FetchOptions.disown only accepts objects of type Git::FetchOptions");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::belongs_to_ruby */
/* sha: 0dc0c695fef45434e238bfed4eb7709a0c95f7e7782e01ffdf96ff58baf9449c */
mrb_value
mrb_Git_FetchOptions_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::FetchOptions.belongs_to_ruby only accepts objects of type Git::FetchOptions");
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
/* sha: 20bfd4e18a2f37fd6d3451f9e716ca7505fb64e2a7619a789faa6513216135a3 */
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
/* sha: 9130031ebef0228fdfbc505d644aded612544d70685fabe726865e11fd4efc14 */
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
/* sha: 1abead41790572dacf76dc65ed0db039a8c5e32b8882ecffffb820dbd4e67162 */
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
/* sha: 25365b762cb9ca5baa93d748ff37f5218db5415185f53abb49725b2b831b09ac */
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
/* sha: 8ad38bcaf4ad69c66f0fa4f5cd3a7660e943bbb3854ccde75d6b7cea3d5a903b */
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
/* sha: b466b4bcf81d762d614a039324742971d1ba31f59a86b9f836c8674e9ffb4b51 */
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
/* sha: 549462fb2e96ab0a8814ac157350792814abad46aaca0bea3dd3947d75e0f440 */
#if BIND_FetchOptions_INITIALIZE
  mrb_define_method(mrb, FetchOptions_class, "initialize", mrb_Git_FetchOptions_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, FetchOptions_class, "disown", mrb_Git_FetchOptions_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, FetchOptions_class, "belongs_to_ruby?", mrb_Git_FetchOptions_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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