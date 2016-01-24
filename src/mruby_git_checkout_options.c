/*
 * git_checkout_options
 * Defined in file checkout.h @ line 251
 */

#include "mruby_Git.h"

#if BIND_CheckoutOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: CheckoutOptions::initialize */
/* sha: e51116998ebd0383b2115158a77bcac7150dca1de63a3727c70ed438527184b9 */
#if BIND_CheckoutOptions_INITIALIZE
mrb_value
mrb_Git_CheckoutOptions_initialize(mrb_state* mrb, mrb_value self) {
  git_checkout_options* native_object = (git_checkout_options*)calloc(1, sizeof(git_checkout_options));
  mruby_gift_git_checkout_options_data_ptr(self, native_object);
  git_checkout_init_options(native_object, GIT_CHECKOUT_OPTIONS_VERSION);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::disown */
/* sha: ea61662205719cb49d7c6c3fd414bde757f92d7693b6c696d05ceb9285b153c2 */
mrb_value
mrb_Git_CheckoutOptions_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::CheckoutOptions.disown only accepts objects of type Git::CheckoutOptions");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::belongs_to_ruby */
/* sha: 6f9eb666c4db8760aa493c29f6c65aff75b6724f36c04d61e10f2889f9b07832 */
mrb_value
mrb_Git_CheckoutOptions_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::CheckoutOptions.belongs_to_ruby only accepts objects of type Git::CheckoutOptions");
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

/* MRUBY_BINDING: CheckoutOptions::version_reader */
/* sha: 14f55c115db32b05759668362a2a42046d899c24577ff7444bec95772c2d9564 */
#if BIND_CheckoutOptions_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_CheckoutOptions_get_version(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::version_writer */
/* sha: 1d4df9d8f5196423181b9e557dd92eb27b6737f078ee7d8c9b21edaca97dbe32 */
#if BIND_CheckoutOptions_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_CheckoutOptions_set_version(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  mrb_int native_version;

  mrb_get_args(mrb, "i", &native_version);

  native_self->version = native_version;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::checkout_strategy_reader */
/* sha: 5f5457e748cb2769a553fcae07c66224bf2ff8c5735a4c9df9f1d290df41a5e8 */
#if BIND_CheckoutOptions_checkout_strategy_FIELD_READER
/* get_checkout_strategy
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_CheckoutOptions_get_checkout_strategy(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  unsigned int native_checkout_strategy = native_self->checkout_strategy;

  mrb_value checkout_strategy = mrb_fixnum_value(native_checkout_strategy);

  return checkout_strategy;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::checkout_strategy_writer */
/* sha: 8fe2e2857bf38214903a0e45ab533acf5728cdc2e69ce75b71d27485da71a0a9 */
#if BIND_CheckoutOptions_checkout_strategy_FIELD_WRITER
/* set_checkout_strategy
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_CheckoutOptions_set_checkout_strategy(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  mrb_int native_checkout_strategy;

  mrb_get_args(mrb, "i", &native_checkout_strategy);

  native_self->checkout_strategy = native_checkout_strategy;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::disable_filters_reader */
/* sha: 17deaa72f60fb56853dcaa6d116703dbffd36ffb587ae006556e50dfbbfdcc32 */
#if BIND_CheckoutOptions_disable_filters_FIELD_READER
/* get_disable_filters
 *
 * Return Type: int
 */
mrb_value
mrb_Git_CheckoutOptions_get_disable_filters(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  int native_disable_filters = native_self->disable_filters;

  mrb_value disable_filters = mrb_fixnum_value(native_disable_filters);

  return disable_filters;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::disable_filters_writer */
/* sha: 27abd291ba850fb2dd62ae3bbe16f963dd815259709c18a85de98f29d946428a */
#if BIND_CheckoutOptions_disable_filters_FIELD_WRITER
/* set_disable_filters
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_CheckoutOptions_set_disable_filters(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  mrb_int native_disable_filters;

  mrb_get_args(mrb, "i", &native_disable_filters);

  native_self->disable_filters = native_disable_filters;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::dir_mode_reader */
/* sha: f716c573ab020c4fc0c6340c02c9075bca2ecdbea830d8a7b4b1396054685042 */
#if BIND_CheckoutOptions_dir_mode_FIELD_READER
/* get_dir_mode
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_CheckoutOptions_get_dir_mode(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  unsigned int native_dir_mode = native_self->dir_mode;

  mrb_value dir_mode = mrb_fixnum_value(native_dir_mode);

  return dir_mode;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::dir_mode_writer */
/* sha: 95f628ff88aee5c86608d5dd6f3e2427a5cb509326315c142b831e57580c6075 */
#if BIND_CheckoutOptions_dir_mode_FIELD_WRITER
/* set_dir_mode
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_CheckoutOptions_set_dir_mode(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  mrb_int native_dir_mode;

  mrb_get_args(mrb, "i", &native_dir_mode);

  native_self->dir_mode = native_dir_mode;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::file_mode_reader */
/* sha: afdcca14480442015478ff83521ce1697f409d6fd2ca405ef7bf11eb9474fbeb */
#if BIND_CheckoutOptions_file_mode_FIELD_READER
/* get_file_mode
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_CheckoutOptions_get_file_mode(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  unsigned int native_file_mode = native_self->file_mode;

  mrb_value file_mode = mrb_fixnum_value(native_file_mode);

  return file_mode;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::file_mode_writer */
/* sha: bd397e0f0530dbe59795695c118ad79d60352902c31aa792fed7bc6cbd781915 */
#if BIND_CheckoutOptions_file_mode_FIELD_WRITER
/* set_file_mode
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_CheckoutOptions_set_file_mode(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  mrb_int native_file_mode;

  mrb_get_args(mrb, "i", &native_file_mode);

  native_self->file_mode = native_file_mode;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::file_open_flags_reader */
/* sha: 44b342650782aef8f9647073ab7ed0986e45d4eb7671ad6d9f0696db4fd620f1 */
#if BIND_CheckoutOptions_file_open_flags_FIELD_READER
/* get_file_open_flags
 *
 * Return Type: int
 */
mrb_value
mrb_Git_CheckoutOptions_get_file_open_flags(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  int native_file_open_flags = native_self->file_open_flags;

  mrb_value file_open_flags = mrb_fixnum_value(native_file_open_flags);

  return file_open_flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::file_open_flags_writer */
/* sha: 799ff88c3fd193dc06799a3f23f9ec55b3720f446d2452e560becbbd44aaf9a5 */
#if BIND_CheckoutOptions_file_open_flags_FIELD_WRITER
/* set_file_open_flags
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_CheckoutOptions_set_file_open_flags(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  mrb_int native_file_open_flags;

  mrb_get_args(mrb, "i", &native_file_open_flags);

  native_self->file_open_flags = native_file_open_flags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::notify_flags_reader */
/* sha: 593c9c8459ddce5b062ec3ae5e91e4e677006db9e0f7c274f343e9832a3a4a6c */
#if BIND_CheckoutOptions_notify_flags_FIELD_READER
/* get_notify_flags
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_CheckoutOptions_get_notify_flags(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  unsigned int native_notify_flags = native_self->notify_flags;

  mrb_value notify_flags = mrb_fixnum_value(native_notify_flags);

  return notify_flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::notify_flags_writer */
/* sha: 260e1f318c9495889ba5118c9c923c1dd277c29bb4c9b5a64cb557e8b5d473f1 */
#if BIND_CheckoutOptions_notify_flags_FIELD_WRITER
/* set_notify_flags
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_CheckoutOptions_set_notify_flags(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  mrb_int native_notify_flags;

  mrb_get_args(mrb, "i", &native_notify_flags);

  native_self->notify_flags = native_notify_flags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::notify_cb_reader */
/* sha: 56b52a5b629c3fd695ae5b4f39986c8ad84e53c1e492a5fbc4aa3c9c61ef99a3 */
#if BIND_CheckoutOptions_notify_cb_FIELD_READER
/* get_notify_cb
 *
 * Return Type: git_checkout_notify_cb
 */
mrb_value
mrb_Git_CheckoutOptions_get_notify_cb(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  git_checkout_notify_cb native_notify_cb = native_self->notify_cb;

  mrb_value notify_cb = TODO_mruby_box_git_checkout_notify_cb(mrb, native_notify_cb);

  return notify_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::notify_cb_writer */
/* sha: 3e2205a80c4c9bdc75756defb0edbc05a28ebc9ec3552f3721129782bee8cb05 */
#if BIND_CheckoutOptions_notify_cb_FIELD_WRITER
/* set_notify_cb
 *
 * Parameters:
 * - value: git_checkout_notify_cb
 */
mrb_value
mrb_Git_CheckoutOptions_set_notify_cb(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  mrb_value notify_cb;

  mrb_get_args(mrb, "o", &notify_cb);

  /* type checking */
  TODO_type_check_git_checkout_notify_cb(notify_cb);

  git_checkout_notify_cb native_notify_cb = TODO_mruby_unbox_git_checkout_notify_cb(notify_cb);

  native_self->notify_cb = native_notify_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::notify_payload_reader */
/* sha: 8157e52b0620f23db31da0b46d7d1c2ecc18b922b44dbbb4fa56d6fad516799e */
#if BIND_CheckoutOptions_notify_payload_FIELD_READER
/* get_notify_payload
 *
 * Return Type: void *
 */
mrb_value
mrb_Git_CheckoutOptions_get_notify_payload(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  void * native_notify_payload = native_self->notify_payload;

  mrb_value notify_payload = TODO_mruby_box_void_PTR(mrb, native_notify_payload);

  return notify_payload;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::notify_payload_writer */
/* sha: 03f9ec46f0517cd62c3f1dcef2681218213919f124a3ff41f2f021b8117d3374 */
#if BIND_CheckoutOptions_notify_payload_FIELD_WRITER
/* set_notify_payload
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_Git_CheckoutOptions_set_notify_payload(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  mrb_value notify_payload;

  mrb_get_args(mrb, "o", &notify_payload);

  /* type checking */
  TODO_type_check_void_PTR(notify_payload);

  void * native_notify_payload = TODO_mruby_unbox_void_PTR(notify_payload);

  native_self->notify_payload = native_notify_payload;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::progress_cb_reader */
/* sha: 9cef68c177eb183e78155fa29a172383e44ada073f5647eb83dcb41d8671ea85 */
#if BIND_CheckoutOptions_progress_cb_FIELD_READER
/* get_progress_cb
 *
 * Return Type: git_checkout_progress_cb
 */
mrb_value
mrb_Git_CheckoutOptions_get_progress_cb(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  git_checkout_progress_cb native_progress_cb = native_self->progress_cb;

  mrb_value progress_cb = TODO_mruby_box_git_checkout_progress_cb(mrb, native_progress_cb);

  return progress_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::progress_cb_writer */
/* sha: 3dc55f28684228196001ee6270d232f4f084c94b659089cbb44b751c844e22c2 */
#if BIND_CheckoutOptions_progress_cb_FIELD_WRITER
/* set_progress_cb
 *
 * Parameters:
 * - value: git_checkout_progress_cb
 */
mrb_value
mrb_Git_CheckoutOptions_set_progress_cb(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  mrb_value progress_cb;

  mrb_get_args(mrb, "o", &progress_cb);

  /* type checking */
  TODO_type_check_git_checkout_progress_cb(progress_cb);

  git_checkout_progress_cb native_progress_cb = TODO_mruby_unbox_git_checkout_progress_cb(progress_cb);

  native_self->progress_cb = native_progress_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::progress_payload_reader */
/* sha: e68c5c81cbfa18f8968977a79ee337216fd152baa14bd3d8245388b75d95e34b */
#if BIND_CheckoutOptions_progress_payload_FIELD_READER
/* get_progress_payload
 *
 * Return Type: void *
 */
mrb_value
mrb_Git_CheckoutOptions_get_progress_payload(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  void * native_progress_payload = native_self->progress_payload;

  mrb_value progress_payload = TODO_mruby_box_void_PTR(mrb, native_progress_payload);

  return progress_payload;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::progress_payload_writer */
/* sha: 9f320611a5cb370be68f2a45f4cff90578a3d3218797d127c51dd4b72faa444f */
#if BIND_CheckoutOptions_progress_payload_FIELD_WRITER
/* set_progress_payload
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_Git_CheckoutOptions_set_progress_payload(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  mrb_value progress_payload;

  mrb_get_args(mrb, "o", &progress_payload);

  /* type checking */
  TODO_type_check_void_PTR(progress_payload);

  void * native_progress_payload = TODO_mruby_unbox_void_PTR(progress_payload);

  native_self->progress_payload = native_progress_payload;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::paths_reader */
/* sha: 0c97a0d52d1cd55f3c46b809eba48d0b09b21e575bea98055a9b50bf7cefbb47 */
#if BIND_CheckoutOptions_paths_FIELD_READER
/* get_paths
 *
 * Return Type: git_strarray
 */
mrb_value
mrb_Git_CheckoutOptions_get_paths(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  git_strarray native_paths = native_self->paths;

  git_strarray* new_paths = TODO_move_git_strarray_to_heap(native_paths);
  mrb_value paths = mruby_box_git_strarray(mrb, &native_paths);

  return paths;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::paths_writer */
/* sha: f927cccd1abfa5928a3d6c91f95855d3aeb0d495203fd77546d1f47a0e6a96f7 */
#if BIND_CheckoutOptions_paths_FIELD_WRITER
/* set_paths
 *
 * Parameters:
 * - value: git_strarray
 */
mrb_value
mrb_Git_CheckoutOptions_set_paths(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  mrb_value paths;

  mrb_get_args(mrb, "o", &paths);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, paths, Strarray_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Strarray expected");
    return mrb_nil_value();
  }

  git_strarray native_paths = *(mruby_unbox_git_strarray(paths));

  native_self->paths = native_paths;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::baseline_reader */
/* sha: f2d3c23fdd3cf0008aaf9e57e36ce27150ecae37322fa7cea128ee64f924254c */
#if BIND_CheckoutOptions_baseline_FIELD_READER
/* get_baseline
 *
 * Return Type: git_tree *
 */
mrb_value
mrb_Git_CheckoutOptions_get_baseline(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  git_tree * native_baseline = native_self->baseline;

  mrb_value baseline = (native_baseline == NULL ? mrb_nil_value() : mruby_box_git_tree(mrb, native_baseline));

  return baseline;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::baseline_writer */
/* sha: 015727f39273c6de71cfabfb2ebfabd1799b5208bdf0fbcfa8e6009fdb8907f8 */
#if BIND_CheckoutOptions_baseline_FIELD_WRITER
/* set_baseline
 *
 * Parameters:
 * - value: git_tree *
 */
mrb_value
mrb_Git_CheckoutOptions_set_baseline(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  mrb_value baseline;

  mrb_get_args(mrb, "o", &baseline);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, baseline, Tree_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Tree expected");
    return mrb_nil_value();
  }

  git_tree * native_baseline = (mrb_nil_p(baseline) ? NULL : mruby_unbox_git_tree(baseline));

  native_self->baseline = native_baseline;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::baseline_index_reader */
/* sha: 0c681a36056ebdde0fc426aeecfc04fcc84f95dd982fb8353e8a73f8a1edfd8e */
#if BIND_CheckoutOptions_baseline_index_FIELD_READER
/* get_baseline_index
 *
 * Return Type: git_index *
 */
mrb_value
mrb_Git_CheckoutOptions_get_baseline_index(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  git_index * native_baseline_index = native_self->baseline_index;

  mrb_value baseline_index = (native_baseline_index == NULL ? mrb_nil_value() : mruby_box_git_index(mrb, native_baseline_index));

  return baseline_index;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::baseline_index_writer */
/* sha: 9d33a94b85007f21948df3d8188bae2cc7a18e9ff3396f82d8416299d9808097 */
#if BIND_CheckoutOptions_baseline_index_FIELD_WRITER
/* set_baseline_index
 *
 * Parameters:
 * - value: git_index *
 */
mrb_value
mrb_Git_CheckoutOptions_set_baseline_index(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  mrb_value baseline_index;

  mrb_get_args(mrb, "o", &baseline_index);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, baseline_index, Index_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Index expected");
    return mrb_nil_value();
  }

  git_index * native_baseline_index = (mrb_nil_p(baseline_index) ? NULL : mruby_unbox_git_index(baseline_index));

  native_self->baseline_index = native_baseline_index;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::target_directory_reader */
/* sha: b08d58c9e9b2aa199e0c0eec1d6a7f326e9e357c6a77e73789fab259b8cf3355 */
#if BIND_CheckoutOptions_target_directory_FIELD_READER
/* get_target_directory
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_CheckoutOptions_get_target_directory(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  const char * native_target_directory = native_self->target_directory;

  mrb_value target_directory = native_target_directory == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_target_directory);

  return target_directory;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::target_directory_writer */
/* sha: 6b7a357f8dfb937469ef6adbc544b548bc8e41e23fbeff1344649fe9abb50b47 */
#if BIND_CheckoutOptions_target_directory_FIELD_WRITER
/* set_target_directory
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_CheckoutOptions_set_target_directory(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  char * native_target_directory = NULL;

  mrb_get_args(mrb, "z", &native_target_directory);

  native_self->target_directory = native_target_directory;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::ancestor_label_reader */
/* sha: db1371a81471835a7c6db9cfa1bbeb766163e3a335eb882dc1b30706150110c2 */
#if BIND_CheckoutOptions_ancestor_label_FIELD_READER
/* get_ancestor_label
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_CheckoutOptions_get_ancestor_label(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  const char * native_ancestor_label = native_self->ancestor_label;

  mrb_value ancestor_label = native_ancestor_label == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_ancestor_label);

  return ancestor_label;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::ancestor_label_writer */
/* sha: 0952d2abf710acc3d46f82c8429c0a65e2da7f160d4792c04487b0162ebfb9a9 */
#if BIND_CheckoutOptions_ancestor_label_FIELD_WRITER
/* set_ancestor_label
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_CheckoutOptions_set_ancestor_label(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  char * native_ancestor_label = NULL;

  mrb_get_args(mrb, "z", &native_ancestor_label);

  native_self->ancestor_label = native_ancestor_label;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::our_label_reader */
/* sha: c0620c40ad48213abd929adb4f1369a3d812b98389cea49de704733ee1fb2979 */
#if BIND_CheckoutOptions_our_label_FIELD_READER
/* get_our_label
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_CheckoutOptions_get_our_label(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  const char * native_our_label = native_self->our_label;

  mrb_value our_label = native_our_label == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_our_label);

  return our_label;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::our_label_writer */
/* sha: e1a8fd67600491395b524341812f1031a6da684e2cea04f0958cd32f6965e23b */
#if BIND_CheckoutOptions_our_label_FIELD_WRITER
/* set_our_label
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_CheckoutOptions_set_our_label(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  char * native_our_label = NULL;

  mrb_get_args(mrb, "z", &native_our_label);

  native_self->our_label = native_our_label;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::their_label_reader */
/* sha: 364e3b2431bfb724f32f5d82bb23646d6a8026b71903759243a8b36d1da3b7a0 */
#if BIND_CheckoutOptions_their_label_FIELD_READER
/* get_their_label
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_CheckoutOptions_get_their_label(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  const char * native_their_label = native_self->their_label;

  mrb_value their_label = native_their_label == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_their_label);

  return their_label;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::their_label_writer */
/* sha: 8e26a14c4e0b891274bf7bcb1405849e6f26eee966129ab94d806fc53ac82e99 */
#if BIND_CheckoutOptions_their_label_FIELD_WRITER
/* set_their_label
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_CheckoutOptions_set_their_label(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  char * native_their_label = NULL;

  mrb_get_args(mrb, "z", &native_their_label);

  native_self->their_label = native_their_label;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::perfdata_cb_reader */
/* sha: 41f40857a42363e1bfbc56f8fe3cd56781423ba7ced5f37fd370d0355148fab4 */
#if BIND_CheckoutOptions_perfdata_cb_FIELD_READER
/* get_perfdata_cb
 *
 * Return Type: git_checkout_perfdata_cb
 */
mrb_value
mrb_Git_CheckoutOptions_get_perfdata_cb(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  git_checkout_perfdata_cb native_perfdata_cb = native_self->perfdata_cb;

  mrb_value perfdata_cb = TODO_mruby_box_git_checkout_perfdata_cb(mrb, native_perfdata_cb);

  return perfdata_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::perfdata_cb_writer */
/* sha: a8881ce66942324fdd4ccb16d889fef3e44f882f8a02f9973106d78ef5d32c75 */
#if BIND_CheckoutOptions_perfdata_cb_FIELD_WRITER
/* set_perfdata_cb
 *
 * Parameters:
 * - value: git_checkout_perfdata_cb
 */
mrb_value
mrb_Git_CheckoutOptions_set_perfdata_cb(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  mrb_value perfdata_cb;

  mrb_get_args(mrb, "o", &perfdata_cb);

  /* type checking */
  TODO_type_check_git_checkout_perfdata_cb(perfdata_cb);

  git_checkout_perfdata_cb native_perfdata_cb = TODO_mruby_unbox_git_checkout_perfdata_cb(perfdata_cb);

  native_self->perfdata_cb = native_perfdata_cb;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::perfdata_payload_reader */
/* sha: 34e0a3bd3a51a75377dca8ab2ba58366b96fff94b938cb85cbe04ef2ed67c1a7 */
#if BIND_CheckoutOptions_perfdata_payload_FIELD_READER
/* get_perfdata_payload
 *
 * Return Type: void *
 */
mrb_value
mrb_Git_CheckoutOptions_get_perfdata_payload(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);

  void * native_perfdata_payload = native_self->perfdata_payload;

  mrb_value perfdata_payload = TODO_mruby_box_void_PTR(mrb, native_perfdata_payload);

  return perfdata_payload;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::perfdata_payload_writer */
/* sha: a8c4ea9cc4f3ea166bba1ad2ddb967b129a7191afb447efbe7e84020211a781c */
#if BIND_CheckoutOptions_perfdata_payload_FIELD_WRITER
/* set_perfdata_payload
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_Git_CheckoutOptions_set_perfdata_payload(mrb_state* mrb, mrb_value self) {
  git_checkout_options * native_self = mruby_unbox_git_checkout_options(self);
  mrb_value perfdata_payload;

  mrb_get_args(mrb, "o", &perfdata_payload);

  /* type checking */
  TODO_type_check_void_PTR(perfdata_payload);

  void * native_perfdata_payload = TODO_mruby_unbox_void_PTR(perfdata_payload);

  native_self->perfdata_payload = native_perfdata_payload;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_CheckoutOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: CheckoutOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::class_definition */
/* sha: d2d4f994d3d07c832a82604743597da03989cbe1a864baf24f05ccf1b647c84c */
  struct RClass* CheckoutOptions_class = mrb_define_class_under(mrb, Git_module(mrb), "CheckoutOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(CheckoutOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::class_method_definitions */
/* sha: f8d28733a6297245f859d331e62c16dfdca6fd5ad2871f00777ec117b25a6174 */
#if BIND_CheckoutOptions_INITIALIZE
  mrb_define_method(mrb, CheckoutOptions_class, "initialize", mrb_Git_CheckoutOptions_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, CheckoutOptions_class, "disown", mrb_Git_CheckoutOptions_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, CheckoutOptions_class, "belongs_to_ruby?", mrb_Git_CheckoutOptions_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::attr_definitions */
/* sha: 36c22c4865a05f1403ab0efcf723292edeefb9315ff88a286f69931fe212ba94 */
  /*
   * Fields
   */
#if BIND_CheckoutOptions_version_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "version", mrb_Git_CheckoutOptions_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_version_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "version=", mrb_Git_CheckoutOptions_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutOptions_checkout_strategy_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "checkout_strategy", mrb_Git_CheckoutOptions_get_checkout_strategy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_checkout_strategy_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "checkout_strategy=", mrb_Git_CheckoutOptions_set_checkout_strategy, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutOptions_disable_filters_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "disable_filters", mrb_Git_CheckoutOptions_get_disable_filters, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_disable_filters_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "disable_filters=", mrb_Git_CheckoutOptions_set_disable_filters, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutOptions_dir_mode_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "dir_mode", mrb_Git_CheckoutOptions_get_dir_mode, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_dir_mode_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "dir_mode=", mrb_Git_CheckoutOptions_set_dir_mode, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutOptions_file_mode_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "file_mode", mrb_Git_CheckoutOptions_get_file_mode, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_file_mode_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "file_mode=", mrb_Git_CheckoutOptions_set_file_mode, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutOptions_file_open_flags_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "file_open_flags", mrb_Git_CheckoutOptions_get_file_open_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_file_open_flags_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "file_open_flags=", mrb_Git_CheckoutOptions_set_file_open_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutOptions_notify_flags_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "notify_flags", mrb_Git_CheckoutOptions_get_notify_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_notify_flags_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "notify_flags=", mrb_Git_CheckoutOptions_set_notify_flags, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutOptions_notify_cb_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "notify_cb", mrb_Git_CheckoutOptions_get_notify_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_notify_cb_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "notify_cb=", mrb_Git_CheckoutOptions_set_notify_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutOptions_notify_payload_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "notify_payload", mrb_Git_CheckoutOptions_get_notify_payload, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_notify_payload_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "notify_payload=", mrb_Git_CheckoutOptions_set_notify_payload, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutOptions_progress_cb_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "progress_cb", mrb_Git_CheckoutOptions_get_progress_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_progress_cb_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "progress_cb=", mrb_Git_CheckoutOptions_set_progress_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutOptions_progress_payload_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "progress_payload", mrb_Git_CheckoutOptions_get_progress_payload, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_progress_payload_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "progress_payload=", mrb_Git_CheckoutOptions_set_progress_payload, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutOptions_paths_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "paths", mrb_Git_CheckoutOptions_get_paths, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_paths_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "paths=", mrb_Git_CheckoutOptions_set_paths, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutOptions_baseline_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "baseline", mrb_Git_CheckoutOptions_get_baseline, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_baseline_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "baseline=", mrb_Git_CheckoutOptions_set_baseline, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutOptions_baseline_index_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "baseline_index", mrb_Git_CheckoutOptions_get_baseline_index, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_baseline_index_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "baseline_index=", mrb_Git_CheckoutOptions_set_baseline_index, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutOptions_target_directory_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "target_directory", mrb_Git_CheckoutOptions_get_target_directory, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_target_directory_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "target_directory=", mrb_Git_CheckoutOptions_set_target_directory, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutOptions_ancestor_label_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "ancestor_label", mrb_Git_CheckoutOptions_get_ancestor_label, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_ancestor_label_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "ancestor_label=", mrb_Git_CheckoutOptions_set_ancestor_label, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutOptions_our_label_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "our_label", mrb_Git_CheckoutOptions_get_our_label, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_our_label_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "our_label=", mrb_Git_CheckoutOptions_set_our_label, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutOptions_their_label_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "their_label", mrb_Git_CheckoutOptions_get_their_label, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_their_label_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "their_label=", mrb_Git_CheckoutOptions_set_their_label, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutOptions_perfdata_cb_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "perfdata_cb", mrb_Git_CheckoutOptions_get_perfdata_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_perfdata_cb_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "perfdata_cb=", mrb_Git_CheckoutOptions_set_perfdata_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CheckoutOptions_perfdata_payload_FIELD_READER
  mrb_define_method(mrb, CheckoutOptions_class, "perfdata_payload", mrb_Git_CheckoutOptions_get_perfdata_payload, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CheckoutOptions_perfdata_payload_FIELD_WRITER
  mrb_define_method(mrb, CheckoutOptions_class, "perfdata_payload=", mrb_Git_CheckoutOptions_set_perfdata_payload, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
