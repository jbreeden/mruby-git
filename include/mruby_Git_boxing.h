#ifndef MRUBY_Git_BOXING_HEADER
#define MRUBY_Git_BOXING_HEADER

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */


/*
 * Boxing declarations
 * -------------------
 *
 * These declarations are enabled by the macros in mruby_Git_classes.h
 */

/*
* Extra wrapper over native pointer to indicate who owns this memory.
* Owner is mruby (it should be garage collected) or C (it shouldn't be).
*/
typedef struct mruby_to_native_ref_ {
  /* If true, indicates that the object should be freed when
   * mruby garbage collects the ruby object containing this pointer.
   * This is set to true when an object is boxed via the `giftwrap`
   * or `gift_{type}_ptr_set` functions.
   */
  unsigned char belongs_to_ruby;

  /* A pointer to the native object */
  void* obj;

  /* For the convenience of the binding writer,
   * the data pointer can be used to associate arbitrary
   * data with a reference to a C object.
   * 
   * Possible uses:
   * - A function pointer to invoke instead of `free` on GC.
   * - A pointer back to the RObject, to be accessed during GC.
   * - etc.
   */
  void* data;
} mruby_to_native_ref;

/* MRUBY_BINDING: AnnotatedCommit::boxing_decls */
/* sha: d442c1d53f95ef84cc4bddda4f8e39ce1b670270610133fb72e216b80bc70155 */
#if BIND_AnnotatedCommit_TYPE
mrb_value
mruby_box_git_annotated_commit(mrb_state* mrb, git_annotated_commit *unboxed);

mrb_value
mruby_giftwrap_git_annotated_commit(mrb_state* mrb, git_annotated_commit *unboxed);

void
mruby_set_git_annotated_commit_data_ptr(mrb_value obj, git_annotated_commit *unboxed);

void
mruby_gift_git_annotated_commit_data_ptr(mrb_value obj, git_annotated_commit *unboxed);

git_annotated_commit *
mruby_unbox_git_annotated_commit(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blame::boxing_decls */
/* sha: 7d724d9cfef60e0106195f86ced10f78014a53ef50d2054ecf9f1a9321273f01 */
#if BIND_Blame_TYPE
mrb_value
mruby_box_git_blame(mrb_state* mrb, git_blame *unboxed);

mrb_value
mruby_giftwrap_git_blame(mrb_state* mrb, git_blame *unboxed);

void
mruby_set_git_blame_data_ptr(mrb_value obj, git_blame *unboxed);

void
mruby_gift_git_blame_data_ptr(mrb_value obj, git_blame *unboxed);

git_blame *
mruby_unbox_git_blame(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk::boxing_decls */
/* sha: 33dddf718861f5585cd99da618945da68603f88d41fcf28bf6937e58e12f7dd7 */
#if BIND_BlameHunk_TYPE
mrb_value
mruby_box_git_blame_hunk(mrb_state* mrb, git_blame_hunk *unboxed);

mrb_value
mruby_giftwrap_git_blame_hunk(mrb_state* mrb, git_blame_hunk *unboxed);

void
mruby_set_git_blame_hunk_data_ptr(mrb_value obj, git_blame_hunk *unboxed);

void
mruby_gift_git_blame_hunk_data_ptr(mrb_value obj, git_blame_hunk *unboxed);

git_blame_hunk *
mruby_unbox_git_blame_hunk(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions::boxing_decls */
/* sha: 9e6cacbb1266869ad53d6c87bd25404e736b6058f1a6bcf80950ddd15fd65c9c */
#if BIND_BlameOptions_TYPE
mrb_value
mruby_box_git_blame_options(mrb_state* mrb, git_blame_options *unboxed);

mrb_value
mruby_giftwrap_git_blame_options(mrb_state* mrb, git_blame_options *unboxed);

void
mruby_set_git_blame_options_data_ptr(mrb_value obj, git_blame_options *unboxed);

void
mruby_gift_git_blame_options_data_ptr(mrb_value obj, git_blame_options *unboxed);

git_blame_options *
mruby_unbox_git_blame_options(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blob::boxing_decls */
/* sha: 4a6518b04135c5059ca244edb31c630d633339e9971767e32af96cb824c8cbd7 */
#if BIND_Blob_TYPE
mrb_value
mruby_box_git_blob(mrb_state* mrb, git_blob *unboxed);

mrb_value
mruby_giftwrap_git_blob(mrb_state* mrb, git_blob *unboxed);

void
mruby_set_git_blob_data_ptr(mrb_value obj, git_blob *unboxed);

void
mruby_gift_git_blob_data_ptr(mrb_value obj, git_blob *unboxed);

git_blob *
mruby_unbox_git_blob(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BranchIterator::boxing_decls */
/* sha: e253c7342d149659f7270977ed767ba325a404ebf1773aa8e2a3cfd1cb2a5d3e */
#if BIND_BranchIterator_TYPE
mrb_value
mruby_box_git_branch_iterator(mrb_state* mrb, git_branch_iterator *unboxed);

mrb_value
mruby_giftwrap_git_branch_iterator(mrb_state* mrb, git_branch_iterator *unboxed);

void
mruby_set_git_branch_iterator_data_ptr(mrb_value obj, git_branch_iterator *unboxed);

void
mruby_gift_git_branch_iterator_data_ptr(mrb_value obj, git_branch_iterator *unboxed);

git_branch_iterator *
mruby_unbox_git_branch_iterator(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Buf::boxing_decls */
/* sha: b23f77bcd2e27e2fe0ba42e1059d45a8f559ba69e522d6b2df3b1d88b091676b */
#if BIND_Buf_TYPE
mrb_value
mruby_box_git_buf(mrb_state* mrb, git_buf *unboxed);

mrb_value
mruby_giftwrap_git_buf(mrb_state* mrb, git_buf *unboxed);

void
mruby_set_git_buf_data_ptr(mrb_value obj, git_buf *unboxed);

void
mruby_gift_git_buf_data_ptr(mrb_value obj, git_buf *unboxed);

git_buf *
mruby_unbox_git_buf(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cert::boxing_decls */
/* sha: 823fe976fdae1538cfad9f084d957d3ff5b446b0bd4397c24eafb57da3b1d1b6 */
#if BIND_Cert_TYPE
mrb_value
mruby_box_git_cert(mrb_state* mrb, git_cert *unboxed);

mrb_value
mruby_giftwrap_git_cert(mrb_state* mrb, git_cert *unboxed);

void
mruby_set_git_cert_data_ptr(mrb_value obj, git_cert *unboxed);

void
mruby_gift_git_cert_data_ptr(mrb_value obj, git_cert *unboxed);

git_cert *
mruby_unbox_git_cert(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertHostkey::boxing_decls */
/* sha: 9cfee7c5734deb9509cc65f2c5ee14bbdd42eeaee8531a2e0a0a637be610f853 */
#if BIND_CertHostkey_TYPE
mrb_value
mruby_box_git_cert_hostkey(mrb_state* mrb, git_cert_hostkey *unboxed);

mrb_value
mruby_giftwrap_git_cert_hostkey(mrb_state* mrb, git_cert_hostkey *unboxed);

void
mruby_set_git_cert_hostkey_data_ptr(mrb_value obj, git_cert_hostkey *unboxed);

void
mruby_gift_git_cert_hostkey_data_ptr(mrb_value obj, git_cert_hostkey *unboxed);

git_cert_hostkey *
mruby_unbox_git_cert_hostkey(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertX509::boxing_decls */
/* sha: 4abf0d4e000f1bbde929e41b56b06605e10c9cc62ee98f470e4ef09b09cbbf12 */
#if BIND_CertX509_TYPE
mrb_value
mruby_box_git_cert_x509(mrb_state* mrb, git_cert_x509 *unboxed);

mrb_value
mruby_giftwrap_git_cert_x509(mrb_state* mrb, git_cert_x509 *unboxed);

void
mruby_set_git_cert_x509_data_ptr(mrb_value obj, git_cert_x509 *unboxed);

void
mruby_gift_git_cert_x509_data_ptr(mrb_value obj, git_cert_x509 *unboxed);

git_cert_x509 *
mruby_unbox_git_cert_x509(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions::boxing_decls */
/* sha: 058dba9c849469499555fc8173921e103b24cf7a43fc1aa7a57f2e6f7f90c061 */
#if BIND_CheckoutOptions_TYPE
mrb_value
mruby_box_git_checkout_options(mrb_state* mrb, git_checkout_options *unboxed);

mrb_value
mruby_giftwrap_git_checkout_options(mrb_state* mrb, git_checkout_options *unboxed);

void
mruby_set_git_checkout_options_data_ptr(mrb_value obj, git_checkout_options *unboxed);

void
mruby_gift_git_checkout_options_data_ptr(mrb_value obj, git_checkout_options *unboxed);

git_checkout_options *
mruby_unbox_git_checkout_options(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutPerfdata::boxing_decls */
/* sha: 39821119feb1bbd105ce2bff97379aa4d9aff91e2211066fbf36787096850ccd */
#if BIND_CheckoutPerfdata_TYPE
mrb_value
mruby_box_git_checkout_perfdata(mrb_state* mrb, git_checkout_perfdata *unboxed);

mrb_value
mruby_giftwrap_git_checkout_perfdata(mrb_state* mrb, git_checkout_perfdata *unboxed);

void
mruby_set_git_checkout_perfdata_data_ptr(mrb_value obj, git_checkout_perfdata *unboxed);

void
mruby_gift_git_checkout_perfdata_data_ptr(mrb_value obj, git_checkout_perfdata *unboxed);

git_checkout_perfdata *
mruby_unbox_git_checkout_perfdata(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CherrypickOptions::boxing_decls */
/* sha: 9b382ee5cf85e72d6447d095cfb750c5c6e35657bd64a8d4fb21cd08efeaa34f */
#if BIND_CherrypickOptions_TYPE
mrb_value
mruby_box_git_cherrypick_options(mrb_state* mrb, git_cherrypick_options *unboxed);

mrb_value
mruby_giftwrap_git_cherrypick_options(mrb_state* mrb, git_cherrypick_options *unboxed);

void
mruby_set_git_cherrypick_options_data_ptr(mrb_value obj, git_cherrypick_options *unboxed);

void
mruby_gift_git_cherrypick_options_data_ptr(mrb_value obj, git_cherrypick_options *unboxed);

git_cherrypick_options *
mruby_unbox_git_cherrypick_options(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions::boxing_decls */
/* sha: bbb25076a1e32a94a05eacec86f712b9e00fd1f97b775df97ef095e6be841b95 */
#if BIND_CloneOptions_TYPE
mrb_value
mruby_box_git_clone_options(mrb_state* mrb, git_clone_options *unboxed);

mrb_value
mruby_giftwrap_git_clone_options(mrb_state* mrb, git_clone_options *unboxed);

void
mruby_set_git_clone_options_data_ptr(mrb_value obj, git_clone_options *unboxed);

void
mruby_gift_git_clone_options_data_ptr(mrb_value obj, git_clone_options *unboxed);

git_clone_options *
mruby_unbox_git_clone_options(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit::boxing_decls */
/* sha: c92aa24b6d39ca2fcea0c13501b9fcf5150d485c3af1b6c0904ec83e59959666 */
#if BIND_Commit_TYPE
mrb_value
mruby_box_git_commit(mrb_state* mrb, git_commit *unboxed);

mrb_value
mruby_giftwrap_git_commit(mrb_state* mrb, git_commit *unboxed);

void
mruby_set_git_commit_data_ptr(mrb_value obj, git_commit *unboxed);

void
mruby_gift_git_commit_data_ptr(mrb_value obj, git_commit *unboxed);

git_commit *
mruby_unbox_git_commit(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config::boxing_decls */
/* sha: 357e99139a438af758eac834f460d474429ae2712f6875b1f50b8d5af41690a2 */
#if BIND_Config_TYPE
mrb_value
mruby_box_git_config(mrb_state* mrb, git_config *unboxed);

mrb_value
mruby_giftwrap_git_config(mrb_state* mrb, git_config *unboxed);

void
mruby_set_git_config_data_ptr(mrb_value obj, git_config *unboxed);

void
mruby_gift_git_config_data_ptr(mrb_value obj, git_config *unboxed);

git_config *
mruby_unbox_git_config(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigBackend::boxing_decls */
/* sha: 9df77010350ca52772d9db5b68948fb6dfb908850175fd7ee57768e2531dd212 */
#if BIND_ConfigBackend_TYPE
mrb_value
mruby_box_git_config_backend(mrb_state* mrb, git_config_backend *unboxed);

mrb_value
mruby_giftwrap_git_config_backend(mrb_state* mrb, git_config_backend *unboxed);

void
mruby_set_git_config_backend_data_ptr(mrb_value obj, git_config_backend *unboxed);

void
mruby_gift_git_config_backend_data_ptr(mrb_value obj, git_config_backend *unboxed);

git_config_backend *
mruby_unbox_git_config_backend(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry::boxing_decls */
/* sha: 6d28cf824deecfe485838215a82c051c1615db36d55038a60ce205d3934173c3 */
#if BIND_ConfigEntry_TYPE
mrb_value
mruby_box_git_config_entry(mrb_state* mrb, git_config_entry *unboxed);

mrb_value
mruby_giftwrap_git_config_entry(mrb_state* mrb, git_config_entry *unboxed);

void
mruby_set_git_config_entry_data_ptr(mrb_value obj, git_config_entry *unboxed);

void
mruby_gift_git_config_entry_data_ptr(mrb_value obj, git_config_entry *unboxed);

git_config_entry *
mruby_unbox_git_config_entry(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigIterator::boxing_decls */
/* sha: 0a3963e903152c6889eeedca32320bcbc0530491e3db2770e9648755f7d2798e */
#if BIND_ConfigIterator_TYPE
mrb_value
mruby_box_git_config_iterator(mrb_state* mrb, git_config_iterator *unboxed);

mrb_value
mruby_giftwrap_git_config_iterator(mrb_state* mrb, git_config_iterator *unboxed);

void
mruby_set_git_config_iterator_data_ptr(mrb_value obj, git_config_iterator *unboxed);

void
mruby_gift_git_config_iterator_data_ptr(mrb_value obj, git_config_iterator *unboxed);

git_config_iterator *
mruby_unbox_git_config_iterator(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cred::boxing_decls */
/* sha: 3d476c2df645ef529777c9b2ad25bde8ccfc7ed58b104193d141e3d3de025e1c */
#if BIND_Cred_TYPE
mrb_value
mruby_box_git_cred(mrb_state* mrb, git_cred *unboxed);

mrb_value
mruby_giftwrap_git_cred(mrb_state* mrb, git_cred *unboxed);

void
mruby_set_git_cred_data_ptr(mrb_value obj, git_cred *unboxed);

void
mruby_gift_git_cred_data_ptr(mrb_value obj, git_cred *unboxed);

git_cred *
mruby_unbox_git_cred(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshCustom::boxing_decls */
/* sha: 80e581ff1eb0137d11f5ad0bea39c5bfc42693452c3daac56e0c5ecefec8e6c7 */
#if BIND_CredSshCustom_TYPE
mrb_value
mruby_box_git_cred_ssh_custom(mrb_state* mrb, git_cred_ssh_custom *unboxed);

mrb_value
mruby_giftwrap_git_cred_ssh_custom(mrb_state* mrb, git_cred_ssh_custom *unboxed);

void
mruby_set_git_cred_ssh_custom_data_ptr(mrb_value obj, git_cred_ssh_custom *unboxed);

void
mruby_gift_git_cred_ssh_custom_data_ptr(mrb_value obj, git_cred_ssh_custom *unboxed);

git_cred_ssh_custom *
mruby_unbox_git_cred_ssh_custom(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshInteractive::boxing_decls */
/* sha: e6e3224c0934ba94d4a5547eeded5eef6b2b5dcbe74711fe7f8f7774493cf559 */
#if BIND_CredSshInteractive_TYPE
mrb_value
mruby_box_git_cred_ssh_interactive(mrb_state* mrb, git_cred_ssh_interactive *unboxed);

mrb_value
mruby_giftwrap_git_cred_ssh_interactive(mrb_state* mrb, git_cred_ssh_interactive *unboxed);

void
mruby_set_git_cred_ssh_interactive_data_ptr(mrb_value obj, git_cred_ssh_interactive *unboxed);

void
mruby_gift_git_cred_ssh_interactive_data_ptr(mrb_value obj, git_cred_ssh_interactive *unboxed);

git_cred_ssh_interactive *
mruby_unbox_git_cred_ssh_interactive(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey::boxing_decls */
/* sha: 417f70b04c55576035e67b4bbdc8fb86772e81650abb1a7807cd4bf1669a1ca9 */
#if BIND_CredSshKey_TYPE
mrb_value
mruby_box_git_cred_ssh_key(mrb_state* mrb, git_cred_ssh_key *unboxed);

mrb_value
mruby_giftwrap_git_cred_ssh_key(mrb_state* mrb, git_cred_ssh_key *unboxed);

void
mruby_set_git_cred_ssh_key_data_ptr(mrb_value obj, git_cred_ssh_key *unboxed);

void
mruby_gift_git_cred_ssh_key_data_ptr(mrb_value obj, git_cred_ssh_key *unboxed);

git_cred_ssh_key *
mruby_unbox_git_cred_ssh_key(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUsername::boxing_decls */
/* sha: 9e28c8ae582ef0c7fa1b005ac3896d029d9a399b74092cc4b1bf14caf5ef123a */
#if BIND_CredUsername_TYPE
mrb_value
mruby_box_git_cred_username(mrb_state* mrb, git_cred_username *unboxed);

mrb_value
mruby_giftwrap_git_cred_username(mrb_state* mrb, git_cred_username *unboxed);

void
mruby_set_git_cred_username_data_ptr(mrb_value obj, git_cred_username *unboxed);

void
mruby_gift_git_cred_username_data_ptr(mrb_value obj, git_cred_username *unboxed);

git_cred_username *
mruby_unbox_git_cred_username(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPayload::boxing_decls */
/* sha: e7e338a70bcd9be892ef5e5c6ba427dd70e98f8ce83b5397845ee88181c4565f */
// #if BIND_CredUserpassPayload_TYPE
// mrb_value
// mruby_box_git_cred_userpass_payload(mrb_state* mrb, git_cred_userpass_payload *unboxed);
// 
// mrb_value
// mruby_giftwrap_git_cred_userpass_payload(mrb_state* mrb, git_cred_userpass_payload *unboxed);
// 
// void
// mruby_set_git_cred_userpass_payload_data_ptr(mrb_value obj, git_cred_userpass_payload *unboxed);
// 
// void
// mruby_gift_git_cred_userpass_payload_data_ptr(mrb_value obj, git_cred_userpass_payload *unboxed);
// 
// git_cred_userpass_payload *
// mruby_unbox_git_cred_userpass_payload(mrb_value boxed);
// #endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPlaintext::boxing_decls */
/* sha: 5388504b920d32bd051d147862131498f29fc55abb4ba3e3538d7f84ecde6928 */
#if BIND_CredUserpassPlaintext_TYPE
mrb_value
mruby_box_git_cred_userpass_plaintext(mrb_state* mrb, git_cred_userpass_plaintext *unboxed);

mrb_value
mruby_giftwrap_git_cred_userpass_plaintext(mrb_state* mrb, git_cred_userpass_plaintext *unboxed);

void
mruby_set_git_cred_userpass_plaintext_data_ptr(mrb_value obj, git_cred_userpass_plaintext *unboxed);

void
mruby_gift_git_cred_userpass_plaintext_data_ptr(mrb_value obj, git_cred_userpass_plaintext *unboxed);

git_cred_userpass_plaintext *
mruby_unbox_git_cred_userpass_plaintext(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CvarMap::boxing_decls */
/* sha: becdf24442fe742bedfc2385475c7640586e269319f9a31674d243de69738216 */
#if BIND_CvarMap_TYPE
mrb_value
mruby_box_git_cvar_map(mrb_state* mrb, git_cvar_map *unboxed);

mrb_value
mruby_giftwrap_git_cvar_map(mrb_state* mrb, git_cvar_map *unboxed);

void
mruby_set_git_cvar_map_data_ptr(mrb_value obj, git_cvar_map *unboxed);

void
mruby_gift_git_cvar_map_data_ptr(mrb_value obj, git_cvar_map *unboxed);

git_cvar_map *
mruby_unbox_git_cvar_map(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeFormatOptions::boxing_decls */
/* sha: d3a7f7f1518e62f9302dcbda0e619933d44aaf16c3496594cd7131c7b8cdadd1 */
#if BIND_DescribeFormatOptions_TYPE
mrb_value
mruby_box_git_describe_format_options(mrb_state* mrb, git_describe_format_options *unboxed);

mrb_value
mruby_giftwrap_git_describe_format_options(mrb_state* mrb, git_describe_format_options *unboxed);

void
mruby_set_git_describe_format_options_data_ptr(mrb_value obj, git_describe_format_options *unboxed);

void
mruby_gift_git_describe_format_options_data_ptr(mrb_value obj, git_describe_format_options *unboxed);

git_describe_format_options *
mruby_unbox_git_describe_format_options(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions::boxing_decls */
/* sha: ec7f059654904fd52efaa27f1f5b810ad68e7ca6b5864e1837c66e4c5860345c */
#if BIND_DescribeOptions_TYPE
mrb_value
mruby_box_git_describe_options(mrb_state* mrb, git_describe_options *unboxed);

mrb_value
mruby_giftwrap_git_describe_options(mrb_state* mrb, git_describe_options *unboxed);

void
mruby_set_git_describe_options_data_ptr(mrb_value obj, git_describe_options *unboxed);

void
mruby_gift_git_describe_options_data_ptr(mrb_value obj, git_describe_options *unboxed);

git_describe_options *
mruby_unbox_git_describe_options(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeResult::boxing_decls */
/* sha: a75cc42f194734cdff40a7eae249bb72621e4e7db50650549ccb5c823b234874 */
#if BIND_DescribeResult_TYPE
mrb_value
mruby_box_git_describe_result(mrb_state* mrb, git_describe_result *unboxed);

mrb_value
mruby_giftwrap_git_describe_result(mrb_state* mrb, git_describe_result *unboxed);

void
mruby_set_git_describe_result_data_ptr(mrb_value obj, git_describe_result *unboxed);

void
mruby_gift_git_describe_result_data_ptr(mrb_value obj, git_describe_result *unboxed);

git_describe_result *
mruby_unbox_git_describe_result(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Diff::boxing_decls */
/* sha: 1da8c57eb32452a5df6bffd310d5a329738d131ebb34eaf541ca404388f8e69a */
#if BIND_Diff_TYPE
mrb_value
mruby_box_git_diff(mrb_state* mrb, git_diff *unboxed);

mrb_value
mruby_giftwrap_git_diff(mrb_state* mrb, git_diff *unboxed);

void
mruby_set_git_diff_data_ptr(mrb_value obj, git_diff *unboxed);

void
mruby_gift_git_diff_data_ptr(mrb_value obj, git_diff *unboxed);

git_diff *
mruby_unbox_git_diff(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinary::boxing_decls */
/* sha: f9eb90e28901ba6f3c82b0f175b28b77bc80580a9f1d615eb5892809b68b827c */
#if BIND_DiffBinary_TYPE
mrb_value
mruby_box_git_diff_binary(mrb_state* mrb, git_diff_binary *unboxed);

mrb_value
mruby_giftwrap_git_diff_binary(mrb_state* mrb, git_diff_binary *unboxed);

void
mruby_set_git_diff_binary_data_ptr(mrb_value obj, git_diff_binary *unboxed);

void
mruby_gift_git_diff_binary_data_ptr(mrb_value obj, git_diff_binary *unboxed);

git_diff_binary *
mruby_unbox_git_diff_binary(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinaryFile::boxing_decls */
/* sha: 8b10910488fcc6a4a604044b1227df41f29434c05d264ae12e8f1f79b971daf6 */
#if BIND_DiffBinaryFile_TYPE
mrb_value
mruby_box_git_diff_binary_file(mrb_state* mrb, git_diff_binary_file *unboxed);

mrb_value
mruby_giftwrap_git_diff_binary_file(mrb_state* mrb, git_diff_binary_file *unboxed);

void
mruby_set_git_diff_binary_file_data_ptr(mrb_value obj, git_diff_binary_file *unboxed);

void
mruby_gift_git_diff_binary_file_data_ptr(mrb_value obj, git_diff_binary_file *unboxed);

git_diff_binary_file *
mruby_unbox_git_diff_binary_file(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta::boxing_decls */
/* sha: d3c24b07d995f606fc183ec75b807fe2c7332eb394850d1c4478f3ace29f7a43 */
#if BIND_DiffDelta_TYPE
mrb_value
mruby_box_git_diff_delta(mrb_state* mrb, git_diff_delta *unboxed);

mrb_value
mruby_giftwrap_git_diff_delta(mrb_state* mrb, git_diff_delta *unboxed);

void
mruby_set_git_diff_delta_data_ptr(mrb_value obj, git_diff_delta *unboxed);

void
mruby_gift_git_diff_delta_data_ptr(mrb_value obj, git_diff_delta *unboxed);

git_diff_delta *
mruby_unbox_git_diff_delta(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFile::boxing_decls */
/* sha: eb3cd4f2e4e37a737367c3d2955df653d207da5bf509e373db860861624de212 */
#if BIND_DiffFile_TYPE
mrb_value
mruby_box_git_diff_file(mrb_state* mrb, git_diff_file *unboxed);

mrb_value
mruby_giftwrap_git_diff_file(mrb_state* mrb, git_diff_file *unboxed);

void
mruby_set_git_diff_file_data_ptr(mrb_value obj, git_diff_file *unboxed);

void
mruby_gift_git_diff_file_data_ptr(mrb_value obj, git_diff_file *unboxed);

git_diff_file *
mruby_unbox_git_diff_file(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions::boxing_decls */
/* sha: 37f15519c0aa322b1c80f1e7553626996a59d8b96dcdb2e60762e1b5ec58c7a8 */
#if BIND_DiffFindOptions_TYPE
mrb_value
mruby_box_git_diff_find_options(mrb_state* mrb, git_diff_find_options *unboxed);

mrb_value
mruby_giftwrap_git_diff_find_options(mrb_state* mrb, git_diff_find_options *unboxed);

void
mruby_set_git_diff_find_options_data_ptr(mrb_value obj, git_diff_find_options *unboxed);

void
mruby_gift_git_diff_find_options_data_ptr(mrb_value obj, git_diff_find_options *unboxed);

git_diff_find_options *
mruby_unbox_git_diff_find_options(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions::boxing_decls */
/* sha: d1df845314f1bf616294003bdc022fdf0bc628bdab8586cba654a4ab168f7ffd */
#if BIND_DiffFormatEmailOptions_TYPE
mrb_value
mruby_box_git_diff_format_email_options(mrb_state* mrb, git_diff_format_email_options *unboxed);

mrb_value
mruby_giftwrap_git_diff_format_email_options(mrb_state* mrb, git_diff_format_email_options *unboxed);

void
mruby_set_git_diff_format_email_options_data_ptr(mrb_value obj, git_diff_format_email_options *unboxed);

void
mruby_gift_git_diff_format_email_options_data_ptr(mrb_value obj, git_diff_format_email_options *unboxed);

git_diff_format_email_options *
mruby_unbox_git_diff_format_email_options(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk::boxing_decls */
/* sha: b52e12d90aae545775f629020c8146aa842f63ef2c4147125494add426e0eb25 */
#if BIND_DiffHunk_TYPE
mrb_value
mruby_box_git_diff_hunk(mrb_state* mrb, git_diff_hunk *unboxed);

mrb_value
mruby_giftwrap_git_diff_hunk(mrb_state* mrb, git_diff_hunk *unboxed);

void
mruby_set_git_diff_hunk_data_ptr(mrb_value obj, git_diff_hunk *unboxed);

void
mruby_gift_git_diff_hunk_data_ptr(mrb_value obj, git_diff_hunk *unboxed);

git_diff_hunk *
mruby_unbox_git_diff_hunk(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine::boxing_decls */
/* sha: cdaaa3ec5559466c7681fc9bacdbf6d84cf91e60af5ed610b01aa2d1f0be95ab */
#if BIND_DiffLine_TYPE
mrb_value
mruby_box_git_diff_line(mrb_state* mrb, git_diff_line *unboxed);

mrb_value
mruby_giftwrap_git_diff_line(mrb_state* mrb, git_diff_line *unboxed);

void
mruby_set_git_diff_line_data_ptr(mrb_value obj, git_diff_line *unboxed);

void
mruby_gift_git_diff_line_data_ptr(mrb_value obj, git_diff_line *unboxed);

git_diff_line *
mruby_unbox_git_diff_line(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions::boxing_decls */
/* sha: 3aa4e4807905f02f3d7223948aa973c72743264af7b4e2fd6e05a591b93185b1 */
#if BIND_DiffOptions_TYPE
mrb_value
mruby_box_git_diff_options(mrb_state* mrb, git_diff_options *unboxed);

mrb_value
mruby_giftwrap_git_diff_options(mrb_state* mrb, git_diff_options *unboxed);

void
mruby_set_git_diff_options_data_ptr(mrb_value obj, git_diff_options *unboxed);

void
mruby_gift_git_diff_options_data_ptr(mrb_value obj, git_diff_options *unboxed);

git_diff_options *
mruby_unbox_git_diff_options(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric::boxing_decls */
/* sha: d569b999b2b84c9105d5bff55ff581f9c1ba30493b6f3114914ecfdfdaeace45 */
#if BIND_DiffSimilarityMetric_TYPE
mrb_value
mruby_box_git_diff_similarity_metric(mrb_state* mrb, git_diff_similarity_metric *unboxed);

mrb_value
mruby_giftwrap_git_diff_similarity_metric(mrb_state* mrb, git_diff_similarity_metric *unboxed);

void
mruby_set_git_diff_similarity_metric_data_ptr(mrb_value obj, git_diff_similarity_metric *unboxed);

void
mruby_gift_git_diff_similarity_metric_data_ptr(mrb_value obj, git_diff_similarity_metric *unboxed);

git_diff_similarity_metric *
mruby_unbox_git_diff_similarity_metric(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffStats::boxing_decls */
/* sha: d48ebd4401718c261f92c908aadadee3ec97fc2b5a8e1ae45fc7b6e9093f8481 */
#if BIND_DiffStats_TYPE
mrb_value
mruby_box_git_diff_stats(mrb_state* mrb, git_diff_stats *unboxed);

mrb_value
mruby_giftwrap_git_diff_stats(mrb_state* mrb, git_diff_stats *unboxed);

void
mruby_set_git_diff_stats_data_ptr(mrb_value obj, git_diff_stats *unboxed);

void
mruby_gift_git_diff_stats_data_ptr(mrb_value obj, git_diff_stats *unboxed);

git_diff_stats *
mruby_unbox_git_diff_stats(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Error::boxing_decls */
/* sha: 3c6207eb93ff8088538484b9897463b0ba76f0c7265df3c71123e27d880b07e8 */
#if BIND_Error_TYPE
mrb_value
mruby_box_git_error(mrb_state* mrb, git_error *unboxed);

mrb_value
mruby_giftwrap_git_error(mrb_state* mrb, git_error *unboxed);

void
mruby_set_git_error_data_ptr(mrb_value obj, git_error *unboxed);

void
mruby_gift_git_error_data_ptr(mrb_value obj, git_error *unboxed);

git_error *
mruby_unbox_git_error(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions::boxing_decls */
/* sha: 99e765eb6eb809542708b03e130b8110ad38a904b1cfdb2085039c043f756cda */
#if BIND_FetchOptions_TYPE
mrb_value
mruby_box_git_fetch_options(mrb_state* mrb, git_fetch_options *unboxed);

mrb_value
mruby_giftwrap_git_fetch_options(mrb_state* mrb, git_fetch_options *unboxed);

void
mruby_set_git_fetch_options_data_ptr(mrb_value obj, git_fetch_options *unboxed);

void
mruby_gift_git_fetch_options_data_ptr(mrb_value obj, git_fetch_options *unboxed);

git_fetch_options *
mruby_unbox_git_fetch_options(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Filter::boxing_decls */
/* sha: ee7db262985f0b9d0649127a706bf4edbbfbae9f6dc312dd007b946d5e6ac906 */
#if BIND_Filter_TYPE
mrb_value
mruby_box_git_filter(mrb_state* mrb, git_filter *unboxed);

mrb_value
mruby_giftwrap_git_filter(mrb_state* mrb, git_filter *unboxed);

void
mruby_set_git_filter_data_ptr(mrb_value obj, git_filter *unboxed);

void
mruby_gift_git_filter_data_ptr(mrb_value obj, git_filter *unboxed);

git_filter *
mruby_unbox_git_filter(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FilterList::boxing_decls */
/* sha: b6089c4973c1bbb1cd279ac66c1d09c3a1281a1cdbcd137e43694522f898a172 */
#if BIND_FilterList_TYPE
mrb_value
mruby_box_git_filter_list(mrb_state* mrb, git_filter_list *unboxed);

mrb_value
mruby_giftwrap_git_filter_list(mrb_state* mrb, git_filter_list *unboxed);

void
mruby_set_git_filter_list_data_ptr(mrb_value obj, git_filter_list *unboxed);

void
mruby_gift_git_filter_list_data_ptr(mrb_value obj, git_filter_list *unboxed);

git_filter_list *
mruby_unbox_git_filter_list(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ImaxdivT::boxing_decls */
/* sha: 35d62c33d6a09a02b9915acd93db7fa51711158e5873271a4650631d5f317089 */
#if BIND_ImaxdivT_TYPE
mrb_value
mruby_box_imaxdiv_t(mrb_state* mrb, imaxdiv_t *unboxed);

mrb_value
mruby_giftwrap_imaxdiv_t(mrb_state* mrb, imaxdiv_t *unboxed);

void
mruby_set_imaxdiv_t_data_ptr(mrb_value obj, imaxdiv_t *unboxed);

void
mruby_gift_imaxdiv_t_data_ptr(mrb_value obj, imaxdiv_t *unboxed);

imaxdiv_t *
mruby_unbox_imaxdiv_t(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Index::boxing_decls */
/* sha: a4c78ed1fe690f45dc61db1833df054f0e6c4011b548fb3d009cebf9fba7c531 */
#if BIND_Index_TYPE
mrb_value
mruby_box_git_index(mrb_state* mrb, git_index *unboxed);

mrb_value
mruby_giftwrap_git_index(mrb_state* mrb, git_index *unboxed);

void
mruby_set_git_index_data_ptr(mrb_value obj, git_index *unboxed);

void
mruby_gift_git_index_data_ptr(mrb_value obj, git_index *unboxed);

git_index *
mruby_unbox_git_index(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexConflictIterator::boxing_decls */
/* sha: 3c38477bafb1d79c5fd7dba0903bc01af6557c8f16b3f158c90f9bc1fd15cbcb */
#if BIND_IndexConflictIterator_TYPE
mrb_value
mruby_box_git_index_conflict_iterator(mrb_state* mrb, git_index_conflict_iterator *unboxed);

mrb_value
mruby_giftwrap_git_index_conflict_iterator(mrb_state* mrb, git_index_conflict_iterator *unboxed);

void
mruby_set_git_index_conflict_iterator_data_ptr(mrb_value obj, git_index_conflict_iterator *unboxed);

void
mruby_gift_git_index_conflict_iterator_data_ptr(mrb_value obj, git_index_conflict_iterator *unboxed);

git_index_conflict_iterator *
mruby_unbox_git_index_conflict_iterator(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry::boxing_decls */
/* sha: ac82162ae21257faf434cc92985156ce41d7d97fea54af9fcdeeb5d3cb116166 */
#if BIND_IndexEntry_TYPE
mrb_value
mruby_box_git_index_entry(mrb_state* mrb, git_index_entry *unboxed);

mrb_value
mruby_giftwrap_git_index_entry(mrb_state* mrb, git_index_entry *unboxed);

void
mruby_set_git_index_entry_data_ptr(mrb_value obj, git_index_entry *unboxed);

void
mruby_gift_git_index_entry_data_ptr(mrb_value obj, git_index_entry *unboxed);

git_index_entry *
mruby_unbox_git_index_entry(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Indexer::boxing_decls */
/* sha: 950b0c74433a6ce4e6cab61fb03dcd9e8d246a075d69161d1905d9db033f4b2e */
#if BIND_Indexer_TYPE
mrb_value
mruby_box_git_indexer(mrb_state* mrb, git_indexer *unboxed);

mrb_value
mruby_giftwrap_git_indexer(mrb_state* mrb, git_indexer *unboxed);

void
mruby_set_git_indexer_data_ptr(mrb_value obj, git_indexer *unboxed);

void
mruby_gift_git_indexer_data_ptr(mrb_value obj, git_indexer *unboxed);

git_indexer *
mruby_unbox_git_indexer(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexTime::boxing_decls */
/* sha: 38dd4db3c01ec5a405b36289e32428be4418f46f6e3af7ea160392d60032d5ce */
#if BIND_IndexTime_TYPE
mrb_value
mruby_box_git_index_time(mrb_state* mrb, git_index_time *unboxed);

mrb_value
mruby_giftwrap_git_index_time(mrb_state* mrb, git_index_time *unboxed);

void
mruby_set_git_index_time_data_ptr(mrb_value obj, git_index_time *unboxed);

void
mruby_gift_git_index_time_data_ptr(mrb_value obj, git_index_time *unboxed);

git_index_time *
mruby_unbox_git_index_time(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2SESSION::boxing_decls */
/* sha: 5aa93910a52c3b0d5235378200ab805065d5b0c5dd2880903a015ca3839d0aaf */
#if BIND_LIBSSH2SESSION_TYPE
mrb_value
mruby_box_LIBSSH2_SESSION(mrb_state* mrb, LIBSSH2_SESSION *unboxed);

mrb_value
mruby_giftwrap_LIBSSH2_SESSION(mrb_state* mrb, LIBSSH2_SESSION *unboxed);

void
mruby_set_LIBSSH2_SESSION_data_ptr(mrb_value obj, LIBSSH2_SESSION *unboxed);

void
mruby_gift_LIBSSH2_SESSION_data_ptr(mrb_value obj, LIBSSH2_SESSION *unboxed);

LIBSSH2_SESSION *
mruby_unbox_LIBSSH2_SESSION(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTPROMPT::boxing_decls */
/* sha: d537b90bce093d08bf416abf72f2983583a22d0f108c9a969b7f17e419e84de8 */
#if BIND_LIBSSH2USERAUTHKBDINTPROMPT_TYPE
mrb_value
mruby_box_LIBSSH2_USERAUTH_KBDINT_PROMPT(mrb_state* mrb, LIBSSH2_USERAUTH_KBDINT_PROMPT *unboxed);

mrb_value
mruby_giftwrap_LIBSSH2_USERAUTH_KBDINT_PROMPT(mrb_state* mrb, LIBSSH2_USERAUTH_KBDINT_PROMPT *unboxed);

void
mruby_set_LIBSSH2_USERAUTH_KBDINT_PROMPT_data_ptr(mrb_value obj, LIBSSH2_USERAUTH_KBDINT_PROMPT *unboxed);

void
mruby_gift_LIBSSH2_USERAUTH_KBDINT_PROMPT_data_ptr(mrb_value obj, LIBSSH2_USERAUTH_KBDINT_PROMPT *unboxed);

LIBSSH2_USERAUTH_KBDINT_PROMPT *
mruby_unbox_LIBSSH2_USERAUTH_KBDINT_PROMPT(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTRESPONSE::boxing_decls */
/* sha: 817fffc99966a491acf619f8a80f4c866e6f6ad2e1971cc3414fa57f89431998 */
#if BIND_LIBSSH2USERAUTHKBDINTRESPONSE_TYPE
mrb_value
mruby_box_LIBSSH2_USERAUTH_KBDINT_RESPONSE(mrb_state* mrb, LIBSSH2_USERAUTH_KBDINT_RESPONSE *unboxed);

mrb_value
mruby_giftwrap_LIBSSH2_USERAUTH_KBDINT_RESPONSE(mrb_state* mrb, LIBSSH2_USERAUTH_KBDINT_RESPONSE *unboxed);

void
mruby_set_LIBSSH2_USERAUTH_KBDINT_RESPONSE_data_ptr(mrb_value obj, LIBSSH2_USERAUTH_KBDINT_RESPONSE *unboxed);

void
mruby_gift_LIBSSH2_USERAUTH_KBDINT_RESPONSE_data_ptr(mrb_value obj, LIBSSH2_USERAUTH_KBDINT_RESPONSE *unboxed);

LIBSSH2_USERAUTH_KBDINT_RESPONSE *
mruby_unbox_LIBSSH2_USERAUTH_KBDINT_RESPONSE(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileInput::boxing_decls */
/* sha: fc800bc40159efa0db5686c754c2ba17bb5009de6abe71bacb128e467dc9e392 */
#if BIND_MergeFileInput_TYPE
mrb_value
mruby_box_git_merge_file_input(mrb_state* mrb, git_merge_file_input *unboxed);

mrb_value
mruby_giftwrap_git_merge_file_input(mrb_state* mrb, git_merge_file_input *unboxed);

void
mruby_set_git_merge_file_input_data_ptr(mrb_value obj, git_merge_file_input *unboxed);

void
mruby_gift_git_merge_file_input_data_ptr(mrb_value obj, git_merge_file_input *unboxed);

git_merge_file_input *
mruby_unbox_git_merge_file_input(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions::boxing_decls */
/* sha: cb3380ec76041bd2eeb832129569a039f85a02a7cc48fb7ffb3656cfb91a0a51 */
#if BIND_MergeFileOptions_TYPE
mrb_value
mruby_box_git_merge_file_options(mrb_state* mrb, git_merge_file_options *unboxed);

mrb_value
mruby_giftwrap_git_merge_file_options(mrb_state* mrb, git_merge_file_options *unboxed);

void
mruby_set_git_merge_file_options_data_ptr(mrb_value obj, git_merge_file_options *unboxed);

void
mruby_gift_git_merge_file_options_data_ptr(mrb_value obj, git_merge_file_options *unboxed);

git_merge_file_options *
mruby_unbox_git_merge_file_options(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult::boxing_decls */
/* sha: 0d87755563c1c7b09fc5bd97156a72be7a3a90f04c4fcf55e16ac23d4d291da7 */
#if BIND_MergeFileResult_TYPE
mrb_value
mruby_box_git_merge_file_result(mrb_state* mrb, git_merge_file_result *unboxed);

mrb_value
mruby_giftwrap_git_merge_file_result(mrb_state* mrb, git_merge_file_result *unboxed);

void
mruby_set_git_merge_file_result_data_ptr(mrb_value obj, git_merge_file_result *unboxed);

void
mruby_gift_git_merge_file_result_data_ptr(mrb_value obj, git_merge_file_result *unboxed);

git_merge_file_result *
mruby_unbox_git_merge_file_result(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions::boxing_decls */
/* sha: 519f100e1afd337bc4bdee744fd6a59d507823dd688df68cb5a26b07c7d89f52 */
#if BIND_MergeOptions_TYPE
mrb_value
mruby_box_git_merge_options(mrb_state* mrb, git_merge_options *unboxed);

mrb_value
mruby_giftwrap_git_merge_options(mrb_state* mrb, git_merge_options *unboxed);

void
mruby_set_git_merge_options_data_ptr(mrb_value obj, git_merge_options *unboxed);

void
mruby_gift_git_merge_options_data_ptr(mrb_value obj, git_merge_options *unboxed);

git_merge_options *
mruby_unbox_git_merge_options(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeResult::boxing_decls */
/* sha: e8d8de09c0f6335c73127787306d34570db30b4e7213ae6e1d0a6e3ae395078a */
#if BIND_MergeResult_TYPE
mrb_value
mruby_box_git_merge_result(mrb_state* mrb, git_merge_result *unboxed);

mrb_value
mruby_giftwrap_git_merge_result(mrb_state* mrb, git_merge_result *unboxed);

void
mruby_set_git_merge_result_data_ptr(mrb_value obj, git_merge_result *unboxed);

void
mruby_gift_git_merge_result_data_ptr(mrb_value obj, git_merge_result *unboxed);

git_merge_result *
mruby_unbox_git_merge_result(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Note::boxing_decls */
/* sha: cb633247becfba3ebe7c1002e3e026c0415be9e4bf3fce2cb0ac7308dfd4aea6 */
#if BIND_Note_TYPE
mrb_value
mruby_box_git_note(mrb_state* mrb, git_note *unboxed);

mrb_value
mruby_giftwrap_git_note(mrb_state* mrb, git_note *unboxed);

void
mruby_set_git_note_data_ptr(mrb_value obj, git_note *unboxed);

void
mruby_gift_git_note_data_ptr(mrb_value obj, git_note *unboxed);

git_note *
mruby_unbox_git_note(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: NoteIterator::boxing_decls */
/* sha: bd415a58f19692deb74333354699692690a8a0b9dd21d4288582942e9f86dfb2 */
#if BIND_NoteIterator_TYPE
mrb_value
mruby_box_git_note_iterator(mrb_state* mrb, git_note_iterator *unboxed);

mrb_value
mruby_giftwrap_git_note_iterator(mrb_state* mrb, git_note_iterator *unboxed);

void
mruby_set_git_note_iterator_data_ptr(mrb_value obj, git_note_iterator *unboxed);

void
mruby_gift_git_note_iterator_data_ptr(mrb_value obj, git_note_iterator *unboxed);

git_note_iterator *
mruby_unbox_git_note_iterator(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Object::boxing_decls */
/* sha: bcc516c45485ea6a0419d3c48d4fd1c2ce5de5ab915acf0fadf97d2405fcf572 */
#if BIND_Object_TYPE
mrb_value
mruby_box_git_object(mrb_state* mrb, git_object *unboxed);

mrb_value
mruby_giftwrap_git_object(mrb_state* mrb, git_object *unboxed);

void
mruby_set_git_object_data_ptr(mrb_value obj, git_object *unboxed);

void
mruby_gift_git_object_data_ptr(mrb_value obj, git_object *unboxed);

git_object *
mruby_unbox_git_object(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb::boxing_decls */
/* sha: d185392a0c90def451cb66ccdbf40a48746518bb76c54d7d3239edbfe90d39b2 */
#if BIND_Odb_TYPE
mrb_value
mruby_box_git_odb(mrb_state* mrb, git_odb *unboxed);

mrb_value
mruby_giftwrap_git_odb(mrb_state* mrb, git_odb *unboxed);

void
mruby_set_git_odb_data_ptr(mrb_value obj, git_odb *unboxed);

void
mruby_gift_git_odb_data_ptr(mrb_value obj, git_odb *unboxed);

git_odb *
mruby_unbox_git_odb(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbBackend::boxing_decls */
/* sha: 078f5c3b6cc578aa23ea5b5cf096ade1db8835920a6e1bc40fbdbcd30589c71e */
#if BIND_OdbBackend_TYPE
mrb_value
mruby_box_git_odb_backend(mrb_state* mrb, git_odb_backend *unboxed);

mrb_value
mruby_giftwrap_git_odb_backend(mrb_state* mrb, git_odb_backend *unboxed);

void
mruby_set_git_odb_backend_data_ptr(mrb_value obj, git_odb_backend *unboxed);

void
mruby_gift_git_odb_backend_data_ptr(mrb_value obj, git_odb_backend *unboxed);

git_odb_backend *
mruby_unbox_git_odb_backend(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject::boxing_decls */
/* sha: 065d9387e0d9e6453f9fca36b37e32fd77ce43bb69833be6efe1967e593810f3 */
#if BIND_OdbObject_TYPE
mrb_value
mruby_box_git_odb_object(mrb_state* mrb, git_odb_object *unboxed);

mrb_value
mruby_giftwrap_git_odb_object(mrb_state* mrb, git_odb_object *unboxed);

void
mruby_set_git_odb_object_data_ptr(mrb_value obj, git_odb_object *unboxed);

void
mruby_gift_git_odb_object_data_ptr(mrb_value obj, git_odb_object *unboxed);

git_odb_object *
mruby_unbox_git_odb_object(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream::boxing_decls */
/* sha: 5ba47b85179243bea126642009bd8ae50670309ea9d33cbb10d7d9a0cf09c908 */
#if BIND_OdbStream_TYPE
mrb_value
mruby_box_git_odb_stream(mrb_state* mrb, git_odb_stream *unboxed);

mrb_value
mruby_giftwrap_git_odb_stream(mrb_state* mrb, git_odb_stream *unboxed);

void
mruby_set_git_odb_stream_data_ptr(mrb_value obj, git_odb_stream *unboxed);

void
mruby_gift_git_odb_stream_data_ptr(mrb_value obj, git_odb_stream *unboxed);

git_odb_stream *
mruby_unbox_git_odb_stream(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbWritepack::boxing_decls */
/* sha: 9dcfd23c650bb263363eb8034041fa43767767e42286aaeed643629517ff7453 */
#if BIND_OdbWritepack_TYPE
mrb_value
mruby_box_git_odb_writepack(mrb_state* mrb, git_odb_writepack *unboxed);

mrb_value
mruby_giftwrap_git_odb_writepack(mrb_state* mrb, git_odb_writepack *unboxed);

void
mruby_set_git_odb_writepack_data_ptr(mrb_value obj, git_odb_writepack *unboxed);

void
mruby_gift_git_odb_writepack_data_ptr(mrb_value obj, git_odb_writepack *unboxed);

git_odb_writepack *
mruby_unbox_git_odb_writepack(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oid::boxing_decls */
/* sha: 13da98bc9b190e0524bfd574e91223680411e9f3ab50395903f5d1e1d6c1c706 */
#if BIND_Oid_TYPE
mrb_value
mruby_box_git_oid(mrb_state* mrb, git_oid *unboxed);

mrb_value
mruby_giftwrap_git_oid(mrb_state* mrb, git_oid *unboxed);

void
mruby_set_git_oid_data_ptr(mrb_value obj, git_oid *unboxed);

void
mruby_gift_git_oid_data_ptr(mrb_value obj, git_oid *unboxed);

git_oid *
mruby_unbox_git_oid(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oidarray::boxing_decls */
/* sha: 4a760470db6cc3cf91f049d761fd07a17097a2dae22e45d1c4b4c9d867ff1725 */
#if BIND_Oidarray_TYPE
mrb_value
mruby_box_git_oidarray(mrb_state* mrb, git_oidarray *unboxed);

mrb_value
mruby_giftwrap_git_oidarray(mrb_state* mrb, git_oidarray *unboxed);

void
mruby_set_git_oidarray_data_ptr(mrb_value obj, git_oidarray *unboxed);

void
mruby_gift_git_oidarray_data_ptr(mrb_value obj, git_oidarray *unboxed);

git_oidarray *
mruby_unbox_git_oidarray(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten::boxing_decls */
/* sha: d21270f5c1491bdadac7807e9408f60b625fa695b23a5b692d5b70c223d995b8 */
#if BIND_OidShorten_TYPE
mrb_value
mruby_box_git_oid_shorten(mrb_state* mrb, git_oid_shorten *unboxed);

mrb_value
mruby_giftwrap_git_oid_shorten(mrb_state* mrb, git_oid_shorten *unboxed);

void
mruby_set_git_oid_shorten_data_ptr(mrb_value obj, git_oid_shorten *unboxed);

void
mruby_gift_git_oid_shorten_data_ptr(mrb_value obj, git_oid_shorten *unboxed);

git_oid_shorten *
mruby_unbox_git_oid_shorten(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Packbuilder::boxing_decls */
/* sha: ece5d802a643a7e9a76e320df1aca604ddece77be22171da18403ef196806796 */
#if BIND_Packbuilder_TYPE
mrb_value
mruby_box_git_packbuilder(mrb_state* mrb, git_packbuilder *unboxed);

mrb_value
mruby_giftwrap_git_packbuilder(mrb_state* mrb, git_packbuilder *unboxed);

void
mruby_set_git_packbuilder_data_ptr(mrb_value obj, git_packbuilder *unboxed);

void
mruby_gift_git_packbuilder_data_ptr(mrb_value obj, git_packbuilder *unboxed);

git_packbuilder *
mruby_unbox_git_packbuilder(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch::boxing_decls */
/* sha: 6450825f5d52a90373d3c0cca64c3545bc6a14d1e4bb5a4aaf647af7850c94bc */
#if BIND_Patch_TYPE
mrb_value
mruby_box_git_patch(mrb_state* mrb, git_patch *unboxed);

mrb_value
mruby_giftwrap_git_patch(mrb_state* mrb, git_patch *unboxed);

void
mruby_set_git_patch_data_ptr(mrb_value obj, git_patch *unboxed);

void
mruby_gift_git_patch_data_ptr(mrb_value obj, git_patch *unboxed);

git_patch *
mruby_unbox_git_patch(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pathspec::boxing_decls */
/* sha: 30f3ca16f960aca08b3febf87ce045ea15d2cd2dee6a55bc2a38f420f198d877 */
#if BIND_Pathspec_TYPE
mrb_value
mruby_box_git_pathspec(mrb_state* mrb, git_pathspec *unboxed);

mrb_value
mruby_giftwrap_git_pathspec(mrb_state* mrb, git_pathspec *unboxed);

void
mruby_set_git_pathspec_data_ptr(mrb_value obj, git_pathspec *unboxed);

void
mruby_gift_git_pathspec_data_ptr(mrb_value obj, git_pathspec *unboxed);

git_pathspec *
mruby_unbox_git_pathspec(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PathspecMatchList::boxing_decls */
/* sha: c2b91980f0db2fa16265048e725ce8d225205626c7011d317b8ed2b51a09b657 */
#if BIND_PathspecMatchList_TYPE
mrb_value
mruby_box_git_pathspec_match_list(mrb_state* mrb, git_pathspec_match_list *unboxed);

mrb_value
mruby_giftwrap_git_pathspec_match_list(mrb_state* mrb, git_pathspec_match_list *unboxed);

void
mruby_set_git_pathspec_match_list_data_ptr(mrb_value obj, git_pathspec_match_list *unboxed);

void
mruby_gift_git_pathspec_match_list_data_ptr(mrb_value obj, git_pathspec_match_list *unboxed);

git_pathspec_match_list *
mruby_unbox_git_pathspec_match_list(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Push::boxing_decls */
/* sha: 2b15467d65881f516b1418d9cc735a11d97fe83234e10397993a9d2ed19ebe02 */
#if BIND_Push_TYPE
mrb_value
mruby_box_git_push(mrb_state* mrb, git_push *unboxed);

mrb_value
mruby_giftwrap_git_push(mrb_state* mrb, git_push *unboxed);

void
mruby_set_git_push_data_ptr(mrb_value obj, git_push *unboxed);

void
mruby_gift_git_push_data_ptr(mrb_value obj, git_push *unboxed);

git_push *
mruby_unbox_git_push(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushOptions::boxing_decls */
/* sha: c02b357513f3a291b6f3046b671762fcecf55ebd37d04b6109cd78b01f34e124 */
#if BIND_PushOptions_TYPE
mrb_value
mruby_box_git_push_options(mrb_state* mrb, git_push_options *unboxed);

mrb_value
mruby_giftwrap_git_push_options(mrb_state* mrb, git_push_options *unboxed);

void
mruby_set_git_push_options_data_ptr(mrb_value obj, git_push_options *unboxed);

void
mruby_gift_git_push_options_data_ptr(mrb_value obj, git_push_options *unboxed);

git_push_options *
mruby_unbox_git_push_options(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushUpdate::boxing_decls */
/* sha: a3281a926647bb3ddd05c3006a065c9a0ac706075d80cc2b048926475e0a79b4 */
#if BIND_PushUpdate_TYPE
mrb_value
mruby_box_git_push_update(mrb_state* mrb, git_push_update *unboxed);

mrb_value
mruby_giftwrap_git_push_update(mrb_state* mrb, git_push_update *unboxed);

void
mruby_set_git_push_update_data_ptr(mrb_value obj, git_push_update *unboxed);

void
mruby_gift_git_push_update_data_ptr(mrb_value obj, git_push_update *unboxed);

git_push_update *
mruby_unbox_git_push_update(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase::boxing_decls */
/* sha: 1a65c8d6bd345d6987a53ca22e53a2d9c25973682b561f80adad0277ab2ee877 */
#if BIND_Rebase_TYPE
mrb_value
mruby_box_git_rebase(mrb_state* mrb, git_rebase *unboxed);

mrb_value
mruby_giftwrap_git_rebase(mrb_state* mrb, git_rebase *unboxed);

void
mruby_set_git_rebase_data_ptr(mrb_value obj, git_rebase *unboxed);

void
mruby_gift_git_rebase_data_ptr(mrb_value obj, git_rebase *unboxed);

git_rebase *
mruby_unbox_git_rebase(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOperation::boxing_decls */
/* sha: ae38c16236d7e42518a35a4d3f1552d8ff50e042cc6e7c0a30d7cce36ede0e34 */
#if BIND_RebaseOperation_TYPE
mrb_value
mruby_box_git_rebase_operation(mrb_state* mrb, git_rebase_operation *unboxed);

mrb_value
mruby_giftwrap_git_rebase_operation(mrb_state* mrb, git_rebase_operation *unboxed);

void
mruby_set_git_rebase_operation_data_ptr(mrb_value obj, git_rebase_operation *unboxed);

void
mruby_gift_git_rebase_operation_data_ptr(mrb_value obj, git_rebase_operation *unboxed);

git_rebase_operation *
mruby_unbox_git_rebase_operation(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOptions::boxing_decls */
/* sha: 3865b5baffec4918607dd8aa3545a98429b255fffd13c036ce3abc7f9387ed15 */
#if BIND_RebaseOptions_TYPE
mrb_value
mruby_box_git_rebase_options(mrb_state* mrb, git_rebase_options *unboxed);

mrb_value
mruby_giftwrap_git_rebase_options(mrb_state* mrb, git_rebase_options *unboxed);

void
mruby_set_git_rebase_options_data_ptr(mrb_value obj, git_rebase_options *unboxed);

void
mruby_gift_git_rebase_options_data_ptr(mrb_value obj, git_rebase_options *unboxed);

git_rebase_options *
mruby_unbox_git_rebase_options(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refdb::boxing_decls */
/* sha: e262e5f736117c3444f35eb2c7970c0495bc1d7636928e7bfcb1ebcdbd1824a0 */
#if BIND_Refdb_TYPE
mrb_value
mruby_box_git_refdb(mrb_state* mrb, git_refdb *unboxed);

mrb_value
mruby_giftwrap_git_refdb(mrb_state* mrb, git_refdb *unboxed);

void
mruby_set_git_refdb_data_ptr(mrb_value obj, git_refdb *unboxed);

void
mruby_gift_git_refdb_data_ptr(mrb_value obj, git_refdb *unboxed);

git_refdb *
mruby_unbox_git_refdb(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RefdbBackend::boxing_decls */
/* sha: a25eb833895fb7acf4f92e46c91b9e0ac2a6658e609f2221a15f5662a5144761 */
#if BIND_RefdbBackend_TYPE
mrb_value
mruby_box_git_refdb_backend(mrb_state* mrb, git_refdb_backend *unboxed);

mrb_value
mruby_giftwrap_git_refdb_backend(mrb_state* mrb, git_refdb_backend *unboxed);

void
mruby_set_git_refdb_backend_data_ptr(mrb_value obj, git_refdb_backend *unboxed);

void
mruby_gift_git_refdb_backend_data_ptr(mrb_value obj, git_refdb_backend *unboxed);

git_refdb_backend *
mruby_unbox_git_refdb_backend(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reference::boxing_decls */
/* sha: 3a843bd96a27574a93b803245be328d8535a366a061417ad96398d28cd17282c */
#if BIND_Reference_TYPE
mrb_value
mruby_box_git_reference(mrb_state* mrb, git_reference *unboxed);

mrb_value
mruby_giftwrap_git_reference(mrb_state* mrb, git_reference *unboxed);

void
mruby_set_git_reference_data_ptr(mrb_value obj, git_reference *unboxed);

void
mruby_gift_git_reference_data_ptr(mrb_value obj, git_reference *unboxed);

git_reference *
mruby_unbox_git_reference(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReferenceIterator::boxing_decls */
/* sha: beecb29cc44ed29b76e04377f07635bc9e7fd4dec3a8ecb9fd53e21af70404e6 */
#if BIND_ReferenceIterator_TYPE
mrb_value
mruby_box_git_reference_iterator(mrb_state* mrb, git_reference_iterator *unboxed);

mrb_value
mruby_giftwrap_git_reference_iterator(mrb_state* mrb, git_reference_iterator *unboxed);

void
mruby_set_git_reference_iterator_data_ptr(mrb_value obj, git_reference_iterator *unboxed);

void
mruby_gift_git_reference_iterator_data_ptr(mrb_value obj, git_reference_iterator *unboxed);

git_reference_iterator *
mruby_unbox_git_reference_iterator(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog::boxing_decls */
/* sha: b1f849d88a5d8ec43dfb22f44880d5aa1487de6daf87cc02e16c532cc9aa55db */
#if BIND_Reflog_TYPE
mrb_value
mruby_box_git_reflog(mrb_state* mrb, git_reflog *unboxed);

mrb_value
mruby_giftwrap_git_reflog(mrb_state* mrb, git_reflog *unboxed);

void
mruby_set_git_reflog_data_ptr(mrb_value obj, git_reflog *unboxed);

void
mruby_gift_git_reflog_data_ptr(mrb_value obj, git_reflog *unboxed);

git_reflog *
mruby_unbox_git_reflog(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry::boxing_decls */
/* sha: f6aabdca3e8a5bbd58b8f8e757feda9fc592cddfc60a81d48c163852ad207e7d */
#if BIND_ReflogEntry_TYPE
mrb_value
mruby_box_git_reflog_entry(mrb_state* mrb, git_reflog_entry *unboxed);

mrb_value
mruby_giftwrap_git_reflog_entry(mrb_state* mrb, git_reflog_entry *unboxed);

void
mruby_set_git_reflog_entry_data_ptr(mrb_value obj, git_reflog_entry *unboxed);

void
mruby_gift_git_reflog_entry_data_ptr(mrb_value obj, git_reflog_entry *unboxed);

git_reflog_entry *
mruby_unbox_git_reflog_entry(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec::boxing_decls */
/* sha: 86a80b038c5c29b208fddec7c4655eda67ee61af521306845db5874fd8323c18 */
#if BIND_Refspec_TYPE
mrb_value
mruby_box_git_refspec(mrb_state* mrb, git_refspec *unboxed);

mrb_value
mruby_giftwrap_git_refspec(mrb_state* mrb, git_refspec *unboxed);

void
mruby_set_git_refspec_data_ptr(mrb_value obj, git_refspec *unboxed);

void
mruby_gift_git_refspec_data_ptr(mrb_value obj, git_refspec *unboxed);

git_refspec *
mruby_unbox_git_refspec(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Remote::boxing_decls */
/* sha: ac047384f907eb81efbad6a722666bd6d622743e257ea4db6b98d4a523dddc1d */
#if BIND_Remote_TYPE
mrb_value
mruby_box_git_remote(mrb_state* mrb, git_remote *unboxed);

mrb_value
mruby_giftwrap_git_remote(mrb_state* mrb, git_remote *unboxed);

void
mruby_set_git_remote_data_ptr(mrb_value obj, git_remote *unboxed);

void
mruby_gift_git_remote_data_ptr(mrb_value obj, git_remote *unboxed);

git_remote *
mruby_unbox_git_remote(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks::boxing_decls */
/* sha: c9cbb12aace9f21a5ffd8d3dfcbc2bc1127b76487c9f8b41e186ca5b9db60512 */
#if BIND_RemoteCallbacks_TYPE
mrb_value
mruby_box_git_remote_callbacks(mrb_state* mrb, git_remote_callbacks *unboxed);

mrb_value
mruby_giftwrap_git_remote_callbacks(mrb_state* mrb, git_remote_callbacks *unboxed);

void
mruby_set_git_remote_callbacks_data_ptr(mrb_value obj, git_remote_callbacks *unboxed);

void
mruby_gift_git_remote_callbacks_data_ptr(mrb_value obj, git_remote_callbacks *unboxed);

git_remote_callbacks *
mruby_unbox_git_remote_callbacks(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead::boxing_decls */
/* sha: 55207a28ccf97fe2e8b938deb1ed99117f294ce7a05d48bab478679f43dc38ff */
#if BIND_RemoteHead_TYPE
mrb_value
mruby_box_git_remote_head(mrb_state* mrb, git_remote_head *unboxed);

mrb_value
mruby_giftwrap_git_remote_head(mrb_state* mrb, git_remote_head *unboxed);

void
mruby_set_git_remote_head_data_ptr(mrb_value obj, git_remote_head *unboxed);

void
mruby_gift_git_remote_head_data_ptr(mrb_value obj, git_remote_head *unboxed);

git_remote_head *
mruby_unbox_git_remote_head(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Repository::boxing_decls */
/* sha: 724253fd3ce518a9c2a8addf6f64693d9aa6202214e4f910587c0e07451915bc */
#if BIND_Repository_TYPE
mrb_value
mruby_box_git_repository(mrb_state* mrb, git_repository *unboxed);

mrb_value
mruby_giftwrap_git_repository(mrb_state* mrb, git_repository *unboxed);

void
mruby_set_git_repository_data_ptr(mrb_value obj, git_repository *unboxed);

void
mruby_gift_git_repository_data_ptr(mrb_value obj, git_repository *unboxed);

git_repository *
mruby_unbox_git_repository(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions::boxing_decls */
/* sha: 6aec31f8b93dc4381347fed377df9bbda9304c47eac87343b0215f905e06475e */
#if BIND_RepositoryInitOptions_TYPE
mrb_value
mruby_box_git_repository_init_options(mrb_state* mrb, git_repository_init_options *unboxed);

mrb_value
mruby_giftwrap_git_repository_init_options(mrb_state* mrb, git_repository_init_options *unboxed);

void
mruby_set_git_repository_init_options_data_ptr(mrb_value obj, git_repository_init_options *unboxed);

void
mruby_gift_git_repository_init_options_data_ptr(mrb_value obj, git_repository_init_options *unboxed);

git_repository_init_options *
mruby_unbox_git_repository_init_options(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RevertOptions::boxing_decls */
/* sha: 260d3f9da3c089a25f31ef001086d8b9a8087e656889c140879a7944e7e93825 */
#if BIND_RevertOptions_TYPE
mrb_value
mruby_box_git_revert_options(mrb_state* mrb, git_revert_options *unboxed);

mrb_value
mruby_giftwrap_git_revert_options(mrb_state* mrb, git_revert_options *unboxed);

void
mruby_set_git_revert_options_data_ptr(mrb_value obj, git_revert_options *unboxed);

void
mruby_gift_git_revert_options_data_ptr(mrb_value obj, git_revert_options *unboxed);

git_revert_options *
mruby_unbox_git_revert_options(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revspec::boxing_decls */
/* sha: 092ff3ee4010eb499e72b3c37cc84c874c276bd3588df9db3108e8b0599ce477 */
#if BIND_Revspec_TYPE
mrb_value
mruby_box_git_revspec(mrb_state* mrb, git_revspec *unboxed);

mrb_value
mruby_giftwrap_git_revspec(mrb_state* mrb, git_revspec *unboxed);

void
mruby_set_git_revspec_data_ptr(mrb_value obj, git_revspec *unboxed);

void
mruby_gift_git_revspec_data_ptr(mrb_value obj, git_revspec *unboxed);

git_revspec *
mruby_unbox_git_revspec(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revwalk::boxing_decls */
/* sha: ad59b10103d9393dea38fa923ff865fcf29f4b9a58bb25f4a0a37d651bdeef12 */
#if BIND_Revwalk_TYPE
mrb_value
mruby_box_git_revwalk(mrb_state* mrb, git_revwalk *unboxed);

mrb_value
mruby_giftwrap_git_revwalk(mrb_state* mrb, git_revwalk *unboxed);

void
mruby_set_git_revwalk_data_ptr(mrb_value obj, git_revwalk *unboxed);

void
mruby_gift_git_revwalk_data_ptr(mrb_value obj, git_revwalk *unboxed);

git_revwalk *
mruby_unbox_git_revwalk(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signature::boxing_decls */
/* sha: 95987c9053ff7972b055bbd389efeb2775e3c8c645debd2d191b1591a57a788f */
#if BIND_Signature_TYPE
mrb_value
mruby_box_git_signature(mrb_state* mrb, git_signature *unboxed);

mrb_value
mruby_giftwrap_git_signature(mrb_state* mrb, git_signature *unboxed);

void
mruby_set_git_signature_data_ptr(mrb_value obj, git_signature *unboxed);

void
mruby_gift_git_signature_data_ptr(mrb_value obj, git_signature *unboxed);

git_signature *
mruby_unbox_git_signature(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StashApplyOptions::boxing_decls */
/* sha: e84eff6870be1cc3c03269d380ebd77f5db8baec56912d8f509a3abc4084a321 */
#if BIND_StashApplyOptions_TYPE
mrb_value
mruby_box_git_stash_apply_options(mrb_state* mrb, git_stash_apply_options *unboxed);

mrb_value
mruby_giftwrap_git_stash_apply_options(mrb_state* mrb, git_stash_apply_options *unboxed);

void
mruby_set_git_stash_apply_options_data_ptr(mrb_value obj, git_stash_apply_options *unboxed);

void
mruby_gift_git_stash_apply_options_data_ptr(mrb_value obj, git_stash_apply_options *unboxed);

git_stash_apply_options *
mruby_unbox_git_stash_apply_options(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusEntry::boxing_decls */
/* sha: aa30b620a861d1216f92ab85b9893dbc02765167ae6b612903265b3312002af8 */
#if BIND_StatusEntry_TYPE
mrb_value
mruby_box_git_status_entry(mrb_state* mrb, git_status_entry *unboxed);

mrb_value
mruby_giftwrap_git_status_entry(mrb_state* mrb, git_status_entry *unboxed);

void
mruby_set_git_status_entry_data_ptr(mrb_value obj, git_status_entry *unboxed);

void
mruby_gift_git_status_entry_data_ptr(mrb_value obj, git_status_entry *unboxed);

git_status_entry *
mruby_unbox_git_status_entry(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusList::boxing_decls */
/* sha: 0ae00e568d368e0186938f42b7db860e665cc38197cd5c927663618d9aa03380 */
#if BIND_StatusList_TYPE
mrb_value
mruby_box_git_status_list(mrb_state* mrb, git_status_list *unboxed);

mrb_value
mruby_giftwrap_git_status_list(mrb_state* mrb, git_status_list *unboxed);

void
mruby_set_git_status_list_data_ptr(mrb_value obj, git_status_list *unboxed);

void
mruby_gift_git_status_list_data_ptr(mrb_value obj, git_status_list *unboxed);

git_status_list *
mruby_unbox_git_status_list(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusOptions::boxing_decls */
/* sha: 5b13bff47f495144e121da0338b935b514e31d172a42117c266855a8ca5d079b */
#if BIND_StatusOptions_TYPE
mrb_value
mruby_box_git_status_options(mrb_state* mrb, git_status_options *unboxed);

mrb_value
mruby_giftwrap_git_status_options(mrb_state* mrb, git_status_options *unboxed);

void
mruby_set_git_status_options_data_ptr(mrb_value obj, git_status_options *unboxed);

void
mruby_gift_git_status_options_data_ptr(mrb_value obj, git_status_options *unboxed);

git_status_options *
mruby_unbox_git_status_options(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Strarray::boxing_decls */
/* sha: 89857576417989716b8948f654970777951c1dbce7e09ad57cd20f8176762dbe */
#if BIND_Strarray_TYPE
mrb_value
mruby_box_git_strarray(mrb_state* mrb, git_strarray *unboxed);

mrb_value
mruby_giftwrap_git_strarray(mrb_state* mrb, git_strarray *unboxed);

void
mruby_set_git_strarray_data_ptr(mrb_value obj, git_strarray *unboxed);

void
mruby_gift_git_strarray_data_ptr(mrb_value obj, git_strarray *unboxed);

git_strarray *
mruby_unbox_git_strarray(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule::boxing_decls */
/* sha: 2f4d497f2ee396a9fa10d32095ba8c6b3ee887b19e4ab1b1337d60c1358b1290 */
#if BIND_Submodule_TYPE
mrb_value
mruby_box_git_submodule(mrb_state* mrb, git_submodule *unboxed);

mrb_value
mruby_giftwrap_git_submodule(mrb_state* mrb, git_submodule *unboxed);

void
mruby_set_git_submodule_data_ptr(mrb_value obj, git_submodule *unboxed);

void
mruby_gift_git_submodule_data_ptr(mrb_value obj, git_submodule *unboxed);

git_submodule *
mruby_unbox_git_submodule(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SubmoduleUpdateOptions::boxing_decls */
/* sha: b3d57b69ccef7f0657a80d042fc2d3824085838dbc8212ae117c32978b74048a */
#if BIND_SubmoduleUpdateOptions_TYPE
mrb_value
mruby_box_git_submodule_update_options(mrb_state* mrb, git_submodule_update_options *unboxed);

mrb_value
mruby_giftwrap_git_submodule_update_options(mrb_state* mrb, git_submodule_update_options *unboxed);

void
mruby_set_git_submodule_update_options_data_ptr(mrb_value obj, git_submodule_update_options *unboxed);

void
mruby_gift_git_submodule_update_options_data_ptr(mrb_value obj, git_submodule_update_options *unboxed);

git_submodule_update_options *
mruby_unbox_git_submodule_update_options(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tag::boxing_decls */
/* sha: 22f425676147a790eee11003183cfb77d9741c6d35f07e5eee56c737b40857f5 */
#if BIND_Tag_TYPE
mrb_value
mruby_box_git_tag(mrb_state* mrb, git_tag *unboxed);

mrb_value
mruby_giftwrap_git_tag(mrb_state* mrb, git_tag *unboxed);

void
mruby_set_git_tag_data_ptr(mrb_value obj, git_tag *unboxed);

void
mruby_gift_git_tag_data_ptr(mrb_value obj, git_tag *unboxed);

git_tag *
mruby_unbox_git_tag(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Time::boxing_decls */
/* sha: ec64b0ee6ee2d008bc9348412cc5156d2b89c3c45819d020452b6bd2847aeb81 */
#if BIND_Time_TYPE
mrb_value
mruby_box_git_time(mrb_state* mrb, git_time *unboxed);

mrb_value
mruby_giftwrap_git_time(mrb_state* mrb, git_time *unboxed);

void
mruby_set_git_time_data_ptr(mrb_value obj, git_time *unboxed);

void
mruby_gift_git_time_data_ptr(mrb_value obj, git_time *unboxed);

git_time *
mruby_unbox_git_time(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transaction::boxing_decls */
/* sha: 76c038575d2da31c4c7b0e07b45b482bf17c788a5acea4f453fee1b10aa016bb */
#if BIND_Transaction_TYPE
mrb_value
mruby_box_git_transaction(mrb_state* mrb, git_transaction *unboxed);

mrb_value
mruby_giftwrap_git_transaction(mrb_state* mrb, git_transaction *unboxed);

void
mruby_set_git_transaction_data_ptr(mrb_value obj, git_transaction *unboxed);

void
mruby_gift_git_transaction_data_ptr(mrb_value obj, git_transaction *unboxed);

git_transaction *
mruby_unbox_git_transaction(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress::boxing_decls */
/* sha: e04838ed0f5f90b1578682c7317c808eddfd70b412688bb93ed72f9cabe515da */
#if BIND_TransferProgress_TYPE
mrb_value
mruby_box_git_transfer_progress(mrb_state* mrb, git_transfer_progress *unboxed);

mrb_value
mruby_giftwrap_git_transfer_progress(mrb_state* mrb, git_transfer_progress *unboxed);

void
mruby_set_git_transfer_progress_data_ptr(mrb_value obj, git_transfer_progress *unboxed);

void
mruby_gift_git_transfer_progress_data_ptr(mrb_value obj, git_transfer_progress *unboxed);

git_transfer_progress *
mruby_unbox_git_transfer_progress(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transport::boxing_decls */
/* sha: 583e0dbbed254e6383687fa15f188d498db4ec2ee1e3d10f2a79ebc1249b5883 */
#if BIND_Transport_TYPE
mrb_value
mruby_box_git_transport(mrb_state* mrb, git_transport *unboxed);

mrb_value
mruby_giftwrap_git_transport(mrb_state* mrb, git_transport *unboxed);

void
mruby_set_git_transport_data_ptr(mrb_value obj, git_transport *unboxed);

void
mruby_gift_git_transport_data_ptr(mrb_value obj, git_transport *unboxed);

git_transport *
mruby_unbox_git_transport(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tree::boxing_decls */
/* sha: 581aa61c7a0ebc68a3a6aff8fa3cc901cf542eae632ba3cdaed2e0d3a566c759 */
#if BIND_Tree_TYPE
mrb_value
mruby_box_git_tree(mrb_state* mrb, git_tree *unboxed);

mrb_value
mruby_giftwrap_git_tree(mrb_state* mrb, git_tree *unboxed);

void
mruby_set_git_tree_data_ptr(mrb_value obj, git_tree *unboxed);

void
mruby_gift_git_tree_data_ptr(mrb_value obj, git_tree *unboxed);

git_tree *
mruby_unbox_git_tree(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Treebuilder::boxing_decls */
/* sha: 3db0a75c0899872c44d59a8ad9f0fd65e394ffc3f0de4b4d9e9e434b4d93b568 */
#if BIND_Treebuilder_TYPE
mrb_value
mruby_box_git_treebuilder(mrb_state* mrb, git_treebuilder *unboxed);

mrb_value
mruby_giftwrap_git_treebuilder(mrb_state* mrb, git_treebuilder *unboxed);

void
mruby_set_git_treebuilder_data_ptr(mrb_value obj, git_treebuilder *unboxed);

void
mruby_gift_git_treebuilder_data_ptr(mrb_value obj, git_treebuilder *unboxed);

git_treebuilder *
mruby_unbox_git_treebuilder(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TreeEntry::boxing_decls */
/* sha: 0c2e9b44548d2d396b662444bcec1a9208d5aa8e7e4915567bdeb3fa65f881ab */
#if BIND_TreeEntry_TYPE
mrb_value
mruby_box_git_tree_entry(mrb_state* mrb, git_tree_entry *unboxed);

mrb_value
mruby_giftwrap_git_tree_entry(mrb_state* mrb, git_tree_entry *unboxed);

void
mruby_set_git_tree_entry_data_ptr(mrb_value obj, git_tree_entry *unboxed);

void
mruby_gift_git_tree_entry_data_ptr(mrb_value obj, git_tree_entry *unboxed);

git_tree_entry *
mruby_unbox_git_tree_entry(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Writestream::boxing_decls */
/* sha: 8901df46a47f13f9ad16e7c9ed734ac4a275e90b7abfdfd805a126ceae2912e9 */
#if BIND_Writestream_TYPE
mrb_value
mruby_box_git_writestream(mrb_state* mrb, git_writestream *unboxed);

mrb_value
mruby_giftwrap_git_writestream(mrb_state* mrb, git_writestream *unboxed);

void
mruby_set_git_writestream_data_ptr(mrb_value obj, git_writestream *unboxed);

void
mruby_gift_git_writestream_data_ptr(mrb_value obj, git_writestream *unboxed);

git_writestream *
mruby_unbox_git_writestream(mrb_value boxed);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */

#endif
