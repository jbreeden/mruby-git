/*
 * git_submodule_update_options
 * Defined in file submodule.h @ line 129
 */

#include "mruby_Git.h"

#if BIND_SubmoduleUpdateOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SubmoduleUpdateOptions::initialize */
/* sha: bd033825ac0994feb37a31ea29e21b93b8e5707f2b9f942ca896e6a75deda3d1 */
#if BIND_SubmoduleUpdateOptions_INITIALIZE
mrb_value
mrb_Git_SubmoduleUpdateOptions_initialize(mrb_state* mrb, mrb_value self) {
  git_submodule_update_options* native_object = (git_submodule_update_options*)calloc(1, sizeof(git_submodule_update_options));
  mruby_gift_git_submodule_update_options_data_ptr(self, native_object);
  git_submodule_update_init_options(native_object, GIT_SUBMODULE_UPDATE_OPTIONS_VERSION);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: SubmoduleUpdateOptions::version_reader */
/* sha: 673e4f36c4702ad4b2bf1dafeab41303679eeef4d86e35e45f646180af1d67e5 */
#if BIND_SubmoduleUpdateOptions_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_SubmoduleUpdateOptions_get_version(mrb_state* mrb, mrb_value self) {
  git_submodule_update_options * native_self = mruby_unbox_git_submodule_update_options(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SubmoduleUpdateOptions::version_writer */
/* sha: f22663f237e1878b7ee9ec3792dc477f9a67c51121361fdb61d83e6f2f60afee */
#if BIND_SubmoduleUpdateOptions_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_SubmoduleUpdateOptions_set_version(mrb_state* mrb, mrb_value self) {
  git_submodule_update_options * native_self = mruby_unbox_git_submodule_update_options(self);
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

/* MRUBY_BINDING: SubmoduleUpdateOptions::checkout_opts_reader */
/* sha: 0fe06e4f21066870672599a70060f590f751925463976ce5de4bdc1e2b25392c */
#if BIND_SubmoduleUpdateOptions_checkout_opts_FIELD_READER
/* get_checkout_opts
 *
 * Return Type: git_checkout_options
 */
mrb_value
mrb_Git_SubmoduleUpdateOptions_get_checkout_opts(mrb_state* mrb, mrb_value self) {
  git_submodule_update_options * native_self = mruby_unbox_git_submodule_update_options(self);

  git_checkout_options native_checkout_opts = native_self->checkout_opts;

  git_checkout_options* new_checkout_opts = TODO_move_git_checkout_options_to_heap(native_checkout_opts);
  mrb_value checkout_opts = mruby_box_git_checkout_options(mrb, &native_checkout_opts);

  return checkout_opts;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SubmoduleUpdateOptions::checkout_opts_writer */
/* sha: 6e75448176db5f86ef54e791c607bbd9bde74a25f97ed06bec4a2285b126aa64 */
#if BIND_SubmoduleUpdateOptions_checkout_opts_FIELD_WRITER
/* set_checkout_opts
 *
 * Parameters:
 * - value: git_checkout_options
 */
mrb_value
mrb_Git_SubmoduleUpdateOptions_set_checkout_opts(mrb_state* mrb, mrb_value self) {
  git_submodule_update_options * native_self = mruby_unbox_git_submodule_update_options(self);
  mrb_value checkout_opts;

  mrb_get_args(mrb, "o", &checkout_opts);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, checkout_opts, CheckoutOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "CheckoutOptions expected");
    return mrb_nil_value();
  }

  git_checkout_options native_checkout_opts = *(mruby_unbox_git_checkout_options(checkout_opts));

  native_self->checkout_opts = native_checkout_opts;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SubmoduleUpdateOptions::fetch_opts_reader */
/* sha: 41c57088973b0c17ed0465e5ae709a3c9137c5356cacf652b1511478528fab6f */
#if BIND_SubmoduleUpdateOptions_fetch_opts_FIELD_READER
/* get_fetch_opts
 *
 * Return Type: git_fetch_options
 */
mrb_value
mrb_Git_SubmoduleUpdateOptions_get_fetch_opts(mrb_state* mrb, mrb_value self) {
  git_submodule_update_options * native_self = mruby_unbox_git_submodule_update_options(self);

  git_fetch_options native_fetch_opts = native_self->fetch_opts;

  git_fetch_options* new_fetch_opts = TODO_move_git_fetch_options_to_heap(native_fetch_opts);
  mrb_value fetch_opts = mruby_box_git_fetch_options(mrb, &native_fetch_opts);

  return fetch_opts;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SubmoduleUpdateOptions::fetch_opts_writer */
/* sha: 0ad1b4bbd57f4c92e397072f7d4b3b2dd96e0e221ee95696f97d07d3820fecf6 */
#if BIND_SubmoduleUpdateOptions_fetch_opts_FIELD_WRITER
/* set_fetch_opts
 *
 * Parameters:
 * - value: git_fetch_options
 */
mrb_value
mrb_Git_SubmoduleUpdateOptions_set_fetch_opts(mrb_state* mrb, mrb_value self) {
  git_submodule_update_options * native_self = mruby_unbox_git_submodule_update_options(self);
  mrb_value fetch_opts;

  mrb_get_args(mrb, "o", &fetch_opts);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, fetch_opts, FetchOptions_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "FetchOptions expected");
    return mrb_nil_value();
  }

  git_fetch_options native_fetch_opts = *(mruby_unbox_git_fetch_options(fetch_opts));

  native_self->fetch_opts = native_fetch_opts;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SubmoduleUpdateOptions::clone_checkout_strategy_reader */
/* sha: 54e64b29ef85568eb2471a5443a41079199a65b55bb4f7717a8cd08dcfa13b7e */
#if BIND_SubmoduleUpdateOptions_clone_checkout_strategy_FIELD_READER
/* get_clone_checkout_strategy
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_SubmoduleUpdateOptions_get_clone_checkout_strategy(mrb_state* mrb, mrb_value self) {
  git_submodule_update_options * native_self = mruby_unbox_git_submodule_update_options(self);

  unsigned int native_clone_checkout_strategy = native_self->clone_checkout_strategy;

  mrb_value clone_checkout_strategy = mrb_fixnum_value(native_clone_checkout_strategy);

  return clone_checkout_strategy;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SubmoduleUpdateOptions::clone_checkout_strategy_writer */
/* sha: e8d0f935a178f2e8c62a55ea7208ecfc9e9d9443948e741b36cd5470fb602399 */
#if BIND_SubmoduleUpdateOptions_clone_checkout_strategy_FIELD_WRITER
/* set_clone_checkout_strategy
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_SubmoduleUpdateOptions_set_clone_checkout_strategy(mrb_state* mrb, mrb_value self) {
  git_submodule_update_options * native_self = mruby_unbox_git_submodule_update_options(self);
  mrb_int native_clone_checkout_strategy;

  mrb_get_args(mrb, "i", &native_clone_checkout_strategy);

  native_self->clone_checkout_strategy = native_clone_checkout_strategy;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_SubmoduleUpdateOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: SubmoduleUpdateOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SubmoduleUpdateOptions::class_definition */
/* sha: 01bcae609a06803ec78598881690e0e228acba7a45acd70af21b217aab8f6e55 */
  struct RClass* SubmoduleUpdateOptions_class = mrb_define_class_under(mrb, Git_module(mrb), "SubmoduleUpdateOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(SubmoduleUpdateOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SubmoduleUpdateOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SubmoduleUpdateOptions::class_method_definitions */
/* sha: 3a59cc924684fb996a233ba800fe677c85c45fd172c302d6a5892e2c055ece04 */
#if BIND_SubmoduleUpdateOptions_INITIALIZE
  mrb_define_method(mrb, SubmoduleUpdateOptions_class, "initialize", mrb_Git_SubmoduleUpdateOptions_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SubmoduleUpdateOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SubmoduleUpdateOptions::attr_definitions */
/* sha: 69a5bd40efafcb419dd5c6bf163ac21434313a244042d699b0386279a3fb44dd */
  /*
   * Fields
   */
#if BIND_SubmoduleUpdateOptions_version_FIELD_READER
  mrb_define_method(mrb, SubmoduleUpdateOptions_class, "version", mrb_Git_SubmoduleUpdateOptions_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SubmoduleUpdateOptions_version_FIELD_WRITER
  mrb_define_method(mrb, SubmoduleUpdateOptions_class, "version=", mrb_Git_SubmoduleUpdateOptions_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SubmoduleUpdateOptions_checkout_opts_FIELD_READER
  mrb_define_method(mrb, SubmoduleUpdateOptions_class, "checkout_opts", mrb_Git_SubmoduleUpdateOptions_get_checkout_opts, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SubmoduleUpdateOptions_checkout_opts_FIELD_WRITER
  mrb_define_method(mrb, SubmoduleUpdateOptions_class, "checkout_opts=", mrb_Git_SubmoduleUpdateOptions_set_checkout_opts, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SubmoduleUpdateOptions_fetch_opts_FIELD_READER
  mrb_define_method(mrb, SubmoduleUpdateOptions_class, "fetch_opts", mrb_Git_SubmoduleUpdateOptions_get_fetch_opts, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SubmoduleUpdateOptions_fetch_opts_FIELD_WRITER
  mrb_define_method(mrb, SubmoduleUpdateOptions_class, "fetch_opts=", mrb_Git_SubmoduleUpdateOptions_set_fetch_opts, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_SubmoduleUpdateOptions_clone_checkout_strategy_FIELD_READER
  mrb_define_method(mrb, SubmoduleUpdateOptions_class, "clone_checkout_strategy", mrb_Git_SubmoduleUpdateOptions_get_clone_checkout_strategy, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_SubmoduleUpdateOptions_clone_checkout_strategy_FIELD_WRITER
  mrb_define_method(mrb, SubmoduleUpdateOptions_class, "clone_checkout_strategy=", mrb_Git_SubmoduleUpdateOptions_set_clone_checkout_strategy, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SubmoduleUpdateOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SubmoduleUpdateOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SubmoduleUpdateOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
