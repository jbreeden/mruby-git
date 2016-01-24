/*
 * git_revspec
 * Defined in file revparse.h @ line 83
 */

#include "mruby_Git.h"

#if BIND_Revspec_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Revspec::initialize */
/* sha: f2ed83e99eabe97852499885075f66ef029f5cbcc8f14686f7181cfe249a7d60 */
#if BIND_Revspec_INITIALIZE
mrb_value
mrb_Git_Revspec_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_revspec* native_object = (git_revspec*)calloc(1, sizeof(git_revspec));
  mruby_gift_git_revspec_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revspec::disown */
/* sha: b3b2fb76461ad04ee2fadb75bc9fecb523753baf731391c0910eb902dd34b38e */
mrb_value
mrb_Git_Revspec_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Revspec.disown only accepts objects of type Git::Revspec");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revspec::belongs_to_ruby */
/* sha: 22d9a5ee4381baea20682c3a6d231ad904f6e6464a1ae9b6d88c078664755c97 */
mrb_value
mrb_Git_Revspec_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Revspec.belongs_to_ruby only accepts objects of type Git::Revspec");
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

/* MRUBY_BINDING: Revspec::from_reader */
/* sha: 8e9271347738155dcff06d873fe8bdfdf3e65525b00549d4fead787f97d055d6 */
#if BIND_Revspec_from_FIELD_READER
/* get_from
 *
 * Return Type: git_object *
 */
mrb_value
mrb_Git_Revspec_get_from(mrb_state* mrb, mrb_value self) {
  git_revspec * native_self = mruby_unbox_git_revspec(self);

  git_object * native_from = native_self->from;

  mrb_value from = (native_from == NULL ? mrb_nil_value() : mruby_box_git_object(mrb, native_from));

  return from;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revspec::from_writer */
/* sha: b616a4a0c2794bc9b11015d4f208d24da65b04dc4243563e7af3e2fe15aba55a */
#if BIND_Revspec_from_FIELD_WRITER
/* set_from
 *
 * Parameters:
 * - value: git_object *
 */
mrb_value
mrb_Git_Revspec_set_from(mrb_state* mrb, mrb_value self) {
  git_revspec * native_self = mruby_unbox_git_revspec(self);
  mrb_value from;

  mrb_get_args(mrb, "o", &from);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, from, Object_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Object expected");
    return mrb_nil_value();
  }

  git_object * native_from = (mrb_nil_p(from) ? NULL : mruby_unbox_git_object(from));

  native_self->from = native_from;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revspec::to_reader */
/* sha: 0a6bce856fc92e2e6fa94dfe33fda6de9cdf54ce0ed7323237ec2ceea83f556a */
#if BIND_Revspec_to_FIELD_READER
/* get_to
 *
 * Return Type: git_object *
 */
mrb_value
mrb_Git_Revspec_get_to(mrb_state* mrb, mrb_value self) {
  git_revspec * native_self = mruby_unbox_git_revspec(self);

  git_object * native_to = native_self->to;

  mrb_value to = (native_to == NULL ? mrb_nil_value() : mruby_box_git_object(mrb, native_to));

  return to;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revspec::to_writer */
/* sha: 3eaa03897278e7074593b6cdd53738b6c7bb34d37feae97157519a0d25ced641 */
#if BIND_Revspec_to_FIELD_WRITER
/* set_to
 *
 * Parameters:
 * - value: git_object *
 */
mrb_value
mrb_Git_Revspec_set_to(mrb_state* mrb, mrb_value self) {
  git_revspec * native_self = mruby_unbox_git_revspec(self);
  mrb_value to;

  mrb_get_args(mrb, "o", &to);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, to, Object_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Object expected");
    return mrb_nil_value();
  }

  git_object * native_to = (mrb_nil_p(to) ? NULL : mruby_unbox_git_object(to));

  native_self->to = native_to;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revspec::flags_reader */
/* sha: fdb5e714c608d1aa006567a20bb509bae928864024781b514e5d75b3e4810835 */
#if BIND_Revspec_flags_FIELD_READER
/* get_flags
 *
 * Return Type: unsigned int
 */
mrb_value
mrb_Git_Revspec_get_flags(mrb_state* mrb, mrb_value self) {
  git_revspec * native_self = mruby_unbox_git_revspec(self);

  unsigned int native_flags = native_self->flags;

  mrb_value flags = mrb_fixnum_value(native_flags);

  return flags;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revspec::flags_writer */
/* sha: c182f5e13a5ff6570c559ae3fab9a3cf8f294bf86b3e955f4cd92c24d33b86c2 */
#if BIND_Revspec_flags_FIELD_WRITER
/* set_flags
 *
 * Parameters:
 * - value: unsigned int
 */
mrb_value
mrb_Git_Revspec_set_flags(mrb_state* mrb, mrb_value self) {
  git_revspec * native_self = mruby_unbox_git_revspec(self);
  mrb_int native_flags;

  mrb_get_args(mrb, "i", &native_flags);

  native_self->flags = native_flags;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Revspec_init(mrb_state* mrb) {
/* MRUBY_BINDING: Revspec::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revspec::class_definition */
/* sha: 320bf85e7d712ae7b384ff75ccca88d745f868269b39c301a78a4332cd365fe0 */
  struct RClass* Revspec_class = mrb_define_class_under(mrb, Git_module(mrb), "Revspec", mrb->object_class);
  MRB_SET_INSTANCE_TT(Revspec_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revspec::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revspec::class_method_definitions */
/* sha: 6abe71a7e9a38fa4bcea6d7b30147124c4c3536f0deec5131e2f71a35bfcc035 */
#if BIND_Revspec_INITIALIZE
  mrb_define_method(mrb, Revspec_class, "initialize", mrb_Git_Revspec_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Revspec_class, "disown", mrb_Git_Revspec_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Revspec_class, "belongs_to_ruby?", mrb_Git_Revspec_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revspec::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revspec::attr_definitions */
/* sha: 76c567a285a2a82cb5db17a52dc927f35d10e4a655c8a1da15adb349d9866078 */
  /*
   * Fields
   */
#if BIND_Revspec_from_FIELD_READER
  mrb_define_method(mrb, Revspec_class, "from", mrb_Git_Revspec_get_from, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Revspec_from_FIELD_WRITER
  mrb_define_method(mrb, Revspec_class, "from=", mrb_Git_Revspec_set_from, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Revspec_to_FIELD_READER
  mrb_define_method(mrb, Revspec_class, "to", mrb_Git_Revspec_get_to, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Revspec_to_FIELD_WRITER
  mrb_define_method(mrb, Revspec_class, "to=", mrb_Git_Revspec_set_to, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_Revspec_flags_FIELD_READER
  mrb_define_method(mrb, Revspec_class, "flags", mrb_Git_Revspec_get_flags, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_Revspec_flags_FIELD_WRITER
  mrb_define_method(mrb, Revspec_class, "flags=", mrb_Git_Revspec_set_flags, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revspec::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revspec::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revspec::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif