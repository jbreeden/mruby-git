/*
 * git_reflog
 * Defined in file types.h @ line 147
 */

#include "mruby_Git.h"

#if BIND_Reflog_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Reflog::initialize */
/* sha: 927ad604f3eda3e96eff6c20224eab3b2ff31998bc70e34391d2747cc1d3cce9 */
#if BIND_Reflog_INITIALIZE
mrb_value
mrb_Git_Reflog_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_reflog* native_object = (git_reflog*)calloc(1, sizeof(git_reflog));
  mruby_gift_git_reflog_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::disown */
/* sha: d46f52c7018ab6f3a08b4acd65ab07254ddef34e17b64116da3d4ef711c3820d */
mrb_value
mrb_Git_Reflog_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Reflog.disown only accepts objects of type Git::Reflog");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::belongs_to_ruby */
/* sha: 15dd2d5003222b1fbc6a4a735da9802ca32efb440e864ac775f4f1dea69f503b */
mrb_value
mrb_Git_Reflog_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Reflog.belongs_to_ruby only accepts objects of type Git::Reflog");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_Reflog_init(mrb_state* mrb) {
/* MRUBY_BINDING: Reflog::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::class_definition */
/* sha: 332ec0391409efed9d4d09a89e1a94ca2c9ac3a1c005c1faf9663e03c157e07f */
  struct RClass* Reflog_class = mrb_define_class_under(mrb, Git_module(mrb), "Reflog", mrb->object_class);
  MRB_SET_INSTANCE_TT(Reflog_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::class_method_definitions */
/* sha: 7856a93ef5bf73f8f5a30f48d9f1da5d00283a1f825acce327a82cf83ca0aeec */
#if BIND_Reflog_INITIALIZE
  mrb_define_method(mrb, Reflog_class, "initialize", mrb_Git_Reflog_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Reflog_class, "disown", mrb_Git_Reflog_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Reflog_class, "belongs_to_ruby?", mrb_Git_Reflog_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
