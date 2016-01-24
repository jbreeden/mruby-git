/*
 * git_clone_options
 * Defined in file clone.h @ line 103
 */

#include "mruby_Git.h"

#if BIND_CloneOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::initialize */
/* sha: be7c4a14a5c068ea7ba1290e4ed37ef3854fd87a13b1212fcd2187ef5ac0ba4c */
#if BIND_CloneOptions_INITIALIZE
mrb_value
mrb_Git_CloneOptions_initialize(mrb_state* mrb, mrb_value self) {
  git_clone_options* native_object = (git_clone_options*)calloc(1, sizeof(git_clone_options));
  mruby_gift_git_clone_options_data_ptr(self, native_object);
  git_clone_init_options(native_object, GIT_CLONE_OPTIONS_VERSION);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: CloneOptions::version_reader */
/* sha: eae8efc49559566007b545805e592da008246e2e6c9b3704685faa615bcd513e */
#if BIND_CloneOptions_version_FIELD_READER
/* get_version
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_CloneOptions_get_version(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);

  unsigned int native_version = native_self->version;

  mrb_value version = mrb_fixnum_value(native_version);

  return version;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::version_writer */
/* sha: d9e30d18cb4e9df34f013d109d3c10d591087b5a938297c5dd24edabac702795 */
#if BIND_CloneOptions_version_FIELD_WRITER
/* set_version
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_CloneOptions_set_version(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);
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

/* MRUBY_BINDING: CloneOptions::checkout_opts_reader */
/* sha: a1028ec70f00052cb9d540d747dc9ede0870bc18012ca4c5a6c2c6001e77ab21 */
#if BIND_CloneOptions_checkout_opts_FIELD_READER
/* get_checkout_opts
 *
 * Return Type: git_checkout_options
 */
mrb_value
mrb_Git_CloneOptions_get_checkout_opts(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);

  git_checkout_options native_checkout_opts = native_self->checkout_opts;

  git_checkout_options* new_checkout_opts = TODO_move_git_checkout_options_to_heap(native_checkout_opts);
  mrb_value checkout_opts = mruby_box_git_checkout_options(mrb, &native_checkout_opts);

  return checkout_opts;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::checkout_opts_writer */
/* sha: 5aae4fbcae6c4a5eef1294ccf7e5756a3315d8754e901133f05c984e5f1ac5d3 */
#if BIND_CloneOptions_checkout_opts_FIELD_WRITER
/* set_checkout_opts
 *
 * Parameters:
 * - value: git_checkout_options
 */
mrb_value
mrb_Git_CloneOptions_set_checkout_opts(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);
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

/* MRUBY_BINDING: CloneOptions::fetch_opts_reader */
/* sha: 78ea7320641d0ecc1a81fd544861233b295e7a9155a6bfaf1618c8d9ad5a849e */
#if BIND_CloneOptions_fetch_opts_FIELD_READER
/* get_fetch_opts
 *
 * Return Type: git_fetch_options
 */
mrb_value
mrb_Git_CloneOptions_get_fetch_opts(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);

  git_fetch_options native_fetch_opts = native_self->fetch_opts;

  git_fetch_options* new_fetch_opts = TODO_move_git_fetch_options_to_heap(native_fetch_opts);
  mrb_value fetch_opts = mruby_box_git_fetch_options(mrb, &native_fetch_opts);

  return fetch_opts;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::fetch_opts_writer */
/* sha: 44a51eb5a68f255babeb35733cf0290df294cb56dcb6794d15e1388bc30909d2 */
#if BIND_CloneOptions_fetch_opts_FIELD_WRITER
/* set_fetch_opts
 *
 * Parameters:
 * - value: git_fetch_options
 */
mrb_value
mrb_Git_CloneOptions_set_fetch_opts(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);
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

/* MRUBY_BINDING: CloneOptions::bare_reader */
/* sha: 06a34b2812a16f54adaf66bda48a3ea7feb0b6b6c240220d176a1ac5c9606291 */
#if BIND_CloneOptions_bare_FIELD_READER
/* get_bare
 *
 * Return Type: int
 */
mrb_value
mrb_Git_CloneOptions_get_bare(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);

  int native_bare = native_self->bare;

  mrb_value bare = mrb_fixnum_value(native_bare);

  return bare;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::bare_writer */
/* sha: c9f486eb4e089bde593d651ebc551003d8fcfd1a7f22ebad1d010d45398d2670 */
#if BIND_CloneOptions_bare_FIELD_WRITER
/* set_bare
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_CloneOptions_set_bare(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);
  mrb_int native_bare;

  mrb_get_args(mrb, "i", &native_bare);

  native_self->bare = native_bare;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::local_reader */
/* sha: 0b0ee88779b6132e76c33129167ff3aa751bb0a8780af3ee980cf660ac53f625 */
#if BIND_CloneOptions_local_FIELD_READER
/* get_local
 *
 * Return Type: git_clone_local_t
 */
mrb_value
mrb_Git_CloneOptions_get_local(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);

  git_clone_local_t native_local = native_self->local;

  mrb_value local = mrb_fixnum_value(native_local);

  return local;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::local_writer */
/* sha: fb5da2688e17f07160ee790e258289c208762e359abba1baef47cb74c7f28260 */
#if BIND_CloneOptions_local_FIELD_WRITER
/* set_local
 *
 * Parameters:
 * - value: git_clone_local_t
 */
mrb_value
mrb_Git_CloneOptions_set_local(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);
  mrb_int native_local;

  mrb_get_args(mrb, "i", &native_local);

  native_self->local = native_local;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::checkout_branch_reader */
/* sha: a67f66191c38f8bf6ec418f83f07790153b77611dfb7fe2e4981a7a5d9e36972 */
#if BIND_CloneOptions_checkout_branch_FIELD_READER
/* get_checkout_branch
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_CloneOptions_get_checkout_branch(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);

  const char * native_checkout_branch = native_self->checkout_branch;

  mrb_value checkout_branch = native_checkout_branch == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_checkout_branch);

  return checkout_branch;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::checkout_branch_writer */
/* sha: 37fe9b24a32719567b799224b4ea5e113c5561027d82524368f22efd3d262631 */
#if BIND_CloneOptions_checkout_branch_FIELD_WRITER
/* set_checkout_branch
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_CloneOptions_set_checkout_branch(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);
  char * native_checkout_branch = NULL;

  mrb_get_args(mrb, "z", &native_checkout_branch);

  native_self->checkout_branch = native_checkout_branch;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::repository_cb_reader */
/* sha: 36c5f71bccd433d7674804952025b39ce413b3d3de8f1b407cf4a0ad93556b94 */
#if BIND_CloneOptions_repository_cb_FIELD_READER
/* get_repository_cb
 *
 * Return Type: git_repository_create_cb
 */
mrb_value
mrb_Git_CloneOptions_get_repository_cb(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);

  git_repository_create_cb native_repository_cb = native_self->repository_cb;

  mrb_value repository_cb = TODO_mruby_box_git_repository_create_cb(mrb, native_repository_cb);

  return repository_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::repository_cb_writer */
/* sha: 1c7ee9f2e0d09886dbfb6b6049b71209d2d233df9fba7aa59789fb4164311a96 */
#if BIND_CloneOptions_repository_cb_FIELD_WRITER
/* set_repository_cb
 *
 * Parameters:
 * - value: git_repository_create_cb
 */
mrb_value
mrb_Git_CloneOptions_set_repository_cb(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);
  mrb_value repository_cb;

  mrb_get_args(mrb, "o", &repository_cb);

  /* type checking */
  TODO_type_check_git_repository_create_cb(repository_cb);

  git_repository_create_cb native_repository_cb = TODO_mruby_unbox_git_repository_create_cb(repository_cb);

  native_self->repository_cb = native_repository_cb;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::repository_cb_payload_reader */
/* sha: df478b58daaabdb09f6b7db3c506981178cf61ca89fa0f82389ac2a1d224aa46 */
#if BIND_CloneOptions_repository_cb_payload_FIELD_READER
/* get_repository_cb_payload
 *
 * Return Type: void *
 */
mrb_value
mrb_Git_CloneOptions_get_repository_cb_payload(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);

  void * native_repository_cb_payload = native_self->repository_cb_payload;

  mrb_value repository_cb_payload = TODO_mruby_box_void_PTR(mrb, native_repository_cb_payload);

  return repository_cb_payload;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::repository_cb_payload_writer */
/* sha: 3db3cd8fd4061fbe67b7d1176f20fc16aeed717f3e9162982f02fbb8ba3cd934 */
#if BIND_CloneOptions_repository_cb_payload_FIELD_WRITER
/* set_repository_cb_payload
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_Git_CloneOptions_set_repository_cb_payload(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);
  mrb_value repository_cb_payload;

  mrb_get_args(mrb, "o", &repository_cb_payload);

  /* type checking */
  TODO_type_check_void_PTR(repository_cb_payload);

  void * native_repository_cb_payload = TODO_mruby_unbox_void_PTR(repository_cb_payload);

  native_self->repository_cb_payload = native_repository_cb_payload;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::remote_cb_reader */
/* sha: 2d20c86159c3a761bd6658528c6983019523dfadd6b33ee8ce724c684aae9261 */
#if BIND_CloneOptions_remote_cb_FIELD_READER
/* get_remote_cb
 *
 * Return Type: git_remote_create_cb
 */
mrb_value
mrb_Git_CloneOptions_get_remote_cb(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);

  git_remote_create_cb native_remote_cb = native_self->remote_cb;

  mrb_value remote_cb = TODO_mruby_box_git_remote_create_cb(mrb, native_remote_cb);

  return remote_cb;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::remote_cb_writer */
/* sha: c53e329bfaf330c5f179d2a1cdc3fa0a9d9873eaaaa4bf65d2d65e245dcd8cef */
#if BIND_CloneOptions_remote_cb_FIELD_WRITER
/* set_remote_cb
 *
 * Parameters:
 * - value: git_remote_create_cb
 */
mrb_value
mrb_Git_CloneOptions_set_remote_cb(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);
  mrb_value remote_cb;

  mrb_get_args(mrb, "o", &remote_cb);

  /* type checking */
  TODO_type_check_git_remote_create_cb(remote_cb);

  git_remote_create_cb native_remote_cb = TODO_mruby_unbox_git_remote_create_cb(remote_cb);

  native_self->remote_cb = native_remote_cb;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::remote_cb_payload_reader */
/* sha: 6511350f57509751e718866a30e43f02629a4adae9549004f2efde9e5ae4f8ec */
#if BIND_CloneOptions_remote_cb_payload_FIELD_READER
/* get_remote_cb_payload
 *
 * Return Type: void *
 */
mrb_value
mrb_Git_CloneOptions_get_remote_cb_payload(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);

  void * native_remote_cb_payload = native_self->remote_cb_payload;

  mrb_value remote_cb_payload = TODO_mruby_box_void_PTR(mrb, native_remote_cb_payload);

  return remote_cb_payload;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::remote_cb_payload_writer */
/* sha: 5e1c7d3d944abcba0de501abea04f3f97ca5b0774a876afb266e07cce7341fcc */
#if BIND_CloneOptions_remote_cb_payload_FIELD_WRITER
/* set_remote_cb_payload
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_Git_CloneOptions_set_remote_cb_payload(mrb_state* mrb, mrb_value self) {
  git_clone_options * native_self = mruby_unbox_git_clone_options(self);
  mrb_value remote_cb_payload;

  mrb_get_args(mrb, "o", &remote_cb_payload);

  /* type checking */
  TODO_type_check_void_PTR(remote_cb_payload);

  void * native_remote_cb_payload = TODO_mruby_unbox_void_PTR(remote_cb_payload);

  native_self->remote_cb_payload = native_remote_cb_payload;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_CloneOptions_init(mrb_state* mrb) {
/* MRUBY_BINDING: CloneOptions::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::class_definition */
/* sha: 9df4cacff141a508ac58ac7c07b8cd80281a5b34d39e2a0692bc73b195c6af19 */
  struct RClass* CloneOptions_class = mrb_define_class_under(mrb, Git_module(mrb), "CloneOptions", mrb->object_class);
  MRB_SET_INSTANCE_TT(CloneOptions_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::class_method_definitions */
/* sha: 6fd170553821e104ce9092ab70b8d0c9ed07dc47062e7b824046d1984610c830 */
#if BIND_CloneOptions_INITIALIZE
  mrb_define_method(mrb, CloneOptions_class, "initialize", mrb_Git_CloneOptions_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::attr_definitions */
/* sha: 4ea9aa2b4f8feeff04cec78bfd5e43d3cf555838ddbb09d109849bc917ae5279 */
  /*
   * Fields
   */
#if BIND_CloneOptions_version_FIELD_READER
  mrb_define_method(mrb, CloneOptions_class, "version", mrb_Git_CloneOptions_get_version, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CloneOptions_version_FIELD_WRITER
  mrb_define_method(mrb, CloneOptions_class, "version=", mrb_Git_CloneOptions_set_version, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CloneOptions_checkout_opts_FIELD_READER
  mrb_define_method(mrb, CloneOptions_class, "checkout_opts", mrb_Git_CloneOptions_get_checkout_opts, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CloneOptions_checkout_opts_FIELD_WRITER
  mrb_define_method(mrb, CloneOptions_class, "checkout_opts=", mrb_Git_CloneOptions_set_checkout_opts, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CloneOptions_fetch_opts_FIELD_READER
  mrb_define_method(mrb, CloneOptions_class, "fetch_opts", mrb_Git_CloneOptions_get_fetch_opts, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CloneOptions_fetch_opts_FIELD_WRITER
  mrb_define_method(mrb, CloneOptions_class, "fetch_opts=", mrb_Git_CloneOptions_set_fetch_opts, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CloneOptions_bare_FIELD_READER
  mrb_define_method(mrb, CloneOptions_class, "bare", mrb_Git_CloneOptions_get_bare, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CloneOptions_bare_FIELD_WRITER
  mrb_define_method(mrb, CloneOptions_class, "bare=", mrb_Git_CloneOptions_set_bare, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CloneOptions_local_FIELD_READER
  mrb_define_method(mrb, CloneOptions_class, "local", mrb_Git_CloneOptions_get_local, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CloneOptions_local_FIELD_WRITER
  mrb_define_method(mrb, CloneOptions_class, "local=", mrb_Git_CloneOptions_set_local, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CloneOptions_checkout_branch_FIELD_READER
  mrb_define_method(mrb, CloneOptions_class, "checkout_branch", mrb_Git_CloneOptions_get_checkout_branch, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CloneOptions_checkout_branch_FIELD_WRITER
  mrb_define_method(mrb, CloneOptions_class, "checkout_branch=", mrb_Git_CloneOptions_set_checkout_branch, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CloneOptions_repository_cb_FIELD_READER
  mrb_define_method(mrb, CloneOptions_class, "repository_cb", mrb_Git_CloneOptions_get_repository_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CloneOptions_repository_cb_FIELD_WRITER
  mrb_define_method(mrb, CloneOptions_class, "repository_cb=", mrb_Git_CloneOptions_set_repository_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CloneOptions_repository_cb_payload_FIELD_READER
  mrb_define_method(mrb, CloneOptions_class, "repository_cb_payload", mrb_Git_CloneOptions_get_repository_cb_payload, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CloneOptions_repository_cb_payload_FIELD_WRITER
  mrb_define_method(mrb, CloneOptions_class, "repository_cb_payload=", mrb_Git_CloneOptions_set_repository_cb_payload, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CloneOptions_remote_cb_FIELD_READER
  mrb_define_method(mrb, CloneOptions_class, "remote_cb", mrb_Git_CloneOptions_get_remote_cb, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CloneOptions_remote_cb_FIELD_WRITER
  mrb_define_method(mrb, CloneOptions_class, "remote_cb=", mrb_Git_CloneOptions_set_remote_cb, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CloneOptions_remote_cb_payload_FIELD_READER
  mrb_define_method(mrb, CloneOptions_class, "remote_cb_payload", mrb_Git_CloneOptions_get_remote_cb_payload, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CloneOptions_remote_cb_payload_FIELD_WRITER
  mrb_define_method(mrb, CloneOptions_class, "remote_cb_payload=", mrb_Git_CloneOptions_set_remote_cb_payload, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
