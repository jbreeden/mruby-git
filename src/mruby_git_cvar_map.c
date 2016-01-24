/*
 * git_cvar_map
 * Defined in file config.h @ line 93
 */

#include "mruby_Git.h"

#if BIND_CvarMap_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class Methods
 */

/* MRUBY_BINDING: CvarMap::initialize */
/* sha: 607bb54d56598ae88bf91534359702dd150ea9273864c4c2565a44b543a84ce8 */
#if BIND_CvarMap_INITIALIZE
mrb_value
mrb_Git_CvarMap_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_cvar_map* native_object = (git_cvar_map*)calloc(1, sizeof(git_cvar_map));
  mruby_gift_git_cvar_map_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CvarMap::disown */
/* sha: 7a8db6b0da05816839405082d9869dbac71a3b91722ddbb322aa519278891dd5 */
mrb_value
mrb_Git_CvarMap_disown(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::CvarMap.disown only accepts objects of type Git::CvarMap");
    return mrb_nil_value();
  }

  ((mruby_to_native_ref*)(DATA_PTR(ruby_object)))->belongs_to_ruby = FALSE;

  return mrb_nil_value();
}
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CvarMap::belongs_to_ruby */
/* sha: 8f439f1228c29f0089403958fdad9f70c77391c796c120dcd010ea62200f5e7f */
mrb_value
mrb_Git_CvarMap_belongs_to_ruby(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "Git::CvarMap.belongs_to_ruby only accepts objects of type Git::CvarMap");
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

/* MRUBY_BINDING: CvarMap::cvar_type_reader */
/* sha: 84e6e844cb3be8889b6ae4247a08c6a6eed3f936084463f5c374d90d8858b271 */
#if BIND_CvarMap_cvar_type_FIELD_READER
/* get_cvar_type
 *
 * Return Type: git_cvar_t
 */
mrb_value
mrb_Git_CvarMap_get_cvar_type(mrb_state* mrb, mrb_value self) {
  git_cvar_map * native_self = mruby_unbox_git_cvar_map(self);

  git_cvar_t native_cvar_type = native_self->cvar_type;

  mrb_value cvar_type = mrb_fixnum_value(native_cvar_type);

  return cvar_type;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CvarMap::cvar_type_writer */
/* sha: afb144ebd82fab1eb29c516b6a3740dcffd3261b6e9a9154e011b01fdff5ef01 */
#if BIND_CvarMap_cvar_type_FIELD_WRITER
/* set_cvar_type
 *
 * Parameters:
 * - value: git_cvar_t
 */
mrb_value
mrb_Git_CvarMap_set_cvar_type(mrb_state* mrb, mrb_value self) {
  git_cvar_map * native_self = mruby_unbox_git_cvar_map(self);
  mrb_int native_cvar_type;

  mrb_get_args(mrb, "i", &native_cvar_type);

  native_self->cvar_type = native_cvar_type;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CvarMap::str_match_reader */
/* sha: c33b5ba5627416e32e9acd28990740c9cea48c50a2965ca618a85d7747605ff7 */
#if BIND_CvarMap_str_match_FIELD_READER
/* get_str_match
 *
 * Return Type: const char *
 */
mrb_value
mrb_Git_CvarMap_get_str_match(mrb_state* mrb, mrb_value self) {
  git_cvar_map * native_self = mruby_unbox_git_cvar_map(self);

  const char * native_str_match = native_self->str_match;

  mrb_value str_match = native_str_match == NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, native_str_match);

  return str_match;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CvarMap::str_match_writer */
/* sha: fee3872290d3480d614128f404adfefc242cb776efcf97393031edff2c157605 */
#if BIND_CvarMap_str_match_FIELD_WRITER
/* set_str_match
 *
 * Parameters:
 * - value: const char *
 */
mrb_value
mrb_Git_CvarMap_set_str_match(mrb_state* mrb, mrb_value self) {
  git_cvar_map * native_self = mruby_unbox_git_cvar_map(self);
  char * native_str_match = NULL;

  mrb_get_args(mrb, "z", &native_str_match);

  native_self->str_match = native_str_match;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CvarMap::map_value_reader */
/* sha: 02a844b9e55979505d6ea5c596c6d67d5cc419a8ac179d63464eb0afa09a0496 */
#if BIND_CvarMap_map_value_FIELD_READER
/* get_map_value
 *
 * Return Type: int
 */
mrb_value
mrb_Git_CvarMap_get_map_value(mrb_state* mrb, mrb_value self) {
  git_cvar_map * native_self = mruby_unbox_git_cvar_map(self);

  int native_map_value = native_self->map_value;

  mrb_value map_value = mrb_fixnum_value(native_map_value);

  return map_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CvarMap::map_value_writer */
/* sha: 623981d0b0d583f0b1994e025a9206d86fea34b9a7d5bf1890b8007112bb06c6 */
#if BIND_CvarMap_map_value_FIELD_WRITER
/* set_map_value
 *
 * Parameters:
 * - value: int
 */
mrb_value
mrb_Git_CvarMap_set_map_value(mrb_state* mrb, mrb_value self) {
  git_cvar_map * native_self = mruby_unbox_git_cvar_map(self);
  mrb_int native_map_value;

  mrb_get_args(mrb, "i", &native_map_value);

  native_self->map_value = native_map_value;
  
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_CvarMap_init(mrb_state* mrb) {
/* MRUBY_BINDING: CvarMap::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CvarMap::class_definition */
/* sha: 8e92108c72a48032795f77ff719e4462e727d1118150c7d53057623bdfc22484 */
  struct RClass* CvarMap_class = mrb_define_class_under(mrb, Git_module(mrb), "CvarMap", mrb->object_class);
  MRB_SET_INSTANCE_TT(CvarMap_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CvarMap::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CvarMap::class_method_definitions */
/* sha: b0667fb2a03ee204ebcd5a64d49bd582aeb7538950a6b25df9a0cd6c3018778b */
#if BIND_CvarMap_INITIALIZE
  mrb_define_method(mrb, CvarMap_class, "initialize", mrb_Git_CvarMap_initialize, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, CvarMap_class, "disown", mrb_Git_CvarMap_disown, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, CvarMap_class, "belongs_to_ruby?", mrb_Git_CvarMap_belongs_to_ruby, MRB_ARGS_ARG(1, 0));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CvarMap::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CvarMap::attr_definitions */
/* sha: 4bf7bd3150e54f6ba5be3a82ef99fbd358f7809575d1c0acb9367d42438c4bb8 */
  /*
   * Fields
   */
#if BIND_CvarMap_cvar_type_FIELD_READER
  mrb_define_method(mrb, CvarMap_class, "cvar_type", mrb_Git_CvarMap_get_cvar_type, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CvarMap_cvar_type_FIELD_WRITER
  mrb_define_method(mrb, CvarMap_class, "cvar_type=", mrb_Git_CvarMap_set_cvar_type, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CvarMap_str_match_FIELD_READER
  mrb_define_method(mrb, CvarMap_class, "str_match", mrb_Git_CvarMap_get_str_match, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CvarMap_str_match_FIELD_WRITER
  mrb_define_method(mrb, CvarMap_class, "str_match=", mrb_Git_CvarMap_set_str_match, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_CvarMap_map_value_FIELD_READER
  mrb_define_method(mrb, CvarMap_class, "map_value", mrb_Git_CvarMap_get_map_value, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_CvarMap_map_value_FIELD_WRITER
  mrb_define_method(mrb, CvarMap_class, "map_value=", mrb_Git_CvarMap_set_map_value, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CvarMap::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CvarMap::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CvarMap::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
