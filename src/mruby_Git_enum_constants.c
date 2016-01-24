#include "mruby_Git.h"

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

void
mruby_Git_define_enum_constants(mrb_state* mrb) {
  struct RClass * Git_module = Git_module(mrb);
  mrb_value Git_mod = mrb_obj_value(Git_module(mrb));

/* MRUBY_BINDING: Git_Cert_T_enum */
/* sha: 4a5dac33aaa112b12ebc9e4f2a2588fa49e057f7cce09f6ffb84edb4d157fa31 */
  struct RClass * Git_Cert_T_module = mrb_define_module_under(mrb, Git_module, "Git_Cert_T");
  mrb_value Git_Cert_T_mod = mrb_obj_value(Git_Cert_T_module);
  mrb_const_set(mrb, Git_Cert_T_mod, mrb_intern_lit(mrb, "CERT_NONE"), mrb_fixnum_value(GIT_CERT_NONE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CERT_NONE"), mrb_fixnum_value(GIT_CERT_NONE));
  mrb_const_set(mrb, Git_Cert_T_mod, mrb_intern_lit(mrb, "CERT_X509"), mrb_fixnum_value(GIT_CERT_X509));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CERT_X509"), mrb_fixnum_value(GIT_CERT_X509));
  mrb_const_set(mrb, Git_Cert_T_mod, mrb_intern_lit(mrb, "CERT_HOSTKEY_LIBSSH2"), mrb_fixnum_value(GIT_CERT_HOSTKEY_LIBSSH2));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CERT_HOSTKEY_LIBSSH2"), mrb_fixnum_value(GIT_CERT_HOSTKEY_LIBSSH2));
  mrb_const_set(mrb, Git_Cert_T_mod, mrb_intern_lit(mrb, "CERT_STRARRAY"), mrb_fixnum_value(GIT_CERT_STRARRAY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CERT_STRARRAY"), mrb_fixnum_value(GIT_CERT_STRARRAY));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Remote_Completion_Type_enum */
/* sha: 9ca2811809dd813023151c62dfca19b6fe6d0568a70920bada81688e08ed66b1 */
  struct RClass * Git_Remote_Completion_Type_module = mrb_define_module_under(mrb, Git_module, "Git_Remote_Completion_Type");
  mrb_value Git_Remote_Completion_Type_mod = mrb_obj_value(Git_Remote_Completion_Type_module);
  mrb_const_set(mrb, Git_Remote_Completion_Type_mod, mrb_intern_lit(mrb, "REMOTE_COMPLETION_DOWNLOAD"), mrb_fixnum_value(GIT_REMOTE_COMPLETION_DOWNLOAD));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REMOTE_COMPLETION_DOWNLOAD"), mrb_fixnum_value(GIT_REMOTE_COMPLETION_DOWNLOAD));
  mrb_const_set(mrb, Git_Remote_Completion_Type_mod, mrb_intern_lit(mrb, "REMOTE_COMPLETION_INDEXING"), mrb_fixnum_value(GIT_REMOTE_COMPLETION_INDEXING));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REMOTE_COMPLETION_INDEXING"), mrb_fixnum_value(GIT_REMOTE_COMPLETION_INDEXING));
  mrb_const_set(mrb, Git_Remote_Completion_Type_mod, mrb_intern_lit(mrb, "REMOTE_COMPLETION_ERROR"), mrb_fixnum_value(GIT_REMOTE_COMPLETION_ERROR));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REMOTE_COMPLETION_ERROR"), mrb_fixnum_value(GIT_REMOTE_COMPLETION_ERROR));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Attr_T_enum */
/* sha: 8403d2b7752ef0511d0afc95d37b730bd8efdbd5f0d29fa059d17a307a276f33 */
  struct RClass * Git_Attr_T_module = mrb_define_module_under(mrb, Git_module, "Git_Attr_T");
  mrb_value Git_Attr_T_mod = mrb_obj_value(Git_Attr_T_module);
  mrb_const_set(mrb, Git_Attr_T_mod, mrb_intern_lit(mrb, "ATTR_UNSPECIFIED_T"), mrb_fixnum_value(GIT_ATTR_UNSPECIFIED_T));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "ATTR_UNSPECIFIED_T"), mrb_fixnum_value(GIT_ATTR_UNSPECIFIED_T));
  mrb_const_set(mrb, Git_Attr_T_mod, mrb_intern_lit(mrb, "ATTR_TRUE_T"), mrb_fixnum_value(GIT_ATTR_TRUE_T));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "ATTR_TRUE_T"), mrb_fixnum_value(GIT_ATTR_TRUE_T));
  mrb_const_set(mrb, Git_Attr_T_mod, mrb_intern_lit(mrb, "ATTR_FALSE_T"), mrb_fixnum_value(GIT_ATTR_FALSE_T));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "ATTR_FALSE_T"), mrb_fixnum_value(GIT_ATTR_FALSE_T));
  mrb_const_set(mrb, Git_Attr_T_mod, mrb_intern_lit(mrb, "ATTR_VALUE_T"), mrb_fixnum_value(GIT_ATTR_VALUE_T));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "ATTR_VALUE_T"), mrb_fixnum_value(GIT_ATTR_VALUE_T));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Blame_Flag_T_enum */
/* sha: 6d2b3eb711162e5c13dcccb5e93217d81821fd3860220121d1cdf0a3e66c07ae */
  struct RClass * Git_Blame_Flag_T_module = mrb_define_module_under(mrb, Git_module, "Git_Blame_Flag_T");
  mrb_value Git_Blame_Flag_T_mod = mrb_obj_value(Git_Blame_Flag_T_module);
  mrb_const_set(mrb, Git_Blame_Flag_T_mod, mrb_intern_lit(mrb, "BLAME_NORMAL"), mrb_fixnum_value(GIT_BLAME_NORMAL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "BLAME_NORMAL"), mrb_fixnum_value(GIT_BLAME_NORMAL));
  mrb_const_set(mrb, Git_Blame_Flag_T_mod, mrb_intern_lit(mrb, "BLAME_TRACK_COPIES_SAME_FILE"), mrb_fixnum_value(GIT_BLAME_TRACK_COPIES_SAME_FILE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "BLAME_TRACK_COPIES_SAME_FILE"), mrb_fixnum_value(GIT_BLAME_TRACK_COPIES_SAME_FILE));
  mrb_const_set(mrb, Git_Blame_Flag_T_mod, mrb_intern_lit(mrb, "BLAME_TRACK_COPIES_SAME_COMMIT_MOVES"), mrb_fixnum_value(GIT_BLAME_TRACK_COPIES_SAME_COMMIT_MOVES));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "BLAME_TRACK_COPIES_SAME_COMMIT_MOVES"), mrb_fixnum_value(GIT_BLAME_TRACK_COPIES_SAME_COMMIT_MOVES));
  mrb_const_set(mrb, Git_Blame_Flag_T_mod, mrb_intern_lit(mrb, "BLAME_TRACK_COPIES_SAME_COMMIT_COPIES"), mrb_fixnum_value(GIT_BLAME_TRACK_COPIES_SAME_COMMIT_COPIES));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "BLAME_TRACK_COPIES_SAME_COMMIT_COPIES"), mrb_fixnum_value(GIT_BLAME_TRACK_COPIES_SAME_COMMIT_COPIES));
  mrb_const_set(mrb, Git_Blame_Flag_T_mod, mrb_intern_lit(mrb, "BLAME_TRACK_COPIES_ANY_COMMIT_COPIES"), mrb_fixnum_value(GIT_BLAME_TRACK_COPIES_ANY_COMMIT_COPIES));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "BLAME_TRACK_COPIES_ANY_COMMIT_COPIES"), mrb_fixnum_value(GIT_BLAME_TRACK_COPIES_ANY_COMMIT_COPIES));
  mrb_const_set(mrb, Git_Blame_Flag_T_mod, mrb_intern_lit(mrb, "BLAME_FIRST_PARENT"), mrb_fixnum_value(GIT_BLAME_FIRST_PARENT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "BLAME_FIRST_PARENT"), mrb_fixnum_value(GIT_BLAME_FIRST_PARENT));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Branch_T_enum */
/* sha: 0fd4e2879549779fd99f5d68f93e37de77086bb027c33504d84a04f4f82c624a */
  struct RClass * Git_Branch_T_module = mrb_define_module_under(mrb, Git_module, "Git_Branch_T");
  mrb_value Git_Branch_T_mod = mrb_obj_value(Git_Branch_T_module);
  mrb_const_set(mrb, Git_Branch_T_mod, mrb_intern_lit(mrb, "BRANCH_LOCAL"), mrb_fixnum_value(GIT_BRANCH_LOCAL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "BRANCH_LOCAL"), mrb_fixnum_value(GIT_BRANCH_LOCAL));
  mrb_const_set(mrb, Git_Branch_T_mod, mrb_intern_lit(mrb, "BRANCH_REMOTE"), mrb_fixnum_value(GIT_BRANCH_REMOTE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "BRANCH_REMOTE"), mrb_fixnum_value(GIT_BRANCH_REMOTE));
  mrb_const_set(mrb, Git_Branch_T_mod, mrb_intern_lit(mrb, "BRANCH_ALL"), mrb_fixnum_value(GIT_BRANCH_ALL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "BRANCH_ALL"), mrb_fixnum_value(GIT_BRANCH_ALL));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Cert_Ssh_T_enum */
/* sha: 3c7fb3a8ad87352c5299f944d09029943e15669e50ea2aaf66e408cfca8b53e4 */
  struct RClass * Git_Cert_Ssh_T_module = mrb_define_module_under(mrb, Git_module, "Git_Cert_Ssh_T");
  mrb_value Git_Cert_Ssh_T_mod = mrb_obj_value(Git_Cert_Ssh_T_module);
  mrb_const_set(mrb, Git_Cert_Ssh_T_mod, mrb_intern_lit(mrb, "CERT_SSH_MD5"), mrb_fixnum_value(GIT_CERT_SSH_MD5));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CERT_SSH_MD5"), mrb_fixnum_value(GIT_CERT_SSH_MD5));
  mrb_const_set(mrb, Git_Cert_Ssh_T_mod, mrb_intern_lit(mrb, "CERT_SSH_SHA1"), mrb_fixnum_value(GIT_CERT_SSH_SHA1));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CERT_SSH_SHA1"), mrb_fixnum_value(GIT_CERT_SSH_SHA1));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Checkout_Notify_T_enum */
/* sha: 7b40ef7cd3307292ed3aa7708022396dd5ee2c11506af51a64fca9544c0d5520 */
  struct RClass * Git_Checkout_Notify_T_module = mrb_define_module_under(mrb, Git_module, "Git_Checkout_Notify_T");
  mrb_value Git_Checkout_Notify_T_mod = mrb_obj_value(Git_Checkout_Notify_T_module);
  mrb_const_set(mrb, Git_Checkout_Notify_T_mod, mrb_intern_lit(mrb, "CHECKOUT_NOTIFY_NONE"), mrb_fixnum_value(GIT_CHECKOUT_NOTIFY_NONE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_NOTIFY_NONE"), mrb_fixnum_value(GIT_CHECKOUT_NOTIFY_NONE));
  mrb_const_set(mrb, Git_Checkout_Notify_T_mod, mrb_intern_lit(mrb, "CHECKOUT_NOTIFY_CONFLICT"), mrb_fixnum_value(GIT_CHECKOUT_NOTIFY_CONFLICT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_NOTIFY_CONFLICT"), mrb_fixnum_value(GIT_CHECKOUT_NOTIFY_CONFLICT));
  mrb_const_set(mrb, Git_Checkout_Notify_T_mod, mrb_intern_lit(mrb, "CHECKOUT_NOTIFY_DIRTY"), mrb_fixnum_value(GIT_CHECKOUT_NOTIFY_DIRTY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_NOTIFY_DIRTY"), mrb_fixnum_value(GIT_CHECKOUT_NOTIFY_DIRTY));
  mrb_const_set(mrb, Git_Checkout_Notify_T_mod, mrb_intern_lit(mrb, "CHECKOUT_NOTIFY_UPDATED"), mrb_fixnum_value(GIT_CHECKOUT_NOTIFY_UPDATED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_NOTIFY_UPDATED"), mrb_fixnum_value(GIT_CHECKOUT_NOTIFY_UPDATED));
  mrb_const_set(mrb, Git_Checkout_Notify_T_mod, mrb_intern_lit(mrb, "CHECKOUT_NOTIFY_UNTRACKED"), mrb_fixnum_value(GIT_CHECKOUT_NOTIFY_UNTRACKED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_NOTIFY_UNTRACKED"), mrb_fixnum_value(GIT_CHECKOUT_NOTIFY_UNTRACKED));
  mrb_const_set(mrb, Git_Checkout_Notify_T_mod, mrb_intern_lit(mrb, "CHECKOUT_NOTIFY_IGNORED"), mrb_fixnum_value(GIT_CHECKOUT_NOTIFY_IGNORED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_NOTIFY_IGNORED"), mrb_fixnum_value(GIT_CHECKOUT_NOTIFY_IGNORED));
  mrb_const_set(mrb, Git_Checkout_Notify_T_mod, mrb_intern_lit(mrb, "CHECKOUT_NOTIFY_ALL"), mrb_fixnum_value(GIT_CHECKOUT_NOTIFY_ALL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_NOTIFY_ALL"), mrb_fixnum_value(GIT_CHECKOUT_NOTIFY_ALL));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Checkout_Strategy_T_enum */
/* sha: 413f66e530ad9612f60b6f7c641d86b06ac6125669350ae0db54a016ac381185 */
  struct RClass * Git_Checkout_Strategy_T_module = mrb_define_module_under(mrb, Git_module, "Git_Checkout_Strategy_T");
  mrb_value Git_Checkout_Strategy_T_mod = mrb_obj_value(Git_Checkout_Strategy_T_module);
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_NONE"), mrb_fixnum_value(GIT_CHECKOUT_NONE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_NONE"), mrb_fixnum_value(GIT_CHECKOUT_NONE));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_SAFE"), mrb_fixnum_value(GIT_CHECKOUT_SAFE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_SAFE"), mrb_fixnum_value(GIT_CHECKOUT_SAFE));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_FORCE"), mrb_fixnum_value(GIT_CHECKOUT_FORCE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_FORCE"), mrb_fixnum_value(GIT_CHECKOUT_FORCE));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_RECREATE_MISSING"), mrb_fixnum_value(GIT_CHECKOUT_RECREATE_MISSING));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_RECREATE_MISSING"), mrb_fixnum_value(GIT_CHECKOUT_RECREATE_MISSING));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_ALLOW_CONFLICTS"), mrb_fixnum_value(GIT_CHECKOUT_ALLOW_CONFLICTS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_ALLOW_CONFLICTS"), mrb_fixnum_value(GIT_CHECKOUT_ALLOW_CONFLICTS));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_REMOVE_UNTRACKED"), mrb_fixnum_value(GIT_CHECKOUT_REMOVE_UNTRACKED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_REMOVE_UNTRACKED"), mrb_fixnum_value(GIT_CHECKOUT_REMOVE_UNTRACKED));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_REMOVE_IGNORED"), mrb_fixnum_value(GIT_CHECKOUT_REMOVE_IGNORED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_REMOVE_IGNORED"), mrb_fixnum_value(GIT_CHECKOUT_REMOVE_IGNORED));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_UPDATE_ONLY"), mrb_fixnum_value(GIT_CHECKOUT_UPDATE_ONLY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_UPDATE_ONLY"), mrb_fixnum_value(GIT_CHECKOUT_UPDATE_ONLY));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_DONT_UPDATE_INDEX"), mrb_fixnum_value(GIT_CHECKOUT_DONT_UPDATE_INDEX));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_DONT_UPDATE_INDEX"), mrb_fixnum_value(GIT_CHECKOUT_DONT_UPDATE_INDEX));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_NO_REFRESH"), mrb_fixnum_value(GIT_CHECKOUT_NO_REFRESH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_NO_REFRESH"), mrb_fixnum_value(GIT_CHECKOUT_NO_REFRESH));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_SKIP_UNMERGED"), mrb_fixnum_value(GIT_CHECKOUT_SKIP_UNMERGED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_SKIP_UNMERGED"), mrb_fixnum_value(GIT_CHECKOUT_SKIP_UNMERGED));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_USE_OURS"), mrb_fixnum_value(GIT_CHECKOUT_USE_OURS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_USE_OURS"), mrb_fixnum_value(GIT_CHECKOUT_USE_OURS));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_USE_THEIRS"), mrb_fixnum_value(GIT_CHECKOUT_USE_THEIRS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_USE_THEIRS"), mrb_fixnum_value(GIT_CHECKOUT_USE_THEIRS));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_DISABLE_PATHSPEC_MATCH"), mrb_fixnum_value(GIT_CHECKOUT_DISABLE_PATHSPEC_MATCH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_DISABLE_PATHSPEC_MATCH"), mrb_fixnum_value(GIT_CHECKOUT_DISABLE_PATHSPEC_MATCH));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_SKIP_LOCKED_DIRECTORIES"), mrb_fixnum_value(GIT_CHECKOUT_SKIP_LOCKED_DIRECTORIES));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_SKIP_LOCKED_DIRECTORIES"), mrb_fixnum_value(GIT_CHECKOUT_SKIP_LOCKED_DIRECTORIES));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_DONT_OVERWRITE_IGNORED"), mrb_fixnum_value(GIT_CHECKOUT_DONT_OVERWRITE_IGNORED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_DONT_OVERWRITE_IGNORED"), mrb_fixnum_value(GIT_CHECKOUT_DONT_OVERWRITE_IGNORED));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_CONFLICT_STYLE_MERGE"), mrb_fixnum_value(GIT_CHECKOUT_CONFLICT_STYLE_MERGE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_CONFLICT_STYLE_MERGE"), mrb_fixnum_value(GIT_CHECKOUT_CONFLICT_STYLE_MERGE));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_CONFLICT_STYLE_DIFF3"), mrb_fixnum_value(GIT_CHECKOUT_CONFLICT_STYLE_DIFF3));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_CONFLICT_STYLE_DIFF3"), mrb_fixnum_value(GIT_CHECKOUT_CONFLICT_STYLE_DIFF3));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_DONT_REMOVE_EXISTING"), mrb_fixnum_value(GIT_CHECKOUT_DONT_REMOVE_EXISTING));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_DONT_REMOVE_EXISTING"), mrb_fixnum_value(GIT_CHECKOUT_DONT_REMOVE_EXISTING));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_DONT_WRITE_INDEX"), mrb_fixnum_value(GIT_CHECKOUT_DONT_WRITE_INDEX));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_DONT_WRITE_INDEX"), mrb_fixnum_value(GIT_CHECKOUT_DONT_WRITE_INDEX));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_UPDATE_SUBMODULES"), mrb_fixnum_value(GIT_CHECKOUT_UPDATE_SUBMODULES));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_UPDATE_SUBMODULES"), mrb_fixnum_value(GIT_CHECKOUT_UPDATE_SUBMODULES));
  mrb_const_set(mrb, Git_Checkout_Strategy_T_mod, mrb_intern_lit(mrb, "CHECKOUT_UPDATE_SUBMODULES_IF_CHANGED"), mrb_fixnum_value(GIT_CHECKOUT_UPDATE_SUBMODULES_IF_CHANGED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CHECKOUT_UPDATE_SUBMODULES_IF_CHANGED"), mrb_fixnum_value(GIT_CHECKOUT_UPDATE_SUBMODULES_IF_CHANGED));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Clone_Local_T_enum */
/* sha: a8e866eff0b42957d597ad8a7e0b4f2d8a03ea2f72ee33b856444c9cd003943f */
  struct RClass * Git_Clone_Local_T_module = mrb_define_module_under(mrb, Git_module, "Git_Clone_Local_T");
  mrb_value Git_Clone_Local_T_mod = mrb_obj_value(Git_Clone_Local_T_module);
  mrb_const_set(mrb, Git_Clone_Local_T_mod, mrb_intern_lit(mrb, "CLONE_LOCAL_AUTO"), mrb_fixnum_value(GIT_CLONE_LOCAL_AUTO));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CLONE_LOCAL_AUTO"), mrb_fixnum_value(GIT_CLONE_LOCAL_AUTO));
  mrb_const_set(mrb, Git_Clone_Local_T_mod, mrb_intern_lit(mrb, "CLONE_LOCAL"), mrb_fixnum_value(GIT_CLONE_LOCAL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CLONE_LOCAL"), mrb_fixnum_value(GIT_CLONE_LOCAL));
  mrb_const_set(mrb, Git_Clone_Local_T_mod, mrb_intern_lit(mrb, "CLONE_NO_LOCAL"), mrb_fixnum_value(GIT_CLONE_NO_LOCAL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CLONE_NO_LOCAL"), mrb_fixnum_value(GIT_CLONE_NO_LOCAL));
  mrb_const_set(mrb, Git_Clone_Local_T_mod, mrb_intern_lit(mrb, "CLONE_LOCAL_NO_LINKS"), mrb_fixnum_value(GIT_CLONE_LOCAL_NO_LINKS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CLONE_LOCAL_NO_LINKS"), mrb_fixnum_value(GIT_CLONE_LOCAL_NO_LINKS));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Config_Level_T_enum */
/* sha: e6cf34c2fe78186d2caa96ef8c65640f3aadbee1012373d401e4d669d69da3a1 */
  struct RClass * Git_Config_Level_T_module = mrb_define_module_under(mrb, Git_module, "Git_Config_Level_T");
  mrb_value Git_Config_Level_T_mod = mrb_obj_value(Git_Config_Level_T_module);
  mrb_const_set(mrb, Git_Config_Level_T_mod, mrb_intern_lit(mrb, "CONFIG_LEVEL_PROGRAMDATA"), mrb_fixnum_value(GIT_CONFIG_LEVEL_PROGRAMDATA));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CONFIG_LEVEL_PROGRAMDATA"), mrb_fixnum_value(GIT_CONFIG_LEVEL_PROGRAMDATA));
  mrb_const_set(mrb, Git_Config_Level_T_mod, mrb_intern_lit(mrb, "CONFIG_LEVEL_SYSTEM"), mrb_fixnum_value(GIT_CONFIG_LEVEL_SYSTEM));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CONFIG_LEVEL_SYSTEM"), mrb_fixnum_value(GIT_CONFIG_LEVEL_SYSTEM));
  mrb_const_set(mrb, Git_Config_Level_T_mod, mrb_intern_lit(mrb, "CONFIG_LEVEL_XDG"), mrb_fixnum_value(GIT_CONFIG_LEVEL_XDG));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CONFIG_LEVEL_XDG"), mrb_fixnum_value(GIT_CONFIG_LEVEL_XDG));
  mrb_const_set(mrb, Git_Config_Level_T_mod, mrb_intern_lit(mrb, "CONFIG_LEVEL_GLOBAL"), mrb_fixnum_value(GIT_CONFIG_LEVEL_GLOBAL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CONFIG_LEVEL_GLOBAL"), mrb_fixnum_value(GIT_CONFIG_LEVEL_GLOBAL));
  mrb_const_set(mrb, Git_Config_Level_T_mod, mrb_intern_lit(mrb, "CONFIG_LEVEL_LOCAL"), mrb_fixnum_value(GIT_CONFIG_LEVEL_LOCAL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CONFIG_LEVEL_LOCAL"), mrb_fixnum_value(GIT_CONFIG_LEVEL_LOCAL));
  mrb_const_set(mrb, Git_Config_Level_T_mod, mrb_intern_lit(mrb, "CONFIG_LEVEL_APP"), mrb_fixnum_value(GIT_CONFIG_LEVEL_APP));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CONFIG_LEVEL_APP"), mrb_fixnum_value(GIT_CONFIG_LEVEL_APP));
  mrb_const_set(mrb, Git_Config_Level_T_mod, mrb_intern_lit(mrb, "CONFIG_HIGHEST_LEVEL"), mrb_fixnum_value(GIT_CONFIG_HIGHEST_LEVEL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CONFIG_HIGHEST_LEVEL"), mrb_fixnum_value(GIT_CONFIG_HIGHEST_LEVEL));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Credtype_T_enum */
/* sha: c37267f99ff4e1bf41d015b834e4cd9a9f78d2ccce670ae6273ab9027568cf35 */
  struct RClass * Git_Credtype_T_module = mrb_define_module_under(mrb, Git_module, "Git_Credtype_T");
  mrb_value Git_Credtype_T_mod = mrb_obj_value(Git_Credtype_T_module);
  mrb_const_set(mrb, Git_Credtype_T_mod, mrb_intern_lit(mrb, "CREDTYPE_USERPASS_PLAINTEXT"), mrb_fixnum_value(GIT_CREDTYPE_USERPASS_PLAINTEXT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CREDTYPE_USERPASS_PLAINTEXT"), mrb_fixnum_value(GIT_CREDTYPE_USERPASS_PLAINTEXT));
  mrb_const_set(mrb, Git_Credtype_T_mod, mrb_intern_lit(mrb, "CREDTYPE_SSH_KEY"), mrb_fixnum_value(GIT_CREDTYPE_SSH_KEY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CREDTYPE_SSH_KEY"), mrb_fixnum_value(GIT_CREDTYPE_SSH_KEY));
  mrb_const_set(mrb, Git_Credtype_T_mod, mrb_intern_lit(mrb, "CREDTYPE_SSH_CUSTOM"), mrb_fixnum_value(GIT_CREDTYPE_SSH_CUSTOM));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CREDTYPE_SSH_CUSTOM"), mrb_fixnum_value(GIT_CREDTYPE_SSH_CUSTOM));
  mrb_const_set(mrb, Git_Credtype_T_mod, mrb_intern_lit(mrb, "CREDTYPE_DEFAULT"), mrb_fixnum_value(GIT_CREDTYPE_DEFAULT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CREDTYPE_DEFAULT"), mrb_fixnum_value(GIT_CREDTYPE_DEFAULT));
  mrb_const_set(mrb, Git_Credtype_T_mod, mrb_intern_lit(mrb, "CREDTYPE_SSH_INTERACTIVE"), mrb_fixnum_value(GIT_CREDTYPE_SSH_INTERACTIVE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CREDTYPE_SSH_INTERACTIVE"), mrb_fixnum_value(GIT_CREDTYPE_SSH_INTERACTIVE));
  mrb_const_set(mrb, Git_Credtype_T_mod, mrb_intern_lit(mrb, "CREDTYPE_USERNAME"), mrb_fixnum_value(GIT_CREDTYPE_USERNAME));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CREDTYPE_USERNAME"), mrb_fixnum_value(GIT_CREDTYPE_USERNAME));
  mrb_const_set(mrb, Git_Credtype_T_mod, mrb_intern_lit(mrb, "CREDTYPE_SSH_MEMORY"), mrb_fixnum_value(GIT_CREDTYPE_SSH_MEMORY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CREDTYPE_SSH_MEMORY"), mrb_fixnum_value(GIT_CREDTYPE_SSH_MEMORY));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Cvar_T_enum */
/* sha: d4dea1db7c169d3b00924e720dbc752a179ca979620ea9af3e06fd60f22a077e */
  struct RClass * Git_Cvar_T_module = mrb_define_module_under(mrb, Git_module, "Git_Cvar_T");
  mrb_value Git_Cvar_T_mod = mrb_obj_value(Git_Cvar_T_module);
  mrb_const_set(mrb, Git_Cvar_T_mod, mrb_intern_lit(mrb, "CVAR_FALSE"), mrb_fixnum_value(GIT_CVAR_FALSE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CVAR_FALSE"), mrb_fixnum_value(GIT_CVAR_FALSE));
  mrb_const_set(mrb, Git_Cvar_T_mod, mrb_intern_lit(mrb, "CVAR_TRUE"), mrb_fixnum_value(GIT_CVAR_TRUE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CVAR_TRUE"), mrb_fixnum_value(GIT_CVAR_TRUE));
  mrb_const_set(mrb, Git_Cvar_T_mod, mrb_intern_lit(mrb, "CVAR_INT32"), mrb_fixnum_value(GIT_CVAR_INT32));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CVAR_INT32"), mrb_fixnum_value(GIT_CVAR_INT32));
  mrb_const_set(mrb, Git_Cvar_T_mod, mrb_intern_lit(mrb, "CVAR_STRING"), mrb_fixnum_value(GIT_CVAR_STRING));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "CVAR_STRING"), mrb_fixnum_value(GIT_CVAR_STRING));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Delta_T_enum */
/* sha: c2683c9902b6561e399f6af065a520bb081dbde3e5192effda3604557faeb3bd */
  struct RClass * Git_Delta_T_module = mrb_define_module_under(mrb, Git_module, "Git_Delta_T");
  mrb_value Git_Delta_T_mod = mrb_obj_value(Git_Delta_T_module);
  mrb_const_set(mrb, Git_Delta_T_mod, mrb_intern_lit(mrb, "DELTA_UNMODIFIED"), mrb_fixnum_value(GIT_DELTA_UNMODIFIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DELTA_UNMODIFIED"), mrb_fixnum_value(GIT_DELTA_UNMODIFIED));
  mrb_const_set(mrb, Git_Delta_T_mod, mrb_intern_lit(mrb, "DELTA_ADDED"), mrb_fixnum_value(GIT_DELTA_ADDED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DELTA_ADDED"), mrb_fixnum_value(GIT_DELTA_ADDED));
  mrb_const_set(mrb, Git_Delta_T_mod, mrb_intern_lit(mrb, "DELTA_DELETED"), mrb_fixnum_value(GIT_DELTA_DELETED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DELTA_DELETED"), mrb_fixnum_value(GIT_DELTA_DELETED));
  mrb_const_set(mrb, Git_Delta_T_mod, mrb_intern_lit(mrb, "DELTA_MODIFIED"), mrb_fixnum_value(GIT_DELTA_MODIFIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DELTA_MODIFIED"), mrb_fixnum_value(GIT_DELTA_MODIFIED));
  mrb_const_set(mrb, Git_Delta_T_mod, mrb_intern_lit(mrb, "DELTA_RENAMED"), mrb_fixnum_value(GIT_DELTA_RENAMED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DELTA_RENAMED"), mrb_fixnum_value(GIT_DELTA_RENAMED));
  mrb_const_set(mrb, Git_Delta_T_mod, mrb_intern_lit(mrb, "DELTA_COPIED"), mrb_fixnum_value(GIT_DELTA_COPIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DELTA_COPIED"), mrb_fixnum_value(GIT_DELTA_COPIED));
  mrb_const_set(mrb, Git_Delta_T_mod, mrb_intern_lit(mrb, "DELTA_IGNORED"), mrb_fixnum_value(GIT_DELTA_IGNORED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DELTA_IGNORED"), mrb_fixnum_value(GIT_DELTA_IGNORED));
  mrb_const_set(mrb, Git_Delta_T_mod, mrb_intern_lit(mrb, "DELTA_UNTRACKED"), mrb_fixnum_value(GIT_DELTA_UNTRACKED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DELTA_UNTRACKED"), mrb_fixnum_value(GIT_DELTA_UNTRACKED));
  mrb_const_set(mrb, Git_Delta_T_mod, mrb_intern_lit(mrb, "DELTA_TYPECHANGE"), mrb_fixnum_value(GIT_DELTA_TYPECHANGE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DELTA_TYPECHANGE"), mrb_fixnum_value(GIT_DELTA_TYPECHANGE));
  mrb_const_set(mrb, Git_Delta_T_mod, mrb_intern_lit(mrb, "DELTA_UNREADABLE"), mrb_fixnum_value(GIT_DELTA_UNREADABLE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DELTA_UNREADABLE"), mrb_fixnum_value(GIT_DELTA_UNREADABLE));
  mrb_const_set(mrb, Git_Delta_T_mod, mrb_intern_lit(mrb, "DELTA_CONFLICTED"), mrb_fixnum_value(GIT_DELTA_CONFLICTED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DELTA_CONFLICTED"), mrb_fixnum_value(GIT_DELTA_CONFLICTED));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Describe_Strategy_T_enum */
/* sha: 42521225d2fdde76ace13e0e2977113614bd24daabbef4b9d4d938644a4eb46d */
  struct RClass * Git_Describe_Strategy_T_module = mrb_define_module_under(mrb, Git_module, "Git_Describe_Strategy_T");
  mrb_value Git_Describe_Strategy_T_mod = mrb_obj_value(Git_Describe_Strategy_T_module);
  mrb_const_set(mrb, Git_Describe_Strategy_T_mod, mrb_intern_lit(mrb, "DESCRIBE_DEFAULT"), mrb_fixnum_value(GIT_DESCRIBE_DEFAULT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DESCRIBE_DEFAULT"), mrb_fixnum_value(GIT_DESCRIBE_DEFAULT));
  mrb_const_set(mrb, Git_Describe_Strategy_T_mod, mrb_intern_lit(mrb, "DESCRIBE_TAGS"), mrb_fixnum_value(GIT_DESCRIBE_TAGS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DESCRIBE_TAGS"), mrb_fixnum_value(GIT_DESCRIBE_TAGS));
  mrb_const_set(mrb, Git_Describe_Strategy_T_mod, mrb_intern_lit(mrb, "DESCRIBE_ALL"), mrb_fixnum_value(GIT_DESCRIBE_ALL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DESCRIBE_ALL"), mrb_fixnum_value(GIT_DESCRIBE_ALL));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Diff_Binary_T_enum */
/* sha: 5aa5d0d6c53dc8cb8eb83fb93d91d1fe5e5b1ef3b90bb4c2417f4ca39bab4c6c */
  struct RClass * Git_Diff_Binary_T_module = mrb_define_module_under(mrb, Git_module, "Git_Diff_Binary_T");
  mrb_value Git_Diff_Binary_T_mod = mrb_obj_value(Git_Diff_Binary_T_module);
  mrb_const_set(mrb, Git_Diff_Binary_T_mod, mrb_intern_lit(mrb, "DIFF_BINARY_NONE"), mrb_fixnum_value(GIT_DIFF_BINARY_NONE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_BINARY_NONE"), mrb_fixnum_value(GIT_DIFF_BINARY_NONE));
  mrb_const_set(mrb, Git_Diff_Binary_T_mod, mrb_intern_lit(mrb, "DIFF_BINARY_LITERAL"), mrb_fixnum_value(GIT_DIFF_BINARY_LITERAL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_BINARY_LITERAL"), mrb_fixnum_value(GIT_DIFF_BINARY_LITERAL));
  mrb_const_set(mrb, Git_Diff_Binary_T_mod, mrb_intern_lit(mrb, "DIFF_BINARY_DELTA"), mrb_fixnum_value(GIT_DIFF_BINARY_DELTA));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_BINARY_DELTA"), mrb_fixnum_value(GIT_DIFF_BINARY_DELTA));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Diff_Find_T_enum */
/* sha: 2126ae2db2d832dbfbe80429eb5b9811e1cdb08df5f00cc670e942c6104bb1d5 */
  struct RClass * Git_Diff_Find_T_module = mrb_define_module_under(mrb, Git_module, "Git_Diff_Find_T");
  mrb_value Git_Diff_Find_T_mod = mrb_obj_value(Git_Diff_Find_T_module);
  mrb_const_set(mrb, Git_Diff_Find_T_mod, mrb_intern_lit(mrb, "DIFF_FIND_BY_CONFIG"), mrb_fixnum_value(GIT_DIFF_FIND_BY_CONFIG));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FIND_BY_CONFIG"), mrb_fixnum_value(GIT_DIFF_FIND_BY_CONFIG));
  mrb_const_set(mrb, Git_Diff_Find_T_mod, mrb_intern_lit(mrb, "DIFF_FIND_RENAMES"), mrb_fixnum_value(GIT_DIFF_FIND_RENAMES));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FIND_RENAMES"), mrb_fixnum_value(GIT_DIFF_FIND_RENAMES));
  mrb_const_set(mrb, Git_Diff_Find_T_mod, mrb_intern_lit(mrb, "DIFF_FIND_RENAMES_FROM_REWRITES"), mrb_fixnum_value(GIT_DIFF_FIND_RENAMES_FROM_REWRITES));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FIND_RENAMES_FROM_REWRITES"), mrb_fixnum_value(GIT_DIFF_FIND_RENAMES_FROM_REWRITES));
  mrb_const_set(mrb, Git_Diff_Find_T_mod, mrb_intern_lit(mrb, "DIFF_FIND_COPIES"), mrb_fixnum_value(GIT_DIFF_FIND_COPIES));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FIND_COPIES"), mrb_fixnum_value(GIT_DIFF_FIND_COPIES));
  mrb_const_set(mrb, Git_Diff_Find_T_mod, mrb_intern_lit(mrb, "DIFF_FIND_COPIES_FROM_UNMODIFIED"), mrb_fixnum_value(GIT_DIFF_FIND_COPIES_FROM_UNMODIFIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FIND_COPIES_FROM_UNMODIFIED"), mrb_fixnum_value(GIT_DIFF_FIND_COPIES_FROM_UNMODIFIED));
  mrb_const_set(mrb, Git_Diff_Find_T_mod, mrb_intern_lit(mrb, "DIFF_FIND_REWRITES"), mrb_fixnum_value(GIT_DIFF_FIND_REWRITES));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FIND_REWRITES"), mrb_fixnum_value(GIT_DIFF_FIND_REWRITES));
  mrb_const_set(mrb, Git_Diff_Find_T_mod, mrb_intern_lit(mrb, "DIFF_BREAK_REWRITES"), mrb_fixnum_value(GIT_DIFF_BREAK_REWRITES));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_BREAK_REWRITES"), mrb_fixnum_value(GIT_DIFF_BREAK_REWRITES));
  mrb_const_set(mrb, Git_Diff_Find_T_mod, mrb_intern_lit(mrb, "DIFF_FIND_AND_BREAK_REWRITES"), mrb_fixnum_value(GIT_DIFF_FIND_AND_BREAK_REWRITES));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FIND_AND_BREAK_REWRITES"), mrb_fixnum_value(GIT_DIFF_FIND_AND_BREAK_REWRITES));
  mrb_const_set(mrb, Git_Diff_Find_T_mod, mrb_intern_lit(mrb, "DIFF_FIND_FOR_UNTRACKED"), mrb_fixnum_value(GIT_DIFF_FIND_FOR_UNTRACKED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FIND_FOR_UNTRACKED"), mrb_fixnum_value(GIT_DIFF_FIND_FOR_UNTRACKED));
  mrb_const_set(mrb, Git_Diff_Find_T_mod, mrb_intern_lit(mrb, "DIFF_FIND_ALL"), mrb_fixnum_value(GIT_DIFF_FIND_ALL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FIND_ALL"), mrb_fixnum_value(GIT_DIFF_FIND_ALL));
  mrb_const_set(mrb, Git_Diff_Find_T_mod, mrb_intern_lit(mrb, "DIFF_FIND_IGNORE_LEADING_WHITESPACE"), mrb_fixnum_value(GIT_DIFF_FIND_IGNORE_LEADING_WHITESPACE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FIND_IGNORE_LEADING_WHITESPACE"), mrb_fixnum_value(GIT_DIFF_FIND_IGNORE_LEADING_WHITESPACE));
  mrb_const_set(mrb, Git_Diff_Find_T_mod, mrb_intern_lit(mrb, "DIFF_FIND_IGNORE_WHITESPACE"), mrb_fixnum_value(GIT_DIFF_FIND_IGNORE_WHITESPACE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FIND_IGNORE_WHITESPACE"), mrb_fixnum_value(GIT_DIFF_FIND_IGNORE_WHITESPACE));
  mrb_const_set(mrb, Git_Diff_Find_T_mod, mrb_intern_lit(mrb, "DIFF_FIND_DONT_IGNORE_WHITESPACE"), mrb_fixnum_value(GIT_DIFF_FIND_DONT_IGNORE_WHITESPACE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FIND_DONT_IGNORE_WHITESPACE"), mrb_fixnum_value(GIT_DIFF_FIND_DONT_IGNORE_WHITESPACE));
  mrb_const_set(mrb, Git_Diff_Find_T_mod, mrb_intern_lit(mrb, "DIFF_FIND_EXACT_MATCH_ONLY"), mrb_fixnum_value(GIT_DIFF_FIND_EXACT_MATCH_ONLY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FIND_EXACT_MATCH_ONLY"), mrb_fixnum_value(GIT_DIFF_FIND_EXACT_MATCH_ONLY));
  mrb_const_set(mrb, Git_Diff_Find_T_mod, mrb_intern_lit(mrb, "DIFF_BREAK_REWRITES_FOR_RENAMES_ONLY"), mrb_fixnum_value(GIT_DIFF_BREAK_REWRITES_FOR_RENAMES_ONLY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_BREAK_REWRITES_FOR_RENAMES_ONLY"), mrb_fixnum_value(GIT_DIFF_BREAK_REWRITES_FOR_RENAMES_ONLY));
  mrb_const_set(mrb, Git_Diff_Find_T_mod, mrb_intern_lit(mrb, "DIFF_FIND_REMOVE_UNMODIFIED"), mrb_fixnum_value(GIT_DIFF_FIND_REMOVE_UNMODIFIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FIND_REMOVE_UNMODIFIED"), mrb_fixnum_value(GIT_DIFF_FIND_REMOVE_UNMODIFIED));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Diff_Flag_T_enum */
/* sha: 17f637635ab30e0dbf86af6d3527aeb2565a8ed2aa4ddd553896853f5a6c5b39 */
  struct RClass * Git_Diff_Flag_T_module = mrb_define_module_under(mrb, Git_module, "Git_Diff_Flag_T");
  mrb_value Git_Diff_Flag_T_mod = mrb_obj_value(Git_Diff_Flag_T_module);
  mrb_const_set(mrb, Git_Diff_Flag_T_mod, mrb_intern_lit(mrb, "DIFF_FLAG_BINARY"), mrb_fixnum_value(GIT_DIFF_FLAG_BINARY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FLAG_BINARY"), mrb_fixnum_value(GIT_DIFF_FLAG_BINARY));
  mrb_const_set(mrb, Git_Diff_Flag_T_mod, mrb_intern_lit(mrb, "DIFF_FLAG_NOT_BINARY"), mrb_fixnum_value(GIT_DIFF_FLAG_NOT_BINARY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FLAG_NOT_BINARY"), mrb_fixnum_value(GIT_DIFF_FLAG_NOT_BINARY));
  mrb_const_set(mrb, Git_Diff_Flag_T_mod, mrb_intern_lit(mrb, "DIFF_FLAG_VALID_ID"), mrb_fixnum_value(GIT_DIFF_FLAG_VALID_ID));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FLAG_VALID_ID"), mrb_fixnum_value(GIT_DIFF_FLAG_VALID_ID));
  mrb_const_set(mrb, Git_Diff_Flag_T_mod, mrb_intern_lit(mrb, "DIFF_FLAG_EXISTS"), mrb_fixnum_value(GIT_DIFF_FLAG_EXISTS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FLAG_EXISTS"), mrb_fixnum_value(GIT_DIFF_FLAG_EXISTS));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Diff_Format_Email_Flags_T_enum */
/* sha: 79744369a9b6d9dbd5938b616b6fed5a0fb73e3a8ded7e2ddaf71b4f67baf132 */
  struct RClass * Git_Diff_Format_Email_Flags_T_module = mrb_define_module_under(mrb, Git_module, "Git_Diff_Format_Email_Flags_T");
  mrb_value Git_Diff_Format_Email_Flags_T_mod = mrb_obj_value(Git_Diff_Format_Email_Flags_T_module);
  mrb_const_set(mrb, Git_Diff_Format_Email_Flags_T_mod, mrb_intern_lit(mrb, "DIFF_FORMAT_EMAIL_NONE"), mrb_fixnum_value(GIT_DIFF_FORMAT_EMAIL_NONE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FORMAT_EMAIL_NONE"), mrb_fixnum_value(GIT_DIFF_FORMAT_EMAIL_NONE));
  mrb_const_set(mrb, Git_Diff_Format_Email_Flags_T_mod, mrb_intern_lit(mrb, "DIFF_FORMAT_EMAIL_EXCLUDE_SUBJECT_PATCH_MARKER"), mrb_fixnum_value(GIT_DIFF_FORMAT_EMAIL_EXCLUDE_SUBJECT_PATCH_MARKER));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FORMAT_EMAIL_EXCLUDE_SUBJECT_PATCH_MARKER"), mrb_fixnum_value(GIT_DIFF_FORMAT_EMAIL_EXCLUDE_SUBJECT_PATCH_MARKER));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Diff_Format_T_enum */
/* sha: a51397265908081dc4125752def4c1f73f20c8abc1985804c43cf950f1eb740b */
  struct RClass * Git_Diff_Format_T_module = mrb_define_module_under(mrb, Git_module, "Git_Diff_Format_T");
  mrb_value Git_Diff_Format_T_mod = mrb_obj_value(Git_Diff_Format_T_module);
  mrb_const_set(mrb, Git_Diff_Format_T_mod, mrb_intern_lit(mrb, "DIFF_FORMAT_PATCH"), mrb_fixnum_value(GIT_DIFF_FORMAT_PATCH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FORMAT_PATCH"), mrb_fixnum_value(GIT_DIFF_FORMAT_PATCH));
  mrb_const_set(mrb, Git_Diff_Format_T_mod, mrb_intern_lit(mrb, "DIFF_FORMAT_PATCH_HEADER"), mrb_fixnum_value(GIT_DIFF_FORMAT_PATCH_HEADER));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FORMAT_PATCH_HEADER"), mrb_fixnum_value(GIT_DIFF_FORMAT_PATCH_HEADER));
  mrb_const_set(mrb, Git_Diff_Format_T_mod, mrb_intern_lit(mrb, "DIFF_FORMAT_RAW"), mrb_fixnum_value(GIT_DIFF_FORMAT_RAW));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FORMAT_RAW"), mrb_fixnum_value(GIT_DIFF_FORMAT_RAW));
  mrb_const_set(mrb, Git_Diff_Format_T_mod, mrb_intern_lit(mrb, "DIFF_FORMAT_NAME_ONLY"), mrb_fixnum_value(GIT_DIFF_FORMAT_NAME_ONLY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FORMAT_NAME_ONLY"), mrb_fixnum_value(GIT_DIFF_FORMAT_NAME_ONLY));
  mrb_const_set(mrb, Git_Diff_Format_T_mod, mrb_intern_lit(mrb, "DIFF_FORMAT_NAME_STATUS"), mrb_fixnum_value(GIT_DIFF_FORMAT_NAME_STATUS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FORMAT_NAME_STATUS"), mrb_fixnum_value(GIT_DIFF_FORMAT_NAME_STATUS));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Diff_Line_T_enum */
/* sha: d2a00268a8108dd740713b74172dbddcef858aa26eb6069064989c8e921d4b56 */
  struct RClass * Git_Diff_Line_T_module = mrb_define_module_under(mrb, Git_module, "Git_Diff_Line_T");
  mrb_value Git_Diff_Line_T_mod = mrb_obj_value(Git_Diff_Line_T_module);
  mrb_const_set(mrb, Git_Diff_Line_T_mod, mrb_intern_lit(mrb, "DIFF_LINE_CONTEXT"), mrb_fixnum_value(GIT_DIFF_LINE_CONTEXT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_LINE_CONTEXT"), mrb_fixnum_value(GIT_DIFF_LINE_CONTEXT));
  mrb_const_set(mrb, Git_Diff_Line_T_mod, mrb_intern_lit(mrb, "DIFF_LINE_ADDITION"), mrb_fixnum_value(GIT_DIFF_LINE_ADDITION));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_LINE_ADDITION"), mrb_fixnum_value(GIT_DIFF_LINE_ADDITION));
  mrb_const_set(mrb, Git_Diff_Line_T_mod, mrb_intern_lit(mrb, "DIFF_LINE_DELETION"), mrb_fixnum_value(GIT_DIFF_LINE_DELETION));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_LINE_DELETION"), mrb_fixnum_value(GIT_DIFF_LINE_DELETION));
  mrb_const_set(mrb, Git_Diff_Line_T_mod, mrb_intern_lit(mrb, "DIFF_LINE_CONTEXT_EOFNL"), mrb_fixnum_value(GIT_DIFF_LINE_CONTEXT_EOFNL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_LINE_CONTEXT_EOFNL"), mrb_fixnum_value(GIT_DIFF_LINE_CONTEXT_EOFNL));
  mrb_const_set(mrb, Git_Diff_Line_T_mod, mrb_intern_lit(mrb, "DIFF_LINE_ADD_EOFNL"), mrb_fixnum_value(GIT_DIFF_LINE_ADD_EOFNL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_LINE_ADD_EOFNL"), mrb_fixnum_value(GIT_DIFF_LINE_ADD_EOFNL));
  mrb_const_set(mrb, Git_Diff_Line_T_mod, mrb_intern_lit(mrb, "DIFF_LINE_DEL_EOFNL"), mrb_fixnum_value(GIT_DIFF_LINE_DEL_EOFNL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_LINE_DEL_EOFNL"), mrb_fixnum_value(GIT_DIFF_LINE_DEL_EOFNL));
  mrb_const_set(mrb, Git_Diff_Line_T_mod, mrb_intern_lit(mrb, "DIFF_LINE_FILE_HDR"), mrb_fixnum_value(GIT_DIFF_LINE_FILE_HDR));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_LINE_FILE_HDR"), mrb_fixnum_value(GIT_DIFF_LINE_FILE_HDR));
  mrb_const_set(mrb, Git_Diff_Line_T_mod, mrb_intern_lit(mrb, "DIFF_LINE_HUNK_HDR"), mrb_fixnum_value(GIT_DIFF_LINE_HUNK_HDR));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_LINE_HUNK_HDR"), mrb_fixnum_value(GIT_DIFF_LINE_HUNK_HDR));
  mrb_const_set(mrb, Git_Diff_Line_T_mod, mrb_intern_lit(mrb, "DIFF_LINE_BINARY"), mrb_fixnum_value(GIT_DIFF_LINE_BINARY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_LINE_BINARY"), mrb_fixnum_value(GIT_DIFF_LINE_BINARY));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Diff_Option_T_enum */
/* sha: fd2aa825f19338f9b9c36abd94ccd8876f3ff959143397ad0c88ab5e65c5e723 */
  struct RClass * Git_Diff_Option_T_module = mrb_define_module_under(mrb, Git_module, "Git_Diff_Option_T");
  mrb_value Git_Diff_Option_T_mod = mrb_obj_value(Git_Diff_Option_T_module);
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_NORMAL"), mrb_fixnum_value(GIT_DIFF_NORMAL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_NORMAL"), mrb_fixnum_value(GIT_DIFF_NORMAL));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_REVERSE"), mrb_fixnum_value(GIT_DIFF_REVERSE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_REVERSE"), mrb_fixnum_value(GIT_DIFF_REVERSE));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_INCLUDE_IGNORED"), mrb_fixnum_value(GIT_DIFF_INCLUDE_IGNORED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_INCLUDE_IGNORED"), mrb_fixnum_value(GIT_DIFF_INCLUDE_IGNORED));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_RECURSE_IGNORED_DIRS"), mrb_fixnum_value(GIT_DIFF_RECURSE_IGNORED_DIRS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_RECURSE_IGNORED_DIRS"), mrb_fixnum_value(GIT_DIFF_RECURSE_IGNORED_DIRS));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_INCLUDE_UNTRACKED"), mrb_fixnum_value(GIT_DIFF_INCLUDE_UNTRACKED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_INCLUDE_UNTRACKED"), mrb_fixnum_value(GIT_DIFF_INCLUDE_UNTRACKED));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_RECURSE_UNTRACKED_DIRS"), mrb_fixnum_value(GIT_DIFF_RECURSE_UNTRACKED_DIRS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_RECURSE_UNTRACKED_DIRS"), mrb_fixnum_value(GIT_DIFF_RECURSE_UNTRACKED_DIRS));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_INCLUDE_UNMODIFIED"), mrb_fixnum_value(GIT_DIFF_INCLUDE_UNMODIFIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_INCLUDE_UNMODIFIED"), mrb_fixnum_value(GIT_DIFF_INCLUDE_UNMODIFIED));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_INCLUDE_TYPECHANGE"), mrb_fixnum_value(GIT_DIFF_INCLUDE_TYPECHANGE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_INCLUDE_TYPECHANGE"), mrb_fixnum_value(GIT_DIFF_INCLUDE_TYPECHANGE));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_INCLUDE_TYPECHANGE_TREES"), mrb_fixnum_value(GIT_DIFF_INCLUDE_TYPECHANGE_TREES));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_INCLUDE_TYPECHANGE_TREES"), mrb_fixnum_value(GIT_DIFF_INCLUDE_TYPECHANGE_TREES));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_IGNORE_FILEMODE"), mrb_fixnum_value(GIT_DIFF_IGNORE_FILEMODE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_IGNORE_FILEMODE"), mrb_fixnum_value(GIT_DIFF_IGNORE_FILEMODE));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_IGNORE_SUBMODULES"), mrb_fixnum_value(GIT_DIFF_IGNORE_SUBMODULES));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_IGNORE_SUBMODULES"), mrb_fixnum_value(GIT_DIFF_IGNORE_SUBMODULES));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_IGNORE_CASE"), mrb_fixnum_value(GIT_DIFF_IGNORE_CASE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_IGNORE_CASE"), mrb_fixnum_value(GIT_DIFF_IGNORE_CASE));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_INCLUDE_CASECHANGE"), mrb_fixnum_value(GIT_DIFF_INCLUDE_CASECHANGE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_INCLUDE_CASECHANGE"), mrb_fixnum_value(GIT_DIFF_INCLUDE_CASECHANGE));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_DISABLE_PATHSPEC_MATCH"), mrb_fixnum_value(GIT_DIFF_DISABLE_PATHSPEC_MATCH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_DISABLE_PATHSPEC_MATCH"), mrb_fixnum_value(GIT_DIFF_DISABLE_PATHSPEC_MATCH));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_SKIP_BINARY_CHECK"), mrb_fixnum_value(GIT_DIFF_SKIP_BINARY_CHECK));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_SKIP_BINARY_CHECK"), mrb_fixnum_value(GIT_DIFF_SKIP_BINARY_CHECK));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_ENABLE_FAST_UNTRACKED_DIRS"), mrb_fixnum_value(GIT_DIFF_ENABLE_FAST_UNTRACKED_DIRS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_ENABLE_FAST_UNTRACKED_DIRS"), mrb_fixnum_value(GIT_DIFF_ENABLE_FAST_UNTRACKED_DIRS));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_UPDATE_INDEX"), mrb_fixnum_value(GIT_DIFF_UPDATE_INDEX));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_UPDATE_INDEX"), mrb_fixnum_value(GIT_DIFF_UPDATE_INDEX));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_INCLUDE_UNREADABLE"), mrb_fixnum_value(GIT_DIFF_INCLUDE_UNREADABLE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_INCLUDE_UNREADABLE"), mrb_fixnum_value(GIT_DIFF_INCLUDE_UNREADABLE));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_INCLUDE_UNREADABLE_AS_UNTRACKED"), mrb_fixnum_value(GIT_DIFF_INCLUDE_UNREADABLE_AS_UNTRACKED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_INCLUDE_UNREADABLE_AS_UNTRACKED"), mrb_fixnum_value(GIT_DIFF_INCLUDE_UNREADABLE_AS_UNTRACKED));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_FORCE_TEXT"), mrb_fixnum_value(GIT_DIFF_FORCE_TEXT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FORCE_TEXT"), mrb_fixnum_value(GIT_DIFF_FORCE_TEXT));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_FORCE_BINARY"), mrb_fixnum_value(GIT_DIFF_FORCE_BINARY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_FORCE_BINARY"), mrb_fixnum_value(GIT_DIFF_FORCE_BINARY));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_IGNORE_WHITESPACE"), mrb_fixnum_value(GIT_DIFF_IGNORE_WHITESPACE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_IGNORE_WHITESPACE"), mrb_fixnum_value(GIT_DIFF_IGNORE_WHITESPACE));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_IGNORE_WHITESPACE_CHANGE"), mrb_fixnum_value(GIT_DIFF_IGNORE_WHITESPACE_CHANGE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_IGNORE_WHITESPACE_CHANGE"), mrb_fixnum_value(GIT_DIFF_IGNORE_WHITESPACE_CHANGE));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_IGNORE_WHITESPACE_EOL"), mrb_fixnum_value(GIT_DIFF_IGNORE_WHITESPACE_EOL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_IGNORE_WHITESPACE_EOL"), mrb_fixnum_value(GIT_DIFF_IGNORE_WHITESPACE_EOL));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_SHOW_UNTRACKED_CONTENT"), mrb_fixnum_value(GIT_DIFF_SHOW_UNTRACKED_CONTENT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_SHOW_UNTRACKED_CONTENT"), mrb_fixnum_value(GIT_DIFF_SHOW_UNTRACKED_CONTENT));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_SHOW_UNMODIFIED"), mrb_fixnum_value(GIT_DIFF_SHOW_UNMODIFIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_SHOW_UNMODIFIED"), mrb_fixnum_value(GIT_DIFF_SHOW_UNMODIFIED));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_PATIENCE"), mrb_fixnum_value(GIT_DIFF_PATIENCE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_PATIENCE"), mrb_fixnum_value(GIT_DIFF_PATIENCE));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_MINIMAL"), mrb_fixnum_value(GIT_DIFF_MINIMAL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_MINIMAL"), mrb_fixnum_value(GIT_DIFF_MINIMAL));
  mrb_const_set(mrb, Git_Diff_Option_T_mod, mrb_intern_lit(mrb, "DIFF_SHOW_BINARY"), mrb_fixnum_value(GIT_DIFF_SHOW_BINARY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_SHOW_BINARY"), mrb_fixnum_value(GIT_DIFF_SHOW_BINARY));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Diff_Stats_Format_T_enum */
/* sha: 907d9d1de91b00463743f77b67a0443e364672bc4ae5c687a77d1400996bb954 */
  struct RClass * Git_Diff_Stats_Format_T_module = mrb_define_module_under(mrb, Git_module, "Git_Diff_Stats_Format_T");
  mrb_value Git_Diff_Stats_Format_T_mod = mrb_obj_value(Git_Diff_Stats_Format_T_module);
  mrb_const_set(mrb, Git_Diff_Stats_Format_T_mod, mrb_intern_lit(mrb, "DIFF_STATS_NONE"), mrb_fixnum_value(GIT_DIFF_STATS_NONE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_STATS_NONE"), mrb_fixnum_value(GIT_DIFF_STATS_NONE));
  mrb_const_set(mrb, Git_Diff_Stats_Format_T_mod, mrb_intern_lit(mrb, "DIFF_STATS_FULL"), mrb_fixnum_value(GIT_DIFF_STATS_FULL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_STATS_FULL"), mrb_fixnum_value(GIT_DIFF_STATS_FULL));
  mrb_const_set(mrb, Git_Diff_Stats_Format_T_mod, mrb_intern_lit(mrb, "DIFF_STATS_SHORT"), mrb_fixnum_value(GIT_DIFF_STATS_SHORT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_STATS_SHORT"), mrb_fixnum_value(GIT_DIFF_STATS_SHORT));
  mrb_const_set(mrb, Git_Diff_Stats_Format_T_mod, mrb_intern_lit(mrb, "DIFF_STATS_NUMBER"), mrb_fixnum_value(GIT_DIFF_STATS_NUMBER));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_STATS_NUMBER"), mrb_fixnum_value(GIT_DIFF_STATS_NUMBER));
  mrb_const_set(mrb, Git_Diff_Stats_Format_T_mod, mrb_intern_lit(mrb, "DIFF_STATS_INCLUDE_SUMMARY"), mrb_fixnum_value(GIT_DIFF_STATS_INCLUDE_SUMMARY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIFF_STATS_INCLUDE_SUMMARY"), mrb_fixnum_value(GIT_DIFF_STATS_INCLUDE_SUMMARY));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Direction_enum */
/* sha: 3a2d7d84c7bc946293ea3ff80f897336962d650ef9060e20cb41a7a6421eb7e1 */
  struct RClass * Git_Direction_module = mrb_define_module_under(mrb, Git_module, "Git_Direction");
  mrb_value Git_Direction_mod = mrb_obj_value(Git_Direction_module);
  mrb_const_set(mrb, Git_Direction_mod, mrb_intern_lit(mrb, "DIRECTION_FETCH"), mrb_fixnum_value(GIT_DIRECTION_FETCH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIRECTION_FETCH"), mrb_fixnum_value(GIT_DIRECTION_FETCH));
  mrb_const_set(mrb, Git_Direction_mod, mrb_intern_lit(mrb, "DIRECTION_PUSH"), mrb_fixnum_value(GIT_DIRECTION_PUSH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "DIRECTION_PUSH"), mrb_fixnum_value(GIT_DIRECTION_PUSH));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Error_Code_enum */
/* sha: 94132ed2099c2047c7bdee21cf0567abc673a653dc5fb316cc5d52ca21fe4303 */
  struct RClass * Git_Error_Code_module = mrb_define_module_under(mrb, Git_module, "Git_Error_Code");
  mrb_value Git_Error_Code_mod = mrb_obj_value(Git_Error_Code_module);
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "OK"), mrb_fixnum_value(GIT_OK));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OK"), mrb_fixnum_value(GIT_OK));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "ERROR"), mrb_fixnum_value(GIT_ERROR));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "ERROR"), mrb_fixnum_value(GIT_ERROR));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "ENOTFOUND"), mrb_fixnum_value(GIT_ENOTFOUND));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "ENOTFOUND"), mrb_fixnum_value(GIT_ENOTFOUND));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "EEXISTS"), mrb_fixnum_value(GIT_EEXISTS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "EEXISTS"), mrb_fixnum_value(GIT_EEXISTS));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "EAMBIGUOUS"), mrb_fixnum_value(GIT_EAMBIGUOUS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "EAMBIGUOUS"), mrb_fixnum_value(GIT_EAMBIGUOUS));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "EBUFS"), mrb_fixnum_value(GIT_EBUFS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "EBUFS"), mrb_fixnum_value(GIT_EBUFS));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "EUSER"), mrb_fixnum_value(GIT_EUSER));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "EUSER"), mrb_fixnum_value(GIT_EUSER));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "EBAREREPO"), mrb_fixnum_value(GIT_EBAREREPO));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "EBAREREPO"), mrb_fixnum_value(GIT_EBAREREPO));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "EUNBORNBRANCH"), mrb_fixnum_value(GIT_EUNBORNBRANCH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "EUNBORNBRANCH"), mrb_fixnum_value(GIT_EUNBORNBRANCH));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "EUNMERGED"), mrb_fixnum_value(GIT_EUNMERGED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "EUNMERGED"), mrb_fixnum_value(GIT_EUNMERGED));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "ENONFASTFORWARD"), mrb_fixnum_value(GIT_ENONFASTFORWARD));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "ENONFASTFORWARD"), mrb_fixnum_value(GIT_ENONFASTFORWARD));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "EINVALIDSPEC"), mrb_fixnum_value(GIT_EINVALIDSPEC));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "EINVALIDSPEC"), mrb_fixnum_value(GIT_EINVALIDSPEC));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "ECONFLICT"), mrb_fixnum_value(GIT_ECONFLICT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "ECONFLICT"), mrb_fixnum_value(GIT_ECONFLICT));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "ELOCKED"), mrb_fixnum_value(GIT_ELOCKED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "ELOCKED"), mrb_fixnum_value(GIT_ELOCKED));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "EMODIFIED"), mrb_fixnum_value(GIT_EMODIFIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "EMODIFIED"), mrb_fixnum_value(GIT_EMODIFIED));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "EAUTH"), mrb_fixnum_value(GIT_EAUTH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "EAUTH"), mrb_fixnum_value(GIT_EAUTH));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "ECERTIFICATE"), mrb_fixnum_value(GIT_ECERTIFICATE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "ECERTIFICATE"), mrb_fixnum_value(GIT_ECERTIFICATE));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "EAPPLIED"), mrb_fixnum_value(GIT_EAPPLIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "EAPPLIED"), mrb_fixnum_value(GIT_EAPPLIED));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "EPEEL"), mrb_fixnum_value(GIT_EPEEL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "EPEEL"), mrb_fixnum_value(GIT_EPEEL));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "EEOF"), mrb_fixnum_value(GIT_EEOF));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "EEOF"), mrb_fixnum_value(GIT_EEOF));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "EINVALID"), mrb_fixnum_value(GIT_EINVALID));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "EINVALID"), mrb_fixnum_value(GIT_EINVALID));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "EUNCOMMITTED"), mrb_fixnum_value(GIT_EUNCOMMITTED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "EUNCOMMITTED"), mrb_fixnum_value(GIT_EUNCOMMITTED));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "EDIRECTORY"), mrb_fixnum_value(GIT_EDIRECTORY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "EDIRECTORY"), mrb_fixnum_value(GIT_EDIRECTORY));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "EMERGECONFLICT"), mrb_fixnum_value(GIT_EMERGECONFLICT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "EMERGECONFLICT"), mrb_fixnum_value(GIT_EMERGECONFLICT));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "PASSTHROUGH"), mrb_fixnum_value(GIT_PASSTHROUGH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "PASSTHROUGH"), mrb_fixnum_value(GIT_PASSTHROUGH));
  mrb_const_set(mrb, Git_Error_Code_mod, mrb_intern_lit(mrb, "ITEROVER"), mrb_fixnum_value(GIT_ITEROVER));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "ITEROVER"), mrb_fixnum_value(GIT_ITEROVER));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Error_T_enum */
/* sha: 5f6a8f13acf0610193aa529c30938fb2387553c0acd83499e36bb85330fc8156 */
  struct RClass * Git_Error_T_module = mrb_define_module_under(mrb, Git_module, "Git_Error_T");
  mrb_value Git_Error_T_mod = mrb_obj_value(Git_Error_T_module);
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_NONE"), mrb_fixnum_value(GITERR_NONE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_NONE"), mrb_fixnum_value(GITERR_NONE));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_NOMEMORY"), mrb_fixnum_value(GITERR_NOMEMORY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_NOMEMORY"), mrb_fixnum_value(GITERR_NOMEMORY));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_OS"), mrb_fixnum_value(GITERR_OS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_OS"), mrb_fixnum_value(GITERR_OS));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_INVALID"), mrb_fixnum_value(GITERR_INVALID));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_INVALID"), mrb_fixnum_value(GITERR_INVALID));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_REFERENCE"), mrb_fixnum_value(GITERR_REFERENCE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_REFERENCE"), mrb_fixnum_value(GITERR_REFERENCE));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_ZLIB"), mrb_fixnum_value(GITERR_ZLIB));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_ZLIB"), mrb_fixnum_value(GITERR_ZLIB));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_REPOSITORY"), mrb_fixnum_value(GITERR_REPOSITORY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_REPOSITORY"), mrb_fixnum_value(GITERR_REPOSITORY));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_CONFIG"), mrb_fixnum_value(GITERR_CONFIG));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_CONFIG"), mrb_fixnum_value(GITERR_CONFIG));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_REGEX"), mrb_fixnum_value(GITERR_REGEX));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_REGEX"), mrb_fixnum_value(GITERR_REGEX));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_ODB"), mrb_fixnum_value(GITERR_ODB));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_ODB"), mrb_fixnum_value(GITERR_ODB));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_INDEX"), mrb_fixnum_value(GITERR_INDEX));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_INDEX"), mrb_fixnum_value(GITERR_INDEX));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_OBJECT"), mrb_fixnum_value(GITERR_OBJECT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_OBJECT"), mrb_fixnum_value(GITERR_OBJECT));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_NET"), mrb_fixnum_value(GITERR_NET));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_NET"), mrb_fixnum_value(GITERR_NET));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_TAG"), mrb_fixnum_value(GITERR_TAG));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_TAG"), mrb_fixnum_value(GITERR_TAG));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_TREE"), mrb_fixnum_value(GITERR_TREE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_TREE"), mrb_fixnum_value(GITERR_TREE));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_INDEXER"), mrb_fixnum_value(GITERR_INDEXER));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_INDEXER"), mrb_fixnum_value(GITERR_INDEXER));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_SSL"), mrb_fixnum_value(GITERR_SSL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_SSL"), mrb_fixnum_value(GITERR_SSL));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_SUBMODULE"), mrb_fixnum_value(GITERR_SUBMODULE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_SUBMODULE"), mrb_fixnum_value(GITERR_SUBMODULE));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_THREAD"), mrb_fixnum_value(GITERR_THREAD));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_THREAD"), mrb_fixnum_value(GITERR_THREAD));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_STASH"), mrb_fixnum_value(GITERR_STASH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_STASH"), mrb_fixnum_value(GITERR_STASH));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_CHECKOUT"), mrb_fixnum_value(GITERR_CHECKOUT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_CHECKOUT"), mrb_fixnum_value(GITERR_CHECKOUT));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_FETCHHEAD"), mrb_fixnum_value(GITERR_FETCHHEAD));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_FETCHHEAD"), mrb_fixnum_value(GITERR_FETCHHEAD));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_MERGE"), mrb_fixnum_value(GITERR_MERGE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_MERGE"), mrb_fixnum_value(GITERR_MERGE));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_SSH"), mrb_fixnum_value(GITERR_SSH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_SSH"), mrb_fixnum_value(GITERR_SSH));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_FILTER"), mrb_fixnum_value(GITERR_FILTER));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_FILTER"), mrb_fixnum_value(GITERR_FILTER));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_REVERT"), mrb_fixnum_value(GITERR_REVERT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_REVERT"), mrb_fixnum_value(GITERR_REVERT));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_CALLBACK"), mrb_fixnum_value(GITERR_CALLBACK));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_CALLBACK"), mrb_fixnum_value(GITERR_CALLBACK));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_CHERRYPICK"), mrb_fixnum_value(GITERR_CHERRYPICK));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_CHERRYPICK"), mrb_fixnum_value(GITERR_CHERRYPICK));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_DESCRIBE"), mrb_fixnum_value(GITERR_DESCRIBE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_DESCRIBE"), mrb_fixnum_value(GITERR_DESCRIBE));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_REBASE"), mrb_fixnum_value(GITERR_REBASE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_REBASE"), mrb_fixnum_value(GITERR_REBASE));
  mrb_const_set(mrb, Git_Error_T_mod, mrb_intern_lit(mrb, "GITERR_FILESYSTEM"), mrb_fixnum_value(GITERR_FILESYSTEM));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "GITERR_FILESYSTEM"), mrb_fixnum_value(GITERR_FILESYSTEM));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Feature_T_enum */
/* sha: 168018c263fc78ff3aefb54d6b9e817303a397859476d40c6394b789d2bc0b60 */
  struct RClass * Git_Feature_T_module = mrb_define_module_under(mrb, Git_module, "Git_Feature_T");
  mrb_value Git_Feature_T_mod = mrb_obj_value(Git_Feature_T_module);
  mrb_const_set(mrb, Git_Feature_T_mod, mrb_intern_lit(mrb, "FEATURE_THREADS"), mrb_fixnum_value(GIT_FEATURE_THREADS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "FEATURE_THREADS"), mrb_fixnum_value(GIT_FEATURE_THREADS));
  mrb_const_set(mrb, Git_Feature_T_mod, mrb_intern_lit(mrb, "FEATURE_HTTPS"), mrb_fixnum_value(GIT_FEATURE_HTTPS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "FEATURE_HTTPS"), mrb_fixnum_value(GIT_FEATURE_HTTPS));
  mrb_const_set(mrb, Git_Feature_T_mod, mrb_intern_lit(mrb, "FEATURE_SSH"), mrb_fixnum_value(GIT_FEATURE_SSH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "FEATURE_SSH"), mrb_fixnum_value(GIT_FEATURE_SSH));
  mrb_const_set(mrb, Git_Feature_T_mod, mrb_intern_lit(mrb, "FEATURE_NSEC"), mrb_fixnum_value(GIT_FEATURE_NSEC));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "FEATURE_NSEC"), mrb_fixnum_value(GIT_FEATURE_NSEC));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Fetch_Prune_T_enum */
/* sha: 45209b698aa559dda09f57df7bed02913a008685b64cea83bba21fa03b4012e6 */
  struct RClass * Git_Fetch_Prune_T_module = mrb_define_module_under(mrb, Git_module, "Git_Fetch_Prune_T");
  mrb_value Git_Fetch_Prune_T_mod = mrb_obj_value(Git_Fetch_Prune_T_module);
  mrb_const_set(mrb, Git_Fetch_Prune_T_mod, mrb_intern_lit(mrb, "FETCH_PRUNE_UNSPECIFIED"), mrb_fixnum_value(GIT_FETCH_PRUNE_UNSPECIFIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "FETCH_PRUNE_UNSPECIFIED"), mrb_fixnum_value(GIT_FETCH_PRUNE_UNSPECIFIED));
  mrb_const_set(mrb, Git_Fetch_Prune_T_mod, mrb_intern_lit(mrb, "FETCH_PRUNE"), mrb_fixnum_value(GIT_FETCH_PRUNE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "FETCH_PRUNE"), mrb_fixnum_value(GIT_FETCH_PRUNE));
  mrb_const_set(mrb, Git_Fetch_Prune_T_mod, mrb_intern_lit(mrb, "FETCH_NO_PRUNE"), mrb_fixnum_value(GIT_FETCH_NO_PRUNE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "FETCH_NO_PRUNE"), mrb_fixnum_value(GIT_FETCH_NO_PRUNE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Filemode_T_enum */
/* sha: c82eae80a063a4eff42256507b4f9c78578f24684b893eef38e928c3ea72b842 */
  struct RClass * Git_Filemode_T_module = mrb_define_module_under(mrb, Git_module, "Git_Filemode_T");
  mrb_value Git_Filemode_T_mod = mrb_obj_value(Git_Filemode_T_module);
  mrb_const_set(mrb, Git_Filemode_T_mod, mrb_intern_lit(mrb, "FILEMODE_UNREADABLE"), mrb_fixnum_value(GIT_FILEMODE_UNREADABLE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "FILEMODE_UNREADABLE"), mrb_fixnum_value(GIT_FILEMODE_UNREADABLE));
  mrb_const_set(mrb, Git_Filemode_T_mod, mrb_intern_lit(mrb, "FILEMODE_TREE"), mrb_fixnum_value(GIT_FILEMODE_TREE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "FILEMODE_TREE"), mrb_fixnum_value(GIT_FILEMODE_TREE));
  mrb_const_set(mrb, Git_Filemode_T_mod, mrb_intern_lit(mrb, "FILEMODE_BLOB"), mrb_fixnum_value(GIT_FILEMODE_BLOB));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "FILEMODE_BLOB"), mrb_fixnum_value(GIT_FILEMODE_BLOB));
  mrb_const_set(mrb, Git_Filemode_T_mod, mrb_intern_lit(mrb, "FILEMODE_BLOB_EXECUTABLE"), mrb_fixnum_value(GIT_FILEMODE_BLOB_EXECUTABLE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "FILEMODE_BLOB_EXECUTABLE"), mrb_fixnum_value(GIT_FILEMODE_BLOB_EXECUTABLE));
  mrb_const_set(mrb, Git_Filemode_T_mod, mrb_intern_lit(mrb, "FILEMODE_LINK"), mrb_fixnum_value(GIT_FILEMODE_LINK));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "FILEMODE_LINK"), mrb_fixnum_value(GIT_FILEMODE_LINK));
  mrb_const_set(mrb, Git_Filemode_T_mod, mrb_intern_lit(mrb, "FILEMODE_COMMIT"), mrb_fixnum_value(GIT_FILEMODE_COMMIT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "FILEMODE_COMMIT"), mrb_fixnum_value(GIT_FILEMODE_COMMIT));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Filter_Flag_T_enum */
/* sha: 5cc0aecd86af1c88838be7a0a321f7984918d21b5c2a006e94c73464de2635ae */
  struct RClass * Git_Filter_Flag_T_module = mrb_define_module_under(mrb, Git_module, "Git_Filter_Flag_T");
  mrb_value Git_Filter_Flag_T_mod = mrb_obj_value(Git_Filter_Flag_T_module);
  mrb_const_set(mrb, Git_Filter_Flag_T_mod, mrb_intern_lit(mrb, "FILTER_DEFAULT"), mrb_fixnum_value(GIT_FILTER_DEFAULT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "FILTER_DEFAULT"), mrb_fixnum_value(GIT_FILTER_DEFAULT));
  mrb_const_set(mrb, Git_Filter_Flag_T_mod, mrb_intern_lit(mrb, "FILTER_ALLOW_UNSAFE"), mrb_fixnum_value(GIT_FILTER_ALLOW_UNSAFE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "FILTER_ALLOW_UNSAFE"), mrb_fixnum_value(GIT_FILTER_ALLOW_UNSAFE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Filter_Mode_T_enum */
/* sha: 6c28e8cb1dad235dda00af41f6361db8f1d8ac59858d34347d8b3bb56b7cebd4 */
  struct RClass * Git_Filter_Mode_T_module = mrb_define_module_under(mrb, Git_module, "Git_Filter_Mode_T");
  mrb_value Git_Filter_Mode_T_mod = mrb_obj_value(Git_Filter_Mode_T_module);
  mrb_const_set(mrb, Git_Filter_Mode_T_mod, mrb_intern_lit(mrb, "FILTER_TO_WORKTREE"), mrb_fixnum_value(GIT_FILTER_TO_WORKTREE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "FILTER_TO_WORKTREE"), mrb_fixnum_value(GIT_FILTER_TO_WORKTREE));
  mrb_const_set(mrb, Git_Filter_Mode_T_mod, mrb_intern_lit(mrb, "FILTER_SMUDGE"), mrb_fixnum_value(GIT_FILTER_SMUDGE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "FILTER_SMUDGE"), mrb_fixnum_value(GIT_FILTER_SMUDGE));
  mrb_const_set(mrb, Git_Filter_Mode_T_mod, mrb_intern_lit(mrb, "FILTER_TO_ODB"), mrb_fixnum_value(GIT_FILTER_TO_ODB));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "FILTER_TO_ODB"), mrb_fixnum_value(GIT_FILTER_TO_ODB));
  mrb_const_set(mrb, Git_Filter_Mode_T_mod, mrb_intern_lit(mrb, "FILTER_CLEAN"), mrb_fixnum_value(GIT_FILTER_CLEAN));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "FILTER_CLEAN"), mrb_fixnum_value(GIT_FILTER_CLEAN));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Idxentry_Extended_Flag_T_enum */
/* sha: 37c8ef2a3ad90264d45cc4b5b74ef74c5a690168a66b1ba0591fabef795a6895 */
  struct RClass * Git_Idxentry_Extended_Flag_T_module = mrb_define_module_under(mrb, Git_module, "Git_Idxentry_Extended_Flag_T");
  mrb_value Git_Idxentry_Extended_Flag_T_mod = mrb_obj_value(Git_Idxentry_Extended_Flag_T_module);
  mrb_const_set(mrb, Git_Idxentry_Extended_Flag_T_mod, mrb_intern_lit(mrb, "IDXENTRY_INTENT_TO_ADD"), mrb_fixnum_value(GIT_IDXENTRY_INTENT_TO_ADD));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "IDXENTRY_INTENT_TO_ADD"), mrb_fixnum_value(GIT_IDXENTRY_INTENT_TO_ADD));
  mrb_const_set(mrb, Git_Idxentry_Extended_Flag_T_mod, mrb_intern_lit(mrb, "IDXENTRY_SKIP_WORKTREE"), mrb_fixnum_value(GIT_IDXENTRY_SKIP_WORKTREE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "IDXENTRY_SKIP_WORKTREE"), mrb_fixnum_value(GIT_IDXENTRY_SKIP_WORKTREE));
  mrb_const_set(mrb, Git_Idxentry_Extended_Flag_T_mod, mrb_intern_lit(mrb, "IDXENTRY_EXTENDED2"), mrb_fixnum_value(GIT_IDXENTRY_EXTENDED2));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "IDXENTRY_EXTENDED2"), mrb_fixnum_value(GIT_IDXENTRY_EXTENDED2));
  mrb_const_set(mrb, Git_Idxentry_Extended_Flag_T_mod, mrb_intern_lit(mrb, "IDXENTRY_EXTENDED_FLAGS"), mrb_fixnum_value(GIT_IDXENTRY_EXTENDED_FLAGS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "IDXENTRY_EXTENDED_FLAGS"), mrb_fixnum_value(GIT_IDXENTRY_EXTENDED_FLAGS));
  mrb_const_set(mrb, Git_Idxentry_Extended_Flag_T_mod, mrb_intern_lit(mrb, "IDXENTRY_UPDATE"), mrb_fixnum_value(GIT_IDXENTRY_UPDATE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "IDXENTRY_UPDATE"), mrb_fixnum_value(GIT_IDXENTRY_UPDATE));
  mrb_const_set(mrb, Git_Idxentry_Extended_Flag_T_mod, mrb_intern_lit(mrb, "IDXENTRY_REMOVE"), mrb_fixnum_value(GIT_IDXENTRY_REMOVE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "IDXENTRY_REMOVE"), mrb_fixnum_value(GIT_IDXENTRY_REMOVE));
  mrb_const_set(mrb, Git_Idxentry_Extended_Flag_T_mod, mrb_intern_lit(mrb, "IDXENTRY_UPTODATE"), mrb_fixnum_value(GIT_IDXENTRY_UPTODATE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "IDXENTRY_UPTODATE"), mrb_fixnum_value(GIT_IDXENTRY_UPTODATE));
  mrb_const_set(mrb, Git_Idxentry_Extended_Flag_T_mod, mrb_intern_lit(mrb, "IDXENTRY_ADDED"), mrb_fixnum_value(GIT_IDXENTRY_ADDED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "IDXENTRY_ADDED"), mrb_fixnum_value(GIT_IDXENTRY_ADDED));
  mrb_const_set(mrb, Git_Idxentry_Extended_Flag_T_mod, mrb_intern_lit(mrb, "IDXENTRY_HASHED"), mrb_fixnum_value(GIT_IDXENTRY_HASHED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "IDXENTRY_HASHED"), mrb_fixnum_value(GIT_IDXENTRY_HASHED));
  mrb_const_set(mrb, Git_Idxentry_Extended_Flag_T_mod, mrb_intern_lit(mrb, "IDXENTRY_UNHASHED"), mrb_fixnum_value(GIT_IDXENTRY_UNHASHED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "IDXENTRY_UNHASHED"), mrb_fixnum_value(GIT_IDXENTRY_UNHASHED));
  mrb_const_set(mrb, Git_Idxentry_Extended_Flag_T_mod, mrb_intern_lit(mrb, "IDXENTRY_WT_REMOVE"), mrb_fixnum_value(GIT_IDXENTRY_WT_REMOVE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "IDXENTRY_WT_REMOVE"), mrb_fixnum_value(GIT_IDXENTRY_WT_REMOVE));
  mrb_const_set(mrb, Git_Idxentry_Extended_Flag_T_mod, mrb_intern_lit(mrb, "IDXENTRY_CONFLICTED"), mrb_fixnum_value(GIT_IDXENTRY_CONFLICTED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "IDXENTRY_CONFLICTED"), mrb_fixnum_value(GIT_IDXENTRY_CONFLICTED));
  mrb_const_set(mrb, Git_Idxentry_Extended_Flag_T_mod, mrb_intern_lit(mrb, "IDXENTRY_UNPACKED"), mrb_fixnum_value(GIT_IDXENTRY_UNPACKED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "IDXENTRY_UNPACKED"), mrb_fixnum_value(GIT_IDXENTRY_UNPACKED));
  mrb_const_set(mrb, Git_Idxentry_Extended_Flag_T_mod, mrb_intern_lit(mrb, "IDXENTRY_NEW_SKIP_WORKTREE"), mrb_fixnum_value(GIT_IDXENTRY_NEW_SKIP_WORKTREE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "IDXENTRY_NEW_SKIP_WORKTREE"), mrb_fixnum_value(GIT_IDXENTRY_NEW_SKIP_WORKTREE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Index_Add_Option_T_enum */
/* sha: 58851ec84ca073a1de26f47425b0dcf3e5aa86816f43b075d185daa924e1db22 */
  struct RClass * Git_Index_Add_Option_T_module = mrb_define_module_under(mrb, Git_module, "Git_Index_Add_Option_T");
  mrb_value Git_Index_Add_Option_T_mod = mrb_obj_value(Git_Index_Add_Option_T_module);
  mrb_const_set(mrb, Git_Index_Add_Option_T_mod, mrb_intern_lit(mrb, "INDEX_ADD_DEFAULT"), mrb_fixnum_value(GIT_INDEX_ADD_DEFAULT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "INDEX_ADD_DEFAULT"), mrb_fixnum_value(GIT_INDEX_ADD_DEFAULT));
  mrb_const_set(mrb, Git_Index_Add_Option_T_mod, mrb_intern_lit(mrb, "INDEX_ADD_FORCE"), mrb_fixnum_value(GIT_INDEX_ADD_FORCE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "INDEX_ADD_FORCE"), mrb_fixnum_value(GIT_INDEX_ADD_FORCE));
  mrb_const_set(mrb, Git_Index_Add_Option_T_mod, mrb_intern_lit(mrb, "INDEX_ADD_DISABLE_PATHSPEC_MATCH"), mrb_fixnum_value(GIT_INDEX_ADD_DISABLE_PATHSPEC_MATCH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "INDEX_ADD_DISABLE_PATHSPEC_MATCH"), mrb_fixnum_value(GIT_INDEX_ADD_DISABLE_PATHSPEC_MATCH));
  mrb_const_set(mrb, Git_Index_Add_Option_T_mod, mrb_intern_lit(mrb, "INDEX_ADD_CHECK_PATHSPEC"), mrb_fixnum_value(GIT_INDEX_ADD_CHECK_PATHSPEC));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "INDEX_ADD_CHECK_PATHSPEC"), mrb_fixnum_value(GIT_INDEX_ADD_CHECK_PATHSPEC));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Index_Stage_T_enum */
/* sha: 9f41ff55bb01931b41eb97122d562d530e1c4418ca04b40b2cd97924d93b2116 */
  struct RClass * Git_Index_Stage_T_module = mrb_define_module_under(mrb, Git_module, "Git_Index_Stage_T");
  mrb_value Git_Index_Stage_T_mod = mrb_obj_value(Git_Index_Stage_T_module);
  mrb_const_set(mrb, Git_Index_Stage_T_mod, mrb_intern_lit(mrb, "INDEX_STAGE_ANY"), mrb_fixnum_value(GIT_INDEX_STAGE_ANY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "INDEX_STAGE_ANY"), mrb_fixnum_value(GIT_INDEX_STAGE_ANY));
  mrb_const_set(mrb, Git_Index_Stage_T_mod, mrb_intern_lit(mrb, "INDEX_STAGE_NORMAL"), mrb_fixnum_value(GIT_INDEX_STAGE_NORMAL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "INDEX_STAGE_NORMAL"), mrb_fixnum_value(GIT_INDEX_STAGE_NORMAL));
  mrb_const_set(mrb, Git_Index_Stage_T_mod, mrb_intern_lit(mrb, "INDEX_STAGE_ANCESTOR"), mrb_fixnum_value(GIT_INDEX_STAGE_ANCESTOR));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "INDEX_STAGE_ANCESTOR"), mrb_fixnum_value(GIT_INDEX_STAGE_ANCESTOR));
  mrb_const_set(mrb, Git_Index_Stage_T_mod, mrb_intern_lit(mrb, "INDEX_STAGE_OURS"), mrb_fixnum_value(GIT_INDEX_STAGE_OURS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "INDEX_STAGE_OURS"), mrb_fixnum_value(GIT_INDEX_STAGE_OURS));
  mrb_const_set(mrb, Git_Index_Stage_T_mod, mrb_intern_lit(mrb, "INDEX_STAGE_THEIRS"), mrb_fixnum_value(GIT_INDEX_STAGE_THEIRS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "INDEX_STAGE_THEIRS"), mrb_fixnum_value(GIT_INDEX_STAGE_THEIRS));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Indexcap_T_enum */
/* sha: e2acd3e971f065fe1ce3bbb32927f27cb4c55289037c1f08b177a4cf9325deda */
  struct RClass * Git_Indexcap_T_module = mrb_define_module_under(mrb, Git_module, "Git_Indexcap_T");
  mrb_value Git_Indexcap_T_mod = mrb_obj_value(Git_Indexcap_T_module);
  mrb_const_set(mrb, Git_Indexcap_T_mod, mrb_intern_lit(mrb, "INDEXCAP_IGNORE_CASE"), mrb_fixnum_value(GIT_INDEXCAP_IGNORE_CASE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "INDEXCAP_IGNORE_CASE"), mrb_fixnum_value(GIT_INDEXCAP_IGNORE_CASE));
  mrb_const_set(mrb, Git_Indexcap_T_mod, mrb_intern_lit(mrb, "INDEXCAP_NO_FILEMODE"), mrb_fixnum_value(GIT_INDEXCAP_NO_FILEMODE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "INDEXCAP_NO_FILEMODE"), mrb_fixnum_value(GIT_INDEXCAP_NO_FILEMODE));
  mrb_const_set(mrb, Git_Indexcap_T_mod, mrb_intern_lit(mrb, "INDEXCAP_NO_SYMLINKS"), mrb_fixnum_value(GIT_INDEXCAP_NO_SYMLINKS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "INDEXCAP_NO_SYMLINKS"), mrb_fixnum_value(GIT_INDEXCAP_NO_SYMLINKS));
  mrb_const_set(mrb, Git_Indexcap_T_mod, mrb_intern_lit(mrb, "INDEXCAP_FROM_OWNER"), mrb_fixnum_value(GIT_INDEXCAP_FROM_OWNER));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "INDEXCAP_FROM_OWNER"), mrb_fixnum_value(GIT_INDEXCAP_FROM_OWNER));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Indxentry_Flag_T_enum */
/* sha: e9673704ba977feb5c752c9198f6fbe61fab4b8acf8738415e64d1a36a494bdd */
  struct RClass * Git_Indxentry_Flag_T_module = mrb_define_module_under(mrb, Git_module, "Git_Indxentry_Flag_T");
  mrb_value Git_Indxentry_Flag_T_mod = mrb_obj_value(Git_Indxentry_Flag_T_module);
  mrb_const_set(mrb, Git_Indxentry_Flag_T_mod, mrb_intern_lit(mrb, "IDXENTRY_EXTENDED"), mrb_fixnum_value(GIT_IDXENTRY_EXTENDED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "IDXENTRY_EXTENDED"), mrb_fixnum_value(GIT_IDXENTRY_EXTENDED));
  mrb_const_set(mrb, Git_Indxentry_Flag_T_mod, mrb_intern_lit(mrb, "IDXENTRY_VALID"), mrb_fixnum_value(GIT_IDXENTRY_VALID));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "IDXENTRY_VALID"), mrb_fixnum_value(GIT_IDXENTRY_VALID));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Libgit2_Opt_T_enum */
/* sha: dfa68f44a0ed0bc932d2a62e6ded5bc2b6c70713fa734445c7dfed09535a2fc2 */
  struct RClass * Git_Libgit2_Opt_T_module = mrb_define_module_under(mrb, Git_module, "Git_Libgit2_Opt_T");
  mrb_value Git_Libgit2_Opt_T_mod = mrb_obj_value(Git_Libgit2_Opt_T_module);
  mrb_const_set(mrb, Git_Libgit2_Opt_T_mod, mrb_intern_lit(mrb, "OPT_GET_MWINDOW_SIZE"), mrb_fixnum_value(GIT_OPT_GET_MWINDOW_SIZE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OPT_GET_MWINDOW_SIZE"), mrb_fixnum_value(GIT_OPT_GET_MWINDOW_SIZE));
  mrb_const_set(mrb, Git_Libgit2_Opt_T_mod, mrb_intern_lit(mrb, "OPT_SET_MWINDOW_SIZE"), mrb_fixnum_value(GIT_OPT_SET_MWINDOW_SIZE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OPT_SET_MWINDOW_SIZE"), mrb_fixnum_value(GIT_OPT_SET_MWINDOW_SIZE));
  mrb_const_set(mrb, Git_Libgit2_Opt_T_mod, mrb_intern_lit(mrb, "OPT_GET_MWINDOW_MAPPED_LIMIT"), mrb_fixnum_value(GIT_OPT_GET_MWINDOW_MAPPED_LIMIT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OPT_GET_MWINDOW_MAPPED_LIMIT"), mrb_fixnum_value(GIT_OPT_GET_MWINDOW_MAPPED_LIMIT));
  mrb_const_set(mrb, Git_Libgit2_Opt_T_mod, mrb_intern_lit(mrb, "OPT_SET_MWINDOW_MAPPED_LIMIT"), mrb_fixnum_value(GIT_OPT_SET_MWINDOW_MAPPED_LIMIT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OPT_SET_MWINDOW_MAPPED_LIMIT"), mrb_fixnum_value(GIT_OPT_SET_MWINDOW_MAPPED_LIMIT));
  mrb_const_set(mrb, Git_Libgit2_Opt_T_mod, mrb_intern_lit(mrb, "OPT_GET_SEARCH_PATH"), mrb_fixnum_value(GIT_OPT_GET_SEARCH_PATH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OPT_GET_SEARCH_PATH"), mrb_fixnum_value(GIT_OPT_GET_SEARCH_PATH));
  mrb_const_set(mrb, Git_Libgit2_Opt_T_mod, mrb_intern_lit(mrb, "OPT_SET_SEARCH_PATH"), mrb_fixnum_value(GIT_OPT_SET_SEARCH_PATH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OPT_SET_SEARCH_PATH"), mrb_fixnum_value(GIT_OPT_SET_SEARCH_PATH));
  mrb_const_set(mrb, Git_Libgit2_Opt_T_mod, mrb_intern_lit(mrb, "OPT_SET_CACHE_OBJECT_LIMIT"), mrb_fixnum_value(GIT_OPT_SET_CACHE_OBJECT_LIMIT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OPT_SET_CACHE_OBJECT_LIMIT"), mrb_fixnum_value(GIT_OPT_SET_CACHE_OBJECT_LIMIT));
  mrb_const_set(mrb, Git_Libgit2_Opt_T_mod, mrb_intern_lit(mrb, "OPT_SET_CACHE_MAX_SIZE"), mrb_fixnum_value(GIT_OPT_SET_CACHE_MAX_SIZE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OPT_SET_CACHE_MAX_SIZE"), mrb_fixnum_value(GIT_OPT_SET_CACHE_MAX_SIZE));
  mrb_const_set(mrb, Git_Libgit2_Opt_T_mod, mrb_intern_lit(mrb, "OPT_ENABLE_CACHING"), mrb_fixnum_value(GIT_OPT_ENABLE_CACHING));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OPT_ENABLE_CACHING"), mrb_fixnum_value(GIT_OPT_ENABLE_CACHING));
  mrb_const_set(mrb, Git_Libgit2_Opt_T_mod, mrb_intern_lit(mrb, "OPT_GET_CACHED_MEMORY"), mrb_fixnum_value(GIT_OPT_GET_CACHED_MEMORY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OPT_GET_CACHED_MEMORY"), mrb_fixnum_value(GIT_OPT_GET_CACHED_MEMORY));
  mrb_const_set(mrb, Git_Libgit2_Opt_T_mod, mrb_intern_lit(mrb, "OPT_GET_TEMPLATE_PATH"), mrb_fixnum_value(GIT_OPT_GET_TEMPLATE_PATH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OPT_GET_TEMPLATE_PATH"), mrb_fixnum_value(GIT_OPT_GET_TEMPLATE_PATH));
  mrb_const_set(mrb, Git_Libgit2_Opt_T_mod, mrb_intern_lit(mrb, "OPT_SET_TEMPLATE_PATH"), mrb_fixnum_value(GIT_OPT_SET_TEMPLATE_PATH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OPT_SET_TEMPLATE_PATH"), mrb_fixnum_value(GIT_OPT_SET_TEMPLATE_PATH));
  mrb_const_set(mrb, Git_Libgit2_Opt_T_mod, mrb_intern_lit(mrb, "OPT_SET_SSL_CERT_LOCATIONS"), mrb_fixnum_value(GIT_OPT_SET_SSL_CERT_LOCATIONS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OPT_SET_SSL_CERT_LOCATIONS"), mrb_fixnum_value(GIT_OPT_SET_SSL_CERT_LOCATIONS));
  mrb_const_set(mrb, Git_Libgit2_Opt_T_mod, mrb_intern_lit(mrb, "OPT_SET_USER_AGENT"), mrb_fixnum_value(GIT_OPT_SET_USER_AGENT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OPT_SET_USER_AGENT"), mrb_fixnum_value(GIT_OPT_SET_USER_AGENT));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Merge_Analysis_T_enum */
/* sha: 08dc3221acc22d48524273659e54430c048fc4f1b549e36ef175a25242ca5ae5 */
  struct RClass * Git_Merge_Analysis_T_module = mrb_define_module_under(mrb, Git_module, "Git_Merge_Analysis_T");
  mrb_value Git_Merge_Analysis_T_mod = mrb_obj_value(Git_Merge_Analysis_T_module);
  mrb_const_set(mrb, Git_Merge_Analysis_T_mod, mrb_intern_lit(mrb, "MERGE_ANALYSIS_NONE"), mrb_fixnum_value(GIT_MERGE_ANALYSIS_NONE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_ANALYSIS_NONE"), mrb_fixnum_value(GIT_MERGE_ANALYSIS_NONE));
  mrb_const_set(mrb, Git_Merge_Analysis_T_mod, mrb_intern_lit(mrb, "MERGE_ANALYSIS_NORMAL"), mrb_fixnum_value(GIT_MERGE_ANALYSIS_NORMAL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_ANALYSIS_NORMAL"), mrb_fixnum_value(GIT_MERGE_ANALYSIS_NORMAL));
  mrb_const_set(mrb, Git_Merge_Analysis_T_mod, mrb_intern_lit(mrb, "MERGE_ANALYSIS_UP_TO_DATE"), mrb_fixnum_value(GIT_MERGE_ANALYSIS_UP_TO_DATE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_ANALYSIS_UP_TO_DATE"), mrb_fixnum_value(GIT_MERGE_ANALYSIS_UP_TO_DATE));
  mrb_const_set(mrb, Git_Merge_Analysis_T_mod, mrb_intern_lit(mrb, "MERGE_ANALYSIS_FASTFORWARD"), mrb_fixnum_value(GIT_MERGE_ANALYSIS_FASTFORWARD));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_ANALYSIS_FASTFORWARD"), mrb_fixnum_value(GIT_MERGE_ANALYSIS_FASTFORWARD));
  mrb_const_set(mrb, Git_Merge_Analysis_T_mod, mrb_intern_lit(mrb, "MERGE_ANALYSIS_UNBORN"), mrb_fixnum_value(GIT_MERGE_ANALYSIS_UNBORN));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_ANALYSIS_UNBORN"), mrb_fixnum_value(GIT_MERGE_ANALYSIS_UNBORN));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Merge_File_Favor_T_enum */
/* sha: 218de89d408f15aad6a5bc35d16ff547d72b89bda756dc4155c65ee92273ecbb */
  struct RClass * Git_Merge_File_Favor_T_module = mrb_define_module_under(mrb, Git_module, "Git_Merge_File_Favor_T");
  mrb_value Git_Merge_File_Favor_T_mod = mrb_obj_value(Git_Merge_File_Favor_T_module);
  mrb_const_set(mrb, Git_Merge_File_Favor_T_mod, mrb_intern_lit(mrb, "MERGE_FILE_FAVOR_NORMAL"), mrb_fixnum_value(GIT_MERGE_FILE_FAVOR_NORMAL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_FILE_FAVOR_NORMAL"), mrb_fixnum_value(GIT_MERGE_FILE_FAVOR_NORMAL));
  mrb_const_set(mrb, Git_Merge_File_Favor_T_mod, mrb_intern_lit(mrb, "MERGE_FILE_FAVOR_OURS"), mrb_fixnum_value(GIT_MERGE_FILE_FAVOR_OURS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_FILE_FAVOR_OURS"), mrb_fixnum_value(GIT_MERGE_FILE_FAVOR_OURS));
  mrb_const_set(mrb, Git_Merge_File_Favor_T_mod, mrb_intern_lit(mrb, "MERGE_FILE_FAVOR_THEIRS"), mrb_fixnum_value(GIT_MERGE_FILE_FAVOR_THEIRS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_FILE_FAVOR_THEIRS"), mrb_fixnum_value(GIT_MERGE_FILE_FAVOR_THEIRS));
  mrb_const_set(mrb, Git_Merge_File_Favor_T_mod, mrb_intern_lit(mrb, "MERGE_FILE_FAVOR_UNION"), mrb_fixnum_value(GIT_MERGE_FILE_FAVOR_UNION));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_FILE_FAVOR_UNION"), mrb_fixnum_value(GIT_MERGE_FILE_FAVOR_UNION));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Merge_File_Flag_T_enum */
/* sha: b62a699a0faf64f45477e5c7dce0161992190813a005bf620efb5f1c9de6f894 */
  struct RClass * Git_Merge_File_Flag_T_module = mrb_define_module_under(mrb, Git_module, "Git_Merge_File_Flag_T");
  mrb_value Git_Merge_File_Flag_T_mod = mrb_obj_value(Git_Merge_File_Flag_T_module);
  mrb_const_set(mrb, Git_Merge_File_Flag_T_mod, mrb_intern_lit(mrb, "MERGE_FILE_DEFAULT"), mrb_fixnum_value(GIT_MERGE_FILE_DEFAULT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_FILE_DEFAULT"), mrb_fixnum_value(GIT_MERGE_FILE_DEFAULT));
  mrb_const_set(mrb, Git_Merge_File_Flag_T_mod, mrb_intern_lit(mrb, "MERGE_FILE_STYLE_MERGE"), mrb_fixnum_value(GIT_MERGE_FILE_STYLE_MERGE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_FILE_STYLE_MERGE"), mrb_fixnum_value(GIT_MERGE_FILE_STYLE_MERGE));
  mrb_const_set(mrb, Git_Merge_File_Flag_T_mod, mrb_intern_lit(mrb, "MERGE_FILE_STYLE_DIFF3"), mrb_fixnum_value(GIT_MERGE_FILE_STYLE_DIFF3));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_FILE_STYLE_DIFF3"), mrb_fixnum_value(GIT_MERGE_FILE_STYLE_DIFF3));
  mrb_const_set(mrb, Git_Merge_File_Flag_T_mod, mrb_intern_lit(mrb, "MERGE_FILE_SIMPLIFY_ALNUM"), mrb_fixnum_value(GIT_MERGE_FILE_SIMPLIFY_ALNUM));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_FILE_SIMPLIFY_ALNUM"), mrb_fixnum_value(GIT_MERGE_FILE_SIMPLIFY_ALNUM));
  mrb_const_set(mrb, Git_Merge_File_Flag_T_mod, mrb_intern_lit(mrb, "MERGE_FILE_IGNORE_WHITESPACE"), mrb_fixnum_value(GIT_MERGE_FILE_IGNORE_WHITESPACE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_FILE_IGNORE_WHITESPACE"), mrb_fixnum_value(GIT_MERGE_FILE_IGNORE_WHITESPACE));
  mrb_const_set(mrb, Git_Merge_File_Flag_T_mod, mrb_intern_lit(mrb, "MERGE_FILE_IGNORE_WHITESPACE_CHANGE"), mrb_fixnum_value(GIT_MERGE_FILE_IGNORE_WHITESPACE_CHANGE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_FILE_IGNORE_WHITESPACE_CHANGE"), mrb_fixnum_value(GIT_MERGE_FILE_IGNORE_WHITESPACE_CHANGE));
  mrb_const_set(mrb, Git_Merge_File_Flag_T_mod, mrb_intern_lit(mrb, "MERGE_FILE_IGNORE_WHITESPACE_EOL"), mrb_fixnum_value(GIT_MERGE_FILE_IGNORE_WHITESPACE_EOL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_FILE_IGNORE_WHITESPACE_EOL"), mrb_fixnum_value(GIT_MERGE_FILE_IGNORE_WHITESPACE_EOL));
  mrb_const_set(mrb, Git_Merge_File_Flag_T_mod, mrb_intern_lit(mrb, "MERGE_FILE_DIFF_PATIENCE"), mrb_fixnum_value(GIT_MERGE_FILE_DIFF_PATIENCE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_FILE_DIFF_PATIENCE"), mrb_fixnum_value(GIT_MERGE_FILE_DIFF_PATIENCE));
  mrb_const_set(mrb, Git_Merge_File_Flag_T_mod, mrb_intern_lit(mrb, "MERGE_FILE_DIFF_MINIMAL"), mrb_fixnum_value(GIT_MERGE_FILE_DIFF_MINIMAL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_FILE_DIFF_MINIMAL"), mrb_fixnum_value(GIT_MERGE_FILE_DIFF_MINIMAL));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Merge_Flag_T_enum */
/* sha: 51822c5d9724e91b6add45723530e7224098e0a522110c32b79fc4255506d5ed */
  struct RClass * Git_Merge_Flag_T_module = mrb_define_module_under(mrb, Git_module, "Git_Merge_Flag_T");
  mrb_value Git_Merge_Flag_T_mod = mrb_obj_value(Git_Merge_Flag_T_module);
  mrb_const_set(mrb, Git_Merge_Flag_T_mod, mrb_intern_lit(mrb, "MERGE_FIND_RENAMES"), mrb_fixnum_value(GIT_MERGE_FIND_RENAMES));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_FIND_RENAMES"), mrb_fixnum_value(GIT_MERGE_FIND_RENAMES));
  mrb_const_set(mrb, Git_Merge_Flag_T_mod, mrb_intern_lit(mrb, "MERGE_FAIL_ON_CONFLICT"), mrb_fixnum_value(GIT_MERGE_FAIL_ON_CONFLICT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_FAIL_ON_CONFLICT"), mrb_fixnum_value(GIT_MERGE_FAIL_ON_CONFLICT));
  mrb_const_set(mrb, Git_Merge_Flag_T_mod, mrb_intern_lit(mrb, "MERGE_SKIP_REUC"), mrb_fixnum_value(GIT_MERGE_SKIP_REUC));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_SKIP_REUC"), mrb_fixnum_value(GIT_MERGE_SKIP_REUC));
  mrb_const_set(mrb, Git_Merge_Flag_T_mod, mrb_intern_lit(mrb, "MERGE_NO_RECURSIVE"), mrb_fixnum_value(GIT_MERGE_NO_RECURSIVE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_NO_RECURSIVE"), mrb_fixnum_value(GIT_MERGE_NO_RECURSIVE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Merge_Preference_T_enum */
/* sha: 8dff5b987ef5fd2c248b609171eed7845b7fd94e4734256f03f56fc04d89be3b */
  struct RClass * Git_Merge_Preference_T_module = mrb_define_module_under(mrb, Git_module, "Git_Merge_Preference_T");
  mrb_value Git_Merge_Preference_T_mod = mrb_obj_value(Git_Merge_Preference_T_module);
  mrb_const_set(mrb, Git_Merge_Preference_T_mod, mrb_intern_lit(mrb, "MERGE_PREFERENCE_NONE"), mrb_fixnum_value(GIT_MERGE_PREFERENCE_NONE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_PREFERENCE_NONE"), mrb_fixnum_value(GIT_MERGE_PREFERENCE_NONE));
  mrb_const_set(mrb, Git_Merge_Preference_T_mod, mrb_intern_lit(mrb, "MERGE_PREFERENCE_NO_FASTFORWARD"), mrb_fixnum_value(GIT_MERGE_PREFERENCE_NO_FASTFORWARD));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_PREFERENCE_NO_FASTFORWARD"), mrb_fixnum_value(GIT_MERGE_PREFERENCE_NO_FASTFORWARD));
  mrb_const_set(mrb, Git_Merge_Preference_T_mod, mrb_intern_lit(mrb, "MERGE_PREFERENCE_FASTFORWARD_ONLY"), mrb_fixnum_value(GIT_MERGE_PREFERENCE_FASTFORWARD_ONLY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "MERGE_PREFERENCE_FASTFORWARD_ONLY"), mrb_fixnum_value(GIT_MERGE_PREFERENCE_FASTFORWARD_ONLY));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Odb_Stream_T_enum */
/* sha: 614c15d5e6d66791c778f88fbb5c42fd2fe9291e5fcc2fc5bb15d9c118628586 */
  struct RClass * Git_Odb_Stream_T_module = mrb_define_module_under(mrb, Git_module, "Git_Odb_Stream_T");
  mrb_value Git_Odb_Stream_T_mod = mrb_obj_value(Git_Odb_Stream_T_module);
  mrb_const_set(mrb, Git_Odb_Stream_T_mod, mrb_intern_lit(mrb, "STREAM_RDONLY"), mrb_fixnum_value(GIT_STREAM_RDONLY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STREAM_RDONLY"), mrb_fixnum_value(GIT_STREAM_RDONLY));
  mrb_const_set(mrb, Git_Odb_Stream_T_mod, mrb_intern_lit(mrb, "STREAM_WRONLY"), mrb_fixnum_value(GIT_STREAM_WRONLY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STREAM_WRONLY"), mrb_fixnum_value(GIT_STREAM_WRONLY));
  mrb_const_set(mrb, Git_Odb_Stream_T_mod, mrb_intern_lit(mrb, "STREAM_RW"), mrb_fixnum_value(GIT_STREAM_RW));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STREAM_RW"), mrb_fixnum_value(GIT_STREAM_RW));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Otype_enum */
/* sha: e94c8189030485a2ab939da7d112acb0e51b6e4f5ccf4652c6411ef3ea12a1de */
  struct RClass * Git_Otype_module = mrb_define_module_under(mrb, Git_module, "Git_Otype");
  mrb_value Git_Otype_mod = mrb_obj_value(Git_Otype_module);
  mrb_const_set(mrb, Git_Otype_mod, mrb_intern_lit(mrb, "OBJ_ANY"), mrb_fixnum_value(GIT_OBJ_ANY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OBJ_ANY"), mrb_fixnum_value(GIT_OBJ_ANY));
  mrb_const_set(mrb, Git_Otype_mod, mrb_intern_lit(mrb, "OBJ_BAD"), mrb_fixnum_value(GIT_OBJ_BAD));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OBJ_BAD"), mrb_fixnum_value(GIT_OBJ_BAD));
  mrb_const_set(mrb, Git_Otype_mod, mrb_intern_lit(mrb, "OBJ__EXT1"), mrb_fixnum_value(GIT_OBJ__EXT1));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OBJ__EXT1"), mrb_fixnum_value(GIT_OBJ__EXT1));
  mrb_const_set(mrb, Git_Otype_mod, mrb_intern_lit(mrb, "OBJ_COMMIT"), mrb_fixnum_value(GIT_OBJ_COMMIT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OBJ_COMMIT"), mrb_fixnum_value(GIT_OBJ_COMMIT));
  mrb_const_set(mrb, Git_Otype_mod, mrb_intern_lit(mrb, "OBJ_TREE"), mrb_fixnum_value(GIT_OBJ_TREE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OBJ_TREE"), mrb_fixnum_value(GIT_OBJ_TREE));
  mrb_const_set(mrb, Git_Otype_mod, mrb_intern_lit(mrb, "OBJ_BLOB"), mrb_fixnum_value(GIT_OBJ_BLOB));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OBJ_BLOB"), mrb_fixnum_value(GIT_OBJ_BLOB));
  mrb_const_set(mrb, Git_Otype_mod, mrb_intern_lit(mrb, "OBJ_TAG"), mrb_fixnum_value(GIT_OBJ_TAG));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OBJ_TAG"), mrb_fixnum_value(GIT_OBJ_TAG));
  mrb_const_set(mrb, Git_Otype_mod, mrb_intern_lit(mrb, "OBJ__EXT2"), mrb_fixnum_value(GIT_OBJ__EXT2));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OBJ__EXT2"), mrb_fixnum_value(GIT_OBJ__EXT2));
  mrb_const_set(mrb, Git_Otype_mod, mrb_intern_lit(mrb, "OBJ_OFS_DELTA"), mrb_fixnum_value(GIT_OBJ_OFS_DELTA));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OBJ_OFS_DELTA"), mrb_fixnum_value(GIT_OBJ_OFS_DELTA));
  mrb_const_set(mrb, Git_Otype_mod, mrb_intern_lit(mrb, "OBJ_REF_DELTA"), mrb_fixnum_value(GIT_OBJ_REF_DELTA));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "OBJ_REF_DELTA"), mrb_fixnum_value(GIT_OBJ_REF_DELTA));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Packbuilder_Stage_T_enum */
/* sha: 9e4467fbb38aba106604e4a664646e535319bf2e90be2b7a8a8daba59f705dc5 */
  struct RClass * Git_Packbuilder_Stage_T_module = mrb_define_module_under(mrb, Git_module, "Git_Packbuilder_Stage_T");
  mrb_value Git_Packbuilder_Stage_T_mod = mrb_obj_value(Git_Packbuilder_Stage_T_module);
  mrb_const_set(mrb, Git_Packbuilder_Stage_T_mod, mrb_intern_lit(mrb, "PACKBUILDER_ADDING_OBJECTS"), mrb_fixnum_value(GIT_PACKBUILDER_ADDING_OBJECTS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "PACKBUILDER_ADDING_OBJECTS"), mrb_fixnum_value(GIT_PACKBUILDER_ADDING_OBJECTS));
  mrb_const_set(mrb, Git_Packbuilder_Stage_T_mod, mrb_intern_lit(mrb, "PACKBUILDER_DELTAFICATION"), mrb_fixnum_value(GIT_PACKBUILDER_DELTAFICATION));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "PACKBUILDER_DELTAFICATION"), mrb_fixnum_value(GIT_PACKBUILDER_DELTAFICATION));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Pathspec_Flag_T_enum */
/* sha: 36c854dbbe3f16ae2235a195893d78af8434a8fefacdb5c3c4a46c6deeb2a28c */
  struct RClass * Git_Pathspec_Flag_T_module = mrb_define_module_under(mrb, Git_module, "Git_Pathspec_Flag_T");
  mrb_value Git_Pathspec_Flag_T_mod = mrb_obj_value(Git_Pathspec_Flag_T_module);
  mrb_const_set(mrb, Git_Pathspec_Flag_T_mod, mrb_intern_lit(mrb, "PATHSPEC_DEFAULT"), mrb_fixnum_value(GIT_PATHSPEC_DEFAULT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "PATHSPEC_DEFAULT"), mrb_fixnum_value(GIT_PATHSPEC_DEFAULT));
  mrb_const_set(mrb, Git_Pathspec_Flag_T_mod, mrb_intern_lit(mrb, "PATHSPEC_IGNORE_CASE"), mrb_fixnum_value(GIT_PATHSPEC_IGNORE_CASE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "PATHSPEC_IGNORE_CASE"), mrb_fixnum_value(GIT_PATHSPEC_IGNORE_CASE));
  mrb_const_set(mrb, Git_Pathspec_Flag_T_mod, mrb_intern_lit(mrb, "PATHSPEC_USE_CASE"), mrb_fixnum_value(GIT_PATHSPEC_USE_CASE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "PATHSPEC_USE_CASE"), mrb_fixnum_value(GIT_PATHSPEC_USE_CASE));
  mrb_const_set(mrb, Git_Pathspec_Flag_T_mod, mrb_intern_lit(mrb, "PATHSPEC_NO_GLOB"), mrb_fixnum_value(GIT_PATHSPEC_NO_GLOB));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "PATHSPEC_NO_GLOB"), mrb_fixnum_value(GIT_PATHSPEC_NO_GLOB));
  mrb_const_set(mrb, Git_Pathspec_Flag_T_mod, mrb_intern_lit(mrb, "PATHSPEC_NO_MATCH_ERROR"), mrb_fixnum_value(GIT_PATHSPEC_NO_MATCH_ERROR));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "PATHSPEC_NO_MATCH_ERROR"), mrb_fixnum_value(GIT_PATHSPEC_NO_MATCH_ERROR));
  mrb_const_set(mrb, Git_Pathspec_Flag_T_mod, mrb_intern_lit(mrb, "PATHSPEC_FIND_FAILURES"), mrb_fixnum_value(GIT_PATHSPEC_FIND_FAILURES));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "PATHSPEC_FIND_FAILURES"), mrb_fixnum_value(GIT_PATHSPEC_FIND_FAILURES));
  mrb_const_set(mrb, Git_Pathspec_Flag_T_mod, mrb_intern_lit(mrb, "PATHSPEC_FAILURES_ONLY"), mrb_fixnum_value(GIT_PATHSPEC_FAILURES_ONLY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "PATHSPEC_FAILURES_ONLY"), mrb_fixnum_value(GIT_PATHSPEC_FAILURES_ONLY));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Rebase_Operation_T_enum */
/* sha: 205f1dc4dd93e52e621ea03b164118c9720a0e891fb8970b97d6c5d5185322d5 */
  struct RClass * Git_Rebase_Operation_T_module = mrb_define_module_under(mrb, Git_module, "Git_Rebase_Operation_T");
  mrb_value Git_Rebase_Operation_T_mod = mrb_obj_value(Git_Rebase_Operation_T_module);
  mrb_const_set(mrb, Git_Rebase_Operation_T_mod, mrb_intern_lit(mrb, "REBASE_OPERATION_PICK"), mrb_fixnum_value(GIT_REBASE_OPERATION_PICK));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REBASE_OPERATION_PICK"), mrb_fixnum_value(GIT_REBASE_OPERATION_PICK));
  mrb_const_set(mrb, Git_Rebase_Operation_T_mod, mrb_intern_lit(mrb, "REBASE_OPERATION_REWORD"), mrb_fixnum_value(GIT_REBASE_OPERATION_REWORD));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REBASE_OPERATION_REWORD"), mrb_fixnum_value(GIT_REBASE_OPERATION_REWORD));
  mrb_const_set(mrb, Git_Rebase_Operation_T_mod, mrb_intern_lit(mrb, "REBASE_OPERATION_EDIT"), mrb_fixnum_value(GIT_REBASE_OPERATION_EDIT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REBASE_OPERATION_EDIT"), mrb_fixnum_value(GIT_REBASE_OPERATION_EDIT));
  mrb_const_set(mrb, Git_Rebase_Operation_T_mod, mrb_intern_lit(mrb, "REBASE_OPERATION_SQUASH"), mrb_fixnum_value(GIT_REBASE_OPERATION_SQUASH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REBASE_OPERATION_SQUASH"), mrb_fixnum_value(GIT_REBASE_OPERATION_SQUASH));
  mrb_const_set(mrb, Git_Rebase_Operation_T_mod, mrb_intern_lit(mrb, "REBASE_OPERATION_FIXUP"), mrb_fixnum_value(GIT_REBASE_OPERATION_FIXUP));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REBASE_OPERATION_FIXUP"), mrb_fixnum_value(GIT_REBASE_OPERATION_FIXUP));
  mrb_const_set(mrb, Git_Rebase_Operation_T_mod, mrb_intern_lit(mrb, "REBASE_OPERATION_EXEC"), mrb_fixnum_value(GIT_REBASE_OPERATION_EXEC));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REBASE_OPERATION_EXEC"), mrb_fixnum_value(GIT_REBASE_OPERATION_EXEC));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Ref_T_enum */
/* sha: 115c6206dc7fd7a04dd9d41869cc440b5aef6e7ff329bcf1420e5ba8aca6876b */
  struct RClass * Git_Ref_T_module = mrb_define_module_under(mrb, Git_module, "Git_Ref_T");
  mrb_value Git_Ref_T_mod = mrb_obj_value(Git_Ref_T_module);
  mrb_const_set(mrb, Git_Ref_T_mod, mrb_intern_lit(mrb, "REF_INVALID"), mrb_fixnum_value(GIT_REF_INVALID));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REF_INVALID"), mrb_fixnum_value(GIT_REF_INVALID));
  mrb_const_set(mrb, Git_Ref_T_mod, mrb_intern_lit(mrb, "REF_OID"), mrb_fixnum_value(GIT_REF_OID));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REF_OID"), mrb_fixnum_value(GIT_REF_OID));
  mrb_const_set(mrb, Git_Ref_T_mod, mrb_intern_lit(mrb, "REF_SYMBOLIC"), mrb_fixnum_value(GIT_REF_SYMBOLIC));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REF_SYMBOLIC"), mrb_fixnum_value(GIT_REF_SYMBOLIC));
  mrb_const_set(mrb, Git_Ref_T_mod, mrb_intern_lit(mrb, "REF_LISTALL"), mrb_fixnum_value(GIT_REF_LISTALL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REF_LISTALL"), mrb_fixnum_value(GIT_REF_LISTALL));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Reference_Normalize_T_enum */
/* sha: 4894d598343435564e94801634c12aab1f41824b272fdb5455703815d1051db0 */
  struct RClass * Git_Reference_Normalize_T_module = mrb_define_module_under(mrb, Git_module, "Git_Reference_Normalize_T");
  mrb_value Git_Reference_Normalize_T_mod = mrb_obj_value(Git_Reference_Normalize_T_module);
  mrb_const_set(mrb, Git_Reference_Normalize_T_mod, mrb_intern_lit(mrb, "REF_FORMAT_NORMAL"), mrb_fixnum_value(GIT_REF_FORMAT_NORMAL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REF_FORMAT_NORMAL"), mrb_fixnum_value(GIT_REF_FORMAT_NORMAL));
  mrb_const_set(mrb, Git_Reference_Normalize_T_mod, mrb_intern_lit(mrb, "REF_FORMAT_ALLOW_ONELEVEL"), mrb_fixnum_value(GIT_REF_FORMAT_ALLOW_ONELEVEL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REF_FORMAT_ALLOW_ONELEVEL"), mrb_fixnum_value(GIT_REF_FORMAT_ALLOW_ONELEVEL));
  mrb_const_set(mrb, Git_Reference_Normalize_T_mod, mrb_intern_lit(mrb, "REF_FORMAT_REFSPEC_PATTERN"), mrb_fixnum_value(GIT_REF_FORMAT_REFSPEC_PATTERN));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REF_FORMAT_REFSPEC_PATTERN"), mrb_fixnum_value(GIT_REF_FORMAT_REFSPEC_PATTERN));
  mrb_const_set(mrb, Git_Reference_Normalize_T_mod, mrb_intern_lit(mrb, "REF_FORMAT_REFSPEC_SHORTHAND"), mrb_fixnum_value(GIT_REF_FORMAT_REFSPEC_SHORTHAND));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REF_FORMAT_REFSPEC_SHORTHAND"), mrb_fixnum_value(GIT_REF_FORMAT_REFSPEC_SHORTHAND));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Remote_Autotag_Option_T_enum */
/* sha: c9548edee3c179dae135a2277e0b79a9080431f0a9a652450c6a4e647e0766a0 */
  struct RClass * Git_Remote_Autotag_Option_T_module = mrb_define_module_under(mrb, Git_module, "Git_Remote_Autotag_Option_T");
  mrb_value Git_Remote_Autotag_Option_T_mod = mrb_obj_value(Git_Remote_Autotag_Option_T_module);
  mrb_const_set(mrb, Git_Remote_Autotag_Option_T_mod, mrb_intern_lit(mrb, "REMOTE_DOWNLOAD_TAGS_UNSPECIFIED"), mrb_fixnum_value(GIT_REMOTE_DOWNLOAD_TAGS_UNSPECIFIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REMOTE_DOWNLOAD_TAGS_UNSPECIFIED"), mrb_fixnum_value(GIT_REMOTE_DOWNLOAD_TAGS_UNSPECIFIED));
  mrb_const_set(mrb, Git_Remote_Autotag_Option_T_mod, mrb_intern_lit(mrb, "REMOTE_DOWNLOAD_TAGS_AUTO"), mrb_fixnum_value(GIT_REMOTE_DOWNLOAD_TAGS_AUTO));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REMOTE_DOWNLOAD_TAGS_AUTO"), mrb_fixnum_value(GIT_REMOTE_DOWNLOAD_TAGS_AUTO));
  mrb_const_set(mrb, Git_Remote_Autotag_Option_T_mod, mrb_intern_lit(mrb, "REMOTE_DOWNLOAD_TAGS_NONE"), mrb_fixnum_value(GIT_REMOTE_DOWNLOAD_TAGS_NONE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REMOTE_DOWNLOAD_TAGS_NONE"), mrb_fixnum_value(GIT_REMOTE_DOWNLOAD_TAGS_NONE));
  mrb_const_set(mrb, Git_Remote_Autotag_Option_T_mod, mrb_intern_lit(mrb, "REMOTE_DOWNLOAD_TAGS_ALL"), mrb_fixnum_value(GIT_REMOTE_DOWNLOAD_TAGS_ALL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REMOTE_DOWNLOAD_TAGS_ALL"), mrb_fixnum_value(GIT_REMOTE_DOWNLOAD_TAGS_ALL));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Repository_Init_Flag_T_enum */
/* sha: fbfd535e184e053ff5a555117601b580a96c4f59728a7e7b3c160cf632094054 */
  struct RClass * Git_Repository_Init_Flag_T_module = mrb_define_module_under(mrb, Git_module, "Git_Repository_Init_Flag_T");
  mrb_value Git_Repository_Init_Flag_T_mod = mrb_obj_value(Git_Repository_Init_Flag_T_module);
  mrb_const_set(mrb, Git_Repository_Init_Flag_T_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_BARE"), mrb_fixnum_value(GIT_REPOSITORY_INIT_BARE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_BARE"), mrb_fixnum_value(GIT_REPOSITORY_INIT_BARE));
  mrb_const_set(mrb, Git_Repository_Init_Flag_T_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_NO_REINIT"), mrb_fixnum_value(GIT_REPOSITORY_INIT_NO_REINIT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_NO_REINIT"), mrb_fixnum_value(GIT_REPOSITORY_INIT_NO_REINIT));
  mrb_const_set(mrb, Git_Repository_Init_Flag_T_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_NO_DOTGIT_DIR"), mrb_fixnum_value(GIT_REPOSITORY_INIT_NO_DOTGIT_DIR));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_NO_DOTGIT_DIR"), mrb_fixnum_value(GIT_REPOSITORY_INIT_NO_DOTGIT_DIR));
  mrb_const_set(mrb, Git_Repository_Init_Flag_T_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_MKDIR"), mrb_fixnum_value(GIT_REPOSITORY_INIT_MKDIR));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_MKDIR"), mrb_fixnum_value(GIT_REPOSITORY_INIT_MKDIR));
  mrb_const_set(mrb, Git_Repository_Init_Flag_T_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_MKPATH"), mrb_fixnum_value(GIT_REPOSITORY_INIT_MKPATH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_MKPATH"), mrb_fixnum_value(GIT_REPOSITORY_INIT_MKPATH));
  mrb_const_set(mrb, Git_Repository_Init_Flag_T_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_EXTERNAL_TEMPLATE"), mrb_fixnum_value(GIT_REPOSITORY_INIT_EXTERNAL_TEMPLATE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_EXTERNAL_TEMPLATE"), mrb_fixnum_value(GIT_REPOSITORY_INIT_EXTERNAL_TEMPLATE));
  mrb_const_set(mrb, Git_Repository_Init_Flag_T_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_RELATIVE_GITLINK"), mrb_fixnum_value(GIT_REPOSITORY_INIT_RELATIVE_GITLINK));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_RELATIVE_GITLINK"), mrb_fixnum_value(GIT_REPOSITORY_INIT_RELATIVE_GITLINK));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Repository_Init_Mode_T_enum */
/* sha: 4680da3963fc165b4bcbdf44f688a45df25faea55bbf245678918ad966dd476c */
  struct RClass * Git_Repository_Init_Mode_T_module = mrb_define_module_under(mrb, Git_module, "Git_Repository_Init_Mode_T");
  mrb_value Git_Repository_Init_Mode_T_mod = mrb_obj_value(Git_Repository_Init_Mode_T_module);
  mrb_const_set(mrb, Git_Repository_Init_Mode_T_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_SHARED_UMASK"), mrb_fixnum_value(GIT_REPOSITORY_INIT_SHARED_UMASK));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_SHARED_UMASK"), mrb_fixnum_value(GIT_REPOSITORY_INIT_SHARED_UMASK));
  mrb_const_set(mrb, Git_Repository_Init_Mode_T_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_SHARED_GROUP"), mrb_fixnum_value(GIT_REPOSITORY_INIT_SHARED_GROUP));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_SHARED_GROUP"), mrb_fixnum_value(GIT_REPOSITORY_INIT_SHARED_GROUP));
  mrb_const_set(mrb, Git_Repository_Init_Mode_T_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_SHARED_ALL"), mrb_fixnum_value(GIT_REPOSITORY_INIT_SHARED_ALL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_INIT_SHARED_ALL"), mrb_fixnum_value(GIT_REPOSITORY_INIT_SHARED_ALL));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Repository_Open_Flag_T_enum */
/* sha: d70de30e6b73364a157069a99f266abb26a63547bcfff6126704e196df7b871f */
  struct RClass * Git_Repository_Open_Flag_T_module = mrb_define_module_under(mrb, Git_module, "Git_Repository_Open_Flag_T");
  mrb_value Git_Repository_Open_Flag_T_mod = mrb_obj_value(Git_Repository_Open_Flag_T_module);
  mrb_const_set(mrb, Git_Repository_Open_Flag_T_mod, mrb_intern_lit(mrb, "REPOSITORY_OPEN_NO_SEARCH"), mrb_fixnum_value(GIT_REPOSITORY_OPEN_NO_SEARCH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_OPEN_NO_SEARCH"), mrb_fixnum_value(GIT_REPOSITORY_OPEN_NO_SEARCH));
  mrb_const_set(mrb, Git_Repository_Open_Flag_T_mod, mrb_intern_lit(mrb, "REPOSITORY_OPEN_CROSS_FS"), mrb_fixnum_value(GIT_REPOSITORY_OPEN_CROSS_FS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_OPEN_CROSS_FS"), mrb_fixnum_value(GIT_REPOSITORY_OPEN_CROSS_FS));
  mrb_const_set(mrb, Git_Repository_Open_Flag_T_mod, mrb_intern_lit(mrb, "REPOSITORY_OPEN_BARE"), mrb_fixnum_value(GIT_REPOSITORY_OPEN_BARE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_OPEN_BARE"), mrb_fixnum_value(GIT_REPOSITORY_OPEN_BARE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Repository_State_T_enum */
/* sha: 346b46e6b8fe390550ccd77b8b330e68e76a02a1f4837350a6d9ae62d120dc21 */
  struct RClass * Git_Repository_State_T_module = mrb_define_module_under(mrb, Git_module, "Git_Repository_State_T");
  mrb_value Git_Repository_State_T_mod = mrb_obj_value(Git_Repository_State_T_module);
  mrb_const_set(mrb, Git_Repository_State_T_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_NONE"), mrb_fixnum_value(GIT_REPOSITORY_STATE_NONE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_NONE"), mrb_fixnum_value(GIT_REPOSITORY_STATE_NONE));
  mrb_const_set(mrb, Git_Repository_State_T_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_MERGE"), mrb_fixnum_value(GIT_REPOSITORY_STATE_MERGE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_MERGE"), mrb_fixnum_value(GIT_REPOSITORY_STATE_MERGE));
  mrb_const_set(mrb, Git_Repository_State_T_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_REVERT"), mrb_fixnum_value(GIT_REPOSITORY_STATE_REVERT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_REVERT"), mrb_fixnum_value(GIT_REPOSITORY_STATE_REVERT));
  mrb_const_set(mrb, Git_Repository_State_T_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_REVERT_SEQUENCE"), mrb_fixnum_value(GIT_REPOSITORY_STATE_REVERT_SEQUENCE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_REVERT_SEQUENCE"), mrb_fixnum_value(GIT_REPOSITORY_STATE_REVERT_SEQUENCE));
  mrb_const_set(mrb, Git_Repository_State_T_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_CHERRYPICK"), mrb_fixnum_value(GIT_REPOSITORY_STATE_CHERRYPICK));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_CHERRYPICK"), mrb_fixnum_value(GIT_REPOSITORY_STATE_CHERRYPICK));
  mrb_const_set(mrb, Git_Repository_State_T_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_CHERRYPICK_SEQUENCE"), mrb_fixnum_value(GIT_REPOSITORY_STATE_CHERRYPICK_SEQUENCE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_CHERRYPICK_SEQUENCE"), mrb_fixnum_value(GIT_REPOSITORY_STATE_CHERRYPICK_SEQUENCE));
  mrb_const_set(mrb, Git_Repository_State_T_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_BISECT"), mrb_fixnum_value(GIT_REPOSITORY_STATE_BISECT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_BISECT"), mrb_fixnum_value(GIT_REPOSITORY_STATE_BISECT));
  mrb_const_set(mrb, Git_Repository_State_T_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_REBASE"), mrb_fixnum_value(GIT_REPOSITORY_STATE_REBASE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_REBASE"), mrb_fixnum_value(GIT_REPOSITORY_STATE_REBASE));
  mrb_const_set(mrb, Git_Repository_State_T_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_REBASE_INTERACTIVE"), mrb_fixnum_value(GIT_REPOSITORY_STATE_REBASE_INTERACTIVE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_REBASE_INTERACTIVE"), mrb_fixnum_value(GIT_REPOSITORY_STATE_REBASE_INTERACTIVE));
  mrb_const_set(mrb, Git_Repository_State_T_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_REBASE_MERGE"), mrb_fixnum_value(GIT_REPOSITORY_STATE_REBASE_MERGE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_REBASE_MERGE"), mrb_fixnum_value(GIT_REPOSITORY_STATE_REBASE_MERGE));
  mrb_const_set(mrb, Git_Repository_State_T_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_APPLY_MAILBOX"), mrb_fixnum_value(GIT_REPOSITORY_STATE_APPLY_MAILBOX));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_APPLY_MAILBOX"), mrb_fixnum_value(GIT_REPOSITORY_STATE_APPLY_MAILBOX));
  mrb_const_set(mrb, Git_Repository_State_T_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_APPLY_MAILBOX_OR_REBASE"), mrb_fixnum_value(GIT_REPOSITORY_STATE_APPLY_MAILBOX_OR_REBASE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REPOSITORY_STATE_APPLY_MAILBOX_OR_REBASE"), mrb_fixnum_value(GIT_REPOSITORY_STATE_APPLY_MAILBOX_OR_REBASE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Reset_T_enum */
/* sha: 0c3e022f811c96bade9651a2a65e895c1fe96084dab1ecb3b662ba2f4b09c4ab */
  struct RClass * Git_Reset_T_module = mrb_define_module_under(mrb, Git_module, "Git_Reset_T");
  mrb_value Git_Reset_T_mod = mrb_obj_value(Git_Reset_T_module);
  mrb_const_set(mrb, Git_Reset_T_mod, mrb_intern_lit(mrb, "RESET_SOFT"), mrb_fixnum_value(GIT_RESET_SOFT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "RESET_SOFT"), mrb_fixnum_value(GIT_RESET_SOFT));
  mrb_const_set(mrb, Git_Reset_T_mod, mrb_intern_lit(mrb, "RESET_MIXED"), mrb_fixnum_value(GIT_RESET_MIXED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "RESET_MIXED"), mrb_fixnum_value(GIT_RESET_MIXED));
  mrb_const_set(mrb, Git_Reset_T_mod, mrb_intern_lit(mrb, "RESET_HARD"), mrb_fixnum_value(GIT_RESET_HARD));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "RESET_HARD"), mrb_fixnum_value(GIT_RESET_HARD));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Revparse_Mode_T_enum */
/* sha: 95d97b7883a8b973e23f7391f8469fa8a1cfefbf8bbf57b88419a6719d0d87c6 */
  struct RClass * Git_Revparse_Mode_T_module = mrb_define_module_under(mrb, Git_module, "Git_Revparse_Mode_T");
  mrb_value Git_Revparse_Mode_T_mod = mrb_obj_value(Git_Revparse_Mode_T_module);
  mrb_const_set(mrb, Git_Revparse_Mode_T_mod, mrb_intern_lit(mrb, "REVPARSE_SINGLE"), mrb_fixnum_value(GIT_REVPARSE_SINGLE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REVPARSE_SINGLE"), mrb_fixnum_value(GIT_REVPARSE_SINGLE));
  mrb_const_set(mrb, Git_Revparse_Mode_T_mod, mrb_intern_lit(mrb, "REVPARSE_RANGE"), mrb_fixnum_value(GIT_REVPARSE_RANGE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REVPARSE_RANGE"), mrb_fixnum_value(GIT_REVPARSE_RANGE));
  mrb_const_set(mrb, Git_Revparse_Mode_T_mod, mrb_intern_lit(mrb, "REVPARSE_MERGE_BASE"), mrb_fixnum_value(GIT_REVPARSE_MERGE_BASE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "REVPARSE_MERGE_BASE"), mrb_fixnum_value(GIT_REVPARSE_MERGE_BASE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Sort_T_enum */
/* sha: 62f94998a334ef4b3aa0d9d37bddc3c2a25613cb4e49bb4ecb988b2076c3dbaf */
  struct RClass * Git_Sort_T_module = mrb_define_module_under(mrb, Git_module, "Git_Sort_T");
  mrb_value Git_Sort_T_mod = mrb_obj_value(Git_Sort_T_module);
  mrb_const_set(mrb, Git_Sort_T_mod, mrb_intern_lit(mrb, "SORT_NONE"), mrb_fixnum_value(GIT_SORT_NONE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SORT_NONE"), mrb_fixnum_value(GIT_SORT_NONE));
  mrb_const_set(mrb, Git_Sort_T_mod, mrb_intern_lit(mrb, "SORT_TOPOLOGICAL"), mrb_fixnum_value(GIT_SORT_TOPOLOGICAL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SORT_TOPOLOGICAL"), mrb_fixnum_value(GIT_SORT_TOPOLOGICAL));
  mrb_const_set(mrb, Git_Sort_T_mod, mrb_intern_lit(mrb, "SORT_TIME"), mrb_fixnum_value(GIT_SORT_TIME));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SORT_TIME"), mrb_fixnum_value(GIT_SORT_TIME));
  mrb_const_set(mrb, Git_Sort_T_mod, mrb_intern_lit(mrb, "SORT_REVERSE"), mrb_fixnum_value(GIT_SORT_REVERSE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SORT_REVERSE"), mrb_fixnum_value(GIT_SORT_REVERSE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Stash_Apply_Flags_enum */
/* sha: a133314aa5ab8fb0526bbb34f3dcbe9469a0ea3afe025bd0828c33be8a57bf9b */
  struct RClass * Git_Stash_Apply_Flags_module = mrb_define_module_under(mrb, Git_module, "Git_Stash_Apply_Flags");
  mrb_value Git_Stash_Apply_Flags_mod = mrb_obj_value(Git_Stash_Apply_Flags_module);
  mrb_const_set(mrb, Git_Stash_Apply_Flags_mod, mrb_intern_lit(mrb, "STASH_APPLY_DEFAULT"), mrb_fixnum_value(GIT_STASH_APPLY_DEFAULT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STASH_APPLY_DEFAULT"), mrb_fixnum_value(GIT_STASH_APPLY_DEFAULT));
  mrb_const_set(mrb, Git_Stash_Apply_Flags_mod, mrb_intern_lit(mrb, "STASH_APPLY_REINSTATE_INDEX"), mrb_fixnum_value(GIT_STASH_APPLY_REINSTATE_INDEX));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STASH_APPLY_REINSTATE_INDEX"), mrb_fixnum_value(GIT_STASH_APPLY_REINSTATE_INDEX));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Stash_Apply_Progress_T_enum */
/* sha: db1122ff44be35389aa53d417f8beb88b83f6b2d48f1356cffcb42309d5059cc */
  struct RClass * Git_Stash_Apply_Progress_T_module = mrb_define_module_under(mrb, Git_module, "Git_Stash_Apply_Progress_T");
  mrb_value Git_Stash_Apply_Progress_T_mod = mrb_obj_value(Git_Stash_Apply_Progress_T_module);
  mrb_const_set(mrb, Git_Stash_Apply_Progress_T_mod, mrb_intern_lit(mrb, "STASH_APPLY_PROGRESS_NONE"), mrb_fixnum_value(GIT_STASH_APPLY_PROGRESS_NONE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STASH_APPLY_PROGRESS_NONE"), mrb_fixnum_value(GIT_STASH_APPLY_PROGRESS_NONE));
  mrb_const_set(mrb, Git_Stash_Apply_Progress_T_mod, mrb_intern_lit(mrb, "STASH_APPLY_PROGRESS_LOADING_STASH"), mrb_fixnum_value(GIT_STASH_APPLY_PROGRESS_LOADING_STASH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STASH_APPLY_PROGRESS_LOADING_STASH"), mrb_fixnum_value(GIT_STASH_APPLY_PROGRESS_LOADING_STASH));
  mrb_const_set(mrb, Git_Stash_Apply_Progress_T_mod, mrb_intern_lit(mrb, "STASH_APPLY_PROGRESS_ANALYZE_INDEX"), mrb_fixnum_value(GIT_STASH_APPLY_PROGRESS_ANALYZE_INDEX));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STASH_APPLY_PROGRESS_ANALYZE_INDEX"), mrb_fixnum_value(GIT_STASH_APPLY_PROGRESS_ANALYZE_INDEX));
  mrb_const_set(mrb, Git_Stash_Apply_Progress_T_mod, mrb_intern_lit(mrb, "STASH_APPLY_PROGRESS_ANALYZE_MODIFIED"), mrb_fixnum_value(GIT_STASH_APPLY_PROGRESS_ANALYZE_MODIFIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STASH_APPLY_PROGRESS_ANALYZE_MODIFIED"), mrb_fixnum_value(GIT_STASH_APPLY_PROGRESS_ANALYZE_MODIFIED));
  mrb_const_set(mrb, Git_Stash_Apply_Progress_T_mod, mrb_intern_lit(mrb, "STASH_APPLY_PROGRESS_ANALYZE_UNTRACKED"), mrb_fixnum_value(GIT_STASH_APPLY_PROGRESS_ANALYZE_UNTRACKED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STASH_APPLY_PROGRESS_ANALYZE_UNTRACKED"), mrb_fixnum_value(GIT_STASH_APPLY_PROGRESS_ANALYZE_UNTRACKED));
  mrb_const_set(mrb, Git_Stash_Apply_Progress_T_mod, mrb_intern_lit(mrb, "STASH_APPLY_PROGRESS_CHECKOUT_UNTRACKED"), mrb_fixnum_value(GIT_STASH_APPLY_PROGRESS_CHECKOUT_UNTRACKED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STASH_APPLY_PROGRESS_CHECKOUT_UNTRACKED"), mrb_fixnum_value(GIT_STASH_APPLY_PROGRESS_CHECKOUT_UNTRACKED));
  mrb_const_set(mrb, Git_Stash_Apply_Progress_T_mod, mrb_intern_lit(mrb, "STASH_APPLY_PROGRESS_CHECKOUT_MODIFIED"), mrb_fixnum_value(GIT_STASH_APPLY_PROGRESS_CHECKOUT_MODIFIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STASH_APPLY_PROGRESS_CHECKOUT_MODIFIED"), mrb_fixnum_value(GIT_STASH_APPLY_PROGRESS_CHECKOUT_MODIFIED));
  mrb_const_set(mrb, Git_Stash_Apply_Progress_T_mod, mrb_intern_lit(mrb, "STASH_APPLY_PROGRESS_DONE"), mrb_fixnum_value(GIT_STASH_APPLY_PROGRESS_DONE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STASH_APPLY_PROGRESS_DONE"), mrb_fixnum_value(GIT_STASH_APPLY_PROGRESS_DONE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Stash_Flags_enum */
/* sha: 44cd6a557f3530619527e64b5afd3b003a8acd79293824655165c27ee4585dbf */
  struct RClass * Git_Stash_Flags_module = mrb_define_module_under(mrb, Git_module, "Git_Stash_Flags");
  mrb_value Git_Stash_Flags_mod = mrb_obj_value(Git_Stash_Flags_module);
  mrb_const_set(mrb, Git_Stash_Flags_mod, mrb_intern_lit(mrb, "STASH_DEFAULT"), mrb_fixnum_value(GIT_STASH_DEFAULT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STASH_DEFAULT"), mrb_fixnum_value(GIT_STASH_DEFAULT));
  mrb_const_set(mrb, Git_Stash_Flags_mod, mrb_intern_lit(mrb, "STASH_KEEP_INDEX"), mrb_fixnum_value(GIT_STASH_KEEP_INDEX));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STASH_KEEP_INDEX"), mrb_fixnum_value(GIT_STASH_KEEP_INDEX));
  mrb_const_set(mrb, Git_Stash_Flags_mod, mrb_intern_lit(mrb, "STASH_INCLUDE_UNTRACKED"), mrb_fixnum_value(GIT_STASH_INCLUDE_UNTRACKED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STASH_INCLUDE_UNTRACKED"), mrb_fixnum_value(GIT_STASH_INCLUDE_UNTRACKED));
  mrb_const_set(mrb, Git_Stash_Flags_mod, mrb_intern_lit(mrb, "STASH_INCLUDE_IGNORED"), mrb_fixnum_value(GIT_STASH_INCLUDE_IGNORED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STASH_INCLUDE_IGNORED"), mrb_fixnum_value(GIT_STASH_INCLUDE_IGNORED));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Status_Opt_T_enum */
/* sha: 7c2384a55f59b6f04344bad5c084f4998af3016d31e68836d1d74c0dfe5b6ebc */
  struct RClass * Git_Status_Opt_T_module = mrb_define_module_under(mrb, Git_module, "Git_Status_Opt_T");
  mrb_value Git_Status_Opt_T_mod = mrb_obj_value(Git_Status_Opt_T_module);
  mrb_const_set(mrb, Git_Status_Opt_T_mod, mrb_intern_lit(mrb, "STATUS_OPT_INCLUDE_UNTRACKED"), mrb_fixnum_value(GIT_STATUS_OPT_INCLUDE_UNTRACKED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_OPT_INCLUDE_UNTRACKED"), mrb_fixnum_value(GIT_STATUS_OPT_INCLUDE_UNTRACKED));
  mrb_const_set(mrb, Git_Status_Opt_T_mod, mrb_intern_lit(mrb, "STATUS_OPT_INCLUDE_IGNORED"), mrb_fixnum_value(GIT_STATUS_OPT_INCLUDE_IGNORED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_OPT_INCLUDE_IGNORED"), mrb_fixnum_value(GIT_STATUS_OPT_INCLUDE_IGNORED));
  mrb_const_set(mrb, Git_Status_Opt_T_mod, mrb_intern_lit(mrb, "STATUS_OPT_INCLUDE_UNMODIFIED"), mrb_fixnum_value(GIT_STATUS_OPT_INCLUDE_UNMODIFIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_OPT_INCLUDE_UNMODIFIED"), mrb_fixnum_value(GIT_STATUS_OPT_INCLUDE_UNMODIFIED));
  mrb_const_set(mrb, Git_Status_Opt_T_mod, mrb_intern_lit(mrb, "STATUS_OPT_EXCLUDE_SUBMODULES"), mrb_fixnum_value(GIT_STATUS_OPT_EXCLUDE_SUBMODULES));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_OPT_EXCLUDE_SUBMODULES"), mrb_fixnum_value(GIT_STATUS_OPT_EXCLUDE_SUBMODULES));
  mrb_const_set(mrb, Git_Status_Opt_T_mod, mrb_intern_lit(mrb, "STATUS_OPT_RECURSE_UNTRACKED_DIRS"), mrb_fixnum_value(GIT_STATUS_OPT_RECURSE_UNTRACKED_DIRS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_OPT_RECURSE_UNTRACKED_DIRS"), mrb_fixnum_value(GIT_STATUS_OPT_RECURSE_UNTRACKED_DIRS));
  mrb_const_set(mrb, Git_Status_Opt_T_mod, mrb_intern_lit(mrb, "STATUS_OPT_DISABLE_PATHSPEC_MATCH"), mrb_fixnum_value(GIT_STATUS_OPT_DISABLE_PATHSPEC_MATCH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_OPT_DISABLE_PATHSPEC_MATCH"), mrb_fixnum_value(GIT_STATUS_OPT_DISABLE_PATHSPEC_MATCH));
  mrb_const_set(mrb, Git_Status_Opt_T_mod, mrb_intern_lit(mrb, "STATUS_OPT_RECURSE_IGNORED_DIRS"), mrb_fixnum_value(GIT_STATUS_OPT_RECURSE_IGNORED_DIRS));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_OPT_RECURSE_IGNORED_DIRS"), mrb_fixnum_value(GIT_STATUS_OPT_RECURSE_IGNORED_DIRS));
  mrb_const_set(mrb, Git_Status_Opt_T_mod, mrb_intern_lit(mrb, "STATUS_OPT_RENAMES_HEAD_TO_INDEX"), mrb_fixnum_value(GIT_STATUS_OPT_RENAMES_HEAD_TO_INDEX));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_OPT_RENAMES_HEAD_TO_INDEX"), mrb_fixnum_value(GIT_STATUS_OPT_RENAMES_HEAD_TO_INDEX));
  mrb_const_set(mrb, Git_Status_Opt_T_mod, mrb_intern_lit(mrb, "STATUS_OPT_RENAMES_INDEX_TO_WORKDIR"), mrb_fixnum_value(GIT_STATUS_OPT_RENAMES_INDEX_TO_WORKDIR));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_OPT_RENAMES_INDEX_TO_WORKDIR"), mrb_fixnum_value(GIT_STATUS_OPT_RENAMES_INDEX_TO_WORKDIR));
  mrb_const_set(mrb, Git_Status_Opt_T_mod, mrb_intern_lit(mrb, "STATUS_OPT_SORT_CASE_SENSITIVELY"), mrb_fixnum_value(GIT_STATUS_OPT_SORT_CASE_SENSITIVELY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_OPT_SORT_CASE_SENSITIVELY"), mrb_fixnum_value(GIT_STATUS_OPT_SORT_CASE_SENSITIVELY));
  mrb_const_set(mrb, Git_Status_Opt_T_mod, mrb_intern_lit(mrb, "STATUS_OPT_SORT_CASE_INSENSITIVELY"), mrb_fixnum_value(GIT_STATUS_OPT_SORT_CASE_INSENSITIVELY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_OPT_SORT_CASE_INSENSITIVELY"), mrb_fixnum_value(GIT_STATUS_OPT_SORT_CASE_INSENSITIVELY));
  mrb_const_set(mrb, Git_Status_Opt_T_mod, mrb_intern_lit(mrb, "STATUS_OPT_RENAMES_FROM_REWRITES"), mrb_fixnum_value(GIT_STATUS_OPT_RENAMES_FROM_REWRITES));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_OPT_RENAMES_FROM_REWRITES"), mrb_fixnum_value(GIT_STATUS_OPT_RENAMES_FROM_REWRITES));
  mrb_const_set(mrb, Git_Status_Opt_T_mod, mrb_intern_lit(mrb, "STATUS_OPT_NO_REFRESH"), mrb_fixnum_value(GIT_STATUS_OPT_NO_REFRESH));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_OPT_NO_REFRESH"), mrb_fixnum_value(GIT_STATUS_OPT_NO_REFRESH));
  mrb_const_set(mrb, Git_Status_Opt_T_mod, mrb_intern_lit(mrb, "STATUS_OPT_UPDATE_INDEX"), mrb_fixnum_value(GIT_STATUS_OPT_UPDATE_INDEX));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_OPT_UPDATE_INDEX"), mrb_fixnum_value(GIT_STATUS_OPT_UPDATE_INDEX));
  mrb_const_set(mrb, Git_Status_Opt_T_mod, mrb_intern_lit(mrb, "STATUS_OPT_INCLUDE_UNREADABLE"), mrb_fixnum_value(GIT_STATUS_OPT_INCLUDE_UNREADABLE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_OPT_INCLUDE_UNREADABLE"), mrb_fixnum_value(GIT_STATUS_OPT_INCLUDE_UNREADABLE));
  mrb_const_set(mrb, Git_Status_Opt_T_mod, mrb_intern_lit(mrb, "STATUS_OPT_INCLUDE_UNREADABLE_AS_UNTRACKED"), mrb_fixnum_value(GIT_STATUS_OPT_INCLUDE_UNREADABLE_AS_UNTRACKED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_OPT_INCLUDE_UNREADABLE_AS_UNTRACKED"), mrb_fixnum_value(GIT_STATUS_OPT_INCLUDE_UNREADABLE_AS_UNTRACKED));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Status_Show_T_enum */
/* sha: 76c620cbe7809e920715e5df4f4f9049382542c5f447d87ceda02a9bba815ed2 */
  struct RClass * Git_Status_Show_T_module = mrb_define_module_under(mrb, Git_module, "Git_Status_Show_T");
  mrb_value Git_Status_Show_T_mod = mrb_obj_value(Git_Status_Show_T_module);
  mrb_const_set(mrb, Git_Status_Show_T_mod, mrb_intern_lit(mrb, "STATUS_SHOW_INDEX_AND_WORKDIR"), mrb_fixnum_value(GIT_STATUS_SHOW_INDEX_AND_WORKDIR));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_SHOW_INDEX_AND_WORKDIR"), mrb_fixnum_value(GIT_STATUS_SHOW_INDEX_AND_WORKDIR));
  mrb_const_set(mrb, Git_Status_Show_T_mod, mrb_intern_lit(mrb, "STATUS_SHOW_INDEX_ONLY"), mrb_fixnum_value(GIT_STATUS_SHOW_INDEX_ONLY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_SHOW_INDEX_ONLY"), mrb_fixnum_value(GIT_STATUS_SHOW_INDEX_ONLY));
  mrb_const_set(mrb, Git_Status_Show_T_mod, mrb_intern_lit(mrb, "STATUS_SHOW_WORKDIR_ONLY"), mrb_fixnum_value(GIT_STATUS_SHOW_WORKDIR_ONLY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_SHOW_WORKDIR_ONLY"), mrb_fixnum_value(GIT_STATUS_SHOW_WORKDIR_ONLY));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Status_T_enum */
/* sha: 8c612e5a76e288dc24ba4faf1f75b1f60c43ad4fec1083f46a4cf76a7d383d6b */
  struct RClass * Git_Status_T_module = mrb_define_module_under(mrb, Git_module, "Git_Status_T");
  mrb_value Git_Status_T_mod = mrb_obj_value(Git_Status_T_module);
  mrb_const_set(mrb, Git_Status_T_mod, mrb_intern_lit(mrb, "STATUS_CURRENT"), mrb_fixnum_value(GIT_STATUS_CURRENT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_CURRENT"), mrb_fixnum_value(GIT_STATUS_CURRENT));
  mrb_const_set(mrb, Git_Status_T_mod, mrb_intern_lit(mrb, "STATUS_INDEX_NEW"), mrb_fixnum_value(GIT_STATUS_INDEX_NEW));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_INDEX_NEW"), mrb_fixnum_value(GIT_STATUS_INDEX_NEW));
  mrb_const_set(mrb, Git_Status_T_mod, mrb_intern_lit(mrb, "STATUS_INDEX_MODIFIED"), mrb_fixnum_value(GIT_STATUS_INDEX_MODIFIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_INDEX_MODIFIED"), mrb_fixnum_value(GIT_STATUS_INDEX_MODIFIED));
  mrb_const_set(mrb, Git_Status_T_mod, mrb_intern_lit(mrb, "STATUS_INDEX_DELETED"), mrb_fixnum_value(GIT_STATUS_INDEX_DELETED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_INDEX_DELETED"), mrb_fixnum_value(GIT_STATUS_INDEX_DELETED));
  mrb_const_set(mrb, Git_Status_T_mod, mrb_intern_lit(mrb, "STATUS_INDEX_RENAMED"), mrb_fixnum_value(GIT_STATUS_INDEX_RENAMED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_INDEX_RENAMED"), mrb_fixnum_value(GIT_STATUS_INDEX_RENAMED));
  mrb_const_set(mrb, Git_Status_T_mod, mrb_intern_lit(mrb, "STATUS_INDEX_TYPECHANGE"), mrb_fixnum_value(GIT_STATUS_INDEX_TYPECHANGE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_INDEX_TYPECHANGE"), mrb_fixnum_value(GIT_STATUS_INDEX_TYPECHANGE));
  mrb_const_set(mrb, Git_Status_T_mod, mrb_intern_lit(mrb, "STATUS_WT_NEW"), mrb_fixnum_value(GIT_STATUS_WT_NEW));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_WT_NEW"), mrb_fixnum_value(GIT_STATUS_WT_NEW));
  mrb_const_set(mrb, Git_Status_T_mod, mrb_intern_lit(mrb, "STATUS_WT_MODIFIED"), mrb_fixnum_value(GIT_STATUS_WT_MODIFIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_WT_MODIFIED"), mrb_fixnum_value(GIT_STATUS_WT_MODIFIED));
  mrb_const_set(mrb, Git_Status_T_mod, mrb_intern_lit(mrb, "STATUS_WT_DELETED"), mrb_fixnum_value(GIT_STATUS_WT_DELETED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_WT_DELETED"), mrb_fixnum_value(GIT_STATUS_WT_DELETED));
  mrb_const_set(mrb, Git_Status_T_mod, mrb_intern_lit(mrb, "STATUS_WT_TYPECHANGE"), mrb_fixnum_value(GIT_STATUS_WT_TYPECHANGE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_WT_TYPECHANGE"), mrb_fixnum_value(GIT_STATUS_WT_TYPECHANGE));
  mrb_const_set(mrb, Git_Status_T_mod, mrb_intern_lit(mrb, "STATUS_WT_RENAMED"), mrb_fixnum_value(GIT_STATUS_WT_RENAMED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_WT_RENAMED"), mrb_fixnum_value(GIT_STATUS_WT_RENAMED));
  mrb_const_set(mrb, Git_Status_T_mod, mrb_intern_lit(mrb, "STATUS_WT_UNREADABLE"), mrb_fixnum_value(GIT_STATUS_WT_UNREADABLE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_WT_UNREADABLE"), mrb_fixnum_value(GIT_STATUS_WT_UNREADABLE));
  mrb_const_set(mrb, Git_Status_T_mod, mrb_intern_lit(mrb, "STATUS_IGNORED"), mrb_fixnum_value(GIT_STATUS_IGNORED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_IGNORED"), mrb_fixnum_value(GIT_STATUS_IGNORED));
  mrb_const_set(mrb, Git_Status_T_mod, mrb_intern_lit(mrb, "STATUS_CONFLICTED"), mrb_fixnum_value(GIT_STATUS_CONFLICTED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "STATUS_CONFLICTED"), mrb_fixnum_value(GIT_STATUS_CONFLICTED));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Submodule_Ignore_T_enum */
/* sha: c7b706c4f10fd31b772306218b80495ead8d520543fe72523e33e221249f87a7 */
  struct RClass * Git_Submodule_Ignore_T_module = mrb_define_module_under(mrb, Git_module, "Git_Submodule_Ignore_T");
  mrb_value Git_Submodule_Ignore_T_mod = mrb_obj_value(Git_Submodule_Ignore_T_module);
  mrb_const_set(mrb, Git_Submodule_Ignore_T_mod, mrb_intern_lit(mrb, "SUBMODULE_IGNORE_UNSPECIFIED"), mrb_fixnum_value(GIT_SUBMODULE_IGNORE_UNSPECIFIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_IGNORE_UNSPECIFIED"), mrb_fixnum_value(GIT_SUBMODULE_IGNORE_UNSPECIFIED));
  mrb_const_set(mrb, Git_Submodule_Ignore_T_mod, mrb_intern_lit(mrb, "SUBMODULE_IGNORE_NONE"), mrb_fixnum_value(GIT_SUBMODULE_IGNORE_NONE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_IGNORE_NONE"), mrb_fixnum_value(GIT_SUBMODULE_IGNORE_NONE));
  mrb_const_set(mrb, Git_Submodule_Ignore_T_mod, mrb_intern_lit(mrb, "SUBMODULE_IGNORE_UNTRACKED"), mrb_fixnum_value(GIT_SUBMODULE_IGNORE_UNTRACKED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_IGNORE_UNTRACKED"), mrb_fixnum_value(GIT_SUBMODULE_IGNORE_UNTRACKED));
  mrb_const_set(mrb, Git_Submodule_Ignore_T_mod, mrb_intern_lit(mrb, "SUBMODULE_IGNORE_DIRTY"), mrb_fixnum_value(GIT_SUBMODULE_IGNORE_DIRTY));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_IGNORE_DIRTY"), mrb_fixnum_value(GIT_SUBMODULE_IGNORE_DIRTY));
  mrb_const_set(mrb, Git_Submodule_Ignore_T_mod, mrb_intern_lit(mrb, "SUBMODULE_IGNORE_ALL"), mrb_fixnum_value(GIT_SUBMODULE_IGNORE_ALL));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_IGNORE_ALL"), mrb_fixnum_value(GIT_SUBMODULE_IGNORE_ALL));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Submodule_Recurse_T_enum */
/* sha: fa144fa986c88283627f51af3db5a15de63c1027024692d8388d4f82d1b325ae */
  struct RClass * Git_Submodule_Recurse_T_module = mrb_define_module_under(mrb, Git_module, "Git_Submodule_Recurse_T");
  mrb_value Git_Submodule_Recurse_T_mod = mrb_obj_value(Git_Submodule_Recurse_T_module);
  mrb_const_set(mrb, Git_Submodule_Recurse_T_mod, mrb_intern_lit(mrb, "SUBMODULE_RECURSE_NO"), mrb_fixnum_value(GIT_SUBMODULE_RECURSE_NO));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_RECURSE_NO"), mrb_fixnum_value(GIT_SUBMODULE_RECURSE_NO));
  mrb_const_set(mrb, Git_Submodule_Recurse_T_mod, mrb_intern_lit(mrb, "SUBMODULE_RECURSE_YES"), mrb_fixnum_value(GIT_SUBMODULE_RECURSE_YES));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_RECURSE_YES"), mrb_fixnum_value(GIT_SUBMODULE_RECURSE_YES));
  mrb_const_set(mrb, Git_Submodule_Recurse_T_mod, mrb_intern_lit(mrb, "SUBMODULE_RECURSE_ONDEMAND"), mrb_fixnum_value(GIT_SUBMODULE_RECURSE_ONDEMAND));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_RECURSE_ONDEMAND"), mrb_fixnum_value(GIT_SUBMODULE_RECURSE_ONDEMAND));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Submodule_Status_T_enum */
/* sha: 40e065b594703138b09ba2ac8e4206d340bb2049ecd82943d1a885db13fab3df */
  struct RClass * Git_Submodule_Status_T_module = mrb_define_module_under(mrb, Git_module, "Git_Submodule_Status_T");
  mrb_value Git_Submodule_Status_T_mod = mrb_obj_value(Git_Submodule_Status_T_module);
  mrb_const_set(mrb, Git_Submodule_Status_T_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_IN_HEAD"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_IN_HEAD));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_IN_HEAD"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_IN_HEAD));
  mrb_const_set(mrb, Git_Submodule_Status_T_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_IN_INDEX"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_IN_INDEX));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_IN_INDEX"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_IN_INDEX));
  mrb_const_set(mrb, Git_Submodule_Status_T_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_IN_CONFIG"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_IN_CONFIG));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_IN_CONFIG"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_IN_CONFIG));
  mrb_const_set(mrb, Git_Submodule_Status_T_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_IN_WD"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_IN_WD));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_IN_WD"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_IN_WD));
  mrb_const_set(mrb, Git_Submodule_Status_T_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_INDEX_ADDED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_INDEX_ADDED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_INDEX_ADDED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_INDEX_ADDED));
  mrb_const_set(mrb, Git_Submodule_Status_T_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_INDEX_DELETED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_INDEX_DELETED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_INDEX_DELETED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_INDEX_DELETED));
  mrb_const_set(mrb, Git_Submodule_Status_T_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_INDEX_MODIFIED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_INDEX_MODIFIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_INDEX_MODIFIED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_INDEX_MODIFIED));
  mrb_const_set(mrb, Git_Submodule_Status_T_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_WD_UNINITIALIZED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_WD_UNINITIALIZED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_WD_UNINITIALIZED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_WD_UNINITIALIZED));
  mrb_const_set(mrb, Git_Submodule_Status_T_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_WD_ADDED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_WD_ADDED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_WD_ADDED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_WD_ADDED));
  mrb_const_set(mrb, Git_Submodule_Status_T_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_WD_DELETED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_WD_DELETED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_WD_DELETED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_WD_DELETED));
  mrb_const_set(mrb, Git_Submodule_Status_T_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_WD_MODIFIED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_WD_MODIFIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_WD_MODIFIED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_WD_MODIFIED));
  mrb_const_set(mrb, Git_Submodule_Status_T_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_WD_INDEX_MODIFIED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_WD_INDEX_MODIFIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_WD_INDEX_MODIFIED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_WD_INDEX_MODIFIED));
  mrb_const_set(mrb, Git_Submodule_Status_T_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_WD_WD_MODIFIED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_WD_WD_MODIFIED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_WD_WD_MODIFIED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_WD_WD_MODIFIED));
  mrb_const_set(mrb, Git_Submodule_Status_T_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_WD_UNTRACKED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_WD_UNTRACKED));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_STATUS_WD_UNTRACKED"), mrb_fixnum_value(GIT_SUBMODULE_STATUS_WD_UNTRACKED));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Submodule_Update_T_enum */
/* sha: 3177e838067a96d8ab0b214a9b43a21e20f8c8d8a1056d0fb59badc870b225f8 */
  struct RClass * Git_Submodule_Update_T_module = mrb_define_module_under(mrb, Git_module, "Git_Submodule_Update_T");
  mrb_value Git_Submodule_Update_T_mod = mrb_obj_value(Git_Submodule_Update_T_module);
  mrb_const_set(mrb, Git_Submodule_Update_T_mod, mrb_intern_lit(mrb, "SUBMODULE_UPDATE_CHECKOUT"), mrb_fixnum_value(GIT_SUBMODULE_UPDATE_CHECKOUT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_UPDATE_CHECKOUT"), mrb_fixnum_value(GIT_SUBMODULE_UPDATE_CHECKOUT));
  mrb_const_set(mrb, Git_Submodule_Update_T_mod, mrb_intern_lit(mrb, "SUBMODULE_UPDATE_REBASE"), mrb_fixnum_value(GIT_SUBMODULE_UPDATE_REBASE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_UPDATE_REBASE"), mrb_fixnum_value(GIT_SUBMODULE_UPDATE_REBASE));
  mrb_const_set(mrb, Git_Submodule_Update_T_mod, mrb_intern_lit(mrb, "SUBMODULE_UPDATE_MERGE"), mrb_fixnum_value(GIT_SUBMODULE_UPDATE_MERGE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_UPDATE_MERGE"), mrb_fixnum_value(GIT_SUBMODULE_UPDATE_MERGE));
  mrb_const_set(mrb, Git_Submodule_Update_T_mod, mrb_intern_lit(mrb, "SUBMODULE_UPDATE_NONE"), mrb_fixnum_value(GIT_SUBMODULE_UPDATE_NONE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_UPDATE_NONE"), mrb_fixnum_value(GIT_SUBMODULE_UPDATE_NONE));
  mrb_const_set(mrb, Git_Submodule_Update_T_mod, mrb_intern_lit(mrb, "SUBMODULE_UPDATE_DEFAULT"), mrb_fixnum_value(GIT_SUBMODULE_UPDATE_DEFAULT));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "SUBMODULE_UPDATE_DEFAULT"), mrb_fixnum_value(GIT_SUBMODULE_UPDATE_DEFAULT));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Trace_Level_T_enum */
/* sha: 04017f22226c9d1d54ad5eaea10b1273cda2b170c47bf82e1de767e7717bfc1c */
  // struct RClass * Git_Trace_Level_T_module = mrb_define_module_under(mrb, Git_mod, "Git_Trace_Level_T");
  // mrb_const_set(mrb, mrb_obj_value(Git_Trace_Level_T_module), mrb_intern_lit(mrb, "GIT_TRACE_NONE"), mrb_fixnum_value(GIT_TRACE_NONE));
  // mrb_const_set(mrb, mrb_obj_value(Git_mod), mrb_intern_lit(mrb, "GIT_TRACE_NONE"), mrb_fixnum_value(GIT_TRACE_NONE));
  // mrb_const_set(mrb, mrb_obj_value(Git_Trace_Level_T_module), mrb_intern_lit(mrb, "GIT_TRACE_FATAL"), mrb_fixnum_value(GIT_TRACE_FATAL));
  // mrb_const_set(mrb, mrb_obj_value(Git_mod), mrb_intern_lit(mrb, "GIT_TRACE_FATAL"), mrb_fixnum_value(GIT_TRACE_FATAL));
  // mrb_const_set(mrb, mrb_obj_value(Git_Trace_Level_T_module), mrb_intern_lit(mrb, "GIT_TRACE_ERROR"), mrb_fixnum_value(GIT_TRACE_ERROR));
  // mrb_const_set(mrb, mrb_obj_value(Git_mod), mrb_intern_lit(mrb, "GIT_TRACE_ERROR"), mrb_fixnum_value(GIT_TRACE_ERROR));
  // mrb_const_set(mrb, mrb_obj_value(Git_Trace_Level_T_module), mrb_intern_lit(mrb, "GIT_TRACE_WARN"), mrb_fixnum_value(GIT_TRACE_WARN));
  // mrb_const_set(mrb, mrb_obj_value(Git_mod), mrb_intern_lit(mrb, "GIT_TRACE_WARN"), mrb_fixnum_value(GIT_TRACE_WARN));
  // mrb_const_set(mrb, mrb_obj_value(Git_Trace_Level_T_module), mrb_intern_lit(mrb, "GIT_TRACE_INFO"), mrb_fixnum_value(GIT_TRACE_INFO));
  // mrb_const_set(mrb, mrb_obj_value(Git_mod), mrb_intern_lit(mrb, "GIT_TRACE_INFO"), mrb_fixnum_value(GIT_TRACE_INFO));
  // mrb_const_set(mrb, mrb_obj_value(Git_Trace_Level_T_module), mrb_intern_lit(mrb, "GIT_TRACE_DEBUG"), mrb_fixnum_value(GIT_TRACE_DEBUG));
  // mrb_const_set(mrb, mrb_obj_value(Git_mod), mrb_intern_lit(mrb, "GIT_TRACE_DEBUG"), mrb_fixnum_value(GIT_TRACE_DEBUG));
  // mrb_const_set(mrb, mrb_obj_value(Git_Trace_Level_T_module), mrb_intern_lit(mrb, "GIT_TRACE_TRACE"), mrb_fixnum_value(GIT_TRACE_TRACE));
  // mrb_const_set(mrb, mrb_obj_value(Git_mod), mrb_intern_lit(mrb, "GIT_TRACE_TRACE"), mrb_fixnum_value(GIT_TRACE_TRACE));
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Git_Treewalk_Mode_enum */
/* sha: c0786109a56361dad03f80111ecc0cd3360407970dabd2605482040e6b3031d4 */
  struct RClass * Git_Treewalk_Mode_module = mrb_define_module_under(mrb, Git_module, "Git_Treewalk_Mode");
  mrb_value Git_Treewalk_Mode_mod = mrb_obj_value(Git_Treewalk_Mode_module);
  mrb_const_set(mrb, Git_Treewalk_Mode_mod, mrb_intern_lit(mrb, "TREEWALK_PRE"), mrb_fixnum_value(GIT_TREEWALK_PRE));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "TREEWALK_PRE"), mrb_fixnum_value(GIT_TREEWALK_PRE));
  mrb_const_set(mrb, Git_Treewalk_Mode_mod, mrb_intern_lit(mrb, "TREEWALK_POST"), mrb_fixnum_value(GIT_TREEWALK_POST));
  mrb_const_set(mrb, Git_mod, mrb_intern_lit(mrb, "TREEWALK_POST"), mrb_fixnum_value(GIT_TREEWALK_POST));
/* MRUBY_BINDING_END */

}

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
