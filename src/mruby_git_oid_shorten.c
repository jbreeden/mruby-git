/*
 * git_oid_shorten
 * Defined in file oid.h @ line 216
 */

#include "mruby_Git.h"

#if BIND_OidShorten_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: OidShorten::initialize */
/* sha: f4d20d0b85fc4645994c297de2794768dc7cc5c383f55135d0e0a1480c9de796 */
#if BIND_OidShorten_INITIALIZE
mrb_value
mrb_Git_OidShorten_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_oid_shorten* native_object = (git_oid_shorten*)calloc(1, sizeof(git_oid_shorten));
  mruby_gift_git_oid_shorten_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::disown */
/* sha: 178e46ee8ca7fdb8b1aef8ffe130d0eef2a3ad29c29a1861f3be37b87768bd4c */
mrb_value
mrb_Git_OidShorten_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::OidShorten.disown only accepts objects of type Git::OidShorten");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::belongs_to_ruby */
/* sha: c66f02f1c7a15706c7e09256a29a9bc63617b8dd3b4919ffc1824bad141a0a62 */
mrb_value
mrb_Git_OidShorten_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::OidShorten.belongs_to_ruby only accepts objects of type Git::OidShorten");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_OidShorten_init(mrb_state* mrb) {
/* MRUBY_BINDING: OidShorten::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::class_definition */
/* sha: e8815ef477b6ef03c3d332368b55315b51323b8665fb059a4db0549743bd9f38 */
  struct RClass* OidShorten_class = mrb_define_class_under(mrb, Git_module(mrb), "OidShorten", mrb->object_class);
  MRB_SET_INSTANCE_TT(OidShorten_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::class_method_definitions */
/* sha: 2373c98f504be083cf9151463b790fefefc380f9de72237b1e6433d70e8488fa */
#if BIND_OidShorten_INITIALIZE
  mrb_define_method(mrb, OidShorten_class, "initialize", mrb_Git_OidShorten_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, OidShorten_class, "disown", mrb_Git_OidShorten_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, OidShorten_class, "belongs_to_ruby?", mrb_Git_OidShorten_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
