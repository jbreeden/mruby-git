/*
 * git_transaction
 * Defined in file types.h @ line 175
 */

#include "mruby_Git.h"

#if BIND_Transaction_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: Transaction::initialize */
/* sha: 75bbd054c9e76b0411196038addbed521fdfc04dec2270e53404d094c89c65bd */
#if BIND_Transaction_INITIALIZE
mrb_value
mrb_Git_Transaction_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_transaction* native_object = (git_transaction*)calloc(1, sizeof(git_transaction));
  mruby_gift_git_transaction_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transaction::disown */
/* sha: cab38d6d06edd37d2d2b2a00fb739cdb2928ad89ac419595632ed9432230cc87 */
mrb_value
mrb_Git_Transaction_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Transaction.disown only accepts objects of type Git::Transaction");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transaction::belongs_to_ruby */
/* sha: 2c6231594ddf4ad215620ffb9716b2d1646927bd33038f6f393c4b37ac606521 */
mrb_value
mrb_Git_Transaction_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::Transaction.belongs_to_ruby only accepts objects of type Git::Transaction");
    return mrb_nil_value();
  }

  if ( ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby ) {
    return mrb_true_value();
  } else {
    return mrb_false_value();
  }
}
/* MRUBY_BINDING_END */


void mrb_Git_Transaction_init(mrb_state* mrb) {
/* MRUBY_BINDING: Transaction::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transaction::class_definition */
/* sha: 0918eaf77642ddf0e8d0550d8163b251948df1d438b57191af5e650481248a70 */
  struct RClass* Transaction_class = mrb_define_class_under(mrb, Git_module(mrb), "Transaction", mrb->object_class);
  MRB_SET_INSTANCE_TT(Transaction_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transaction::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transaction::class_method_definitions */
/* sha: 64a1e396b35b81360ccae3dd38e84544bc969a891e6027071c2a218d9c939a81 */
#if BIND_Transaction_INITIALIZE
  mrb_define_method(mrb, Transaction_class, "initialize", mrb_Git_Transaction_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, Transaction_class, "disown", mrb_Git_Transaction_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, Transaction_class, "belongs_to_ruby?", mrb_Git_Transaction_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transaction::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transaction::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transaction::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transaction::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transaction::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
