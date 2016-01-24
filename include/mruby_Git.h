#ifndef Git_HEADER
#define Git_HEADER

/*
 * Header Files
 * ------------
 *
 * These are the header files that defined the
 * classes and functions for which bindings have
 * been generated. If any of these are not needed
 * they should be commented out.
 *
 * TODO: ONLY the filename is inserted here automatically.
 *       If the file is not directly on the include path,
 *       you will need to prepend the relative path.
 */

/* MRUBY_BINDING: pre_includes */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: includes */
/* sha: 81dd8cc4f8572a49685280f3df7b05843defa2306de2e23b1669ce99e87a01e6 */
#include <stdlib.h>
#include "mruby.h"
#include "mruby/array.h"
#include "mruby/class.h"
#include "mruby/compile.h"
#include "mruby/data.h"
#include "mruby/string.h"
#include "mruby/value.h"
#include "mruby/variable.h"

#include "git2.h"


#include "mruby_Git_functions.h"
#include "mruby_Git_classes.h"
#include "mruby_Git_boxing.h"
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_includes */
/* sha: user_defined */

/* "Re-disable" some stuff until the bindings are fixed */
#undef BIND_LIBSSH2SESSION_TYPE
#define BIND_LIBSSH2SESSION_TYPE FALSE
#undef BIND_LIBSSH2USERAUTHKBDINTPROMPT_TYPE
#define BIND_LIBSSH2USERAUTHKBDINTPROMPT_TYPE FALSE
#undef BIND_LIBSSH2USERAUTHKBDINTRESPONSE_TYPE
#define BIND_LIBSSH2USERAUTHKBDINTRESPONSE_TYPE FALSE
#undef BIND_LIBSSH2USERAUTHKBDINTRESPONSE_TYPE
#define BIND_LIBSSH2USERAUTHKBDINTRESPONSE_TYPE FALSE
#undef BIND_CredUserpassPayload_TYPE
#define BIND_CredUserpassPayload_TYPE FALSE
#undef BIND_Error_TYPE
#define BIND_Error_TYPE FALSE

void raise_git_error(mrb_state * mrb);
#define CLEAR_GIT_ERROR() giterr_clear();
#define RAISE_GIT_ERROR() \
if (giterr_last()) { \
  raise_git_error(mrb); \
  return mrb_nil_value(); \
}

/* MRUBY_BINDING_END */

/*
 * RClass Macros
 * -------------
 *
 * Macros for retrieving the RClass*'s defined by this gem.
 */

/* MRUBY_BINDING: pre_class_macros */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: class_macros */
/* sha: ced9d70c5d91d1f1c9f9c30651b810f634bf7ca6212416e42d6fa83dc3c442af */
#define Git_module(mrb) mrb_module_get(mrb, "Git")
#define AnnotatedCommit_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "AnnotatedCommit")
#define Blame_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Blame")
#define BlameHunk_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "BlameHunk")
#define BlameOptions_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "BlameOptions")
#define Blob_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Blob")
#define BranchIterator_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "BranchIterator")
#define Buf_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Buf")
#define Cert_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Cert")
#define CertHostkey_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "CertHostkey")
#define CertX509_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "CertX509")
#define CheckoutOptions_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "CheckoutOptions")
#define CheckoutPerfdata_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "CheckoutPerfdata")
#define CherrypickOptions_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "CherrypickOptions")
#define CloneOptions_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "CloneOptions")
#define Commit_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Commit")
#define Config_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Config")
#define ConfigBackend_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "ConfigBackend")
#define ConfigEntry_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "ConfigEntry")
#define ConfigIterator_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "ConfigIterator")
#define Cred_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Cred")
#define CredSshCustom_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "CredSshCustom")
#define CredSshInteractive_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "CredSshInteractive")
#define CredSshKey_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "CredSshKey")
#define CredUsername_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "CredUsername")
#define CredUserpassPayload_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "CredUserpassPayload")
#define CredUserpassPlaintext_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "CredUserpassPlaintext")
#define CvarMap_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "CvarMap")
#define DescribeFormatOptions_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "DescribeFormatOptions")
#define DescribeOptions_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "DescribeOptions")
#define DescribeResult_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "DescribeResult")
#define Diff_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Diff")
#define DiffBinary_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "DiffBinary")
#define DiffBinaryFile_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "DiffBinaryFile")
#define DiffDelta_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "DiffDelta")
#define DiffFile_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "DiffFile")
#define DiffFindOptions_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "DiffFindOptions")
#define DiffFormatEmailOptions_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "DiffFormatEmailOptions")
#define DiffHunk_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "DiffHunk")
#define DiffLine_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "DiffLine")
#define DiffOptions_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "DiffOptions")
#define DiffSimilarityMetric_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "DiffSimilarityMetric")
#define DiffStats_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "DiffStats")
#define Error_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Error")
#define FetchOptions_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "FetchOptions")
#define Filter_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Filter")
#define FilterList_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "FilterList")
#define ImaxdivT_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "ImaxdivT")
#define Index_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Index")
#define IndexConflictIterator_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "IndexConflictIterator")
#define IndexEntry_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "IndexEntry")
#define Indexer_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Indexer")
#define IndexTime_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "IndexTime")
#define LIBSSH2SESSION_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "LIBSSH2SESSION")
#define LIBSSH2USERAUTHKBDINTPROMPT_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "LIBSSH2USERAUTHKBDINTPROMPT")
#define LIBSSH2USERAUTHKBDINTRESPONSE_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "LIBSSH2USERAUTHKBDINTRESPONSE")
#define MergeFileInput_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "MergeFileInput")
#define MergeFileOptions_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "MergeFileOptions")
#define MergeFileResult_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "MergeFileResult")
#define MergeOptions_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "MergeOptions")
#define MergeResult_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "MergeResult")
#define Note_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Note")
#define NoteIterator_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "NoteIterator")
#define Object_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Object")
#define Odb_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Odb")
#define OdbBackend_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "OdbBackend")
#define OdbObject_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "OdbObject")
#define OdbStream_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "OdbStream")
#define OdbWritepack_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "OdbWritepack")
#define Oid_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Oid")
#define Oidarray_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Oidarray")
#define OidShorten_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "OidShorten")
#define Packbuilder_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Packbuilder")
#define Patch_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Patch")
#define Pathspec_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Pathspec")
#define PathspecMatchList_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "PathspecMatchList")
#define Push_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Push")
#define PushOptions_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "PushOptions")
#define PushUpdate_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "PushUpdate")
#define Rebase_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Rebase")
#define RebaseOperation_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "RebaseOperation")
#define RebaseOptions_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "RebaseOptions")
#define Refdb_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Refdb")
#define RefdbBackend_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "RefdbBackend")
#define Reference_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Reference")
#define ReferenceIterator_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "ReferenceIterator")
#define Reflog_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Reflog")
#define ReflogEntry_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "ReflogEntry")
#define Refspec_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Refspec")
#define Remote_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Remote")
#define RemoteCallbacks_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "RemoteCallbacks")
#define RemoteHead_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "RemoteHead")
#define Repository_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Repository")
#define RepositoryInitOptions_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "RepositoryInitOptions")
#define RevertOptions_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "RevertOptions")
#define Revspec_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Revspec")
#define Revwalk_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Revwalk")
#define Signature_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Signature")
#define StashApplyOptions_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "StashApplyOptions")
#define StatusEntry_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "StatusEntry")
#define StatusList_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "StatusList")
#define StatusOptions_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "StatusOptions")
#define Strarray_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Strarray")
#define Submodule_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Submodule")
#define SubmoduleUpdateOptions_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "SubmoduleUpdateOptions")
#define Tag_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Tag")
#define Time_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Time")
#define Transaction_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Transaction")
#define TransferProgress_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "TransferProgress")
#define Transport_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Transport")
#define Tree_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Tree")
#define Treebuilder_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Treebuilder")
#define TreeEntry_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "TreeEntry")
#define Writestream_class(mrb) mrb_class_get_under(mrb, Git_module(mrb), "Writestream")
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_class_macros */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Class initialization function declarations
 * ------------------------------------------
 */

/* MRUBY_BINDING: pre_class_init_decls */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: pre_class_init_decls */
/* sha: 376cd14df2b514866f183e3a0789ecdc9ed895461b56162937fd60a3cca36ef1 */
#if BIND_AnnotatedCommit_TYPE
void mrb_Git_AnnotatedCommit_init(mrb_state* mrb);
#endif
#if BIND_Blame_TYPE
void mrb_Git_Blame_init(mrb_state* mrb);
#endif
#if BIND_BlameHunk_TYPE
void mrb_Git_BlameHunk_init(mrb_state* mrb);
#endif
#if BIND_BlameOptions_TYPE
void mrb_Git_BlameOptions_init(mrb_state* mrb);
#endif
#if BIND_Blob_TYPE
void mrb_Git_Blob_init(mrb_state* mrb);
#endif
#if BIND_BranchIterator_TYPE
void mrb_Git_BranchIterator_init(mrb_state* mrb);
#endif
#if BIND_Buf_TYPE
void mrb_Git_Buf_init(mrb_state* mrb);
#endif
#if BIND_Cert_TYPE
void mrb_Git_Cert_init(mrb_state* mrb);
#endif
#if BIND_CertHostkey_TYPE
void mrb_Git_CertHostkey_init(mrb_state* mrb);
#endif
#if BIND_CertX509_TYPE
void mrb_Git_CertX509_init(mrb_state* mrb);
#endif
#if BIND_CheckoutOptions_TYPE
void mrb_Git_CheckoutOptions_init(mrb_state* mrb);
#endif
#if BIND_CheckoutPerfdata_TYPE
void mrb_Git_CheckoutPerfdata_init(mrb_state* mrb);
#endif
#if BIND_CherrypickOptions_TYPE
void mrb_Git_CherrypickOptions_init(mrb_state* mrb);
#endif
#if BIND_CloneOptions_TYPE
void mrb_Git_CloneOptions_init(mrb_state* mrb);
#endif
#if BIND_Commit_TYPE
void mrb_Git_Commit_init(mrb_state* mrb);
#endif
#if BIND_Config_TYPE
void mrb_Git_Config_init(mrb_state* mrb);
#endif
#if BIND_ConfigBackend_TYPE
void mrb_Git_ConfigBackend_init(mrb_state* mrb);
#endif
#if BIND_ConfigEntry_TYPE
void mrb_Git_ConfigEntry_init(mrb_state* mrb);
#endif
#if BIND_ConfigIterator_TYPE
void mrb_Git_ConfigIterator_init(mrb_state* mrb);
#endif
#if BIND_Cred_TYPE
void mrb_Git_Cred_init(mrb_state* mrb);
#endif
#if BIND_CredSshCustom_TYPE
void mrb_Git_CredSshCustom_init(mrb_state* mrb);
#endif
#if BIND_CredSshInteractive_TYPE
void mrb_Git_CredSshInteractive_init(mrb_state* mrb);
#endif
#if BIND_CredSshKey_TYPE
void mrb_Git_CredSshKey_init(mrb_state* mrb);
#endif
#if BIND_CredUsername_TYPE
void mrb_Git_CredUsername_init(mrb_state* mrb);
#endif
#if BIND_CredUserpassPayload_TYPE
void mrb_Git_CredUserpassPayload_init(mrb_state* mrb);
#endif
#if BIND_CredUserpassPlaintext_TYPE
void mrb_Git_CredUserpassPlaintext_init(mrb_state* mrb);
#endif
#if BIND_CvarMap_TYPE
void mrb_Git_CvarMap_init(mrb_state* mrb);
#endif
#if BIND_DescribeFormatOptions_TYPE
void mrb_Git_DescribeFormatOptions_init(mrb_state* mrb);
#endif
#if BIND_DescribeOptions_TYPE
void mrb_Git_DescribeOptions_init(mrb_state* mrb);
#endif
#if BIND_DescribeResult_TYPE
void mrb_Git_DescribeResult_init(mrb_state* mrb);
#endif
#if BIND_Diff_TYPE
void mrb_Git_Diff_init(mrb_state* mrb);
#endif
#if BIND_DiffBinary_TYPE
void mrb_Git_DiffBinary_init(mrb_state* mrb);
#endif
#if BIND_DiffBinaryFile_TYPE
void mrb_Git_DiffBinaryFile_init(mrb_state* mrb);
#endif
#if BIND_DiffDelta_TYPE
void mrb_Git_DiffDelta_init(mrb_state* mrb);
#endif
#if BIND_DiffFile_TYPE
void mrb_Git_DiffFile_init(mrb_state* mrb);
#endif
#if BIND_DiffFindOptions_TYPE
void mrb_Git_DiffFindOptions_init(mrb_state* mrb);
#endif
#if BIND_DiffFormatEmailOptions_TYPE
void mrb_Git_DiffFormatEmailOptions_init(mrb_state* mrb);
#endif
#if BIND_DiffHunk_TYPE
void mrb_Git_DiffHunk_init(mrb_state* mrb);
#endif
#if BIND_DiffLine_TYPE
void mrb_Git_DiffLine_init(mrb_state* mrb);
#endif
#if BIND_DiffOptions_TYPE
void mrb_Git_DiffOptions_init(mrb_state* mrb);
#endif
#if BIND_DiffSimilarityMetric_TYPE
void mrb_Git_DiffSimilarityMetric_init(mrb_state* mrb);
#endif
#if BIND_DiffStats_TYPE
void mrb_Git_DiffStats_init(mrb_state* mrb);
#endif
#if BIND_Error_TYPE
void mrb_Git_Error_init(mrb_state* mrb);
#endif
#if BIND_FetchOptions_TYPE
void mrb_Git_FetchOptions_init(mrb_state* mrb);
#endif
#if BIND_Filter_TYPE
void mrb_Git_Filter_init(mrb_state* mrb);
#endif
#if BIND_FilterList_TYPE
void mrb_Git_FilterList_init(mrb_state* mrb);
#endif
#if BIND_ImaxdivT_TYPE
void mrb_Git_ImaxdivT_init(mrb_state* mrb);
#endif
#if BIND_Index_TYPE
void mrb_Git_Index_init(mrb_state* mrb);
#endif
#if BIND_IndexConflictIterator_TYPE
void mrb_Git_IndexConflictIterator_init(mrb_state* mrb);
#endif
#if BIND_IndexEntry_TYPE
void mrb_Git_IndexEntry_init(mrb_state* mrb);
#endif
#if BIND_Indexer_TYPE
void mrb_Git_Indexer_init(mrb_state* mrb);
#endif
#if BIND_IndexTime_TYPE
void mrb_Git_IndexTime_init(mrb_state* mrb);
#endif
#if BIND_LIBSSH2SESSION_TYPE
void mrb_Git_LIBSSH2SESSION_init(mrb_state* mrb);
#endif
#if BIND_LIBSSH2USERAUTHKBDINTPROMPT_TYPE
void mrb_Git_LIBSSH2USERAUTHKBDINTPROMPT_init(mrb_state* mrb);
#endif
#if BIND_LIBSSH2USERAUTHKBDINTRESPONSE_TYPE
void mrb_Git_LIBSSH2USERAUTHKBDINTRESPONSE_init(mrb_state* mrb);
#endif
#if BIND_MergeFileInput_TYPE
void mrb_Git_MergeFileInput_init(mrb_state* mrb);
#endif
#if BIND_MergeFileOptions_TYPE
void mrb_Git_MergeFileOptions_init(mrb_state* mrb);
#endif
#if BIND_MergeFileResult_TYPE
void mrb_Git_MergeFileResult_init(mrb_state* mrb);
#endif
#if BIND_MergeOptions_TYPE
void mrb_Git_MergeOptions_init(mrb_state* mrb);
#endif
#if BIND_MergeResult_TYPE
void mrb_Git_MergeResult_init(mrb_state* mrb);
#endif
#if BIND_Note_TYPE
void mrb_Git_Note_init(mrb_state* mrb);
#endif
#if BIND_NoteIterator_TYPE
void mrb_Git_NoteIterator_init(mrb_state* mrb);
#endif
#if BIND_Object_TYPE
void mrb_Git_Object_init(mrb_state* mrb);
#endif
#if BIND_Odb_TYPE
void mrb_Git_Odb_init(mrb_state* mrb);
#endif
#if BIND_OdbBackend_TYPE
void mrb_Git_OdbBackend_init(mrb_state* mrb);
#endif
#if BIND_OdbObject_TYPE
void mrb_Git_OdbObject_init(mrb_state* mrb);
#endif
#if BIND_OdbStream_TYPE
void mrb_Git_OdbStream_init(mrb_state* mrb);
#endif
#if BIND_OdbWritepack_TYPE
void mrb_Git_OdbWritepack_init(mrb_state* mrb);
#endif
#if BIND_Oid_TYPE
void mrb_Git_Oid_init(mrb_state* mrb);
#endif
#if BIND_Oidarray_TYPE
void mrb_Git_Oidarray_init(mrb_state* mrb);
#endif
#if BIND_OidShorten_TYPE
void mrb_Git_OidShorten_init(mrb_state* mrb);
#endif
#if BIND_Packbuilder_TYPE
void mrb_Git_Packbuilder_init(mrb_state* mrb);
#endif
#if BIND_Patch_TYPE
void mrb_Git_Patch_init(mrb_state* mrb);
#endif
#if BIND_Pathspec_TYPE
void mrb_Git_Pathspec_init(mrb_state* mrb);
#endif
#if BIND_PathspecMatchList_TYPE
void mrb_Git_PathspecMatchList_init(mrb_state* mrb);
#endif
#if BIND_Push_TYPE
void mrb_Git_Push_init(mrb_state* mrb);
#endif
#if BIND_PushOptions_TYPE
void mrb_Git_PushOptions_init(mrb_state* mrb);
#endif
#if BIND_PushUpdate_TYPE
void mrb_Git_PushUpdate_init(mrb_state* mrb);
#endif
#if BIND_Rebase_TYPE
void mrb_Git_Rebase_init(mrb_state* mrb);
#endif
#if BIND_RebaseOperation_TYPE
void mrb_Git_RebaseOperation_init(mrb_state* mrb);
#endif
#if BIND_RebaseOptions_TYPE
void mrb_Git_RebaseOptions_init(mrb_state* mrb);
#endif
#if BIND_Refdb_TYPE
void mrb_Git_Refdb_init(mrb_state* mrb);
#endif
#if BIND_RefdbBackend_TYPE
void mrb_Git_RefdbBackend_init(mrb_state* mrb);
#endif
#if BIND_Reference_TYPE
void mrb_Git_Reference_init(mrb_state* mrb);
#endif
#if BIND_ReferenceIterator_TYPE
void mrb_Git_ReferenceIterator_init(mrb_state* mrb);
#endif
#if BIND_Reflog_TYPE
void mrb_Git_Reflog_init(mrb_state* mrb);
#endif
#if BIND_ReflogEntry_TYPE
void mrb_Git_ReflogEntry_init(mrb_state* mrb);
#endif
#if BIND_Refspec_TYPE
void mrb_Git_Refspec_init(mrb_state* mrb);
#endif
#if BIND_Remote_TYPE
void mrb_Git_Remote_init(mrb_state* mrb);
#endif
#if BIND_RemoteCallbacks_TYPE
void mrb_Git_RemoteCallbacks_init(mrb_state* mrb);
#endif
#if BIND_RemoteHead_TYPE
void mrb_Git_RemoteHead_init(mrb_state* mrb);
#endif
#if BIND_Repository_TYPE
void mrb_Git_Repository_init(mrb_state* mrb);
#endif
#if BIND_RepositoryInitOptions_TYPE
void mrb_Git_RepositoryInitOptions_init(mrb_state* mrb);
#endif
#if BIND_RevertOptions_TYPE
void mrb_Git_RevertOptions_init(mrb_state* mrb);
#endif
#if BIND_Revspec_TYPE
void mrb_Git_Revspec_init(mrb_state* mrb);
#endif
#if BIND_Revwalk_TYPE
void mrb_Git_Revwalk_init(mrb_state* mrb);
#endif
#if BIND_Signature_TYPE
void mrb_Git_Signature_init(mrb_state* mrb);
#endif
#if BIND_StashApplyOptions_TYPE
void mrb_Git_StashApplyOptions_init(mrb_state* mrb);
#endif
#if BIND_StatusEntry_TYPE
void mrb_Git_StatusEntry_init(mrb_state* mrb);
#endif
#if BIND_StatusList_TYPE
void mrb_Git_StatusList_init(mrb_state* mrb);
#endif
#if BIND_StatusOptions_TYPE
void mrb_Git_StatusOptions_init(mrb_state* mrb);
#endif
#if BIND_Strarray_TYPE
void mrb_Git_Strarray_init(mrb_state* mrb);
#endif
#if BIND_Submodule_TYPE
void mrb_Git_Submodule_init(mrb_state* mrb);
#endif
#if BIND_SubmoduleUpdateOptions_TYPE
void mrb_Git_SubmoduleUpdateOptions_init(mrb_state* mrb);
#endif
#if BIND_Tag_TYPE
void mrb_Git_Tag_init(mrb_state* mrb);
#endif
#if BIND_Time_TYPE
void mrb_Git_Time_init(mrb_state* mrb);
#endif
#if BIND_Transaction_TYPE
void mrb_Git_Transaction_init(mrb_state* mrb);
#endif
#if BIND_TransferProgress_TYPE
void mrb_Git_TransferProgress_init(mrb_state* mrb);
#endif
#if BIND_Transport_TYPE
void mrb_Git_Transport_init(mrb_state* mrb);
#endif
#if BIND_Tree_TYPE
void mrb_Git_Tree_init(mrb_state* mrb);
#endif
#if BIND_Treebuilder_TYPE
void mrb_Git_Treebuilder_init(mrb_state* mrb);
#endif
#if BIND_TreeEntry_TYPE
void mrb_Git_TreeEntry_init(mrb_state* mrb);
#endif
#if BIND_Writestream_TYPE
void mrb_Git_Writestream_init(mrb_state* mrb);
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: post_class_init_decls */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/*
 * Macro & Enum definition function declarations
 * ---------------------------------------------
 */
void mruby_Git_define_macro_constants(mrb_state* mrb);
void mruby_Git_define_enum_constants(mrb_state* mrb);

#endif
