/*
 * Boxing Code (Generated)
 * =======================
 *
 * The code generator learns the data types declared in the C/C++ source files
 * it is run against, and generates this boxing, unboxing, and GC code.
 * 
 * Terms
 * ------
 *
 * ### Boxing
 * In general refers to wrapping a native object in an mrb_value.
 * 
 * ### Gift Wrapping
 * A specific type of boxing, indicating that the object belongs
 * to Ruby and should be free'd when the mrb_value is GC'ed.
 * 
 * ### Unboxing
 * Retrieving the wrapped native object from an mrb_value.
 *
 * Customizing
 * -----------
 * 
 * By default, all data types are assumed to be destructable by the `free`
 * function. To use a custom destructor for your type, tell CTypes with
 * `CTypes.set_destructor`.
 *
 * Example
 * ```
 * // I have `struct GError` objects from glib,
 * // which should be freed with `g_error_free`
 * CTypes.set_destructor('struct GError', 'g_error_free')
 * ```
 */
#include "mruby_Git.h"

/* MRUBY_BINDING: header */
/* sha: user_defined */

/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2SESSION_boxing */
/* sha: 10c9a71be354d9d8fa14e8153a3cab93507d28142ef736d47a64d721679374ee */
#if BIND_LIBSSH2SESSION_TYPE
/*
 * Boxing implementation for LIBSSH2_SESSION
 */

static void free_LIBSSH2_SESSION(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type LIBSSH2_SESSION_data_type = {
   "LIBSSH2_SESSION", free_LIBSSH2_SESSION
};

mrb_value
mruby_box_LIBSSH2_SESSION(mrb_state* mrb, LIBSSH2_SESSION *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, LIBSSH2SESSION_class(mrb), &LIBSSH2_SESSION_data_type, box));
}

mrb_value
mruby_giftwrap_LIBSSH2_SESSION(mrb_state* mrb, LIBSSH2_SESSION *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, LIBSSH2SESSION_class(mrb), &LIBSSH2_SESSION_data_type, box));
}

void
mruby_set_LIBSSH2_SESSION_data_ptr(mrb_value obj, LIBSSH2_SESSION *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &LIBSSH2_SESSION_data_type);
}

void
mruby_gift_LIBSSH2_SESSION_data_ptr(mrb_value obj, LIBSSH2_SESSION *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &LIBSSH2_SESSION_data_type);
}

LIBSSH2_SESSION *
mruby_unbox_LIBSSH2_SESSION(mrb_value boxed) {
  return (LIBSSH2_SESSION *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTPROMPT_boxing */
/* sha: 4028e45bf69690626696c4e1809f079858d1f7cd894a17d0b4bcad1e4caf6f75 */
#if BIND_LIBSSH2USERAUTHKBDINTPROMPT_TYPE
/*
 * Boxing implementation for LIBSSH2_USERAUTH_KBDINT_PROMPT
 */

static void free_LIBSSH2_USERAUTH_KBDINT_PROMPT(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type LIBSSH2_USERAUTH_KBDINT_PROMPT_data_type = {
   "LIBSSH2_USERAUTH_KBDINT_PROMPT", free_LIBSSH2_USERAUTH_KBDINT_PROMPT
};

mrb_value
mruby_box_LIBSSH2_USERAUTH_KBDINT_PROMPT(mrb_state* mrb, LIBSSH2_USERAUTH_KBDINT_PROMPT *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, LIBSSH2USERAUTHKBDINTPROMPT_class(mrb), &LIBSSH2_USERAUTH_KBDINT_PROMPT_data_type, box));
}

mrb_value
mruby_giftwrap_LIBSSH2_USERAUTH_KBDINT_PROMPT(mrb_state* mrb, LIBSSH2_USERAUTH_KBDINT_PROMPT *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, LIBSSH2USERAUTHKBDINTPROMPT_class(mrb), &LIBSSH2_USERAUTH_KBDINT_PROMPT_data_type, box));
}

void
mruby_set_LIBSSH2_USERAUTH_KBDINT_PROMPT_data_ptr(mrb_value obj, LIBSSH2_USERAUTH_KBDINT_PROMPT *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &LIBSSH2_USERAUTH_KBDINT_PROMPT_data_type);
}

void
mruby_gift_LIBSSH2_USERAUTH_KBDINT_PROMPT_data_ptr(mrb_value obj, LIBSSH2_USERAUTH_KBDINT_PROMPT *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &LIBSSH2_USERAUTH_KBDINT_PROMPT_data_type);
}

LIBSSH2_USERAUTH_KBDINT_PROMPT *
mruby_unbox_LIBSSH2_USERAUTH_KBDINT_PROMPT(mrb_value boxed) {
  return (LIBSSH2_USERAUTH_KBDINT_PROMPT *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: LIBSSH2USERAUTHKBDINTRESPONSE_boxing */
/* sha: eb5edb5c800383529f6d91dd60774b3f81bea6d6418c5a5888211fbb57eac433 */
#if BIND_LIBSSH2USERAUTHKBDINTRESPONSE_TYPE
/*
 * Boxing implementation for LIBSSH2_USERAUTH_KBDINT_RESPONSE
 */

static void free_LIBSSH2_USERAUTH_KBDINT_RESPONSE(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type LIBSSH2_USERAUTH_KBDINT_RESPONSE_data_type = {
   "LIBSSH2_USERAUTH_KBDINT_RESPONSE", free_LIBSSH2_USERAUTH_KBDINT_RESPONSE
};

mrb_value
mruby_box_LIBSSH2_USERAUTH_KBDINT_RESPONSE(mrb_state* mrb, LIBSSH2_USERAUTH_KBDINT_RESPONSE *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, LIBSSH2USERAUTHKBDINTRESPONSE_class(mrb), &LIBSSH2_USERAUTH_KBDINT_RESPONSE_data_type, box));
}

mrb_value
mruby_giftwrap_LIBSSH2_USERAUTH_KBDINT_RESPONSE(mrb_state* mrb, LIBSSH2_USERAUTH_KBDINT_RESPONSE *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, LIBSSH2USERAUTHKBDINTRESPONSE_class(mrb), &LIBSSH2_USERAUTH_KBDINT_RESPONSE_data_type, box));
}

void
mruby_set_LIBSSH2_USERAUTH_KBDINT_RESPONSE_data_ptr(mrb_value obj, LIBSSH2_USERAUTH_KBDINT_RESPONSE *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &LIBSSH2_USERAUTH_KBDINT_RESPONSE_data_type);
}

void
mruby_gift_LIBSSH2_USERAUTH_KBDINT_RESPONSE_data_ptr(mrb_value obj, LIBSSH2_USERAUTH_KBDINT_RESPONSE *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &LIBSSH2_USERAUTH_KBDINT_RESPONSE_data_type);
}

LIBSSH2_USERAUTH_KBDINT_RESPONSE *
mruby_unbox_LIBSSH2_USERAUTH_KBDINT_RESPONSE(mrb_value boxed) {
  return (LIBSSH2_USERAUTH_KBDINT_RESPONSE *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: AnnotatedCommit_boxing */
/* sha: b5a222f2c779d4aa1db8ae72944ed021c9c1183b14f0293f4159134cf3cc042d */
#if BIND_AnnotatedCommit_TYPE
/*
 * Boxing implementation for git_annotated_commit
 */

static void free_git_annotated_commit(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_annotated_commit_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_annotated_commit_data_type = {
   "git_annotated_commit", free_git_annotated_commit
};

mrb_value
mruby_box_git_annotated_commit(mrb_state* mrb, git_annotated_commit *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, AnnotatedCommit_class(mrb), &git_annotated_commit_data_type, box));
}

mrb_value
mruby_giftwrap_git_annotated_commit(mrb_state* mrb, git_annotated_commit *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, AnnotatedCommit_class(mrb), &git_annotated_commit_data_type, box));
}

void
mruby_set_git_annotated_commit_data_ptr(mrb_value obj, git_annotated_commit *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_annotated_commit_data_type);
}

void
mruby_gift_git_annotated_commit_data_ptr(mrb_value obj, git_annotated_commit *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_annotated_commit_data_type);
}

git_annotated_commit *
mruby_unbox_git_annotated_commit(mrb_value boxed) {
  return (git_annotated_commit *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blame_boxing */
/* sha: 752fc0b20412bdb26474ed22df06222e44b7eeb6588b30d1c9c743cfd36bf016 */
#if BIND_Blame_TYPE
/*
 * Boxing implementation for git_blame
 */

static void free_git_blame(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_blame_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_blame_data_type = {
   "git_blame", free_git_blame
};

mrb_value
mruby_box_git_blame(mrb_state* mrb, git_blame *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Blame_class(mrb), &git_blame_data_type, box));
}

mrb_value
mruby_giftwrap_git_blame(mrb_state* mrb, git_blame *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Blame_class(mrb), &git_blame_data_type, box));
}

void
mruby_set_git_blame_data_ptr(mrb_value obj, git_blame *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_blame_data_type);
}

void
mruby_gift_git_blame_data_ptr(mrb_value obj, git_blame *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_blame_data_type);
}

git_blame *
mruby_unbox_git_blame(mrb_value boxed) {
  return (git_blame *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameHunk_boxing */
/* sha: 4ed6b5dae5c99f6ab8cee1b464fd3f5d8e327a93aee1edb5b0b33b0c91332c2e */
#if BIND_BlameHunk_TYPE
/*
 * Boxing implementation for git_blame_hunk
 */

static void free_git_blame_hunk(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_blame_hunk_data_type = {
   "git_blame_hunk", free_git_blame_hunk
};

mrb_value
mruby_box_git_blame_hunk(mrb_state* mrb, git_blame_hunk *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, BlameHunk_class(mrb), &git_blame_hunk_data_type, box));
}

mrb_value
mruby_giftwrap_git_blame_hunk(mrb_state* mrb, git_blame_hunk *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, BlameHunk_class(mrb), &git_blame_hunk_data_type, box));
}

void
mruby_set_git_blame_hunk_data_ptr(mrb_value obj, git_blame_hunk *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_blame_hunk_data_type);
}

void
mruby_gift_git_blame_hunk_data_ptr(mrb_value obj, git_blame_hunk *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_blame_hunk_data_type);
}

git_blame_hunk *
mruby_unbox_git_blame_hunk(mrb_value boxed) {
  return (git_blame_hunk *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BlameOptions_boxing */
/* sha: 2afe1565832e8d54130ec6c30b229cd883bcfb1ec1f279fca944d0f8f4e63509 */
#if BIND_BlameOptions_TYPE
/*
 * Boxing implementation for git_blame_options
 */

static void free_git_blame_options(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_blame_options_data_type = {
   "git_blame_options", free_git_blame_options
};

mrb_value
mruby_box_git_blame_options(mrb_state* mrb, git_blame_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, BlameOptions_class(mrb), &git_blame_options_data_type, box));
}

mrb_value
mruby_giftwrap_git_blame_options(mrb_state* mrb, git_blame_options *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, BlameOptions_class(mrb), &git_blame_options_data_type, box));
}

void
mruby_set_git_blame_options_data_ptr(mrb_value obj, git_blame_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_blame_options_data_type);
}

void
mruby_gift_git_blame_options_data_ptr(mrb_value obj, git_blame_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_blame_options_data_type);
}

git_blame_options *
mruby_unbox_git_blame_options(mrb_value boxed) {
  return (git_blame_options *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Blob_boxing */
/* sha: 1c298ec78135dba0e23e8b0dd2e75a3f5bd171395a29f863620a49a68a68556c */
#if BIND_Blob_TYPE
/*
 * Boxing implementation for git_blob
 */

static void free_git_blob(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_blob_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_blob_data_type = {
   "git_blob", free_git_blob
};

mrb_value
mruby_box_git_blob(mrb_state* mrb, git_blob *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Blob_class(mrb), &git_blob_data_type, box));
}

mrb_value
mruby_giftwrap_git_blob(mrb_state* mrb, git_blob *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Blob_class(mrb), &git_blob_data_type, box));
}

void
mruby_set_git_blob_data_ptr(mrb_value obj, git_blob *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_blob_data_type);
}

void
mruby_gift_git_blob_data_ptr(mrb_value obj, git_blob *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_blob_data_type);
}

git_blob *
mruby_unbox_git_blob(mrb_value boxed) {
  return (git_blob *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: BranchIterator_boxing */
/* sha: 1027954d3ad51e05ca5acb38698bfe851821671257b7b9d6cfca3a90d1340cce */
#if BIND_BranchIterator_TYPE
/*
 * Boxing implementation for git_branch_iterator
 */

static void free_git_branch_iterator(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_branch_iterator_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_branch_iterator_data_type = {
   "git_branch_iterator", free_git_branch_iterator
};

mrb_value
mruby_box_git_branch_iterator(mrb_state* mrb, git_branch_iterator *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, BranchIterator_class(mrb), &git_branch_iterator_data_type, box));
}

mrb_value
mruby_giftwrap_git_branch_iterator(mrb_state* mrb, git_branch_iterator *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, BranchIterator_class(mrb), &git_branch_iterator_data_type, box));
}

void
mruby_set_git_branch_iterator_data_ptr(mrb_value obj, git_branch_iterator *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_branch_iterator_data_type);
}

void
mruby_gift_git_branch_iterator_data_ptr(mrb_value obj, git_branch_iterator *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_branch_iterator_data_type);
}

git_branch_iterator *
mruby_unbox_git_branch_iterator(mrb_value boxed) {
  return (git_branch_iterator *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Buf_boxing */
/* sha: 96dcaccf591d705e7619f3c8920a4c1b1c17187db35bab410b3f7782c39948a5 */
#if BIND_Buf_TYPE
/*
 * Boxing implementation for git_buf
 */

static void free_git_buf(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_buf_free(box->obj);
      /* git_buf_gree does not free the object, only its contents */
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_buf_data_type = {
   "git_buf", free_git_buf
};

mrb_value
mruby_box_git_buf(mrb_state* mrb, git_buf *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Buf_class(mrb), &git_buf_data_type, box));
}

mrb_value
mruby_giftwrap_git_buf(mrb_state* mrb, git_buf *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Buf_class(mrb), &git_buf_data_type, box));
}

void
mruby_set_git_buf_data_ptr(mrb_value obj, git_buf *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_buf_data_type);
}

void
mruby_gift_git_buf_data_ptr(mrb_value obj, git_buf *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_buf_data_type);
}

git_buf *
mruby_unbox_git_buf(mrb_value boxed) {
  return (git_buf *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cert_boxing */
/* sha: 8a738ccf35b0bad0815640021a5d2d862bedbbad0b89933117f83192a9adbdda */
#if BIND_Cert_TYPE
/*
 * Boxing implementation for git_cert
 */

static void free_git_cert(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_cert_data_type = {
   "git_cert", free_git_cert
};

mrb_value
mruby_box_git_cert(mrb_state* mrb, git_cert *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Cert_class(mrb), &git_cert_data_type, box));
}

mrb_value
mruby_giftwrap_git_cert(mrb_state* mrb, git_cert *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Cert_class(mrb), &git_cert_data_type, box));
}

void
mruby_set_git_cert_data_ptr(mrb_value obj, git_cert *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cert_data_type);
}

void
mruby_gift_git_cert_data_ptr(mrb_value obj, git_cert *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cert_data_type);
}

git_cert *
mruby_unbox_git_cert(mrb_value boxed) {
  return (git_cert *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertHostkey_boxing */
/* sha: 02f1d3f55061c5d7f9e972279926751e503a2ac585f2d5cbb50add1a6659ee6a */
#if BIND_CertHostkey_TYPE
/*
 * Boxing implementation for git_cert_hostkey
 */

static void free_git_cert_hostkey(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_cert_hostkey_data_type = {
   "git_cert_hostkey", free_git_cert_hostkey
};

mrb_value
mruby_box_git_cert_hostkey(mrb_state* mrb, git_cert_hostkey *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, CertHostkey_class(mrb), &git_cert_hostkey_data_type, box));
}

mrb_value
mruby_giftwrap_git_cert_hostkey(mrb_state* mrb, git_cert_hostkey *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, CertHostkey_class(mrb), &git_cert_hostkey_data_type, box));
}

void
mruby_set_git_cert_hostkey_data_ptr(mrb_value obj, git_cert_hostkey *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cert_hostkey_data_type);
}

void
mruby_gift_git_cert_hostkey_data_ptr(mrb_value obj, git_cert_hostkey *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cert_hostkey_data_type);
}

git_cert_hostkey *
mruby_unbox_git_cert_hostkey(mrb_value boxed) {
  return (git_cert_hostkey *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CertX509_boxing */
/* sha: 8e250fdaa876452a97035635fe016167b1e67a369437ca444e830ee5e1345849 */
#if BIND_CertX509_TYPE
/*
 * Boxing implementation for git_cert_x509
 */

static void free_git_cert_x509(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_cert_x509_data_type = {
   "git_cert_x509", free_git_cert_x509
};

mrb_value
mruby_box_git_cert_x509(mrb_state* mrb, git_cert_x509 *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, CertX509_class(mrb), &git_cert_x509_data_type, box));
}

mrb_value
mruby_giftwrap_git_cert_x509(mrb_state* mrb, git_cert_x509 *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, CertX509_class(mrb), &git_cert_x509_data_type, box));
}

void
mruby_set_git_cert_x509_data_ptr(mrb_value obj, git_cert_x509 *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cert_x509_data_type);
}

void
mruby_gift_git_cert_x509_data_ptr(mrb_value obj, git_cert_x509 *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cert_x509_data_type);
}

git_cert_x509 *
mruby_unbox_git_cert_x509(mrb_value boxed) {
  return (git_cert_x509 *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutOptions_boxing */
/* sha: 00536647e9f12906cb021f44ae0438b8e98d386ad7b512bd28257dbaa1d14adc */
#if BIND_CheckoutOptions_TYPE
/*
 * Boxing implementation for git_checkout_options
 */

static void free_git_checkout_options(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_checkout_options_data_type = {
   "git_checkout_options", free_git_checkout_options
};

mrb_value
mruby_box_git_checkout_options(mrb_state* mrb, git_checkout_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, CheckoutOptions_class(mrb), &git_checkout_options_data_type, box));
}

mrb_value
mruby_giftwrap_git_checkout_options(mrb_state* mrb, git_checkout_options *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, CheckoutOptions_class(mrb), &git_checkout_options_data_type, box));
}

void
mruby_set_git_checkout_options_data_ptr(mrb_value obj, git_checkout_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_checkout_options_data_type);
}

void
mruby_gift_git_checkout_options_data_ptr(mrb_value obj, git_checkout_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_checkout_options_data_type);
}

git_checkout_options *
mruby_unbox_git_checkout_options(mrb_value boxed) {
  return (git_checkout_options *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CheckoutPerfdata_boxing */
/* sha: 5af2169f3afbf9ed4d2a387dcd6671463399c83e3160c797931ca4aa3489014f */
#if BIND_CheckoutPerfdata_TYPE
/*
 * Boxing implementation for git_checkout_perfdata
 */

static void free_git_checkout_perfdata(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_checkout_perfdata_data_type = {
   "git_checkout_perfdata", free_git_checkout_perfdata
};

mrb_value
mruby_box_git_checkout_perfdata(mrb_state* mrb, git_checkout_perfdata *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, CheckoutPerfdata_class(mrb), &git_checkout_perfdata_data_type, box));
}

mrb_value
mruby_giftwrap_git_checkout_perfdata(mrb_state* mrb, git_checkout_perfdata *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, CheckoutPerfdata_class(mrb), &git_checkout_perfdata_data_type, box));
}

void
mruby_set_git_checkout_perfdata_data_ptr(mrb_value obj, git_checkout_perfdata *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_checkout_perfdata_data_type);
}

void
mruby_gift_git_checkout_perfdata_data_ptr(mrb_value obj, git_checkout_perfdata *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_checkout_perfdata_data_type);
}

git_checkout_perfdata *
mruby_unbox_git_checkout_perfdata(mrb_value boxed) {
  return (git_checkout_perfdata *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CherrypickOptions_boxing */
/* sha: f1df27d3f3e75b3cf6ced6c503e0e6d415dac4cde2f918a20bc9be323597b57e */
#if BIND_CherrypickOptions_TYPE
/*
 * Boxing implementation for git_cherrypick_options
 */

static void free_git_cherrypick_options(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_cherrypick_options_data_type = {
   "git_cherrypick_options", free_git_cherrypick_options
};

mrb_value
mruby_box_git_cherrypick_options(mrb_state* mrb, git_cherrypick_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, CherrypickOptions_class(mrb), &git_cherrypick_options_data_type, box));
}

mrb_value
mruby_giftwrap_git_cherrypick_options(mrb_state* mrb, git_cherrypick_options *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, CherrypickOptions_class(mrb), &git_cherrypick_options_data_type, box));
}

void
mruby_set_git_cherrypick_options_data_ptr(mrb_value obj, git_cherrypick_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cherrypick_options_data_type);
}

void
mruby_gift_git_cherrypick_options_data_ptr(mrb_value obj, git_cherrypick_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cherrypick_options_data_type);
}

git_cherrypick_options *
mruby_unbox_git_cherrypick_options(mrb_value boxed) {
  return (git_cherrypick_options *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CloneOptions_boxing */
/* sha: fd972cd82250827b7176681bb02207f6e20aea3c7916b5746588fa44b3cf4ff8 */
#if BIND_CloneOptions_TYPE
/*
 * Boxing implementation for git_clone_options
 */

static void free_git_clone_options(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_clone_options_data_type = {
   "git_clone_options", free_git_clone_options
};

mrb_value
mruby_box_git_clone_options(mrb_state* mrb, git_clone_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, CloneOptions_class(mrb), &git_clone_options_data_type, box));
}

mrb_value
mruby_giftwrap_git_clone_options(mrb_state* mrb, git_clone_options *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, CloneOptions_class(mrb), &git_clone_options_data_type, box));
}

void
mruby_set_git_clone_options_data_ptr(mrb_value obj, git_clone_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_clone_options_data_type);
}

void
mruby_gift_git_clone_options_data_ptr(mrb_value obj, git_clone_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_clone_options_data_type);
}

git_clone_options *
mruby_unbox_git_clone_options(mrb_value boxed) {
  return (git_clone_options *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Commit_boxing */
/* sha: 0a8955d015ff3d2308da8fd5baffb92e2dc40d336d850c084768be21d2d5c0da */
#if BIND_Commit_TYPE
/*
 * Boxing implementation for git_commit
 */

static void free_git_commit(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_commit_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_commit_data_type = {
   "git_commit", free_git_commit
};

mrb_value
mruby_box_git_commit(mrb_state* mrb, git_commit *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Commit_class(mrb), &git_commit_data_type, box));
}

mrb_value
mruby_giftwrap_git_commit(mrb_state* mrb, git_commit *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Commit_class(mrb), &git_commit_data_type, box));
}

void
mruby_set_git_commit_data_ptr(mrb_value obj, git_commit *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_commit_data_type);
}

void
mruby_gift_git_commit_data_ptr(mrb_value obj, git_commit *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_commit_data_type);
}

git_commit *
mruby_unbox_git_commit(mrb_value boxed) {
  return (git_commit *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Config_boxing */
/* sha: 4c3b3922f2e87579f559ff728e96214a750713d98f28eb8eea854e9abdd5fe02 */
#if BIND_Config_TYPE
/*
 * Boxing implementation for git_config
 */

static void free_git_config(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_config_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_config_data_type = {
   "git_config", free_git_config
};

mrb_value
mruby_box_git_config(mrb_state* mrb, git_config *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Config_class(mrb), &git_config_data_type, box));
}

mrb_value
mruby_giftwrap_git_config(mrb_state* mrb, git_config *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Config_class(mrb), &git_config_data_type, box));
}

void
mruby_set_git_config_data_ptr(mrb_value obj, git_config *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_config_data_type);
}

void
mruby_gift_git_config_data_ptr(mrb_value obj, git_config *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_config_data_type);
}

git_config *
mruby_unbox_git_config(mrb_value boxed) {
  return (git_config *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigBackend_boxing */
/* sha: b5673f33193c046a051e8a81e7c2cada0fb53e04d4649fc023c1a1eace95b9ef */
#if BIND_ConfigBackend_TYPE
/*
 * Boxing implementation for git_config_backend
 */

static void free_git_config_backend(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_config_backend_data_type = {
   "git_config_backend", free_git_config_backend
};

mrb_value
mruby_box_git_config_backend(mrb_state* mrb, git_config_backend *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, ConfigBackend_class(mrb), &git_config_backend_data_type, box));
}

mrb_value
mruby_giftwrap_git_config_backend(mrb_state* mrb, git_config_backend *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, ConfigBackend_class(mrb), &git_config_backend_data_type, box));
}

void
mruby_set_git_config_backend_data_ptr(mrb_value obj, git_config_backend *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_config_backend_data_type);
}

void
mruby_gift_git_config_backend_data_ptr(mrb_value obj, git_config_backend *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_config_backend_data_type);
}

git_config_backend *
mruby_unbox_git_config_backend(mrb_value boxed) {
  return (git_config_backend *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigEntry_boxing */
/* sha: 5f6e75bc325e1c9e43c82fd5a6ee686dac271895b9be5117dc67734c31641c48 */
#if BIND_ConfigEntry_TYPE
/*
 * Boxing implementation for git_config_entry
 */

static void free_git_config_entry(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_config_entry_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_config_entry_data_type = {
   "git_config_entry", free_git_config_entry
};

mrb_value
mruby_box_git_config_entry(mrb_state* mrb, git_config_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, ConfigEntry_class(mrb), &git_config_entry_data_type, box));
}

mrb_value
mruby_giftwrap_git_config_entry(mrb_state* mrb, git_config_entry *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, ConfigEntry_class(mrb), &git_config_entry_data_type, box));
}

void
mruby_set_git_config_entry_data_ptr(mrb_value obj, git_config_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_config_entry_data_type);
}

void
mruby_gift_git_config_entry_data_ptr(mrb_value obj, git_config_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_config_entry_data_type);
}

git_config_entry *
mruby_unbox_git_config_entry(mrb_value boxed) {
  return (git_config_entry *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ConfigIterator_boxing */
/* sha: cf5b049516ae757496615b782820529552e48fd5154e6faf0081d31d2f17cdf3 */
#if BIND_ConfigIterator_TYPE
/*
 * Boxing implementation for git_config_iterator
 */

static void free_git_config_iterator(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_config_iterator_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_config_iterator_data_type = {
   "git_config_iterator", free_git_config_iterator
};

mrb_value
mruby_box_git_config_iterator(mrb_state* mrb, git_config_iterator *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, ConfigIterator_class(mrb), &git_config_iterator_data_type, box));
}

mrb_value
mruby_giftwrap_git_config_iterator(mrb_state* mrb, git_config_iterator *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, ConfigIterator_class(mrb), &git_config_iterator_data_type, box));
}

void
mruby_set_git_config_iterator_data_ptr(mrb_value obj, git_config_iterator *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_config_iterator_data_type);
}

void
mruby_gift_git_config_iterator_data_ptr(mrb_value obj, git_config_iterator *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_config_iterator_data_type);
}

git_config_iterator *
mruby_unbox_git_config_iterator(mrb_value boxed) {
  return (git_config_iterator *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Cred_boxing */
/* sha: ba1497ff5afa23dd3edd852d894924d30d989b9cf5365210a6dede67b3df23ba */
#if BIND_Cred_TYPE
/*
 * Boxing implementation for git_cred
 */

static void free_git_cred(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_cred_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_cred_data_type = {
   "git_cred", free_git_cred
};

mrb_value
mruby_box_git_cred(mrb_state* mrb, git_cred *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Cred_class(mrb), &git_cred_data_type, box));
}

mrb_value
mruby_giftwrap_git_cred(mrb_state* mrb, git_cred *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Cred_class(mrb), &git_cred_data_type, box));
}

void
mruby_set_git_cred_data_ptr(mrb_value obj, git_cred *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cred_data_type);
}

void
mruby_gift_git_cred_data_ptr(mrb_value obj, git_cred *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cred_data_type);
}

git_cred *
mruby_unbox_git_cred(mrb_value boxed) {
  return (git_cred *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshCustom_boxing */
/* sha: 9590fc6d5ff49ae22328e31e0415bec937b4a6850338f63b0f7683e6ffac8c45 */
#if BIND_CredSshCustom_TYPE
/*
 * Boxing implementation for git_cred_ssh_custom
 */

static void free_git_cred_ssh_custom(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_cred_ssh_custom_data_type = {
   "git_cred_ssh_custom", free_git_cred_ssh_custom
};

mrb_value
mruby_box_git_cred_ssh_custom(mrb_state* mrb, git_cred_ssh_custom *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, CredSshCustom_class(mrb), &git_cred_ssh_custom_data_type, box));
}

mrb_value
mruby_giftwrap_git_cred_ssh_custom(mrb_state* mrb, git_cred_ssh_custom *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, CredSshCustom_class(mrb), &git_cred_ssh_custom_data_type, box));
}

void
mruby_set_git_cred_ssh_custom_data_ptr(mrb_value obj, git_cred_ssh_custom *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cred_ssh_custom_data_type);
}

void
mruby_gift_git_cred_ssh_custom_data_ptr(mrb_value obj, git_cred_ssh_custom *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cred_ssh_custom_data_type);
}

git_cred_ssh_custom *
mruby_unbox_git_cred_ssh_custom(mrb_value boxed) {
  return (git_cred_ssh_custom *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshInteractive_boxing */
/* sha: 492e2f9559359ad5ed52e81edb4eb52f9b8a5008c749beef5c8e1599b4e576b9 */
#if BIND_CredSshInteractive_TYPE
/*
 * Boxing implementation for git_cred_ssh_interactive
 */

static void free_git_cred_ssh_interactive(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_cred_ssh_interactive_data_type = {
   "git_cred_ssh_interactive", free_git_cred_ssh_interactive
};

mrb_value
mruby_box_git_cred_ssh_interactive(mrb_state* mrb, git_cred_ssh_interactive *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, CredSshInteractive_class(mrb), &git_cred_ssh_interactive_data_type, box));
}

mrb_value
mruby_giftwrap_git_cred_ssh_interactive(mrb_state* mrb, git_cred_ssh_interactive *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, CredSshInteractive_class(mrb), &git_cred_ssh_interactive_data_type, box));
}

void
mruby_set_git_cred_ssh_interactive_data_ptr(mrb_value obj, git_cred_ssh_interactive *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cred_ssh_interactive_data_type);
}

void
mruby_gift_git_cred_ssh_interactive_data_ptr(mrb_value obj, git_cred_ssh_interactive *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cred_ssh_interactive_data_type);
}

git_cred_ssh_interactive *
mruby_unbox_git_cred_ssh_interactive(mrb_value boxed) {
  return (git_cred_ssh_interactive *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredSshKey_boxing */
/* sha: 7bbf72c23826af928b3f656195c8a60396218903e01abfbaac15b6473488001d */
#if BIND_CredSshKey_TYPE
/*
 * Boxing implementation for git_cred_ssh_key
 */

static void free_git_cred_ssh_key(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_cred_ssh_key_data_type = {
   "git_cred_ssh_key", free_git_cred_ssh_key
};

mrb_value
mruby_box_git_cred_ssh_key(mrb_state* mrb, git_cred_ssh_key *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, CredSshKey_class(mrb), &git_cred_ssh_key_data_type, box));
}

mrb_value
mruby_giftwrap_git_cred_ssh_key(mrb_state* mrb, git_cred_ssh_key *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, CredSshKey_class(mrb), &git_cred_ssh_key_data_type, box));
}

void
mruby_set_git_cred_ssh_key_data_ptr(mrb_value obj, git_cred_ssh_key *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cred_ssh_key_data_type);
}

void
mruby_gift_git_cred_ssh_key_data_ptr(mrb_value obj, git_cred_ssh_key *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cred_ssh_key_data_type);
}

git_cred_ssh_key *
mruby_unbox_git_cred_ssh_key(mrb_value boxed) {
  return (git_cred_ssh_key *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUsername_boxing */
/* sha: 8f4058ceb031956408940cc5ea89e6e04960db1eda50566cabb92343fe6ed29a */
#if BIND_CredUsername_TYPE
/*
 * Boxing implementation for git_cred_username
 */

static void free_git_cred_username(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_cred_username_data_type = {
   "git_cred_username", free_git_cred_username
};

mrb_value
mruby_box_git_cred_username(mrb_state* mrb, git_cred_username *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, CredUsername_class(mrb), &git_cred_username_data_type, box));
}

mrb_value
mruby_giftwrap_git_cred_username(mrb_state* mrb, git_cred_username *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, CredUsername_class(mrb), &git_cred_username_data_type, box));
}

void
mruby_set_git_cred_username_data_ptr(mrb_value obj, git_cred_username *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cred_username_data_type);
}

void
mruby_gift_git_cred_username_data_ptr(mrb_value obj, git_cred_username *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cred_username_data_type);
}

git_cred_username *
mruby_unbox_git_cred_username(mrb_value boxed) {
  return (git_cred_username *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPayload_boxing */
/* sha: 77efd58d5edacfa8a1c014f157e85595c11077876f3b46cfb23dd34ef2d557ec */
// #if BIND_CredUserpassPayload_TYPE
// /*
//  * Boxing implementation for git_cred_userpass_payload
//  */
// 
// static void free_git_cred_userpass_payload(mrb_state* mrb, void* ptr) {
//   mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
//   if (box->belongs_to_ruby) {
//     if (box->obj != NULL) {
//       free(box->obj);
//       box->obj = NULL;
//     }
//   }
//   free(box);
// }
// 
// static const mrb_data_type git_cred_userpass_payload_data_type = {
//    "git_cred_userpass_payload", free_git_cred_userpass_payload
// };
// 
// mrb_value
// mruby_box_git_cred_userpass_payload(mrb_state* mrb, git_cred_userpass_payload *unboxed) {
//   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
//   box->belongs_to_ruby = FALSE;
//   box->obj = unboxed;
//   return mrb_obj_value(Data_Wrap_Struct(mrb, CredUserpassPayload_class(mrb), &git_cred_userpass_payload_data_type, box));
// }
// 
// mrb_value
// mruby_giftwrap_git_cred_userpass_payload(mrb_state* mrb, git_cred_userpass_payload *unboxed) {
//    mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
//    box->belongs_to_ruby = TRUE;
//    box->obj = unboxed;
//    return mrb_obj_value(Data_Wrap_Struct(mrb, CredUserpassPayload_class(mrb), &git_cred_userpass_payload_data_type, box));
// }
// 
// void
// mruby_set_git_cred_userpass_payload_data_ptr(mrb_value obj, git_cred_userpass_payload *unboxed) {
//   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
//   box->belongs_to_ruby = FALSE;
//   box->obj = unboxed;
//   mrb_data_init(obj, box, &git_cred_userpass_payload_data_type);
// }
// 
// void
// mruby_gift_git_cred_userpass_payload_data_ptr(mrb_value obj, git_cred_userpass_payload *unboxed) {
//   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
//   box->belongs_to_ruby = TRUE;
//   box->obj = unboxed;
//   mrb_data_init(obj, box, &git_cred_userpass_payload_data_type);
// }
// 
// git_cred_userpass_payload *
// mruby_unbox_git_cred_userpass_payload(mrb_value boxed) {
//   return (git_cred_userpass_payload *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
// }
// #endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CredUserpassPlaintext_boxing */
/* sha: 6a2d415193177a6d967775fdda044e38a9d1e378c5b87fc72a1d5eb6b4d35a02 */
#if BIND_CredUserpassPlaintext_TYPE
/*
 * Boxing implementation for git_cred_userpass_plaintext
 */

static void free_git_cred_userpass_plaintext(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_cred_userpass_plaintext_data_type = {
   "git_cred_userpass_plaintext", free_git_cred_userpass_plaintext
};

mrb_value
mruby_box_git_cred_userpass_plaintext(mrb_state* mrb, git_cred_userpass_plaintext *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, CredUserpassPlaintext_class(mrb), &git_cred_userpass_plaintext_data_type, box));
}

mrb_value
mruby_giftwrap_git_cred_userpass_plaintext(mrb_state* mrb, git_cred_userpass_plaintext *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, CredUserpassPlaintext_class(mrb), &git_cred_userpass_plaintext_data_type, box));
}

void
mruby_set_git_cred_userpass_plaintext_data_ptr(mrb_value obj, git_cred_userpass_plaintext *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cred_userpass_plaintext_data_type);
}

void
mruby_gift_git_cred_userpass_plaintext_data_ptr(mrb_value obj, git_cred_userpass_plaintext *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cred_userpass_plaintext_data_type);
}

git_cred_userpass_plaintext *
mruby_unbox_git_cred_userpass_plaintext(mrb_value boxed) {
  return (git_cred_userpass_plaintext *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: CvarMap_boxing */
/* sha: b3bfde68a2d5608ea27e560abc75c3bce0d153e2925ab926ae1635de24915cce */
#if BIND_CvarMap_TYPE
/*
 * Boxing implementation for git_cvar_map
 */

static void free_git_cvar_map(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_cvar_map_data_type = {
   "git_cvar_map", free_git_cvar_map
};

mrb_value
mruby_box_git_cvar_map(mrb_state* mrb, git_cvar_map *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, CvarMap_class(mrb), &git_cvar_map_data_type, box));
}

mrb_value
mruby_giftwrap_git_cvar_map(mrb_state* mrb, git_cvar_map *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, CvarMap_class(mrb), &git_cvar_map_data_type, box));
}

void
mruby_set_git_cvar_map_data_ptr(mrb_value obj, git_cvar_map *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cvar_map_data_type);
}

void
mruby_gift_git_cvar_map_data_ptr(mrb_value obj, git_cvar_map *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_cvar_map_data_type);
}

git_cvar_map *
mruby_unbox_git_cvar_map(mrb_value boxed) {
  return (git_cvar_map *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeFormatOptions_boxing */
/* sha: c3ea66ae736b3a84badbd8c318df0e834b45251f8eb99c8dcd5aaf3ab9719dbe */
#if BIND_DescribeFormatOptions_TYPE
/*
 * Boxing implementation for git_describe_format_options
 */

static void free_git_describe_format_options(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_describe_format_options_data_type = {
   "git_describe_format_options", free_git_describe_format_options
};

mrb_value
mruby_box_git_describe_format_options(mrb_state* mrb, git_describe_format_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DescribeFormatOptions_class(mrb), &git_describe_format_options_data_type, box));
}

mrb_value
mruby_giftwrap_git_describe_format_options(mrb_state* mrb, git_describe_format_options *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DescribeFormatOptions_class(mrb), &git_describe_format_options_data_type, box));
}

void
mruby_set_git_describe_format_options_data_ptr(mrb_value obj, git_describe_format_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_describe_format_options_data_type);
}

void
mruby_gift_git_describe_format_options_data_ptr(mrb_value obj, git_describe_format_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_describe_format_options_data_type);
}

git_describe_format_options *
mruby_unbox_git_describe_format_options(mrb_value boxed) {
  return (git_describe_format_options *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeOptions_boxing */
/* sha: fc0e965510cf4e22a47be0fd7d563268334c6772d6d0a5340fb4c6ef23e2b3db */
#if BIND_DescribeOptions_TYPE
/*
 * Boxing implementation for git_describe_options
 */

static void free_git_describe_options(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_describe_options_data_type = {
   "git_describe_options", free_git_describe_options
};

mrb_value
mruby_box_git_describe_options(mrb_state* mrb, git_describe_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DescribeOptions_class(mrb), &git_describe_options_data_type, box));
}

mrb_value
mruby_giftwrap_git_describe_options(mrb_state* mrb, git_describe_options *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DescribeOptions_class(mrb), &git_describe_options_data_type, box));
}

void
mruby_set_git_describe_options_data_ptr(mrb_value obj, git_describe_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_describe_options_data_type);
}

void
mruby_gift_git_describe_options_data_ptr(mrb_value obj, git_describe_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_describe_options_data_type);
}

git_describe_options *
mruby_unbox_git_describe_options(mrb_value boxed) {
  return (git_describe_options *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DescribeResult_boxing */
/* sha: 212ef15c3114e3880ce82e9cd06dad28647160b33f0e278a9c45408eef3837e6 */
#if BIND_DescribeResult_TYPE
/*
 * Boxing implementation for git_describe_result
 */

static void free_git_describe_result(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_describe_result_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_describe_result_data_type = {
   "git_describe_result", free_git_describe_result
};

mrb_value
mruby_box_git_describe_result(mrb_state* mrb, git_describe_result *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DescribeResult_class(mrb), &git_describe_result_data_type, box));
}

mrb_value
mruby_giftwrap_git_describe_result(mrb_state* mrb, git_describe_result *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DescribeResult_class(mrb), &git_describe_result_data_type, box));
}

void
mruby_set_git_describe_result_data_ptr(mrb_value obj, git_describe_result *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_describe_result_data_type);
}

void
mruby_gift_git_describe_result_data_ptr(mrb_value obj, git_describe_result *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_describe_result_data_type);
}

git_describe_result *
mruby_unbox_git_describe_result(mrb_value boxed) {
  return (git_describe_result *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Diff_boxing */
/* sha: 0ccdc31a0b52fe8b7a97100a53c28bdbb9ebf125f921b9526df61f37ceb88356 */
#if BIND_Diff_TYPE
/*
 * Boxing implementation for git_diff
 */

static void free_git_diff(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_diff_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_diff_data_type = {
   "git_diff", free_git_diff
};

mrb_value
mruby_box_git_diff(mrb_state* mrb, git_diff *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Diff_class(mrb), &git_diff_data_type, box));
}

mrb_value
mruby_giftwrap_git_diff(mrb_state* mrb, git_diff *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Diff_class(mrb), &git_diff_data_type, box));
}

void
mruby_set_git_diff_data_ptr(mrb_value obj, git_diff *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_data_type);
}

void
mruby_gift_git_diff_data_ptr(mrb_value obj, git_diff *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_data_type);
}

git_diff *
mruby_unbox_git_diff(mrb_value boxed) {
  return (git_diff *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinary_boxing */
/* sha: 822be0dec2fa874c57a40253abd344a3a41fad383db9e9bff6d0e1f28a1b2a94 */
#if BIND_DiffBinary_TYPE
/*
 * Boxing implementation for git_diff_binary
 */

static void free_git_diff_binary(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_diff_binary_data_type = {
   "git_diff_binary", free_git_diff_binary
};

mrb_value
mruby_box_git_diff_binary(mrb_state* mrb, git_diff_binary *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DiffBinary_class(mrb), &git_diff_binary_data_type, box));
}

mrb_value
mruby_giftwrap_git_diff_binary(mrb_state* mrb, git_diff_binary *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DiffBinary_class(mrb), &git_diff_binary_data_type, box));
}

void
mruby_set_git_diff_binary_data_ptr(mrb_value obj, git_diff_binary *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_binary_data_type);
}

void
mruby_gift_git_diff_binary_data_ptr(mrb_value obj, git_diff_binary *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_binary_data_type);
}

git_diff_binary *
mruby_unbox_git_diff_binary(mrb_value boxed) {
  return (git_diff_binary *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffBinaryFile_boxing */
/* sha: 08a1db1f41f03c8a89852db8b48b3c653f64a4788ddf315d3194cdb88ce8a923 */
#if BIND_DiffBinaryFile_TYPE
/*
 * Boxing implementation for git_diff_binary_file
 */

static void free_git_diff_binary_file(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_diff_binary_file_data_type = {
   "git_diff_binary_file", free_git_diff_binary_file
};

mrb_value
mruby_box_git_diff_binary_file(mrb_state* mrb, git_diff_binary_file *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DiffBinaryFile_class(mrb), &git_diff_binary_file_data_type, box));
}

mrb_value
mruby_giftwrap_git_diff_binary_file(mrb_state* mrb, git_diff_binary_file *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DiffBinaryFile_class(mrb), &git_diff_binary_file_data_type, box));
}

void
mruby_set_git_diff_binary_file_data_ptr(mrb_value obj, git_diff_binary_file *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_binary_file_data_type);
}

void
mruby_gift_git_diff_binary_file_data_ptr(mrb_value obj, git_diff_binary_file *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_binary_file_data_type);
}

git_diff_binary_file *
mruby_unbox_git_diff_binary_file(mrb_value boxed) {
  return (git_diff_binary_file *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffDelta_boxing */
/* sha: 92fc0a70e9edaf1534c65e0e0e1aed2d88f8ea2e78425d9821333fc339f884e7 */
#if BIND_DiffDelta_TYPE
/*
 * Boxing implementation for git_diff_delta
 */

static void free_git_diff_delta(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_diff_delta_data_type = {
   "git_diff_delta", free_git_diff_delta
};

mrb_value
mruby_box_git_diff_delta(mrb_state* mrb, git_diff_delta *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DiffDelta_class(mrb), &git_diff_delta_data_type, box));
}

mrb_value
mruby_giftwrap_git_diff_delta(mrb_state* mrb, git_diff_delta *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DiffDelta_class(mrb), &git_diff_delta_data_type, box));
}

void
mruby_set_git_diff_delta_data_ptr(mrb_value obj, git_diff_delta *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_delta_data_type);
}

void
mruby_gift_git_diff_delta_data_ptr(mrb_value obj, git_diff_delta *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_delta_data_type);
}

git_diff_delta *
mruby_unbox_git_diff_delta(mrb_value boxed) {
  return (git_diff_delta *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFile_boxing */
/* sha: b67e83b755e76d19dee1d78ad21eb85b07739d83864cbad42cf3d58160d6776f */
#if BIND_DiffFile_TYPE
/*
 * Boxing implementation for git_diff_file
 */

static void free_git_diff_file(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_diff_file_data_type = {
   "git_diff_file", free_git_diff_file
};

mrb_value
mruby_box_git_diff_file(mrb_state* mrb, git_diff_file *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DiffFile_class(mrb), &git_diff_file_data_type, box));
}

mrb_value
mruby_giftwrap_git_diff_file(mrb_state* mrb, git_diff_file *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DiffFile_class(mrb), &git_diff_file_data_type, box));
}

void
mruby_set_git_diff_file_data_ptr(mrb_value obj, git_diff_file *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_file_data_type);
}

void
mruby_gift_git_diff_file_data_ptr(mrb_value obj, git_diff_file *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_file_data_type);
}

git_diff_file *
mruby_unbox_git_diff_file(mrb_value boxed) {
  return (git_diff_file *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFindOptions_boxing */
/* sha: 2b8ef8ec03fb79605789eade3eb9d9a8f78c6d00bd95d7ce7785e8cccac1ac0e */
#if BIND_DiffFindOptions_TYPE
/*
 * Boxing implementation for git_diff_find_options
 */

static void free_git_diff_find_options(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_diff_find_options_data_type = {
   "git_diff_find_options", free_git_diff_find_options
};

mrb_value
mruby_box_git_diff_find_options(mrb_state* mrb, git_diff_find_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DiffFindOptions_class(mrb), &git_diff_find_options_data_type, box));
}

mrb_value
mruby_giftwrap_git_diff_find_options(mrb_state* mrb, git_diff_find_options *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DiffFindOptions_class(mrb), &git_diff_find_options_data_type, box));
}

void
mruby_set_git_diff_find_options_data_ptr(mrb_value obj, git_diff_find_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_find_options_data_type);
}

void
mruby_gift_git_diff_find_options_data_ptr(mrb_value obj, git_diff_find_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_find_options_data_type);
}

git_diff_find_options *
mruby_unbox_git_diff_find_options(mrb_value boxed) {
  return (git_diff_find_options *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffFormatEmailOptions_boxing */
/* sha: 832d2ef041e9142840aa06f71d9196bd55b9e8101ac01d89f10d1bccd270faf3 */
#if BIND_DiffFormatEmailOptions_TYPE
/*
 * Boxing implementation for git_diff_format_email_options
 */

static void free_git_diff_format_email_options(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_diff_format_email_options_data_type = {
   "git_diff_format_email_options", free_git_diff_format_email_options
};

mrb_value
mruby_box_git_diff_format_email_options(mrb_state* mrb, git_diff_format_email_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DiffFormatEmailOptions_class(mrb), &git_diff_format_email_options_data_type, box));
}

mrb_value
mruby_giftwrap_git_diff_format_email_options(mrb_state* mrb, git_diff_format_email_options *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DiffFormatEmailOptions_class(mrb), &git_diff_format_email_options_data_type, box));
}

void
mruby_set_git_diff_format_email_options_data_ptr(mrb_value obj, git_diff_format_email_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_format_email_options_data_type);
}

void
mruby_gift_git_diff_format_email_options_data_ptr(mrb_value obj, git_diff_format_email_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_format_email_options_data_type);
}

git_diff_format_email_options *
mruby_unbox_git_diff_format_email_options(mrb_value boxed) {
  return (git_diff_format_email_options *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffHunk_boxing */
/* sha: 6c8058fb96f0d2810624d3ab0926399c3e79da66ae16a307f29ddb597f9c96f3 */
#if BIND_DiffHunk_TYPE
/*
 * Boxing implementation for git_diff_hunk
 */

static void free_git_diff_hunk(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_diff_hunk_data_type = {
   "git_diff_hunk", free_git_diff_hunk
};

mrb_value
mruby_box_git_diff_hunk(mrb_state* mrb, git_diff_hunk *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DiffHunk_class(mrb), &git_diff_hunk_data_type, box));
}

mrb_value
mruby_giftwrap_git_diff_hunk(mrb_state* mrb, git_diff_hunk *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DiffHunk_class(mrb), &git_diff_hunk_data_type, box));
}

void
mruby_set_git_diff_hunk_data_ptr(mrb_value obj, git_diff_hunk *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_hunk_data_type);
}

void
mruby_gift_git_diff_hunk_data_ptr(mrb_value obj, git_diff_hunk *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_hunk_data_type);
}

git_diff_hunk *
mruby_unbox_git_diff_hunk(mrb_value boxed) {
  return (git_diff_hunk *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffLine_boxing */
/* sha: 8b4b9c1d8127a82f2a33e27d4d420ce117c2f1044da64b4d27eb709c71b7e83a */
#if BIND_DiffLine_TYPE
/*
 * Boxing implementation for git_diff_line
 */

static void free_git_diff_line(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_diff_line_data_type = {
   "git_diff_line", free_git_diff_line
};

mrb_value
mruby_box_git_diff_line(mrb_state* mrb, git_diff_line *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DiffLine_class(mrb), &git_diff_line_data_type, box));
}

mrb_value
mruby_giftwrap_git_diff_line(mrb_state* mrb, git_diff_line *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DiffLine_class(mrb), &git_diff_line_data_type, box));
}

void
mruby_set_git_diff_line_data_ptr(mrb_value obj, git_diff_line *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_line_data_type);
}

void
mruby_gift_git_diff_line_data_ptr(mrb_value obj, git_diff_line *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_line_data_type);
}

git_diff_line *
mruby_unbox_git_diff_line(mrb_value boxed) {
  return (git_diff_line *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffOptions_boxing */
/* sha: 766d6b81b24734d7892be8a148add347d7fb5787e94186f3e3a37ecaab7ed0db */
#if BIND_DiffOptions_TYPE
/*
 * Boxing implementation for git_diff_options
 */

static void free_git_diff_options(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_diff_options_data_type = {
   "git_diff_options", free_git_diff_options
};

mrb_value
mruby_box_git_diff_options(mrb_state* mrb, git_diff_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DiffOptions_class(mrb), &git_diff_options_data_type, box));
}

mrb_value
mruby_giftwrap_git_diff_options(mrb_state* mrb, git_diff_options *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DiffOptions_class(mrb), &git_diff_options_data_type, box));
}

void
mruby_set_git_diff_options_data_ptr(mrb_value obj, git_diff_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_options_data_type);
}

void
mruby_gift_git_diff_options_data_ptr(mrb_value obj, git_diff_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_options_data_type);
}

git_diff_options *
mruby_unbox_git_diff_options(mrb_value boxed) {
  return (git_diff_options *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffSimilarityMetric_boxing */
/* sha: 9b31c0650794771b7153e00dc043dcfb93a8ccb3ecc8c3265ac4e2570269ac99 */
#if BIND_DiffSimilarityMetric_TYPE
/*
 * Boxing implementation for git_diff_similarity_metric
 */

static void free_git_diff_similarity_metric(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_diff_similarity_metric_data_type = {
   "git_diff_similarity_metric", free_git_diff_similarity_metric
};

mrb_value
mruby_box_git_diff_similarity_metric(mrb_state* mrb, git_diff_similarity_metric *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DiffSimilarityMetric_class(mrb), &git_diff_similarity_metric_data_type, box));
}

mrb_value
mruby_giftwrap_git_diff_similarity_metric(mrb_state* mrb, git_diff_similarity_metric *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DiffSimilarityMetric_class(mrb), &git_diff_similarity_metric_data_type, box));
}

void
mruby_set_git_diff_similarity_metric_data_ptr(mrb_value obj, git_diff_similarity_metric *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_similarity_metric_data_type);
}

void
mruby_gift_git_diff_similarity_metric_data_ptr(mrb_value obj, git_diff_similarity_metric *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_similarity_metric_data_type);
}

git_diff_similarity_metric *
mruby_unbox_git_diff_similarity_metric(mrb_value boxed) {
  return (git_diff_similarity_metric *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: DiffStats_boxing */
/* sha: 326c6760fbff58b29d4f748755d45bb99b63a9cf41646d7bb07f841d0d2a32c5 */
#if BIND_DiffStats_TYPE
/*
 * Boxing implementation for git_diff_stats
 */

static void free_git_diff_stats(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_diff_stats_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_diff_stats_data_type = {
   "git_diff_stats", free_git_diff_stats
};

mrb_value
mruby_box_git_diff_stats(mrb_state* mrb, git_diff_stats *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, DiffStats_class(mrb), &git_diff_stats_data_type, box));
}

mrb_value
mruby_giftwrap_git_diff_stats(mrb_state* mrb, git_diff_stats *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, DiffStats_class(mrb), &git_diff_stats_data_type, box));
}

void
mruby_set_git_diff_stats_data_ptr(mrb_value obj, git_diff_stats *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_stats_data_type);
}

void
mruby_gift_git_diff_stats_data_ptr(mrb_value obj, git_diff_stats *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_diff_stats_data_type);
}

git_diff_stats *
mruby_unbox_git_diff_stats(mrb_value boxed) {
  return (git_diff_stats *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Error_boxing */
/* sha: 43e5d16391317d36a469486e09465ba7c27011b69b550c65fa37dae50b3e4040 */
#if BIND_Error_TYPE
/*
 * Boxing implementation for git_error
 */

static void free_git_error(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_error_data_type = {
   "git_error", free_git_error
};

mrb_value
mruby_box_git_error(mrb_state* mrb, git_error *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Error_class(mrb), &git_error_data_type, box));
}

mrb_value
mruby_giftwrap_git_error(mrb_state* mrb, git_error *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Error_class(mrb), &git_error_data_type, box));
}

void
mruby_set_git_error_data_ptr(mrb_value obj, git_error *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_error_data_type);
}

void
mruby_gift_git_error_data_ptr(mrb_value obj, git_error *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_error_data_type);
}

git_error *
mruby_unbox_git_error(mrb_value boxed) {
  return (git_error *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FetchOptions_boxing */
/* sha: 96e2b5c0d33b8cb998de720a4665eccb29d078d70581d78ed5df414e6c008050 */
#if BIND_FetchOptions_TYPE
/*
 * Boxing implementation for git_fetch_options
 */

static void free_git_fetch_options(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_fetch_options_data_type = {
   "git_fetch_options", free_git_fetch_options
};

mrb_value
mruby_box_git_fetch_options(mrb_state* mrb, git_fetch_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, FetchOptions_class(mrb), &git_fetch_options_data_type, box));
}

mrb_value
mruby_giftwrap_git_fetch_options(mrb_state* mrb, git_fetch_options *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, FetchOptions_class(mrb), &git_fetch_options_data_type, box));
}

void
mruby_set_git_fetch_options_data_ptr(mrb_value obj, git_fetch_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_fetch_options_data_type);
}

void
mruby_gift_git_fetch_options_data_ptr(mrb_value obj, git_fetch_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_fetch_options_data_type);
}

git_fetch_options *
mruby_unbox_git_fetch_options(mrb_value boxed) {
  return (git_fetch_options *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Filter_boxing */
/* sha: 62941f63ff1b53655f761cb21b476ec476648201022f1f2dbed962c280d72291 */
#if BIND_Filter_TYPE
/*
 * Boxing implementation for git_filter
 */

static void free_git_filter(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_filter_data_type = {
   "git_filter", free_git_filter
};

mrb_value
mruby_box_git_filter(mrb_state* mrb, git_filter *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Filter_class(mrb), &git_filter_data_type, box));
}

mrb_value
mruby_giftwrap_git_filter(mrb_state* mrb, git_filter *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Filter_class(mrb), &git_filter_data_type, box));
}

void
mruby_set_git_filter_data_ptr(mrb_value obj, git_filter *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_filter_data_type);
}

void
mruby_gift_git_filter_data_ptr(mrb_value obj, git_filter *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_filter_data_type);
}

git_filter *
mruby_unbox_git_filter(mrb_value boxed) {
  return (git_filter *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: FilterList_boxing */
/* sha: 939adfa081a956327df8f169d3d93b140498bdca2e1b517724b64989d36d38a7 */
#if BIND_FilterList_TYPE
/*
 * Boxing implementation for git_filter_list
 */

static void free_git_filter_list(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_filter_list_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_filter_list_data_type = {
   "git_filter_list", free_git_filter_list
};

mrb_value
mruby_box_git_filter_list(mrb_state* mrb, git_filter_list *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, FilterList_class(mrb), &git_filter_list_data_type, box));
}

mrb_value
mruby_giftwrap_git_filter_list(mrb_state* mrb, git_filter_list *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, FilterList_class(mrb), &git_filter_list_data_type, box));
}

void
mruby_set_git_filter_list_data_ptr(mrb_value obj, git_filter_list *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_filter_list_data_type);
}

void
mruby_gift_git_filter_list_data_ptr(mrb_value obj, git_filter_list *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_filter_list_data_type);
}

git_filter_list *
mruby_unbox_git_filter_list(mrb_value boxed) {
  return (git_filter_list *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Index_boxing */
/* sha: 3daf2e4ec258df9d2cc20ad997acced387e8285b69d8e53559996a318811ed7e */
#if BIND_Index_TYPE
/*
 * Boxing implementation for git_index
 */

static void free_git_index(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_index_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_index_data_type = {
   "git_index", free_git_index
};

mrb_value
mruby_box_git_index(mrb_state* mrb, git_index *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Index_class(mrb), &git_index_data_type, box));
}

mrb_value
mruby_giftwrap_git_index(mrb_state* mrb, git_index *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Index_class(mrb), &git_index_data_type, box));
}

void
mruby_set_git_index_data_ptr(mrb_value obj, git_index *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_index_data_type);
}

void
mruby_gift_git_index_data_ptr(mrb_value obj, git_index *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_index_data_type);
}

git_index *
mruby_unbox_git_index(mrb_value boxed) {
  return (git_index *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexConflictIterator_boxing */
/* sha: 23dfcfd181e40b2d2c8eabe5381a20eec5b0749868a9412d1fdb6a84fbd09ea9 */
#if BIND_IndexConflictIterator_TYPE
/*
 * Boxing implementation for git_index_conflict_iterator
 */

static void free_git_index_conflict_iterator(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_index_conflict_iterator_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_index_conflict_iterator_data_type = {
   "git_index_conflict_iterator", free_git_index_conflict_iterator
};

mrb_value
mruby_box_git_index_conflict_iterator(mrb_state* mrb, git_index_conflict_iterator *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, IndexConflictIterator_class(mrb), &git_index_conflict_iterator_data_type, box));
}

mrb_value
mruby_giftwrap_git_index_conflict_iterator(mrb_state* mrb, git_index_conflict_iterator *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, IndexConflictIterator_class(mrb), &git_index_conflict_iterator_data_type, box));
}

void
mruby_set_git_index_conflict_iterator_data_ptr(mrb_value obj, git_index_conflict_iterator *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_index_conflict_iterator_data_type);
}

void
mruby_gift_git_index_conflict_iterator_data_ptr(mrb_value obj, git_index_conflict_iterator *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_index_conflict_iterator_data_type);
}

git_index_conflict_iterator *
mruby_unbox_git_index_conflict_iterator(mrb_value boxed) {
  return (git_index_conflict_iterator *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexEntry_boxing */
/* sha: 48796f2de2053614bc183cdaec36958a78f28ca5ed69a2fd8d14f3a2150b376d */
#if BIND_IndexEntry_TYPE
/*
 * Boxing implementation for git_index_entry
 */

static void free_git_index_entry(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_index_entry_data_type = {
   "git_index_entry", free_git_index_entry
};

mrb_value
mruby_box_git_index_entry(mrb_state* mrb, git_index_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, IndexEntry_class(mrb), &git_index_entry_data_type, box));
}

mrb_value
mruby_giftwrap_git_index_entry(mrb_state* mrb, git_index_entry *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, IndexEntry_class(mrb), &git_index_entry_data_type, box));
}

void
mruby_set_git_index_entry_data_ptr(mrb_value obj, git_index_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_index_entry_data_type);
}

void
mruby_gift_git_index_entry_data_ptr(mrb_value obj, git_index_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_index_entry_data_type);
}

git_index_entry *
mruby_unbox_git_index_entry(mrb_value boxed) {
  return (git_index_entry *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: IndexTime_boxing */
/* sha: 03c42c04251197b30896e34849b93d6001db0d35c42494559cac5253c9843a9d */
#if BIND_IndexTime_TYPE
/*
 * Boxing implementation for git_index_time
 */

static void free_git_index_time(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_index_time_data_type = {
   "git_index_time", free_git_index_time
};

mrb_value
mruby_box_git_index_time(mrb_state* mrb, git_index_time *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, IndexTime_class(mrb), &git_index_time_data_type, box));
}

mrb_value
mruby_giftwrap_git_index_time(mrb_state* mrb, git_index_time *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, IndexTime_class(mrb), &git_index_time_data_type, box));
}

void
mruby_set_git_index_time_data_ptr(mrb_value obj, git_index_time *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_index_time_data_type);
}

void
mruby_gift_git_index_time_data_ptr(mrb_value obj, git_index_time *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_index_time_data_type);
}

git_index_time *
mruby_unbox_git_index_time(mrb_value boxed) {
  return (git_index_time *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Indexer_boxing */
/* sha: 5f39a00cbf916f820eaf5d76925d8fce64dc22746c401c74c69acd8f2df00de0 */
#if BIND_Indexer_TYPE
/*
 * Boxing implementation for git_indexer
 */

static void free_git_indexer(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_indexer_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_indexer_data_type = {
   "git_indexer", free_git_indexer
};

mrb_value
mruby_box_git_indexer(mrb_state* mrb, git_indexer *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Indexer_class(mrb), &git_indexer_data_type, box));
}

mrb_value
mruby_giftwrap_git_indexer(mrb_state* mrb, git_indexer *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Indexer_class(mrb), &git_indexer_data_type, box));
}

void
mruby_set_git_indexer_data_ptr(mrb_value obj, git_indexer *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_indexer_data_type);
}

void
mruby_gift_git_indexer_data_ptr(mrb_value obj, git_indexer *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_indexer_data_type);
}

git_indexer *
mruby_unbox_git_indexer(mrb_value boxed) {
  return (git_indexer *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileInput_boxing */
/* sha: 7b370d21b034465d0cf206bf54ec4995b48639798e5e2d0cdfd8a2921b7a07a2 */
#if BIND_MergeFileInput_TYPE
/*
 * Boxing implementation for git_merge_file_input
 */

static void free_git_merge_file_input(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_merge_file_input_data_type = {
   "git_merge_file_input", free_git_merge_file_input
};

mrb_value
mruby_box_git_merge_file_input(mrb_state* mrb, git_merge_file_input *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, MergeFileInput_class(mrb), &git_merge_file_input_data_type, box));
}

mrb_value
mruby_giftwrap_git_merge_file_input(mrb_state* mrb, git_merge_file_input *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, MergeFileInput_class(mrb), &git_merge_file_input_data_type, box));
}

void
mruby_set_git_merge_file_input_data_ptr(mrb_value obj, git_merge_file_input *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_merge_file_input_data_type);
}

void
mruby_gift_git_merge_file_input_data_ptr(mrb_value obj, git_merge_file_input *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_merge_file_input_data_type);
}

git_merge_file_input *
mruby_unbox_git_merge_file_input(mrb_value boxed) {
  return (git_merge_file_input *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileOptions_boxing */
/* sha: 8a452fb8258b0887c89541f039d39002f6d9db53ed1240f370dc12e2f1de7dc8 */
#if BIND_MergeFileOptions_TYPE
/*
 * Boxing implementation for git_merge_file_options
 */

static void free_git_merge_file_options(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_merge_file_options_data_type = {
   "git_merge_file_options", free_git_merge_file_options
};

mrb_value
mruby_box_git_merge_file_options(mrb_state* mrb, git_merge_file_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, MergeFileOptions_class(mrb), &git_merge_file_options_data_type, box));
}

mrb_value
mruby_giftwrap_git_merge_file_options(mrb_state* mrb, git_merge_file_options *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, MergeFileOptions_class(mrb), &git_merge_file_options_data_type, box));
}

void
mruby_set_git_merge_file_options_data_ptr(mrb_value obj, git_merge_file_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_merge_file_options_data_type);
}

void
mruby_gift_git_merge_file_options_data_ptr(mrb_value obj, git_merge_file_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_merge_file_options_data_type);
}

git_merge_file_options *
mruby_unbox_git_merge_file_options(mrb_value boxed) {
  return (git_merge_file_options *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeFileResult_boxing */
/* sha: 9995ad98bd16eeec98a464f1ce02b4fccf305f95abe61dbb2d1b44727b3c7882 */
#if BIND_MergeFileResult_TYPE
/*
 * Boxing implementation for git_merge_file_result
 */

static void free_git_merge_file_result(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_merge_file_result_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_merge_file_result_data_type = {
   "git_merge_file_result", free_git_merge_file_result
};

mrb_value
mruby_box_git_merge_file_result(mrb_state* mrb, git_merge_file_result *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, MergeFileResult_class(mrb), &git_merge_file_result_data_type, box));
}

mrb_value
mruby_giftwrap_git_merge_file_result(mrb_state* mrb, git_merge_file_result *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, MergeFileResult_class(mrb), &git_merge_file_result_data_type, box));
}

void
mruby_set_git_merge_file_result_data_ptr(mrb_value obj, git_merge_file_result *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_merge_file_result_data_type);
}

void
mruby_gift_git_merge_file_result_data_ptr(mrb_value obj, git_merge_file_result *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_merge_file_result_data_type);
}

git_merge_file_result *
mruby_unbox_git_merge_file_result(mrb_value boxed) {
  return (git_merge_file_result *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeOptions_boxing */
/* sha: c7af6992b44916eee0cad09bb37e81f4daf368091a645cd0935610e74155214c */
#if BIND_MergeOptions_TYPE
/*
 * Boxing implementation for git_merge_options
 */

static void free_git_merge_options(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_merge_options_data_type = {
   "git_merge_options", free_git_merge_options
};

mrb_value
mruby_box_git_merge_options(mrb_state* mrb, git_merge_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, MergeOptions_class(mrb), &git_merge_options_data_type, box));
}

mrb_value
mruby_giftwrap_git_merge_options(mrb_state* mrb, git_merge_options *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, MergeOptions_class(mrb), &git_merge_options_data_type, box));
}

void
mruby_set_git_merge_options_data_ptr(mrb_value obj, git_merge_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_merge_options_data_type);
}

void
mruby_gift_git_merge_options_data_ptr(mrb_value obj, git_merge_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_merge_options_data_type);
}

git_merge_options *
mruby_unbox_git_merge_options(mrb_value boxed) {
  return (git_merge_options *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: MergeResult_boxing */
/* sha: 488883bd66a8c9c5ecc57db2ce46fbcef36f93e168a150e6b94fa29f7587a9d3 */
#if BIND_MergeResult_TYPE
/*
 * Boxing implementation for git_merge_result
 */

static void free_git_merge_result(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_merge_result_data_type = {
   "git_merge_result", free_git_merge_result
};

mrb_value
mruby_box_git_merge_result(mrb_state* mrb, git_merge_result *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, MergeResult_class(mrb), &git_merge_result_data_type, box));
}

mrb_value
mruby_giftwrap_git_merge_result(mrb_state* mrb, git_merge_result *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, MergeResult_class(mrb), &git_merge_result_data_type, box));
}

void
mruby_set_git_merge_result_data_ptr(mrb_value obj, git_merge_result *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_merge_result_data_type);
}

void
mruby_gift_git_merge_result_data_ptr(mrb_value obj, git_merge_result *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_merge_result_data_type);
}

git_merge_result *
mruby_unbox_git_merge_result(mrb_value boxed) {
  return (git_merge_result *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Note_boxing */
/* sha: b5059b817f0c3055fcdaba0dfc7a99d4374e3b13ed665abc47393817c84facb6 */
#if BIND_Note_TYPE
/*
 * Boxing implementation for git_note
 */

static void free_git_note(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_note_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_note_data_type = {
   "git_note", free_git_note
};

mrb_value
mruby_box_git_note(mrb_state* mrb, git_note *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Note_class(mrb), &git_note_data_type, box));
}

mrb_value
mruby_giftwrap_git_note(mrb_state* mrb, git_note *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Note_class(mrb), &git_note_data_type, box));
}

void
mruby_set_git_note_data_ptr(mrb_value obj, git_note *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_note_data_type);
}

void
mruby_gift_git_note_data_ptr(mrb_value obj, git_note *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_note_data_type);
}

git_note *
mruby_unbox_git_note(mrb_value boxed) {
  return (git_note *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: NoteIterator_boxing */
/* sha: 0b410010acbb6a1101e46ec95b9986481e2eb4563d1e167cc5d8e85cdce60d9a */
#if BIND_NoteIterator_TYPE
/*
 * Boxing implementation for git_note_iterator
 */

static void free_git_note_iterator(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_note_iterator_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_note_iterator_data_type = {
   "git_note_iterator", free_git_note_iterator
};

mrb_value
mruby_box_git_note_iterator(mrb_state* mrb, git_note_iterator *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, NoteIterator_class(mrb), &git_note_iterator_data_type, box));
}

mrb_value
mruby_giftwrap_git_note_iterator(mrb_state* mrb, git_note_iterator *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, NoteIterator_class(mrb), &git_note_iterator_data_type, box));
}

void
mruby_set_git_note_iterator_data_ptr(mrb_value obj, git_note_iterator *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_note_iterator_data_type);
}

void
mruby_gift_git_note_iterator_data_ptr(mrb_value obj, git_note_iterator *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_note_iterator_data_type);
}

git_note_iterator *
mruby_unbox_git_note_iterator(mrb_value boxed) {
  return (git_note_iterator *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Object_boxing */
/* sha: 756325d1a926a27b49244c3458adbd2b60f332f8047d6da65a514fde9d3a247a */
#if BIND_Object_TYPE
/*
 * Boxing implementation for git_object
 */

static void free_git_object(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_object_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_object_data_type = {
   "git_object", free_git_object
};

mrb_value
mruby_box_git_object(mrb_state* mrb, git_object *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Object_class(mrb), &git_object_data_type, box));
}

mrb_value
mruby_giftwrap_git_object(mrb_state* mrb, git_object *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Object_class(mrb), &git_object_data_type, box));
}

void
mruby_set_git_object_data_ptr(mrb_value obj, git_object *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_object_data_type);
}

void
mruby_gift_git_object_data_ptr(mrb_value obj, git_object *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_object_data_type);
}

git_object *
mruby_unbox_git_object(mrb_value boxed) {
  return (git_object *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Odb_boxing */
/* sha: 540cd31e7d8552fbd8337f8f1e4d08491b0a3c947f7fb9bb227caa5a504a2f58 */
#if BIND_Odb_TYPE
/*
 * Boxing implementation for git_odb
 */

static void free_git_odb(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_odb_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_odb_data_type = {
   "git_odb", free_git_odb
};

mrb_value
mruby_box_git_odb(mrb_state* mrb, git_odb *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Odb_class(mrb), &git_odb_data_type, box));
}

mrb_value
mruby_giftwrap_git_odb(mrb_state* mrb, git_odb *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Odb_class(mrb), &git_odb_data_type, box));
}

void
mruby_set_git_odb_data_ptr(mrb_value obj, git_odb *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_odb_data_type);
}

void
mruby_gift_git_odb_data_ptr(mrb_value obj, git_odb *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_odb_data_type);
}

git_odb *
mruby_unbox_git_odb(mrb_value boxed) {
  return (git_odb *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbBackend_boxing */
/* sha: c81498c966f2778f39a2f180b69b8bda8cda9b7b87155a8c3d70b404c66422df */
#if BIND_OdbBackend_TYPE
/*
 * Boxing implementation for git_odb_backend
 */

static void free_git_odb_backend(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_odb_backend_data_type = {
   "git_odb_backend", free_git_odb_backend
};

mrb_value
mruby_box_git_odb_backend(mrb_state* mrb, git_odb_backend *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, OdbBackend_class(mrb), &git_odb_backend_data_type, box));
}

mrb_value
mruby_giftwrap_git_odb_backend(mrb_state* mrb, git_odb_backend *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, OdbBackend_class(mrb), &git_odb_backend_data_type, box));
}

void
mruby_set_git_odb_backend_data_ptr(mrb_value obj, git_odb_backend *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_odb_backend_data_type);
}

void
mruby_gift_git_odb_backend_data_ptr(mrb_value obj, git_odb_backend *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_odb_backend_data_type);
}

git_odb_backend *
mruby_unbox_git_odb_backend(mrb_value boxed) {
  return (git_odb_backend *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbObject_boxing */
/* sha: 96b669bfd5806d1bb7ffb57d2288aabec262c456856e79b77b366faf64fc35ce */
#if BIND_OdbObject_TYPE
/*
 * Boxing implementation for git_odb_object
 */

static void free_git_odb_object(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_odb_object_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_odb_object_data_type = {
   "git_odb_object", free_git_odb_object
};

mrb_value
mruby_box_git_odb_object(mrb_state* mrb, git_odb_object *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, OdbObject_class(mrb), &git_odb_object_data_type, box));
}

mrb_value
mruby_giftwrap_git_odb_object(mrb_state* mrb, git_odb_object *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, OdbObject_class(mrb), &git_odb_object_data_type, box));
}

void
mruby_set_git_odb_object_data_ptr(mrb_value obj, git_odb_object *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_odb_object_data_type);
}

void
mruby_gift_git_odb_object_data_ptr(mrb_value obj, git_odb_object *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_odb_object_data_type);
}

git_odb_object *
mruby_unbox_git_odb_object(mrb_value boxed) {
  return (git_odb_object *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbStream_boxing */
/* sha: c199f9b9dc95291f742962ec34f2b98b3a8c65e2ba35026e7a42c1019304c0f2 */
#if BIND_OdbStream_TYPE
/*
 * Boxing implementation for git_odb_stream
 */

static void free_git_odb_stream(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_odb_stream_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_odb_stream_data_type = {
   "git_odb_stream", free_git_odb_stream
};

mrb_value
mruby_box_git_odb_stream(mrb_state* mrb, git_odb_stream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, OdbStream_class(mrb), &git_odb_stream_data_type, box));
}

mrb_value
mruby_giftwrap_git_odb_stream(mrb_state* mrb, git_odb_stream *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, OdbStream_class(mrb), &git_odb_stream_data_type, box));
}

void
mruby_set_git_odb_stream_data_ptr(mrb_value obj, git_odb_stream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_odb_stream_data_type);
}

void
mruby_gift_git_odb_stream_data_ptr(mrb_value obj, git_odb_stream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_odb_stream_data_type);
}

git_odb_stream *
mruby_unbox_git_odb_stream(mrb_value boxed) {
  return (git_odb_stream *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OdbWritepack_boxing */
/* sha: ab5f5fe43738983516607688249bf23efbeb8dd6146eeed832fd1b1a7a212e6b */
#if BIND_OdbWritepack_TYPE
/*
 * Boxing implementation for git_odb_writepack
 */

static void free_git_odb_writepack(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_odb_writepack_data_type = {
   "git_odb_writepack", free_git_odb_writepack
};

mrb_value
mruby_box_git_odb_writepack(mrb_state* mrb, git_odb_writepack *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, OdbWritepack_class(mrb), &git_odb_writepack_data_type, box));
}

mrb_value
mruby_giftwrap_git_odb_writepack(mrb_state* mrb, git_odb_writepack *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, OdbWritepack_class(mrb), &git_odb_writepack_data_type, box));
}

void
mruby_set_git_odb_writepack_data_ptr(mrb_value obj, git_odb_writepack *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_odb_writepack_data_type);
}

void
mruby_gift_git_odb_writepack_data_ptr(mrb_value obj, git_odb_writepack *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_odb_writepack_data_type);
}

git_odb_writepack *
mruby_unbox_git_odb_writepack(mrb_value boxed) {
  return (git_odb_writepack *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oid_boxing */
/* sha: 1bc9dbe6122103db44a974d3a6e8ca3c4405dae6f9057c9640868e0f874b5aa3 */
#if BIND_Oid_TYPE
/*
 * Boxing implementation for git_oid
 */

static void free_git_oid(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_oid_data_type = {
   "git_oid", free_git_oid
};

mrb_value
mruby_box_git_oid(mrb_state* mrb, git_oid *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Oid_class(mrb), &git_oid_data_type, box));
}

mrb_value
mruby_giftwrap_git_oid(mrb_state* mrb, git_oid *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Oid_class(mrb), &git_oid_data_type, box));
}

void
mruby_set_git_oid_data_ptr(mrb_value obj, git_oid *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_oid_data_type);
}

void
mruby_gift_git_oid_data_ptr(mrb_value obj, git_oid *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_oid_data_type);
}

git_oid *
mruby_unbox_git_oid(mrb_value boxed) {
  return (git_oid *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: OidShorten_boxing */
/* sha: 1c51a62b6496df52683ab4fad0ebaebc7b6d7505ee7f85e8a9a66b575170510c */
#if BIND_OidShorten_TYPE
/*
 * Boxing implementation for git_oid_shorten
 */

static void free_git_oid_shorten(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_oid_shorten_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_oid_shorten_data_type = {
   "git_oid_shorten", free_git_oid_shorten
};

mrb_value
mruby_box_git_oid_shorten(mrb_state* mrb, git_oid_shorten *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, OidShorten_class(mrb), &git_oid_shorten_data_type, box));
}

mrb_value
mruby_giftwrap_git_oid_shorten(mrb_state* mrb, git_oid_shorten *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, OidShorten_class(mrb), &git_oid_shorten_data_type, box));
}

void
mruby_set_git_oid_shorten_data_ptr(mrb_value obj, git_oid_shorten *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_oid_shorten_data_type);
}

void
mruby_gift_git_oid_shorten_data_ptr(mrb_value obj, git_oid_shorten *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_oid_shorten_data_type);
}

git_oid_shorten *
mruby_unbox_git_oid_shorten(mrb_value boxed) {
  return (git_oid_shorten *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Oidarray_boxing */
/* sha: c00e86cffd304c2933bcb6bde02fdd6dd5d009d17e1e32912b566dc17c41ff37 */
#if BIND_Oidarray_TYPE
/*
 * Boxing implementation for git_oidarray
 */

static void free_git_oidarray(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_oidarray_free(box->obj);
      /* git_oidarray_free does not free the object, only the contents */
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_oidarray_data_type = {
   "git_oidarray", free_git_oidarray
};

mrb_value
mruby_box_git_oidarray(mrb_state* mrb, git_oidarray *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Oidarray_class(mrb), &git_oidarray_data_type, box));
}

mrb_value
mruby_giftwrap_git_oidarray(mrb_state* mrb, git_oidarray *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Oidarray_class(mrb), &git_oidarray_data_type, box));
}

void
mruby_set_git_oidarray_data_ptr(mrb_value obj, git_oidarray *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_oidarray_data_type);
}

void
mruby_gift_git_oidarray_data_ptr(mrb_value obj, git_oidarray *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_oidarray_data_type);
}

git_oidarray *
mruby_unbox_git_oidarray(mrb_value boxed) {
  return (git_oidarray *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Packbuilder_boxing */
/* sha: 6dab7746e9613b1bb91708f01bc9bce850960ce46a14f84335cb07b2873fa37a */
#if BIND_Packbuilder_TYPE
/*
 * Boxing implementation for git_packbuilder
 */

static void free_git_packbuilder(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_packbuilder_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_packbuilder_data_type = {
   "git_packbuilder", free_git_packbuilder
};

mrb_value
mruby_box_git_packbuilder(mrb_state* mrb, git_packbuilder *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Packbuilder_class(mrb), &git_packbuilder_data_type, box));
}

mrb_value
mruby_giftwrap_git_packbuilder(mrb_state* mrb, git_packbuilder *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Packbuilder_class(mrb), &git_packbuilder_data_type, box));
}

void
mruby_set_git_packbuilder_data_ptr(mrb_value obj, git_packbuilder *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_packbuilder_data_type);
}

void
mruby_gift_git_packbuilder_data_ptr(mrb_value obj, git_packbuilder *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_packbuilder_data_type);
}

git_packbuilder *
mruby_unbox_git_packbuilder(mrb_value boxed) {
  return (git_packbuilder *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Patch_boxing */
/* sha: 1363c1bdbb2a6d831f37d7f2925b14d9e39d764af9ae2c29aae0b3b958df5b55 */
#if BIND_Patch_TYPE
/*
 * Boxing implementation for git_patch
 */

static void free_git_patch(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_patch_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_patch_data_type = {
   "git_patch", free_git_patch
};

mrb_value
mruby_box_git_patch(mrb_state* mrb, git_patch *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Patch_class(mrb), &git_patch_data_type, box));
}

mrb_value
mruby_giftwrap_git_patch(mrb_state* mrb, git_patch *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Patch_class(mrb), &git_patch_data_type, box));
}

void
mruby_set_git_patch_data_ptr(mrb_value obj, git_patch *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_patch_data_type);
}

void
mruby_gift_git_patch_data_ptr(mrb_value obj, git_patch *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_patch_data_type);
}

git_patch *
mruby_unbox_git_patch(mrb_value boxed) {
  return (git_patch *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Pathspec_boxing */
/* sha: a78d2e31081059abedff65a3da59d6b64d675a6dc149584cf2c96cc02f3078f9 */
#if BIND_Pathspec_TYPE
/*
 * Boxing implementation for git_pathspec
 */

static void free_git_pathspec(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_pathspec_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_pathspec_data_type = {
   "git_pathspec", free_git_pathspec
};

mrb_value
mruby_box_git_pathspec(mrb_state* mrb, git_pathspec *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Pathspec_class(mrb), &git_pathspec_data_type, box));
}

mrb_value
mruby_giftwrap_git_pathspec(mrb_state* mrb, git_pathspec *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Pathspec_class(mrb), &git_pathspec_data_type, box));
}

void
mruby_set_git_pathspec_data_ptr(mrb_value obj, git_pathspec *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_pathspec_data_type);
}

void
mruby_gift_git_pathspec_data_ptr(mrb_value obj, git_pathspec *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_pathspec_data_type);
}

git_pathspec *
mruby_unbox_git_pathspec(mrb_value boxed) {
  return (git_pathspec *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PathspecMatchList_boxing */
/* sha: de6028418836ca8a8755e39a4917b14788badb5175b7d982c465355c519fb1a2 */
#if BIND_PathspecMatchList_TYPE
/*
 * Boxing implementation for git_pathspec_match_list
 */

static void free_git_pathspec_match_list(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_pathspec_match_list_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_pathspec_match_list_data_type = {
   "git_pathspec_match_list", free_git_pathspec_match_list
};

mrb_value
mruby_box_git_pathspec_match_list(mrb_state* mrb, git_pathspec_match_list *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, PathspecMatchList_class(mrb), &git_pathspec_match_list_data_type, box));
}

mrb_value
mruby_giftwrap_git_pathspec_match_list(mrb_state* mrb, git_pathspec_match_list *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, PathspecMatchList_class(mrb), &git_pathspec_match_list_data_type, box));
}

void
mruby_set_git_pathspec_match_list_data_ptr(mrb_value obj, git_pathspec_match_list *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_pathspec_match_list_data_type);
}

void
mruby_gift_git_pathspec_match_list_data_ptr(mrb_value obj, git_pathspec_match_list *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_pathspec_match_list_data_type);
}

git_pathspec_match_list *
mruby_unbox_git_pathspec_match_list(mrb_value boxed) {
  return (git_pathspec_match_list *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Push_boxing */
/* sha: bc11dad25eddfe59e589cd307f4a50831d985d630b489db8a27ab67bd38ca5d7 */
#if BIND_Push_TYPE
/*
 * Boxing implementation for git_push
 */

static void free_git_push(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_push_data_type = {
   "git_push", free_git_push
};

mrb_value
mruby_box_git_push(mrb_state* mrb, git_push *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Push_class(mrb), &git_push_data_type, box));
}

mrb_value
mruby_giftwrap_git_push(mrb_state* mrb, git_push *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Push_class(mrb), &git_push_data_type, box));
}

void
mruby_set_git_push_data_ptr(mrb_value obj, git_push *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_push_data_type);
}

void
mruby_gift_git_push_data_ptr(mrb_value obj, git_push *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_push_data_type);
}

git_push *
mruby_unbox_git_push(mrb_value boxed) {
  return (git_push *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushOptions_boxing */
/* sha: 17a0503fc6019445a47eee08bbfbe277b66a64bb12994444d738ef1650f29c1b */
#if BIND_PushOptions_TYPE
/*
 * Boxing implementation for git_push_options
 */

static void free_git_push_options(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_push_options_data_type = {
   "git_push_options", free_git_push_options
};

mrb_value
mruby_box_git_push_options(mrb_state* mrb, git_push_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, PushOptions_class(mrb), &git_push_options_data_type, box));
}

mrb_value
mruby_giftwrap_git_push_options(mrb_state* mrb, git_push_options *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, PushOptions_class(mrb), &git_push_options_data_type, box));
}

void
mruby_set_git_push_options_data_ptr(mrb_value obj, git_push_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_push_options_data_type);
}

void
mruby_gift_git_push_options_data_ptr(mrb_value obj, git_push_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_push_options_data_type);
}

git_push_options *
mruby_unbox_git_push_options(mrb_value boxed) {
  return (git_push_options *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: PushUpdate_boxing */
/* sha: 161f07632f8d95ab9e3dcc52d5fe805fc05bcd3c73bc7c3cd6718ce45938197c */
#if BIND_PushUpdate_TYPE
/*
 * Boxing implementation for git_push_update
 */

static void free_git_push_update(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_push_update_data_type = {
   "git_push_update", free_git_push_update
};

mrb_value
mruby_box_git_push_update(mrb_state* mrb, git_push_update *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, PushUpdate_class(mrb), &git_push_update_data_type, box));
}

mrb_value
mruby_giftwrap_git_push_update(mrb_state* mrb, git_push_update *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, PushUpdate_class(mrb), &git_push_update_data_type, box));
}

void
mruby_set_git_push_update_data_ptr(mrb_value obj, git_push_update *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_push_update_data_type);
}

void
mruby_gift_git_push_update_data_ptr(mrb_value obj, git_push_update *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_push_update_data_type);
}

git_push_update *
mruby_unbox_git_push_update(mrb_value boxed) {
  return (git_push_update *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Rebase_boxing */
/* sha: ad1a8f6d4253fa1483481c5947a57e4afb9db2049e3227441309fb1032143ecf */
#if BIND_Rebase_TYPE
/*
 * Boxing implementation for git_rebase
 */

static void free_git_rebase(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_rebase_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_rebase_data_type = {
   "git_rebase", free_git_rebase
};

mrb_value
mruby_box_git_rebase(mrb_state* mrb, git_rebase *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Rebase_class(mrb), &git_rebase_data_type, box));
}

mrb_value
mruby_giftwrap_git_rebase(mrb_state* mrb, git_rebase *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Rebase_class(mrb), &git_rebase_data_type, box));
}

void
mruby_set_git_rebase_data_ptr(mrb_value obj, git_rebase *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_rebase_data_type);
}

void
mruby_gift_git_rebase_data_ptr(mrb_value obj, git_rebase *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_rebase_data_type);
}

git_rebase *
mruby_unbox_git_rebase(mrb_value boxed) {
  return (git_rebase *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOperation_boxing */
/* sha: 28232b9df13c4c1cae69b02bb9247fc57b40936c5eb154d13fd4022a0f21c39f */
#if BIND_RebaseOperation_TYPE
/*
 * Boxing implementation for git_rebase_operation
 */

static void free_git_rebase_operation(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_rebase_operation_data_type = {
   "git_rebase_operation", free_git_rebase_operation
};

mrb_value
mruby_box_git_rebase_operation(mrb_state* mrb, git_rebase_operation *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, RebaseOperation_class(mrb), &git_rebase_operation_data_type, box));
}

mrb_value
mruby_giftwrap_git_rebase_operation(mrb_state* mrb, git_rebase_operation *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, RebaseOperation_class(mrb), &git_rebase_operation_data_type, box));
}

void
mruby_set_git_rebase_operation_data_ptr(mrb_value obj, git_rebase_operation *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_rebase_operation_data_type);
}

void
mruby_gift_git_rebase_operation_data_ptr(mrb_value obj, git_rebase_operation *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_rebase_operation_data_type);
}

git_rebase_operation *
mruby_unbox_git_rebase_operation(mrb_value boxed) {
  return (git_rebase_operation *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RebaseOptions_boxing */
/* sha: 0f24d7f0239bf57834c2e1a1bbd33df20937b404192ee3c89effc97c82d27525 */
#if BIND_RebaseOptions_TYPE
/*
 * Boxing implementation for git_rebase_options
 */

static void free_git_rebase_options(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_rebase_options_data_type = {
   "git_rebase_options", free_git_rebase_options
};

mrb_value
mruby_box_git_rebase_options(mrb_state* mrb, git_rebase_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, RebaseOptions_class(mrb), &git_rebase_options_data_type, box));
}

mrb_value
mruby_giftwrap_git_rebase_options(mrb_state* mrb, git_rebase_options *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, RebaseOptions_class(mrb), &git_rebase_options_data_type, box));
}

void
mruby_set_git_rebase_options_data_ptr(mrb_value obj, git_rebase_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_rebase_options_data_type);
}

void
mruby_gift_git_rebase_options_data_ptr(mrb_value obj, git_rebase_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_rebase_options_data_type);
}

git_rebase_options *
mruby_unbox_git_rebase_options(mrb_value boxed) {
  return (git_rebase_options *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refdb_boxing */
/* sha: c683ba924d1525d5efac313e5ebb56d9bad657194e3e6f46a8c8704ec8e442bf */
#if BIND_Refdb_TYPE
/*
 * Boxing implementation for git_refdb
 */

static void free_git_refdb(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_refdb_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_refdb_data_type = {
   "git_refdb", free_git_refdb
};

mrb_value
mruby_box_git_refdb(mrb_state* mrb, git_refdb *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Refdb_class(mrb), &git_refdb_data_type, box));
}

mrb_value
mruby_giftwrap_git_refdb(mrb_state* mrb, git_refdb *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Refdb_class(mrb), &git_refdb_data_type, box));
}

void
mruby_set_git_refdb_data_ptr(mrb_value obj, git_refdb *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_refdb_data_type);
}

void
mruby_gift_git_refdb_data_ptr(mrb_value obj, git_refdb *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_refdb_data_type);
}

git_refdb *
mruby_unbox_git_refdb(mrb_value boxed) {
  return (git_refdb *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RefdbBackend_boxing */
/* sha: a8ff3618d46e81259410358b510b1e8a0d7b4738eb760518862ccda2ffd7b1d3 */
#if BIND_RefdbBackend_TYPE
/*
 * Boxing implementation for git_refdb_backend
 */

static void free_git_refdb_backend(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_refdb_backend_data_type = {
   "git_refdb_backend", free_git_refdb_backend
};

mrb_value
mruby_box_git_refdb_backend(mrb_state* mrb, git_refdb_backend *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, RefdbBackend_class(mrb), &git_refdb_backend_data_type, box));
}

mrb_value
mruby_giftwrap_git_refdb_backend(mrb_state* mrb, git_refdb_backend *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, RefdbBackend_class(mrb), &git_refdb_backend_data_type, box));
}

void
mruby_set_git_refdb_backend_data_ptr(mrb_value obj, git_refdb_backend *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_refdb_backend_data_type);
}

void
mruby_gift_git_refdb_backend_data_ptr(mrb_value obj, git_refdb_backend *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_refdb_backend_data_type);
}

git_refdb_backend *
mruby_unbox_git_refdb_backend(mrb_value boxed) {
  return (git_refdb_backend *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reference_boxing */
/* sha: 70a0d024566d94dec9b77c64fc769726a1f6ea68b1cd86463c80cbaee50f1469 */
#if BIND_Reference_TYPE
/*
 * Boxing implementation for git_reference
 */

static void free_git_reference(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_reference_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_reference_data_type = {
   "git_reference", free_git_reference
};

mrb_value
mruby_box_git_reference(mrb_state* mrb, git_reference *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Reference_class(mrb), &git_reference_data_type, box));
}

mrb_value
mruby_giftwrap_git_reference(mrb_state* mrb, git_reference *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Reference_class(mrb), &git_reference_data_type, box));
}

void
mruby_set_git_reference_data_ptr(mrb_value obj, git_reference *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_reference_data_type);
}

void
mruby_gift_git_reference_data_ptr(mrb_value obj, git_reference *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_reference_data_type);
}

git_reference *
mruby_unbox_git_reference(mrb_value boxed) {
  return (git_reference *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReferenceIterator_boxing */
/* sha: adc83393feec6bd842107f98ed92581d7aaabd28169147619010dc4ac4445e47 */
#if BIND_ReferenceIterator_TYPE
/*
 * Boxing implementation for git_reference_iterator
 */

static void free_git_reference_iterator(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_reference_iterator_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_reference_iterator_data_type = {
   "git_reference_iterator", free_git_reference_iterator
};

mrb_value
mruby_box_git_reference_iterator(mrb_state* mrb, git_reference_iterator *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, ReferenceIterator_class(mrb), &git_reference_iterator_data_type, box));
}

mrb_value
mruby_giftwrap_git_reference_iterator(mrb_state* mrb, git_reference_iterator *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, ReferenceIterator_class(mrb), &git_reference_iterator_data_type, box));
}

void
mruby_set_git_reference_iterator_data_ptr(mrb_value obj, git_reference_iterator *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_reference_iterator_data_type);
}

void
mruby_gift_git_reference_iterator_data_ptr(mrb_value obj, git_reference_iterator *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_reference_iterator_data_type);
}

git_reference_iterator *
mruby_unbox_git_reference_iterator(mrb_value boxed) {
  return (git_reference_iterator *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Reflog_boxing */
/* sha: 134c3ed2265ea6791685a12fd1ad35ecec21144b6d21d33a29844ca759dc5035 */
#if BIND_Reflog_TYPE
/*
 * Boxing implementation for git_reflog
 */

static void free_git_reflog(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_reflog_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_reflog_data_type = {
   "git_reflog", free_git_reflog
};

mrb_value
mruby_box_git_reflog(mrb_state* mrb, git_reflog *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Reflog_class(mrb), &git_reflog_data_type, box));
}

mrb_value
mruby_giftwrap_git_reflog(mrb_state* mrb, git_reflog *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Reflog_class(mrb), &git_reflog_data_type, box));
}

void
mruby_set_git_reflog_data_ptr(mrb_value obj, git_reflog *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_reflog_data_type);
}

void
mruby_gift_git_reflog_data_ptr(mrb_value obj, git_reflog *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_reflog_data_type);
}

git_reflog *
mruby_unbox_git_reflog(mrb_value boxed) {
  return (git_reflog *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ReflogEntry_boxing */
/* sha: e8b09bbdfd9ba4c4d58ced203e2b6640b56960143df86800d956958b02e1499f */
#if BIND_ReflogEntry_TYPE
/*
 * Boxing implementation for git_reflog_entry
 */

static void free_git_reflog_entry(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_reflog_entry_data_type = {
   "git_reflog_entry", free_git_reflog_entry
};

mrb_value
mruby_box_git_reflog_entry(mrb_state* mrb, git_reflog_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, ReflogEntry_class(mrb), &git_reflog_entry_data_type, box));
}

mrb_value
mruby_giftwrap_git_reflog_entry(mrb_state* mrb, git_reflog_entry *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, ReflogEntry_class(mrb), &git_reflog_entry_data_type, box));
}

void
mruby_set_git_reflog_entry_data_ptr(mrb_value obj, git_reflog_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_reflog_entry_data_type);
}

void
mruby_gift_git_reflog_entry_data_ptr(mrb_value obj, git_reflog_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_reflog_entry_data_type);
}

git_reflog_entry *
mruby_unbox_git_reflog_entry(mrb_value boxed) {
  return (git_reflog_entry *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Refspec_boxing */
/* sha: d57677909e74e4f30689a923bda7877631acb70bb33e393d9b33e321870fb885 */
#if BIND_Refspec_TYPE
/*
 * Boxing implementation for git_refspec
 */

static void free_git_refspec(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_refspec_data_type = {
   "git_refspec", free_git_refspec
};

mrb_value
mruby_box_git_refspec(mrb_state* mrb, git_refspec *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Refspec_class(mrb), &git_refspec_data_type, box));
}

mrb_value
mruby_giftwrap_git_refspec(mrb_state* mrb, git_refspec *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Refspec_class(mrb), &git_refspec_data_type, box));
}

void
mruby_set_git_refspec_data_ptr(mrb_value obj, git_refspec *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_refspec_data_type);
}

void
mruby_gift_git_refspec_data_ptr(mrb_value obj, git_refspec *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_refspec_data_type);
}

git_refspec *
mruby_unbox_git_refspec(mrb_value boxed) {
  return (git_refspec *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Remote_boxing */
/* sha: 7f78067db9a04036f31aea34feb008de968b33effd64a195a2fd05f6fae5214f */
#if BIND_Remote_TYPE
/*
 * Boxing implementation for git_remote
 */

static void free_git_remote(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_remote_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_remote_data_type = {
   "git_remote", free_git_remote
};

mrb_value
mruby_box_git_remote(mrb_state* mrb, git_remote *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Remote_class(mrb), &git_remote_data_type, box));
}

mrb_value
mruby_giftwrap_git_remote(mrb_state* mrb, git_remote *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Remote_class(mrb), &git_remote_data_type, box));
}

void
mruby_set_git_remote_data_ptr(mrb_value obj, git_remote *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_remote_data_type);
}

void
mruby_gift_git_remote_data_ptr(mrb_value obj, git_remote *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_remote_data_type);
}

git_remote *
mruby_unbox_git_remote(mrb_value boxed) {
  return (git_remote *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteCallbacks_boxing */
/* sha: 12428503020cf183ed6256d4cb95e078afb6884d18a68e3867f708bffdcd419b */
#if BIND_RemoteCallbacks_TYPE
/*
 * Boxing implementation for git_remote_callbacks
 */

static void free_git_remote_callbacks(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_remote_callbacks_data_type = {
   "git_remote_callbacks", free_git_remote_callbacks
};

mrb_value
mruby_box_git_remote_callbacks(mrb_state* mrb, git_remote_callbacks *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, RemoteCallbacks_class(mrb), &git_remote_callbacks_data_type, box));
}

mrb_value
mruby_giftwrap_git_remote_callbacks(mrb_state* mrb, git_remote_callbacks *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, RemoteCallbacks_class(mrb), &git_remote_callbacks_data_type, box));
}

void
mruby_set_git_remote_callbacks_data_ptr(mrb_value obj, git_remote_callbacks *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_remote_callbacks_data_type);
}

void
mruby_gift_git_remote_callbacks_data_ptr(mrb_value obj, git_remote_callbacks *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_remote_callbacks_data_type);
}

git_remote_callbacks *
mruby_unbox_git_remote_callbacks(mrb_value boxed) {
  return (git_remote_callbacks *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RemoteHead_boxing */
/* sha: 3e30e4cbcde4a2aecc0bf07eaf1ac812143a7edc7f78cc0348a0ca7f4811ff0c */
#if BIND_RemoteHead_TYPE
/*
 * Boxing implementation for git_remote_head
 */

static void free_git_remote_head(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_remote_head_data_type = {
   "git_remote_head", free_git_remote_head
};

mrb_value
mruby_box_git_remote_head(mrb_state* mrb, git_remote_head *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, RemoteHead_class(mrb), &git_remote_head_data_type, box));
}

mrb_value
mruby_giftwrap_git_remote_head(mrb_state* mrb, git_remote_head *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, RemoteHead_class(mrb), &git_remote_head_data_type, box));
}

void
mruby_set_git_remote_head_data_ptr(mrb_value obj, git_remote_head *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_remote_head_data_type);
}

void
mruby_gift_git_remote_head_data_ptr(mrb_value obj, git_remote_head *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_remote_head_data_type);
}

git_remote_head *
mruby_unbox_git_remote_head(mrb_value boxed) {
  return (git_remote_head *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Repository_boxing */
/* sha: be77120b3c38ddbcca63acd83b5bd133499837e9d911e62827a6c66a640c8691 */
#if BIND_Repository_TYPE
/*
 * Boxing implementation for git_repository
 */

static void free_git_repository(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_repository_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_repository_data_type = {
   "git_repository", free_git_repository
};

mrb_value
mruby_box_git_repository(mrb_state* mrb, git_repository *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Repository_class(mrb), &git_repository_data_type, box));
}

mrb_value
mruby_giftwrap_git_repository(mrb_state* mrb, git_repository *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Repository_class(mrb), &git_repository_data_type, box));
}

void
mruby_set_git_repository_data_ptr(mrb_value obj, git_repository *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_repository_data_type);
}

void
mruby_gift_git_repository_data_ptr(mrb_value obj, git_repository *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_repository_data_type);
}

git_repository *
mruby_unbox_git_repository(mrb_value boxed) {
  return (git_repository *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RepositoryInitOptions_boxing */
/* sha: 21c7fd02f239eccabb78c1aecdcf8a6b4fd38e88b265829d4aacfa1b402fa33d */
#if BIND_RepositoryInitOptions_TYPE
/*
 * Boxing implementation for git_repository_init_options
 */

static void free_git_repository_init_options(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_repository_init_options_data_type = {
   "git_repository_init_options", free_git_repository_init_options
};

mrb_value
mruby_box_git_repository_init_options(mrb_state* mrb, git_repository_init_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, RepositoryInitOptions_class(mrb), &git_repository_init_options_data_type, box));
}

mrb_value
mruby_giftwrap_git_repository_init_options(mrb_state* mrb, git_repository_init_options *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, RepositoryInitOptions_class(mrb), &git_repository_init_options_data_type, box));
}

void
mruby_set_git_repository_init_options_data_ptr(mrb_value obj, git_repository_init_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_repository_init_options_data_type);
}

void
mruby_gift_git_repository_init_options_data_ptr(mrb_value obj, git_repository_init_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_repository_init_options_data_type);
}

git_repository_init_options *
mruby_unbox_git_repository_init_options(mrb_value boxed) {
  return (git_repository_init_options *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: RevertOptions_boxing */
/* sha: 5b2e69e2a5cc800189c937791891138576ab0fef9f837faa2b006ff15cb46f47 */
#if BIND_RevertOptions_TYPE
/*
 * Boxing implementation for git_revert_options
 */

static void free_git_revert_options(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_revert_options_data_type = {
   "git_revert_options", free_git_revert_options
};

mrb_value
mruby_box_git_revert_options(mrb_state* mrb, git_revert_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, RevertOptions_class(mrb), &git_revert_options_data_type, box));
}

mrb_value
mruby_giftwrap_git_revert_options(mrb_state* mrb, git_revert_options *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, RevertOptions_class(mrb), &git_revert_options_data_type, box));
}

void
mruby_set_git_revert_options_data_ptr(mrb_value obj, git_revert_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_revert_options_data_type);
}

void
mruby_gift_git_revert_options_data_ptr(mrb_value obj, git_revert_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_revert_options_data_type);
}

git_revert_options *
mruby_unbox_git_revert_options(mrb_value boxed) {
  return (git_revert_options *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revspec_boxing */
/* sha: 41ef59220bbf001822d9b3587c0c53d917de175bc53e90610a061102e03a2c3b */
#if BIND_Revspec_TYPE
/*
 * Boxing implementation for git_revspec
 */

static void free_git_revspec(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_revspec_data_type = {
   "git_revspec", free_git_revspec
};

mrb_value
mruby_box_git_revspec(mrb_state* mrb, git_revspec *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Revspec_class(mrb), &git_revspec_data_type, box));
}

mrb_value
mruby_giftwrap_git_revspec(mrb_state* mrb, git_revspec *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Revspec_class(mrb), &git_revspec_data_type, box));
}

void
mruby_set_git_revspec_data_ptr(mrb_value obj, git_revspec *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_revspec_data_type);
}

void
mruby_gift_git_revspec_data_ptr(mrb_value obj, git_revspec *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_revspec_data_type);
}

git_revspec *
mruby_unbox_git_revspec(mrb_value boxed) {
  return (git_revspec *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Revwalk_boxing */
/* sha: 397d959c62566beaeb8548ed7254fd911bb1e5ed34a548cf47f7352b43c3e068 */
#if BIND_Revwalk_TYPE
/*
 * Boxing implementation for git_revwalk
 */

static void free_git_revwalk(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_revwalk_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_revwalk_data_type = {
   "git_revwalk", free_git_revwalk
};

mrb_value
mruby_box_git_revwalk(mrb_state* mrb, git_revwalk *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Revwalk_class(mrb), &git_revwalk_data_type, box));
}

mrb_value
mruby_giftwrap_git_revwalk(mrb_state* mrb, git_revwalk *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Revwalk_class(mrb), &git_revwalk_data_type, box));
}

void
mruby_set_git_revwalk_data_ptr(mrb_value obj, git_revwalk *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_revwalk_data_type);
}

void
mruby_gift_git_revwalk_data_ptr(mrb_value obj, git_revwalk *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_revwalk_data_type);
}

git_revwalk *
mruby_unbox_git_revwalk(mrb_value boxed) {
  return (git_revwalk *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Signature_boxing */
/* sha: 8988f3c47363ab1c0d72c4e0f2c65c8b807efde2ecd388c15c7803cb8f4d6aa7 */
#if BIND_Signature_TYPE
/*
 * Boxing implementation for git_signature
 */

static void free_git_signature(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_signature_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_signature_data_type = {
   "git_signature", free_git_signature
};

mrb_value
mruby_box_git_signature(mrb_state* mrb, git_signature *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Signature_class(mrb), &git_signature_data_type, box));
}

mrb_value
mruby_giftwrap_git_signature(mrb_state* mrb, git_signature *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Signature_class(mrb), &git_signature_data_type, box));
}

void
mruby_set_git_signature_data_ptr(mrb_value obj, git_signature *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_signature_data_type);
}

void
mruby_gift_git_signature_data_ptr(mrb_value obj, git_signature *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_signature_data_type);
}

git_signature *
mruby_unbox_git_signature(mrb_value boxed) {
  return (git_signature *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StashApplyOptions_boxing */
/* sha: 2195d25e452555e0567ac93b9dd7fb94c4fcff6f3fe331517a6c2707dc02d300 */
#if BIND_StashApplyOptions_TYPE
/*
 * Boxing implementation for git_stash_apply_options
 */

static void free_git_stash_apply_options(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_stash_apply_options_data_type = {
   "git_stash_apply_options", free_git_stash_apply_options
};

mrb_value
mruby_box_git_stash_apply_options(mrb_state* mrb, git_stash_apply_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, StashApplyOptions_class(mrb), &git_stash_apply_options_data_type, box));
}

mrb_value
mruby_giftwrap_git_stash_apply_options(mrb_state* mrb, git_stash_apply_options *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, StashApplyOptions_class(mrb), &git_stash_apply_options_data_type, box));
}

void
mruby_set_git_stash_apply_options_data_ptr(mrb_value obj, git_stash_apply_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_stash_apply_options_data_type);
}

void
mruby_gift_git_stash_apply_options_data_ptr(mrb_value obj, git_stash_apply_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_stash_apply_options_data_type);
}

git_stash_apply_options *
mruby_unbox_git_stash_apply_options(mrb_value boxed) {
  return (git_stash_apply_options *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusEntry_boxing */
/* sha: 3386d79a95c2df5e2da6c4c293f1b55715b95c56430d027c6539975126d2a9e1 */
#if BIND_StatusEntry_TYPE
/*
 * Boxing implementation for git_status_entry
 */

static void free_git_status_entry(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_status_entry_data_type = {
   "git_status_entry", free_git_status_entry
};

mrb_value
mruby_box_git_status_entry(mrb_state* mrb, git_status_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, StatusEntry_class(mrb), &git_status_entry_data_type, box));
}

mrb_value
mruby_giftwrap_git_status_entry(mrb_state* mrb, git_status_entry *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, StatusEntry_class(mrb), &git_status_entry_data_type, box));
}

void
mruby_set_git_status_entry_data_ptr(mrb_value obj, git_status_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_status_entry_data_type);
}

void
mruby_gift_git_status_entry_data_ptr(mrb_value obj, git_status_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_status_entry_data_type);
}

git_status_entry *
mruby_unbox_git_status_entry(mrb_value boxed) {
  return (git_status_entry *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusList_boxing */
/* sha: 54fcde1279579e024795edc7f9ae6a43e00229a8c84b4489ae21b2bc24cd9e97 */
#if BIND_StatusList_TYPE
/*
 * Boxing implementation for git_status_list
 */

static void free_git_status_list(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_status_list_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_status_list_data_type = {
   "git_status_list", free_git_status_list
};

mrb_value
mruby_box_git_status_list(mrb_state* mrb, git_status_list *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, StatusList_class(mrb), &git_status_list_data_type, box));
}

mrb_value
mruby_giftwrap_git_status_list(mrb_state* mrb, git_status_list *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, StatusList_class(mrb), &git_status_list_data_type, box));
}

void
mruby_set_git_status_list_data_ptr(mrb_value obj, git_status_list *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_status_list_data_type);
}

void
mruby_gift_git_status_list_data_ptr(mrb_value obj, git_status_list *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_status_list_data_type);
}

git_status_list *
mruby_unbox_git_status_list(mrb_value boxed) {
  return (git_status_list *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: StatusOptions_boxing */
/* sha: 5efbf25b2664346b6e3a401007b13c1b048540904464da04dbc4b42c044e5b82 */
#if BIND_StatusOptions_TYPE
/*
 * Boxing implementation for git_status_options
 */

static void free_git_status_options(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_status_options_data_type = {
   "git_status_options", free_git_status_options
};

mrb_value
mruby_box_git_status_options(mrb_state* mrb, git_status_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, StatusOptions_class(mrb), &git_status_options_data_type, box));
}

mrb_value
mruby_giftwrap_git_status_options(mrb_state* mrb, git_status_options *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, StatusOptions_class(mrb), &git_status_options_data_type, box));
}

void
mruby_set_git_status_options_data_ptr(mrb_value obj, git_status_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_status_options_data_type);
}

void
mruby_gift_git_status_options_data_ptr(mrb_value obj, git_status_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_status_options_data_type);
}

git_status_options *
mruby_unbox_git_status_options(mrb_value boxed) {
  return (git_status_options *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Strarray_boxing */
/* sha: 3600fe6166c7046ee12bab283ea5a536702696d6b7b60740648e04ab6c0edd8d */
#if BIND_Strarray_TYPE
/*
 * Boxing implementation for git_strarray
 */

static void free_git_strarray(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_strarray_free(box->obj);
      /* git_strarray_free doesn't free the object, only its contents */
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_strarray_data_type = {
   "git_strarray", free_git_strarray
};

mrb_value
mruby_box_git_strarray(mrb_state* mrb, git_strarray *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Strarray_class(mrb), &git_strarray_data_type, box));
}

mrb_value
mruby_giftwrap_git_strarray(mrb_state* mrb, git_strarray *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Strarray_class(mrb), &git_strarray_data_type, box));
}

void
mruby_set_git_strarray_data_ptr(mrb_value obj, git_strarray *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_strarray_data_type);
}

void
mruby_gift_git_strarray_data_ptr(mrb_value obj, git_strarray *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_strarray_data_type);
}

git_strarray *
mruby_unbox_git_strarray(mrb_value boxed) {
  return (git_strarray *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Submodule_boxing */
/* sha: 6d4a1a70a885dfe989fa12f974f249ccfcdc1d6686778fe88160ee696fc08740 */
#if BIND_Submodule_TYPE
/*
 * Boxing implementation for git_submodule
 */

static void free_git_submodule(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_submodule_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_submodule_data_type = {
   "git_submodule", free_git_submodule
};

mrb_value
mruby_box_git_submodule(mrb_state* mrb, git_submodule *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Submodule_class(mrb), &git_submodule_data_type, box));
}

mrb_value
mruby_giftwrap_git_submodule(mrb_state* mrb, git_submodule *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Submodule_class(mrb), &git_submodule_data_type, box));
}

void
mruby_set_git_submodule_data_ptr(mrb_value obj, git_submodule *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_submodule_data_type);
}

void
mruby_gift_git_submodule_data_ptr(mrb_value obj, git_submodule *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_submodule_data_type);
}

git_submodule *
mruby_unbox_git_submodule(mrb_value boxed) {
  return (git_submodule *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: SubmoduleUpdateOptions_boxing */
/* sha: d21917afc06c2215db2bef04b81d6c208d70709f51ca8587532e0b27a185175a */
#if BIND_SubmoduleUpdateOptions_TYPE
/*
 * Boxing implementation for git_submodule_update_options
 */

static void free_git_submodule_update_options(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_submodule_update_options_data_type = {
   "git_submodule_update_options", free_git_submodule_update_options
};

mrb_value
mruby_box_git_submodule_update_options(mrb_state* mrb, git_submodule_update_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, SubmoduleUpdateOptions_class(mrb), &git_submodule_update_options_data_type, box));
}

mrb_value
mruby_giftwrap_git_submodule_update_options(mrb_state* mrb, git_submodule_update_options *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, SubmoduleUpdateOptions_class(mrb), &git_submodule_update_options_data_type, box));
}

void
mruby_set_git_submodule_update_options_data_ptr(mrb_value obj, git_submodule_update_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_submodule_update_options_data_type);
}

void
mruby_gift_git_submodule_update_options_data_ptr(mrb_value obj, git_submodule_update_options *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_submodule_update_options_data_type);
}

git_submodule_update_options *
mruby_unbox_git_submodule_update_options(mrb_value boxed) {
  return (git_submodule_update_options *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tag_boxing */
/* sha: 53f142803e5d496c22b233ba7321e3015859b2ecc82f7b1530e33a469757ee20 */
#if BIND_Tag_TYPE
/*
 * Boxing implementation for git_tag
 */

static void free_git_tag(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_tag_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_tag_data_type = {
   "git_tag", free_git_tag
};

mrb_value
mruby_box_git_tag(mrb_state* mrb, git_tag *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Tag_class(mrb), &git_tag_data_type, box));
}

mrb_value
mruby_giftwrap_git_tag(mrb_state* mrb, git_tag *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Tag_class(mrb), &git_tag_data_type, box));
}

void
mruby_set_git_tag_data_ptr(mrb_value obj, git_tag *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_tag_data_type);
}

void
mruby_gift_git_tag_data_ptr(mrb_value obj, git_tag *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_tag_data_type);
}

git_tag *
mruby_unbox_git_tag(mrb_value boxed) {
  return (git_tag *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Time_boxing */
/* sha: 1897d1c1028072a98631b1f5fd6fd3f9ded1c29fcecfc146aa11400f2edebef4 */
#if BIND_Time_TYPE
/*
 * Boxing implementation for git_time
 */

static void free_git_time(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_time_data_type = {
   "git_time", free_git_time
};

mrb_value
mruby_box_git_time(mrb_state* mrb, git_time *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Time_class(mrb), &git_time_data_type, box));
}

mrb_value
mruby_giftwrap_git_time(mrb_state* mrb, git_time *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Time_class(mrb), &git_time_data_type, box));
}

void
mruby_set_git_time_data_ptr(mrb_value obj, git_time *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_time_data_type);
}

void
mruby_gift_git_time_data_ptr(mrb_value obj, git_time *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_time_data_type);
}

git_time *
mruby_unbox_git_time(mrb_value boxed) {
  return (git_time *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transaction_boxing */
/* sha: 01d4a522fe79d488769a56a075d16bebe910fb8142f79134623e24b8198375ca */
#if BIND_Transaction_TYPE
/*
 * Boxing implementation for git_transaction
 */

static void free_git_transaction(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_transaction_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_transaction_data_type = {
   "git_transaction", free_git_transaction
};

mrb_value
mruby_box_git_transaction(mrb_state* mrb, git_transaction *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Transaction_class(mrb), &git_transaction_data_type, box));
}

mrb_value
mruby_giftwrap_git_transaction(mrb_state* mrb, git_transaction *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Transaction_class(mrb), &git_transaction_data_type, box));
}

void
mruby_set_git_transaction_data_ptr(mrb_value obj, git_transaction *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_transaction_data_type);
}

void
mruby_gift_git_transaction_data_ptr(mrb_value obj, git_transaction *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_transaction_data_type);
}

git_transaction *
mruby_unbox_git_transaction(mrb_value boxed) {
  return (git_transaction *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TransferProgress_boxing */
/* sha: f2e6291e8ad610e8bfe7ca8270fba9810e5748b9c3c60b658a4601d5b4bfa72b */
#if BIND_TransferProgress_TYPE
/*
 * Boxing implementation for git_transfer_progress
 */

static void free_git_transfer_progress(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_transfer_progress_data_type = {
   "git_transfer_progress", free_git_transfer_progress
};

mrb_value
mruby_box_git_transfer_progress(mrb_state* mrb, git_transfer_progress *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, TransferProgress_class(mrb), &git_transfer_progress_data_type, box));
}

mrb_value
mruby_giftwrap_git_transfer_progress(mrb_state* mrb, git_transfer_progress *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, TransferProgress_class(mrb), &git_transfer_progress_data_type, box));
}

void
mruby_set_git_transfer_progress_data_ptr(mrb_value obj, git_transfer_progress *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_transfer_progress_data_type);
}

void
mruby_gift_git_transfer_progress_data_ptr(mrb_value obj, git_transfer_progress *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_transfer_progress_data_type);
}

git_transfer_progress *
mruby_unbox_git_transfer_progress(mrb_value boxed) {
  return (git_transfer_progress *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Transport_boxing */
/* sha: 299fda5824da0d6ed757785bbbc7f08a749308eeab11a634429b6786a999574c */
#if BIND_Transport_TYPE
/*
 * Boxing implementation for git_transport
 */

static void free_git_transport(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_transport_data_type = {
   "git_transport", free_git_transport
};

mrb_value
mruby_box_git_transport(mrb_state* mrb, git_transport *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Transport_class(mrb), &git_transport_data_type, box));
}

mrb_value
mruby_giftwrap_git_transport(mrb_state* mrb, git_transport *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Transport_class(mrb), &git_transport_data_type, box));
}

void
mruby_set_git_transport_data_ptr(mrb_value obj, git_transport *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_transport_data_type);
}

void
mruby_gift_git_transport_data_ptr(mrb_value obj, git_transport *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_transport_data_type);
}

git_transport *
mruby_unbox_git_transport(mrb_value boxed) {
  return (git_transport *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Tree_boxing */
/* sha: 91fce6fe245819b6b0e1e466bd74cae59ab39270490783407c227304157fc4a9 */
#if BIND_Tree_TYPE
/*
 * Boxing implementation for git_tree
 */

static void free_git_tree(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_tree_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_tree_data_type = {
   "git_tree", free_git_tree
};

mrb_value
mruby_box_git_tree(mrb_state* mrb, git_tree *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Tree_class(mrb), &git_tree_data_type, box));
}

mrb_value
mruby_giftwrap_git_tree(mrb_state* mrb, git_tree *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Tree_class(mrb), &git_tree_data_type, box));
}

void
mruby_set_git_tree_data_ptr(mrb_value obj, git_tree *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_tree_data_type);
}

void
mruby_gift_git_tree_data_ptr(mrb_value obj, git_tree *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_tree_data_type);
}

git_tree *
mruby_unbox_git_tree(mrb_value boxed) {
  return (git_tree *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: TreeEntry_boxing */
/* sha: 4051e383d1bf33346527b7e88998be29ca6fbf954a1f39d8d4a5fc55045b6a93 */
#if BIND_TreeEntry_TYPE
/*
 * Boxing implementation for git_tree_entry
 */

static void free_git_tree_entry(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_tree_entry_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_tree_entry_data_type = {
   "git_tree_entry", free_git_tree_entry
};

mrb_value
mruby_box_git_tree_entry(mrb_state* mrb, git_tree_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, TreeEntry_class(mrb), &git_tree_entry_data_type, box));
}

mrb_value
mruby_giftwrap_git_tree_entry(mrb_state* mrb, git_tree_entry *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, TreeEntry_class(mrb), &git_tree_entry_data_type, box));
}

void
mruby_set_git_tree_entry_data_ptr(mrb_value obj, git_tree_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_tree_entry_data_type);
}

void
mruby_gift_git_tree_entry_data_ptr(mrb_value obj, git_tree_entry *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_tree_entry_data_type);
}

git_tree_entry *
mruby_unbox_git_tree_entry(mrb_value boxed) {
  return (git_tree_entry *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Treebuilder_boxing */
/* sha: a09931d6175b6a4aea0a3aefad9dab39f12404c81b1a3ad3d9a3f8dd6e4fbd7f */
#if BIND_Treebuilder_TYPE
/*
 * Boxing implementation for git_treebuilder
 */

static void free_git_treebuilder(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      git_treebuilder_free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_treebuilder_data_type = {
   "git_treebuilder", free_git_treebuilder
};

mrb_value
mruby_box_git_treebuilder(mrb_state* mrb, git_treebuilder *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Treebuilder_class(mrb), &git_treebuilder_data_type, box));
}

mrb_value
mruby_giftwrap_git_treebuilder(mrb_state* mrb, git_treebuilder *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Treebuilder_class(mrb), &git_treebuilder_data_type, box));
}

void
mruby_set_git_treebuilder_data_ptr(mrb_value obj, git_treebuilder *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_treebuilder_data_type);
}

void
mruby_gift_git_treebuilder_data_ptr(mrb_value obj, git_treebuilder *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_treebuilder_data_type);
}

git_treebuilder *
mruby_unbox_git_treebuilder(mrb_value boxed) {
  return (git_treebuilder *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: Writestream_boxing */
/* sha: f4e8f98e529bb4cc70349d648f71fd0c43b2c3cb537725f7437aad9dd79beebf */
#if BIND_Writestream_TYPE
/*
 * Boxing implementation for git_writestream
 */

static void free_git_writestream(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type git_writestream_data_type = {
   "git_writestream", free_git_writestream
};

mrb_value
mruby_box_git_writestream(mrb_state* mrb, git_writestream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, Writestream_class(mrb), &git_writestream_data_type, box));
}

mrb_value
mruby_giftwrap_git_writestream(mrb_state* mrb, git_writestream *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, Writestream_class(mrb), &git_writestream_data_type, box));
}

void
mruby_set_git_writestream_data_ptr(mrb_value obj, git_writestream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_writestream_data_type);
}

void
mruby_gift_git_writestream_data_ptr(mrb_value obj, git_writestream *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &git_writestream_data_type);
}

git_writestream *
mruby_unbox_git_writestream(mrb_value boxed) {
  return (git_writestream *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: ImaxdivT_boxing */
/* sha: 3cbedacb69751f50d011f140d625dd86d37bb9480e360970e3ec20c941bb7cb6 */
#if BIND_ImaxdivT_TYPE
/*
 * Boxing implementation for imaxdiv_t
 */

static void free_imaxdiv_t(mrb_state* mrb, void* ptr) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)ptr;
  if (box->belongs_to_ruby) {
    if (box->obj != NULL) {
      free(box->obj);
      box->obj = NULL;
    }
  }
  free(box);
}

static const mrb_data_type imaxdiv_t_data_type = {
   "imaxdiv_t", free_imaxdiv_t
};

mrb_value
mruby_box_imaxdiv_t(mrb_state* mrb, imaxdiv_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  return mrb_obj_value(Data_Wrap_Struct(mrb, ImaxdivT_class(mrb), &imaxdiv_t_data_type, box));
}

mrb_value
mruby_giftwrap_imaxdiv_t(mrb_state* mrb, imaxdiv_t *unboxed) {
   mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
   box->belongs_to_ruby = TRUE;
   box->obj = unboxed;
   return mrb_obj_value(Data_Wrap_Struct(mrb, ImaxdivT_class(mrb), &imaxdiv_t_data_type, box));
}

void
mruby_set_imaxdiv_t_data_ptr(mrb_value obj, imaxdiv_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = FALSE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &imaxdiv_t_data_type);
}

void
mruby_gift_imaxdiv_t_data_ptr(mrb_value obj, imaxdiv_t *unboxed) {
  mruby_to_native_ref* box = (mruby_to_native_ref*)malloc(sizeof(mruby_to_native_ref));
  box->belongs_to_ruby = TRUE;
  box->obj = unboxed;
  mrb_data_init(obj, box, &imaxdiv_t_data_type);
}

imaxdiv_t *
mruby_unbox_imaxdiv_t(mrb_value boxed) {
  return (imaxdiv_t *)((mruby_to_native_ref *)DATA_PTR(boxed))->obj;
}
#endif
/* MRUBY_BINDING_END */

/* MRUBY_BINDING: footer */
/* sha: user_defined */

/* MRUBY_BINDING_END */
