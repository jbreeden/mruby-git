/*
 * git_rebase_operation
 * Defined in file rebase.h @ line 115
 */

#include "mruby_Git.h"

#if BIND_RebaseOperation_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: RebaseOperation::initialize */
/* sha: 7d3e51a022350baa61289976b8cc4406b6a230d04696a7bf5db565cd5d61ca63 */
#if BIND_RebaseOperation_INITIALIZE
mrb_value
mrb_Git_RebaseOperation_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_rebase_operation* native_object = (git_rebase_operation*)calloc(1, sizeof(git_rebase_operation));
  mruby_gift_git_rebase_operation_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOperation::disown */
/* sha: 09c1dd7d921d4bf5527d84982cdc2ebe3f8c211703d9bae175533632b17646b1 */
mrb_value
mrb_Git_RebaseOperation_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::RebaseOperation.disown only accepts objects of type Git::RebaseOperation");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOperation::belongs_to_ruby */
/* sha: 877d68004d2a03ce4b5d82564d29ecd50e10082a3c9345811bd972b52cc1358f */
mrb_value
mrb_Git_RebaseOperation_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::RebaseOperation.belongs_to_ruby only accepts objects of type Git::RebaseOperation");
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

/* MRUBY_BINDING: RebaseOperation::type_reader */
/* sha: dcbdb95e84c3268bc80671e8c51a3a8e86c3d62399538bd50bcda3c86e4df80f */
#if BIND_RebaseOperation_type_FIELD_READER
/* get_type
 *
 * Return Type: git_rebase_operation_t
 */
mrb_value
mrb_Git_RebaseOperation_get_type(mrb_state* mrb, mrb_value self) {
  git_rebase_operation * native_self = mruby_unbox_git_rebase_operation(self);

  git_rebase_operation_t native_type = native_self->type;

  mrb_value type = mrb_fixnum_value(native_type);

  return type;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOperation::type_writer */
/* sha: e39a1561c10557bc0cb94c123baa304083a2bb0ac37049714d61b8a71035bd9b */
#if BIND_RebaseOperation_type_FIELD_WRITER
/* set_type
 *
 * Parameters:
 * - value: git_rebase_operation_t
 */
mrb_value
mrb_Git_RebaseOperation_set_type(mrb_state* mrb, mrb_value self) {
  git_rebase_operation * native_self = mruby_unbox_git_rebase_operation(self);
  mrb_int native_type;

  mrb_get_args(mrb, "i", &native_type);

  native_self->type = native_type;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOperation::id_reader */
/* sha: 07477205e7eaee4ac5d1cf6c086d8940504640594ba10398d277e61ebdf155ad */
#if BIND_RebaseOperation_id_FIELD_READER
/* get_id
 *
 * Return Type: const git_oid
 */
mrb_value
mrb_Git_RebaseOperation_get_id(mrb_state* mrb, mrb_value self) {
  git_rebase_operation * native_self = mruby_unbox_git_rebase_operation(self);

  const git_oid native_id = native_self->id;

  const git_oid* new_id = TODO_move_git_oid_to_heap(native_id);
  mrb_value id = mruby_box_git_oid(mrb, &native_id);

  return id;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOperation::id_writer */
/* sha: de7c09f34fb4c7635b82a91e3dccea4a99afdc9b2b6868bf0ce2d9cc5bd748f5 */
#define BIND_RebaseOperation_id_FIELD_WRITER FALSE /* Field is not writable */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOperation::exec_reader */
/* sha: 2027015285f0c7ed26ca7dce47af6e4c3721f8ed924ab3369893e028ce6d152b */
#if BIND_RebaseOperation_exec_FIELD_READER
/* get_exec
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_RebaseOperation_get_exec(mrb_state* mrb, mrb_value self) {
  git_rebase_operation * native_self = mruby_unbox_git_rebase_operation(self);

  const char * native_exec = native_self->exec;

  mrb_value exec = native_exec == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_exec);

  return exec;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOperation::exec_writer */
/* sha: 695824b38e07a080097a9ebc3c227ad2fa16c958b72351477e41fa2e40af92b9 */
#if BIND_RebaseOperation_exec_FIELD_WRITER
/* set_exec
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_RebaseOperation_set_exec(mrb_state* mrb, mrb_value self) {
  git_rebase_operation * native_self = mruby_unbox_git_rebase_operation(self);
  char * native_exec = NULL;

  mrb_get_args(mrb, "z", &native_exec);

  native_self->exec = native_exec;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_RebaseOperation_init(mrb_state* mrb) {
/* MRUBY_BINDING: RebaseOperation::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOperation::class_definition */
/* sha: a767704d56acaa9b384963cf95826597bed6f32ea49e2c7719d8c361b0f36ae5 */
  struct RClass* RebaseOperation_class = mrb_define_class_under(mrb, Git_module(mrb), "RebaseOperation", mrb->object_class);
  MRB_SET_INSTANCE_TT(RebaseOperation_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOperation::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOperation::class_method_definitions */
/* sha: fc41e8ac760a636c7607340b6bcd83a2308897a8039adac2d7c2220e74768e09 */
#if BIND_RebaseOperation_INITIALIZE
  mrb_define_method(mrb, RebaseOperation_class, "initialize", mrb_Git_RebaseOperation_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, RebaseOperation_class, "disown", mrb_Git_RebaseOperation_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, RebaseOperation_class, "belongs_to_ruby?", mrb_Git_RebaseOperation_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOperation::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOperation::attr_definitions */
/* sha: b56eba68a32e7b9daeb4593f5b14844e5f304960598dc438a8e9fc3ef7aec36d */
  /*
   * Fields
   */
#if BIND_RebaseOperation_type_FIELD_READER
  mrb_define_method(mrb, RebaseOperation_class, "type", mrb_Git_RebaseOperation_get_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RebaseOperation_type_FIELD_WRITER
  mrb_define_method(mrb, RebaseOperation_class, "type=", mrb_Git_RebaseOperation_set_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RebaseOperation_id_FIELD_READER
  mrb_define_method(mrb, RebaseOperation_class, "id", mrb_Git_RebaseOperation_get_id, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RebaseOperation_id_FIELD_WRITER
  mrb_define_method(mrb, RebaseOperation_class, "id=", mrb_Git_RebaseOperation_set_id, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RebaseOperation_exec_FIELD_READER
  mrb_define_method(mrb, RebaseOperation_class, "exec", mrb_Git_RebaseOperation_get_exec, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RebaseOperation_exec_FIELD_WRITER
  mrb_define_method(mrb, RebaseOperation_class, "exec=", mrb_Git_RebaseOperation_set_exec, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOperation::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOperation::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOperation::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
