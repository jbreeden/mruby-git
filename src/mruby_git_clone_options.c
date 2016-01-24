/*
 * git_clone_options
 * Defined in file clone.h @ line 103
 */

#include "mruby_Git.h"

#if BIND_CloneOptions_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: CloneOptions::initialize */
/* sha: be7c4a14a5c068ea7ba1290e4ed37ef3854fd87a13b1212fcd2187ef5ac0ba4c */
#if BIND_CloneOptions_INITIALIZE
mrb_value
mrb_Git_CloneOptions_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_clone_options* native_object = (git_clone_options*)calloc(1, sizeof(git_clone_options));
  mruby_gift_git_clone_options_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::disown */
/* sha: 3c5e6478d38af10bc52f928061d9e5f5cfd85a01d83eea79b4dc5b06ce4451b7 */
mrb_value
mrb_Git_CloneOptions_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::CloneOptions.disown only accepts objects of type Git::CloneOptions");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::belongs_to_ruby */
/* sha: 601c3f5d65e5d94ded702deb6266819a688914808d8bb2ac00065e6d0a991253 */
mrb_value
mrb_Git_CloneOptions_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::CloneOptions.belongs_to_ruby only accepts objects of type Git::CloneOptions");
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
/* sha: 060d4fb1c33a80eef22932a2a1a3cc5a934b74454441c441e4e70c9da8c802eb */
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
/* sha: 0351419816e2c6c8348b5c239dbadae81662fda9013404fd9f0a1c2c659c8f9b */
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
/* sha: 13cf1b79f862541cf9704225955a3b59e3d45cea5dc9c0ad4ab3e0016ad60ef9 */
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
/* sha: f37566454d305e18b2957d3f8fdee3517df57f619ff9c7144b07646ae42459bf */
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
/* sha: 3d49f7acf8c031ced23980d90787a34de2b6a2b98c355b601462ca20f6547e4c */
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
/* sha: c1cde3cf9e117469a40b672a5d85bbf3f4b36f23f0e5d10e4823b0a5b4abe4e9 */
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
/* sha: ca39add19afba69d918bbdb1ac5698a49a234797d0bd70e6bb736e88507820d9 */
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
/* sha: 386388f216661e7e0ad05939d64f4c0f86d1d6666cb999ed622924a9ada8f03a */
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
/* sha: 7c7e247c17ae67d8574e179c383ea5c9dd7f083709d4c6184dbc1ad98c4f8031 */
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
/* sha: a994530770b654fec0aef222b482eab25478342a960ffc5e6cc47def22c2ea1f */
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
/* sha: c92fe080134b2805e485ad6dc866c2dd16043cec91a6c1a21b2dfd8fe01e8ca7 */
#if BIND_CloneOptions_INITIALIZE
  mrb_define_method(mrb, CloneOptions_class, "initialize", mrb_Git_CloneOptions_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, CloneOptions_class, "disown", mrb_Git_CloneOptions_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, CloneOptions_class, "belongs_to_ruby?", mrb_Git_CloneOptions_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
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
