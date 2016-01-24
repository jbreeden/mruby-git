/*
 * git_status_entry
 * Defined in file status.h @ line 214
 */

#include "mruby_Git.h"

#if BIND_StatusEntry_TYPE

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusEntry::initialize */
/* sha: fafd79ca2f0c5e0d4de9875f9d4b8ddbbbb479ff5304a19b46cb264c32af806d */
#if BIND_StatusEntry_INITIALIZE
mrb_value
mrb_Git_StatusEntry_initialize(mrb_state* mrb, mrb_value self) {
/* TODO: Remove this comment & run `mrbind enable-functions` if an initializer is desired. */
  git_status_entry* native_object = (git_status_entry*)calloc(1, sizeof(git_status_entry));
  mruby_gift_git_status_entry_data_ptr(self, native_object);
  return self;
}
#endif
/* MRUBY_BINDING_END */

/*
 * Fields
 */

/* MRUBY_BINDING: StatusEntry::status_reader */
/* sha: 840158b376d149236c97bfb14b051631f35b724878d9dca48aa5ebf22d76d663 */
#if BIND_StatusEntry_status_FIELD_READER
/* get_status
 *
 * Return Type: git_status_t
 */
mrb_value
mrb_Git_StatusEntry_get_status(mrb_state* mrb, mrb_value self) {
  git_status_entry * native_self = mruby_unbox_git_status_entry(self);

  git_status_t native_status = native_self->status;

  mrb_value status = mrb_fixnum_value(native_status);

  return status;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusEntry::status_writer */
/* sha: d0a491df267d52e4de33db742d72e9145215d15a766df10a4f2fe848a2e6647f */
#if BIND_StatusEntry_status_FIELD_WRITER
/* set_status
 *
 * Parameters:
 * - value: git_status_t
 */
mrb_value
mrb_Git_StatusEntry_set_status(mrb_state* mrb, mrb_value self) {
  git_status_entry * native_self = mruby_unbox_git_status_entry(self);
  mrb_int native_status;

  mrb_get_args(mrb, "i", &native_status);

  native_self->status = native_status;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusEntry::head_to_index_reader */
/* sha: 518cf05337bf163815c21043f85300dfd0f67bb97063c2179f153efd1525c222 */
#if BIND_StatusEntry_head_to_index_FIELD_READER
/* get_head_to_index
 *
 * Return Type: git_diff_delta *
 */
mrb_value
mrb_Git_StatusEntry_get_head_to_index(mrb_state* mrb, mrb_value self) {
  git_status_entry * native_self = mruby_unbox_git_status_entry(self);

  git_diff_delta * native_head_to_index = native_self->head_to_index;

  mrb_value head_to_index = (native_head_to_index == NULL ? mrb_nil_value() : mruby_box_git_diff_delta(mrb, native_head_to_index));

  return head_to_index;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusEntry::head_to_index_writer */
/* sha: 5fc64d06ac5b2fabf29c46f871f2fca74acaf67ea07c2d2439c288b45d5a3a05 */
#if BIND_StatusEntry_head_to_index_FIELD_WRITER
/* set_head_to_index
 *
 * Parameters:
 * - value: git_diff_delta *
 */
mrb_value
mrb_Git_StatusEntry_set_head_to_index(mrb_state* mrb, mrb_value self) {
  git_status_entry * native_self = mruby_unbox_git_status_entry(self);
  mrb_value head_to_index;

  mrb_get_args(mrb, "o", &head_to_index);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, head_to_index, DiffDelta_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffDelta expected");
    return mrb_nil_value();
  }

  git_diff_delta * native_head_to_index = (mrb_nil_p(head_to_index) ? NULL : mruby_unbox_git_diff_delta(head_to_index));

  native_self->head_to_index = native_head_to_index;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusEntry::index_to_workdir_reader */
/* sha: 5d382ab67daaef7e7e71c3f484683b1c523d06eeb2ec430dc457532c0c7ee0e9 */
#if BIND_StatusEntry_index_to_workdir_FIELD_READER
/* get_index_to_workdir
 *
 * Return Type: git_diff_delta *
 */
mrb_value
mrb_Git_StatusEntry_get_index_to_workdir(mrb_state* mrb, mrb_value self) {
  git_status_entry * native_self = mruby_unbox_git_status_entry(self);

  git_diff_delta * native_index_to_workdir = native_self->index_to_workdir;

  mrb_value index_to_workdir = (native_index_to_workdir == NULL ? mrb_nil_value() : mruby_box_git_diff_delta(mrb, native_index_to_workdir));

  return index_to_workdir;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusEntry::index_to_workdir_writer */
/* sha: b44c0ad0560ba94d2d69af01e6f2c0a801aff9bb3483de09910771e603227000 */
#if BIND_StatusEntry_index_to_workdir_FIELD_WRITER
/* set_index_to_workdir
 *
 * Parameters:
 * - value: git_diff_delta *
 */
mrb_value
mrb_Git_StatusEntry_set_index_to_workdir(mrb_state* mrb, mrb_value self) {
  git_status_entry * native_self = mruby_unbox_git_status_entry(self);
  mrb_value index_to_workdir;

  mrb_get_args(mrb, "o", &index_to_workdir);

  /* type checking */
  if (!mrb_obj_is_kind_of(mrb, index_to_workdir, DiffDelta_class(mrb))) {
    mrb_raise(mrb, E_TYPE_ERROR, "DiffDelta expected");
    return mrb_nil_value();
  }

  git_diff_delta * native_index_to_workdir = (mrb_nil_p(index_to_workdir) ? NULL : mruby_unbox_git_diff_delta(index_to_workdir));

  native_self->index_to_workdir = native_index_to_workdir;
  
  /* Hacky way to return whatever was passed in. Mirrors typical assignment semantics. */
  mrb_value value_as_mrb_value;
  mrb_get_args(mrb, "o", &value_as_mrb_value);
  return value_as_mrb_value;
}
#endif
/* MRUBY_BINDING_END */


void mrb_Git_StatusEntry_init(mrb_state* mrb) {
/* MRUBY_BINDING: StatusEntry::class_init_header */
/* sha: ad8337ceaefe095e6123163db0ca9028098ef3cf11dd77e31138363633f0fdd6 */
  /* Don't double-init. */
  static int initialized = 0;
  if (initialized) return;
  else initialized = 1;
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusEntry::class_definition */
/* sha: c7efcfa605d611ef2b6fd8247b0e54f3ebeceb4b50541e6db26b5db1d000142c */
  struct RClass* StatusEntry_class = mrb_define_class_under(mrb, Git_module(mrb), "StatusEntry", mrb->object_class);
  MRB_SET_INSTANCE_TT(StatusEntry_class, MRB_TT_DATA);
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusEntry::pre_class_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusEntry::class_method_definitions */
/* sha: 5dfbe60f60b965305eedfdea6c195c2ce1defdeb2669ed0d77ca8e9dae7f6b0e */
#if BIND_StatusEntry_INITIALIZE
  mrb_define_method(mrb, StatusEntry_class, "initialize", mrb_Git_StatusEntry_initialize, MRB_ARGS_NONE());
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusEntry::pre_attr_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusEntry::attr_definitions */
/* sha: b3bce4923351aed9adfbd0ccdc05a0a496c9e5ef34406fbbea218dae400558f1 */
  /*
   * Fields
   */
#if BIND_StatusEntry_status_FIELD_READER
  mrb_define_method(mrb, StatusEntry_class, "status", mrb_Git_StatusEntry_get_status, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_StatusEntry_status_FIELD_WRITER
  mrb_define_method(mrb, StatusEntry_class, "status=", mrb_Git_StatusEntry_set_status, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_StatusEntry_head_to_index_FIELD_READER
  mrb_define_method(mrb, StatusEntry_class, "head_to_index", mrb_Git_StatusEntry_get_head_to_index, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_StatusEntry_head_to_index_FIELD_WRITER
  mrb_define_method(mrb, StatusEntry_class, "head_to_index=", mrb_Git_StatusEntry_set_head_to_index, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_StatusEntry_index_to_workdir_FIELD_READER
  mrb_define_method(mrb, StatusEntry_class, "index_to_workdir", mrb_Git_StatusEntry_get_index_to_workdir, MRB_ARGS_ARG(0, 0));
#endif
#if BIND_StatusEntry_index_to_workdir_FIELD_WRITER
  mrb_define_method(mrb, StatusEntry_class, "index_to_workdir=", mrb_Git_StatusEntry_set_index_to_workdir, MRB_ARGS_ARG(1, 0));
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusEntry::pre_instance_method_definitions */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusEntry::instance_method_definitions */
/* sha: bc1a7bf41f8f5b2f90434b58331667565e72c2b8794e7f56884099f7767fa42c */
  /*
   * Member Functions
   */
  /* None */
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusEntry::class_init_footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
#endif
