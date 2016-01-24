/*
 * git_submodule_update_options
 * Defined in file submodule.h @ line 129
 */

#include "mruby_Git.h"

#if BIND_SubmoduleUpdateOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

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

/* MRUBY_BINDING: SubmoduleUpdateOptions::disown */
/* sha: 9d0b4bc00b6451921a4acc5788a8d689ad52f12dda3da822452397cf9a5e308b */
mrb_value
mrb_Git_SubmoduleUpdateOptions_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::SubmoduleUpdateOptions.disown only accepts objects of type Git::SubmoduleUpdateOptions");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SubmoduleUpdateOptions::belongs_to_ruby */
/* sha: 033e2763d1fd8477e081742fbeb402e24f7998a0eba505c811d0462700678d80 */
mrb_value
mrb_Git_SubmoduleUpdateOptions_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::SubmoduleUpdateOptions.belongs_to_ruby only accepts objects of type Git::SubmoduleUpdateOptions");
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
/* sha: b211ace91271d8bf8bc4cd44845882c73816472f35c6fc4caec1795c666aa9e3 */
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
/* sha: 5d78460f7d7214043d65f58861b0e1f0bd3af45aa0a7dd7e62f91a4d234abc9c */
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
/* sha: 6cb1ba31befd756eb9474e4b56340e911993be2e5bc771d221fddd39ee603b51 */
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
/* sha: ac16f23dba5dcecb6c62059a63dbe1cc6c64fa64af4f45de13585a5756608bbe */
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
/* sha: 42b8151bc2f3b3f69de5e79362d541f0f5b96d68bff3734ecad2f19c35516655 */
#if BIND_SubmoduleUpdateOptions_INITIALIZE
  mrb_define_method(mrb, SubmoduleUpdateOptions_class, "initialize", mrb_Git_SubmoduleUpdateOptions_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, SubmoduleUpdateOptions_class, "disown", mrb_Git_SubmoduleUpdateOptions_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, SubmoduleUpdateOptions_class, "belongs_to_ruby?", mrb_Git_SubmoduleUpdateOptions_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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
