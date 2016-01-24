/*
 * git_rebase_operation
 * Defined in file rebase.h @ line 115
 */

#include "mruby_Git.h"

#if BIND_RebaseOperation_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

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
/* sha: 3a291785f382226390960c88f24219acb3699f6a1f2c7da67858dc342b895834 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
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
/* sha: a92446749857892ee75bf4315afde801accc0f7db8e5ec49a0034c007cfc0251 */
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
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
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
/* sha: 2b5f4d520c04cd9807033fc6bfc1f4f0128f044865045ae1f19e584c029e5561 */
#if BIND_RebaseOperation_INITIALIZE
  mrb_define_method(mrb, RebaseOperation_class, "initialize", mrb_Git_RebaseOperation_initialize, MRB_ARGS_NONE());
#endif
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
