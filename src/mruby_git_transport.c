/*
 * git_transport
 * Defined in file types.h @ line 230
 */

#include "mruby_Git.h"

#if BIND_Transport_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transport::initialize */
/* sha: 24611ec0ea17fde731d5bc51f3ce4045d58fd726217d21fe28e23269bf68bdf3 */
#if BIND_Transport_INITIALIZE
mrb_value
mrb_Git_Transport_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_transport* native_object = (git_transport*)calloc(1, sizeof(git_transport));
  mruby_gift_git_transport_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_Transport_init(mrb_state* mrb) {
/* MRUBY_BINDING: Transport::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transport::class_definition */
/* sha: d13d241053bf50d1d3f7e405e8252000ad0bbc946a59fc91355a35cb399366a8 */
  struct RClass* Transport_class = mrb_define_class_under(mrb, Git_module(mrb), "Transport", mrb->object_class);
  MRB_SET_INSTANCE_TT(Transport_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transport::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transport::class_method_definitions */
/* sha: b31e8be95b99f201896f5f4e95712a55771cab7665419fd7992f46c336f61e40 */
#if BIND_Transport_INITIALIZE
  mrb_define_method(mrb, Transport_class, "initialize", mrb_Git_Transport_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transport::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transport::attr_definitions */
/* sha: 50c2844963333e47202eca17b7b61f03790fb1b7cbacbaff3f287c0ac8fd59a3 */
  /*
   * Fields
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transport::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transport::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transport::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
