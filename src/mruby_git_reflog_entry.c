/*
 * git_reflog_entry
 * Defined in file types.h @ line 144
 */

#include "mruby_Git.h"

#if BIND_ReflogEntry_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: ReflogEntry::initialize */
/* sha: 0734b536cdbbb5dfeb736b156d571a6f55728109aef6c121b60f6f22e6f1e86c */
#if BIND_ReflogEntry_INITIALIZE
mrb_value
mrb_Git_ReflogEntry_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_reflog_entry* native_object = (git_reflog_entry*)calloc(1, sizeof(git_reflog_entry));
  mruby_gift_git_reflog_entry_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::disown */
/* sha: 6076a5e861c4b88bd463287ede060f9e91619a016c0b669a655de989db2e9cd5 */
mrb_value
mrb_Git_ReflogEntry_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::ReflogEntry.disown only accepts objects of type Git::ReflogEntry");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::belongs_to_ruby */
/* sha: 4b85b2f3a20002f4cfbb57ed7aa2227cb025f27aa63f99b1685ecc065d5bc1ac */
mrb_value
mrb_Git_ReflogEntry_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::ReflogEntry.belongs_to_ruby only accepts objects of type Git::ReflogEntry");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_ReflogEntry_init(mrb_state* mrb) {
/* MRUBY_BINDING: ReflogEntry::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::class_definition */
/* sha: a154fb8cab7aaf0154b3e8b4741652a735c018b06bc32e0cf410fa580ad7f746 */
  struct RClass* ReflogEntry_class = mrb_define_class_under(mrb, Git_module(mrb), "ReflogEntry", mrb->object_class);
  MRB_SET_INSTANCE_TT(ReflogEntry_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::class_method_definitions */
/* sha: 85f9b77e4df5b8df0e73227f41eb213ea22a23666dec2e3a1e5adf5a85f0717b */
#if BIND_ReflogEntry_INITIALIZE
  mrb_define_method(mrb, ReflogEntry_class, "initialize", mrb_Git_ReflogEntry_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, ReflogEntry_class, "disown", mrb_Git_ReflogEntry_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, ReflogEntry_class, "belongs_to_ruby?", mrb_Git_ReflogEntry_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
