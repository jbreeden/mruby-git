/*
 * git_remote_head
 * Defined in file net.h @ line 40
 */

#include "mruby_Git.h"

#if BIND_RemoteHead_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: RemoteHead::initialize */
/* sha: 6496cc56b6674963167cde27f7f05d23e7cd164de8ea510b6b498417b500c42c */
#if BIND_RemoteHead_INITIALIZE
mrb_value
mrb_Git_RemoteHead_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_remote_head* native_object = (git_remote_head*)calloc(1, sizeof(git_remote_head));
  mruby_gift_git_remote_head_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::disown */
/* sha: fd157dd5be6b76704029eab6c1eefb07bacdcb9cd1c878e0207268535d25f842 */
mrb_value
mrb_Git_RemoteHead_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::RemoteHead.disown only accepts objects of type Git::RemoteHead");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::belongs_to_ruby */
/* sha: 0a903827f1ee6a87a94357ff99ca930c60ed7dc4dc82a4a38614b50cf984efc2 */
mrb_value
mrb_Git_RemoteHead_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::RemoteHead.belongs_to_ruby only accepts objects of type Git::RemoteHead");
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

/* MRUBY_BINDING: RemoteHead::local_reader */
/* sha: 0ce87126bc5b303a1f0fdcd4263c35df29df905e35f1e131915562bcb210fa04 */
#if BIND_RemoteHead_local_FIELD_READER
/* get_local
 *
 * Return Type: int
 */
mrb_value
mrb_Git_RemoteHead_get_local(mrb_state* mrb, mrb_value self) {
  git_remote_head * native_self = mruby_unbox_git_remote_head(self);

  int native_local = native_self->local;

  mrb_value local = mrb_fixnum_value(native_local);

  return local;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::local_writer */
/* sha: 4f3e48a7f355111b7dc1fb950e15dfbc40ab00187bf79d01af91165a344a133f */
#if BIND_RemoteHead_local_FIELD_WRITER
/* set_local
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_RemoteHead_set_local(mrb_state* mrb, mrb_value self) {
  git_remote_head * native_self = mruby_unbox_git_remote_head(self);
  mrb_int native_local;

  mrb_get_args(mrb, "i", &native_local);

  native_self->local = native_local;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::oid_reader */
/* sha: f40ab4fe585516b3232a39a74e91a1485566404a618d4f8d5846dd9cb3b5230f */
#if BIND_RemoteHead_oid_FIELD_READER
/* get_oid
 *
 * Return Type: git_oid
 */
mrb_value
mrb_Git_RemoteHead_get_oid(mrb_state* mrb, mrb_value self) {
  git_remote_head * native_self = mruby_unbox_git_remote_head(self);

  git_oid native_oid = native_self->oid;

  git_oid* new_oid = TODO_move_git_oid_to_heap(native_oid);
  mrb_value oid = mruby_box_git_oid(mrb, &native_oid);

  return oid;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::oid_writer */
/* sha: a37a2eac31b58d94723b7cd6380d49dcbe974f02602b66a48cbc470057131196 */
#if BIND_RemoteHead_oid_FIELD_WRITER
/* set_oid
 *
 * Parameters:
 * - value: git_oid
 */
mrb_value
mrb_Git_RemoteHead_set_oid(mrb_state* mrb, mrb_value self) {
  git_remote_head * native_self = mruby_unbox_git_remote_head(self);
  mrb_value oid;

  mrb_get_args(mrb, "o", &oid);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, oid, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  git_oid native_oid = *(mruby_unbox_git_oid(oid));

  native_self->oid = native_oid;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::loid_reader */
/* sha: 8361debc8de07cdac296e4d55e2b60c2a3ea1261454eebca8567d9291b26bf9c */
#if BIND_RemoteHead_loid_FIELD_READER
/* get_loid
 *
 * Return Type: git_oid
 */
mrb_value
mrb_Git_RemoteHead_get_loid(mrb_state* mrb, mrb_value self) {
  git_remote_head * native_self = mruby_unbox_git_remote_head(self);

  git_oid native_loid = native_self->loid;

  git_oid* new_loid = TODO_move_git_oid_to_heap(native_loid);
  mrb_value loid = mruby_box_git_oid(mrb, &native_loid);

  return loid;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::loid_writer */
/* sha: 2d9b59c27d5807100da9655bb34f3536496d8c92b7469131f03bc339d289dfbb */
#if BIND_RemoteHead_loid_FIELD_WRITER
/* set_loid
 *
 * Parameters:
 * - value: git_oid
 */
mrb_value
mrb_Git_RemoteHead_set_loid(mrb_state* mrb, mrb_value self) {
  git_remote_head * native_self = mruby_unbox_git_remote_head(self);
  mrb_value loid;

  mrb_get_args(mrb, "o", &loid);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, loid, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  git_oid native_loid = *(mruby_unbox_git_oid(loid));

  native_self->loid = native_loid;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::name_reader */
/* sha: d8f601071c8456986d8eb4d552ce3ce51e8b85f138b07a73761eda4a03332453 */
#if BIND_RemoteHead_name_FIELD_READER
/* get_name
 *
 * Return Type: char *
 */
mrb_value
mrb_Git_RemoteHead_get_name(mrb_state* mrb, mrb_value self) {
  git_remote_head * native_self = mruby_unbox_git_remote_head(self);

  char * native_name = native_self->name;

  mrb_value name = TODO_mruby_box_char_PTR(mrb, native_name);

  return name;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::name_writer */
/* sha: 1a2e2190cbce21daae38c15aa85d0ea2ae4b6fc03ed39ed63322052234566ca9 */
#if BIND_RemoteHead_name_FIELD_WRITER
/* set_name
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_Git_RemoteHead_set_name(mrb_state* mrb, mrb_value self) {
  git_remote_head * native_self = mruby_unbox_git_remote_head(self);
  mrb_value name;

  mrb_get_args(mrb, "o", &name);

  /* type checking */
  TODO_type_check_char_PTR(name);

  char * native_name = TODO_mruby_unbox_char_PTR(name);

  native_self->name = native_name;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::symref_target_reader */
/* sha: d2b153ff6086b028992c0eb850de1628e2463b99a7a8645795b21f9d631c2b6b */
#if BIND_RemoteHead_symref_target_FIELD_READER
/* get_symref_target
 *
 * Return Type: char *
 */
mrb_value
mrb_Git_RemoteHead_get_symref_target(mrb_state* mrb, mrb_value self) {
  git_remote_head * native_self = mruby_unbox_git_remote_head(self);

  char * native_symref_target = native_self->symref_target;

  mrb_value symref_target = TODO_mruby_box_char_PTR(mrb, native_symref_target);

  return symref_target;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::symref_target_writer */
/* sha: 2339d39592bfa9d270484a2030eede08f490f55830df04d04a764d8b8da06cf3 */
#if BIND_RemoteHead_symref_target_FIELD_WRITER
/* set_symref_target
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_Git_RemoteHead_set_symref_target(mrb_state* mrb, mrb_value self) {
  git_remote_head * native_self = mruby_unbox_git_remote_head(self);
  mrb_value symref_target;

  mrb_get_args(mrb, "o", &symref_target);

  /* type checking */
  TODO_type_check_char_PTR(symref_target);

  char * native_symref_target = TODO_mruby_unbox_char_PTR(symref_target);

  native_self->symref_target = native_symref_target;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_RemoteHead_init(mrb_state* mrb) {
/* MRUBY_BINDING: RemoteHead::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::class_definition */
/* sha: 330a8cdb6e64f46237eebc1ae299c26a43e7adfbddfc8b8e756e9394fa3f2e06 */
  struct RClass* RemoteHead_class = mrb_define_class_under(mrb, Git_module(mrb), "RemoteHead", mrb->object_class);
  MRB_SET_INSTANCE_TT(RemoteHead_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::class_method_definitions */
/* sha: 82104f00014fb4c2759c2333f37990961095a132274d676faa5441355c6e9f95 */
#if BIND_RemoteHead_INITIALIZE
  mrb_define_method(mrb, RemoteHead_class, "initialize", mrb_Git_RemoteHead_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, RemoteHead_class, "disown", mrb_Git_RemoteHead_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, RemoteHead_class, "belongs_to_ruby?", mrb_Git_RemoteHead_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::attr_definitions */
/* sha: 097a2bc02250be96985214b785a217b3c5670c67ab4263be1dc12509c4b30c1f */
  /*
   * Fields
   */
#if BIND_RemoteHead_local_FIELD_READER
  mrb_define_method(mrb, RemoteHead_class, "local", mrb_Git_RemoteHead_get_local, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RemoteHead_local_FIELD_WRITER
  mrb_define_method(mrb, RemoteHead_class, "local=", mrb_Git_RemoteHead_set_local, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RemoteHead_oid_FIELD_READER
  mrb_define_method(mrb, RemoteHead_class, "oid", mrb_Git_RemoteHead_get_oid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RemoteHead_oid_FIELD_WRITER
  mrb_define_method(mrb, RemoteHead_class, "oid=", mrb_Git_RemoteHead_set_oid, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RemoteHead_loid_FIELD_READER
  mrb_define_method(mrb, RemoteHead_class, "loid", mrb_Git_RemoteHead_get_loid, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RemoteHead_loid_FIELD_WRITER
  mrb_define_method(mrb, RemoteHead_class, "loid=", mrb_Git_RemoteHead_set_loid, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RemoteHead_name_FIELD_READER
  mrb_define_method(mrb, RemoteHead_class, "name", mrb_Git_RemoteHead_get_name, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RemoteHead_name_FIELD_WRITER
  mrb_define_method(mrb, RemoteHead_class, "name=", mrb_Git_RemoteHead_set_name, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_RemoteHead_symref_target_FIELD_READER
  mrb_define_method(mrb, RemoteHead_class, "symref_target", mrb_Git_RemoteHead_get_symref_target, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_RemoteHead_symref_target_FIELD_WRITER
  mrb_define_method(mrb, RemoteHead_class, "symref_target=", mrb_Git_RemoteHead_set_symref_target, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif