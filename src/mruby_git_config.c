/*
 * git_config
 * Defined in file types.h @ line 138
 */

#include "mruby_Git.h"

#if BIND_Config_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Config::initialize */
/* sha: 3d5812e9a5e62d00d2761d39d680f4eceafd68952e62d7ce049316b4b0ae8c64 */
#if BIND_Config_INITIALIZE
mrb_value
mrb_Git_Config_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_config* native_object = (git_config*)calloc(1, sizeof(git_config));
  mruby_gift_git_config_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::disown */
/* sha: 59c3687dbbd4d57d60103ba06029d4d53a923d779c0840d488bebe9853a4b1bf */
mrb_value
mrb_Git_Config_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Config.disown only accepts objects of type Git::Config");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::belongs_to_ruby */
/* sha: 87e3ff1d173c196e94db6a6e4485e4011a532067021f64c44137b79d5b1259f7 */
mrb_value
mrb_Git_Config_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Config.belongs_to_ruby only accepts objects of type Git::Config");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_Config_init(mrb_state* mrb) {
/* MRUBY_BINDING: Config::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::class_definition */
/* sha: 448951a812c9643f05fe95e1a9f913fc7f8799ccfb5ba7ea33ca96c53d9dae1b */
  struct RClass* Config_class = mrb_define_class_under(mrb, Git_module(mrb), "Config", mrb->object_class);
  MRB_SET_INSTANCE_TT(Config_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::class_method_definitions */
/* sha: 54e249ccba686c04fee4f345a22e628f3fe09b66175191153abd6db0acf94d55 */
#if BIND_Config_INITIALIZE
  mrb_define_method(mrb, Config_class, "initialize", mrb_Git_Config_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Config_class, "disown", mrb_Git_Config_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Config_class, "belongs_to_ruby?", mrb_Git_Config_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif