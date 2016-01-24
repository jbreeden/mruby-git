/*
 * git_push_update
 * Defined in file remote.h @ line 341
 */

#include "mruby_Git.h"

#if BIND_PushUpdate_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushUpdate::initialize */
/* sha: 4521ae593fd5323504d283b6df5e056379f80303f39fa096d197a64c197f6d3c */
#if BIND_PushUpdate_INITIALIZE
mrb_value
mrb_Git_PushUpdate_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_push_update* native_object = (git_push_update*)calloc(1, sizeof(git_push_update));
  mruby_gift_git_push_update_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: PushUpdate::src_refname_reader */
/* sha: 91d47311b53af91a7cd105e58902a84fcc48f2a82fe14f416833a3b541f0716e */
#if BIND_PushUpdate_src_refname_FIELD_READER
/* get_src_refname
 *
 * Return Type: char *
 */
mrb_value
mrb_Git_PushUpdate_get_src_refname(mrb_state* mrb, mrb_value self) {
  git_push_update * native_self = mruby_unbox_git_push_update(self);

  char * native_src_refname = native_self->src_refname;

  mrb_value src_refname = TODO_mruby_box_char_PTR(mrb, native_src_refname);

  return src_refname;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushUpdate::src_refname_writer */
/* sha: 9cb4a82a74dce5aa412cab81d4cf7a99f3d42a1d644aad65e7642f03c3783de5 */
#if BIND_PushUpdate_src_refname_FIELD_WRITER
/* set_src_refname
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_Git_PushUpdate_set_src_refname(mrb_state* mrb, mrb_value self) {
  git_push_update * native_self = mruby_unbox_git_push_update(self);
  mrb_value src_refname;

  mrb_get_args(mrb, "o", &src_refname);

  /* type checking */
  TODO_type_check_char_PTR(src_refname);

  char * native_src_refname = TODO_mruby_unbox_char_PTR(src_refname);

  native_self->src_refname = native_src_refname;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushUpdate::dst_refname_reader */
/* sha: 6f5032ef69f04a91d286a64d17261ec40aee24f32a985b1e074c1505d348d3e6 */
#if BIND_PushUpdate_dst_refname_FIELD_READER
/* get_dst_refname
 *
 * Return Type: char *
 */
mrb_value
mrb_Git_PushUpdate_get_dst_refname(mrb_state* mrb, mrb_value self) {
  git_push_update * native_self = mruby_unbox_git_push_update(self);

  char * native_dst_refname = native_self->dst_refname;

  mrb_value dst_refname = TODO_mruby_box_char_PTR(mrb, native_dst_refname);

  return dst_refname;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushUpdate::dst_refname_writer */
/* sha: 4ed4aa7cbe24efe6ba317fd878de087f3822dc1859c2cf1de0d6cbadbed95cb2 */
#if BIND_PushUpdate_dst_refname_FIELD_WRITER
/* set_dst_refname
 *
 * Parameters:
 * - value: char *
 */
mrb_value
mrb_Git_PushUpdate_set_dst_refname(mrb_state* mrb, mrb_value self) {
  git_push_update * native_self = mruby_unbox_git_push_update(self);
  mrb_value dst_refname;

  mrb_get_args(mrb, "o", &dst_refname);

  /* type checking */
  TODO_type_check_char_PTR(dst_refname);

  char * native_dst_refname = TODO_mruby_unbox_char_PTR(dst_refname);

  native_self->dst_refname = native_dst_refname;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushUpdate::src_reader */
/* sha: 7905dbce970994beb25bcb12c7af511e13e09be90d41e1cf65a1a4fb551df13d */
#if BIND_PushUpdate_src_FIELD_READER
/* get_src
 *
 * Return Type: git_oid
 */
mrb_value
mrb_Git_PushUpdate_get_src(mrb_state* mrb, mrb_value self) {
  git_push_update * native_self = mruby_unbox_git_push_update(self);

  git_oid native_src = native_self->src;

  git_oid* new_src = TODO_move_git_oid_to_heap(native_src);
  mrb_value src = mruby_box_git_oid(mrb, &native_src);

  return src;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushUpdate::src_writer */
/* sha: b091a57deeee8e68e24de49e53d852a3c6fac492c4257ea64a8beb3d40c6e68f */
#if BIND_PushUpdate_src_FIELD_WRITER
/* set_src
 *
 * Parameters:
 * - value: git_oid
 */
mrb_value
mrb_Git_PushUpdate_set_src(mrb_state* mrb, mrb_value self) {
  git_push_update * native_self = mruby_unbox_git_push_update(self);
  mrb_value src;

  mrb_get_args(mrb, "o", &src);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, src, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  git_oid native_src = *(mruby_unbox_git_oid(src));

  native_self->src = native_src;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushUpdate::dst_reader */
/* sha: e45a1283a17c0e18d0f25a79e7bfe702d400d062f840de6455e87e45889277f6 */
#if BIND_PushUpdate_dst_FIELD_READER
/* get_dst
 *
 * Return Type: git_oid
 */
mrb_value
mrb_Git_PushUpdate_get_dst(mrb_state* mrb, mrb_value self) {
  git_push_update * native_self = mruby_unbox_git_push_update(self);

  git_oid native_dst = native_self->dst;

  git_oid* new_dst = TODO_move_git_oid_to_heap(native_dst);
  mrb_value dst = mruby_box_git_oid(mrb, &native_dst);

  return dst;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushUpdate::dst_writer */
/* sha: 31d86df130bfef61eb1d6efcf308d3b2fec93e50b53219f4e084e058dfe1447a */
#if BIND_PushUpdate_dst_FIELD_WRITER
/* set_dst
 *
 * Parameters:
 * - value: git_oid
 */
mrb_value
mrb_Git_PushUpdate_set_dst(mrb_state* mrb, mrb_value self) {
  git_push_update * native_self = mruby_unbox_git_push_update(self);
  mrb_value dst;

  mrb_get_args(mrb, "o", &dst);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, dst, Oid_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Oid expected");
    return mrb_nil_value();
  }

  git_oid native_dst = *(mruby_unbox_git_oid(dst));

  native_self->dst = native_dst;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_PushUpdate_init(mrb_state* mrb) {
/* MRUBY_BINDING: PushUpdate::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushUpdate::class_definition */
/* sha: e9593a357ee5fd096000b225083d1859e88161c2f3a1328a8a2d98b1354a16f4 */
  struct RClass* PushUpdate_class = mrb_define_class_under(mrb, Git_module(mrb), "PushUpdate", mrb->object_class);
  MRB_SET_INSTANCE_TT(PushUpdate_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushUpdate::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushUpdate::class_method_definitions */
/* sha: 7d2617b597acc3a4177e32ecb0a1b50c0fcaa8fbc04711de56885848d2368ab8 */
#if BIND_PushUpdate_INITIALIZE
  mrb_define_method(mrb, PushUpdate_class, "initialize", mrb_Git_PushUpdate_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushUpdate::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushUpdate::attr_definitions */
/* sha: efcde07a7775015167219487566aa2914e6558f5cb34f63f86699fb4ed8650b5 */
  /*
   * Fields
   */
#if BIND_PushUpdate_src_refname_FIELD_READER
  mrb_define_method(mrb, PushUpdate_class, "src_refname", mrb_Git_PushUpdate_get_src_refname, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_PushUpdate_src_refname_FIELD_WRITER
  mrb_define_method(mrb, PushUpdate_class, "src_refname=", mrb_Git_PushUpdate_set_src_refname, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_PushUpdate_dst_refname_FIELD_READER
  mrb_define_method(mrb, PushUpdate_class, "dst_refname", mrb_Git_PushUpdate_get_dst_refname, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_PushUpdate_dst_refname_FIELD_WRITER
  mrb_define_method(mrb, PushUpdate_class, "dst_refname=", mrb_Git_PushUpdate_set_dst_refname, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_PushUpdate_src_FIELD_READER
  mrb_define_method(mrb, PushUpdate_class, "src", mrb_Git_PushUpdate_get_src, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_PushUpdate_src_FIELD_WRITER
  mrb_define_method(mrb, PushUpdate_class, "src=", mrb_Git_PushUpdate_set_src, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_PushUpdate_dst_FIELD_READER
  mrb_define_method(mrb, PushUpdate_class, "dst", mrb_Git_PushUpdate_get_dst, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_PushUpdate_dst_FIELD_WRITER
  mrb_define_method(mrb, PushUpdate_class, "dst=", mrb_Git_PushUpdate_set_dst, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushUpdate::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushUpdate::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushUpdate::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
