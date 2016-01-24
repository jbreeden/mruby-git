/*
 * git_odb
 * Defined in file types.h @ line 81
 */

#include "mruby_Git.h"

#if BIND_Odb_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Odb::initialize */
/* sha: 83fa23fcfe6657c3543b43488b25565c62d2c1a5823cfe5594b38b12f81ae0ce */
#if BIND_Odb_INITIALIZE
mrb_value
mrb_Git_Odb_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_odb* native_object = (git_odb*)calloc(1, sizeof(git_odb));
  mruby_gift_git_odb_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::disown */
/* sha: 7b3db2d63c9bea9f959f3c66e96c719099c0792453d55ef14bad3e85dcf5ef8a */
mrb_value
mrb_Git_Odb_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Odb.disown only accepts objects of type Git::Odb");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::belongs_to_ruby */
/* sha: 2b411b1a6697082d44783493534deb03c127309f1a01eda4afb9937cf92df039 */
mrb_value
mrb_Git_Odb_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Odb.belongs_to_ruby only accepts objects of type Git::Odb");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_Odb_init(mrb_state* mrb) {
/* MRUBY_BINDING: Odb::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::class_definition */
/* sha: 93d98bb56ad58eea44f9a23e0e8ca301089089c81b8c1b229baa4f7cb7b68aad */
  struct RClass* Odb_class = mrb_define_class_under(mrb, Git_module(mrb), "Odb", mrb->object_class);
  MRB_SET_INSTANCE_TT(Odb_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::class_method_definitions */
/* sha: 3e5404911e11d375f2a53785473ff9a884729d7a9a28ba3f068e865769249702 */
#if BIND_Odb_INITIALIZE
  mrb_define_method(mrb, Odb_class, "initialize", mrb_Git_Odb_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Odb_class, "disown", mrb_Git_Odb_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Odb_class, "belongs_to_ruby?", mrb_Git_Odb_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
