# CTypes.define('Example') do
#   self.needs_unboxing = true
#   self.needs_boxing_cleanup = false
#   self.needs_unboxing_cleanup = false
#   self.needs_type_check = true
#   
#   self.recv_template = 'mrb_value %{value};'
#   self.format_specifier = 'o'
#   self.get_args_template = '&%{value}'
#   self.type_check_template = nil
#   self.invocation_arg_template = '%{value}'
#   self.field_swap_template = %{old} = %{new};
#   
#   self.unboxing_fn.invocation_template = '%{as} = TODO_mruby_unbox_Example(%{unbox});'
#   self.unboxing_fn.cleanup_template = 'free(%{value});'
#   
#   self.boxing_fn.invocation_template = '%{as} = TODO_mruby_box_Example(%{box});'
#   self.boxing_fn.cleanup_template = 'free(%{value});'
# end

CTypes.translate_type_names do |name|
  # Don't repeat the module name in the class names
  MRubyBindings.type_name_to_rb_class(name).sub(/^Git/, '')
end

CTypes.translate_fn_names do |name|
  # Don't repeat the module name in the function names
  if name.start_with?('git_')
    name.sub(/^git_([^_])/, "\\1")
  elsif name.start_with?('git')
    name.sub(/^git/, '')
  else
    name
  end
end

CTypes.translate_enum_names do |name|
  # Don't repeat the module name in the class names
  name.sub /^GIT_/i, ''
end

CTypes.typedef('int', 'git_off_t')
CTypes.typedef('int', 'git_time_t')
CTypes.typedef('out:int *', 'size_t *')
CTypes.typedef('out:int *', 'git_merge_analysis_t *')
CTypes.typedef('out:int *', 'git_merge_preference_t *')
CTypes.typedef('out:int *', 'git_otype *')

CTypes.define('out-bool:int *') do
  self.type_name = 'int'
  self.recv_template = 'int %{value};'
  self.invocation_arg_template = "&%{value}"
  self.out_only = true
  self.boxing_fn.invocation_template = "mrb_value %{as} = %{box} == 0 ? mrb_false_value() : mrb_true_value();"
end

CTypes.define('out:int *') do
  self.type_name = 'int'
  self.recv_template = 'int %{value};'
  self.invocation_arg_template = "&%{value}"
  self.out_only = true
  self.boxing_fn.invocation_template = "mrb_value %{as} = mrb_fixnum_value(%{box});"
end
CTypes.typedef('out:int *', 'git_branch_t *')

CTypes.define('out:cstring') do
  self.type_name = 'char *'
  self.recv_template = 'char * %{value} = NULL;'
  self.invocation_arg_template = "&%{value}"
  self.out_only = true
  self.boxing_fn.invocation_template = "mrb_value %{as} = %{box} ==  NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, %{box});"
  self.boxing_fn.cleanup_template = "free(%{value});"
end

CTypes.define('out:cstring:nofree') do
  self.type_name = 'char *'
  self.recv_template = 'char * %{value} = NULL;'
  self.invocation_arg_template = "&%{value}"
  self.out_only = true
  self.boxing_fn.invocation_template = "mrb_value %{as} = %{box} ==  NULL ? mrb_nil_value() : mrb_str_new_cstr(mrb, %{box});"
end


CTypes.define('in-buffer:const void *, int') do
  self.needs_unboxing = false
  self.needs_boxing_cleanup = false
  self.needs_unboxing_cleanup = false
  self.needs_type_check = false
  
  self.recv_template = 'mrb_value %{value};'
  self.format_specifier = 'S'
  self.get_args_template = '&%{value}'
  self.type_check_template = nil
  self.invocation_arg_template = 'RSTRING_PTR(%{value}), RSTRING_LEN(%{value})'  
end

CTypes.define('out-buffer:void *, int') do
  self.needs_unboxing = false
  self.needs_boxing_cleanup = false
  self.needs_unboxing_cleanup = false
  self.needs_type_check = false
  
  self.recv_template = 'mrb_value %{value};'
  self.format_specifier = 'S'
  self.get_args_template = '&%{value}'
  self.type_check_template = nil
  self.invocation_arg_template = 'RSTRING_PTR(%{value}), RSTRING_LEN(%{value})'  
end

# The unholy types, born of a lie. They're not passed out as const, but 
# there is also no corresponding *_free function for them. see the
# "Memory Management Note" below.
%w[
  git_odb_backend
  git_odb_writepack
  git_rebase_operation
].concat(%w[
    git_annotated_commit
    git_diff_hunk
    git_diff_line
    git_index_entry
    git_remote_head
    git_tree_entry  
  ].map { |t| "const #{t}" }
).each do |type|
  CTypes.define("#{type} **") do
    self.out_only = true
    self.type_name = type.sub('const ', '')
    self.recv_template = "#{self.type_name} * %{value} = NULL;"
    self.invocation_arg_template = "&%{value}"
    self.boxing_fn.invocation_template = "mrb_value %{as} = mruby_box_#{self.type_name}(mrb, %{box});"
  end
end

# Memory Management Note:
# - Anytime libgit2 fills in a non-const pointer for you, you should be using a
#   _free call to release the resource. (https://libgit2.github.com/docs/guides/101-samples/)

%w[
  git_annotated_commit
  git_blame
  git_blob
  git_branch_iterator
  git_commit
  git_config_entry
  git_config
  git_config_iterator
  git_describe_result
  git_diff
  git_diff_stats
  git_filter_list
  git_index
  git_index_conflict_iterator
  git_indexer
  git_merge_file_result
  git_note_iterator
  git_note
  git_object
  git_odb
  git_odb_stream
  git_odb_object
  git_oid_shorten
  git_oidarray
  git_packbuilder
  git_patch
  git_pathspec
  git_pathspec_match_list
  git_rebase
  git_refdb
  git_reflog
  git_reference
  git_reference_iterator
  git_remote
  git_repository
  git_revwalk
  git_signature
  git_status_list
  git_submodule
  git_tag
  git_transaction
  git_cred
  git_tree
  git_tree_entry
  git_treebuilder
].each do |type|
  CTypes.set_destructor(type, "#{type}_free")
  CTypes.define("#{type} **") do
    self.type_name = "#{type} **"
    self.recv_template = "#{type} * %{value} = NULL;"
    self.get_args_template = ""
    self.invocation_arg_template = "&%{value}"
    self.boxing_fn.invocation_template = "mrb_value %{as} = %{box} == NULL ? mrb_nil_value() : mruby_giftwrap_#{type}(mrb, %{box});"
    self.out_only = true
  end
end

# Buffer configurations
# ---------------------

CTypes.set_destructor('git_buf', 'git_buf_free')

CTypes.define('out:git_buf *') do
  self.out_only = true
  self.type_name = "git_buf"
  self.recv_template = <<-EOS
git_buf * %{value} = (git_buf*)calloc(1, sizeof(git_buf));
EOS
  self.invocation_arg_template = "%{value}"
  self.boxing_fn.invocation_template = "mrb_value %{as} = %{box} == NULL ? mrb_nil_value() : mruby_giftwrap_git_buf(mrb, %{box});"
end

CTypes.define('in:git_buf *') do
  self.needs_unboxing = true
  self.needs_boxing_cleanup = false
  self.needs_unboxing_cleanup = false
  self.needs_type_check = true
  
  self.type_name = "git_buf"
  self.recv_template = <<-EOS
mrb_value %{value};
EOS
  self.type_check_template = <<-EOS
if (!mrb_obj_is_kind_of(mrb, %{value}, Buf_class(mrb))) {
  mrb_raise(mrb, E_TYPE_ERROR, "Buf expected");
  return mrb_nil_value();
}
EOS
  self.invocation_arg_template = "%{value}"
  self.unboxing_fn.invocation_template = "git_buf * %{as} = mrb_nil_p(%{unbox}) ? NULL : mruby_unbox_git_buf(%{unbox});"
  self.boxing_fn.invocation_template = "mrb_value %{as} = %{box} == NULL ? mrb_nil_value() : mruby_box_git_buf(mrb, %{box});"
end

# Table initially generated in `rake bindings:pry` shell with this line:
# lib['ParmDecls'].select { |p| p['type']['type_name'].include?('git_buf') }.map { |p| [p['type']['type_name'], p['name'], p['function']] }

CTypes.set_fn_param_type("git_blob_filtered_content", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_branch_upstream_name", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_branch_remote_name", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_branch_upstream_remote", "buf", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_buf_free", "buffer", CTypes["in:git_buf *"])
CTypes.set_fn_param_type("git_buf_grow", "buffer", CTypes["in:git_buf *"])
CTypes.set_fn_param_type("git_buf_set", "buffer", CTypes["in:git_buf *"])
CTypes.set_fn_param_type("git_buf_is_binary", "buf", CTypes["in:git_buf *"])
CTypes.set_fn_param_type("git_buf_contains_nul", "buf", CTypes["in:git_buf *"])
CTypes.set_fn_param_type("git_commit_header_field", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_config_find_global", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_config_find_xdg", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_config_find_system", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_config_find_programdata", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_config_get_path", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_config_get_string_buf", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_config_parse_path", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_describe_format", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_diff_stats_to_buf", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_diff_format_email", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_diff_commit_as_email", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_filter_list_apply_to_data", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_filter_list_apply_to_data", "in", CTypes["in:git_buf *"])
CTypes.set_fn_param_type("git_filter_list_apply_to_file", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_filter_list_apply_to_blob", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_filter_list_stream_data", "data", CTypes["in:git_buf *"])
CTypes.set_fn_param_type("git_message_prettify", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_object_short_id", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_packbuilder_write_buf", "buf", CTypes["in:git_buf *"])
CTypes.set_fn_param_type("git_patch_to_buf", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_refspec_transform", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_refspec_rtransform", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_remote_default_branch", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_repository_discover", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_repository_message", "out", CTypes["out:git_buf *"])
CTypes.set_fn_param_type("git_submodule_resolve_url", "out", CTypes["out:git_buf *"])


# `int` Return Semantics
# ----------------------

# ### Booleans

# Need to tell the generator these are to be booleans, not ints

%w[
git_oid_streq
git_oid_equal
git_reference_has_log
git_blob_is_binary
git_branch_is_head
git_buf_is_binary
git_buf_contains_nul
git_filter_list_contains
git_graph_descendant_of
git_index_entry_is_conflict
git_index_has_conflicts
git_oid_iszero
git_reference_is_valid_name
git_refspec_force
git_refspec_src_matches
git_refspec_dst_matches
git_remote_connected
git_remote_is_valid_name
git_repository_head_detached
git_repository_head_unborn
git_repository_is_empty
git_repository_is_bare
git_repository_is_shallow
git_cred_has_username
git_diff_is_sorted_icase
git_odb_exists
git_odb_exists_prefix
git_object_typeisloose
git_pathspec_matches_path
git_reference_is_branch
git_reference_is_remote
git_reference_is_tag
git_reference_is_note
].each do |fn|
  CTypes.set_fn_return_type(fn, CTypes['bool'])
end

# ### Actual Integers

### Nothing to do. Default behavior is correct
# git_oid_shorten_add
# git_config_get_multivar_foreach
# git_config_backend_foreach_match
# git_config_foreach_match
# git_libgit2_features
# git_remote_prune_refs
# git_repository_state
# git_commit_time_offset
# git_libgit2_init
# git_libgit2_shutdown
# git_index_caps
# git_index_entry_stage
# git_index_find
# git_index_conflict_next
# git_note_next
# git_tree_entry_cmp
# git_oid_cmp
# git_oid_ncmp
# git_oid_strcmp
# git_reference_cmp
# git_tag_foreach
# git_revwalk_next
# git_patch_num_lines_in_hunk

# ### Error Codes

# Just ignore the return values... an exception will be raised if there is an error.

%w[
git_annotated_commit_from_ref
git_annotated_commit_from_fetchhead
git_annotated_commit_lookup
git_annotated_commit_from_revspec
git_attr_foreach
git_blame_file
git_blame_buffer
git_blob_filtered_content
git_branch_delete
git_branch_next
git_branch_move
git_branch_lookup
git_branch_name
git_branch_upstream
git_buf_grow
git_buf_set
git_checkout_head
git_checkout_index
git_checkout_tree
git_clone
git_commit_nth_gen_ancestor
git_libgit2_opts
git_config_add_file_ondisk
git_config_open_ondisk
git_config_foreach
git_diff_find_similar
git_diff_foreach
git_diff_print
git_diff_blobs
git_diff_blob_to_buffer
git_diff_buffers
git_diff_get_stats
git_diff_stats_to_buf
git_filter_list_load
git_filter_list_apply_to_data
git_ignore_add_rule
git_ignore_clear_internal_rules
git_index_set_caps
git_index_write_tree
git_index_write_tree_to
git_index_clear
git_index_add_all
git_index_remove_all
git_index_update_all
git_merge_analysis
git_merge_base
git_merge_bases
git_merge_file
git_merge_file_from_index
git_merge_trees
git_merge_commits
git_merge
git_note_foreach
git_object_lookup_bypath
git_object_short_id
git_object_peel
git_odb_add_disk_alternate
git_odb_refresh
git_odb_foreach
git_odb_stream_finalize_write
git_odb_add_backend
git_odb_add_alternate
git_odb_get_backend
git_patch_from_diff
git_patch_from_blobs
git_patch_from_blob_and_buffer
git_patch_from_buffers
git_patch_line_stats
git_patch_get_hunk
git_patch_get_line_in_hunk
git_patch_print
git_patch_to_buf
git_pathspec_new
git_pathspec_match_workdir
git_pathspec_match_index
git_pathspec_match_tree
git_pathspec_match_diff
git_reflog_rename
git_reflog_drop
git_reference_lookup
git_reference_name_to_id
git_reference_symbolic_create_matching
git_reference_symbolic_create
git_reference_create
git_reference_create_matching
git_reference_symbolic_set_target
git_reference_set_target
git_reference_rename
git_reference_foreach
git_reference_foreach_name
git_reference_foreach_glob
git_reference_normalize_name
git_reference_peel
git_remote_ls
git_remote_delete
git_repository_open_ext
git_repository_open_bare
git_repository_head
git_repository_state_cleanup
git_repository_fetchhead_foreach
git_repository_mergehead_foreach
git_repository_hashfile
git_repository_set_head
git_repository_set_head_detached
git_repository_detach_head
git_repository_set_namespace
git_reset
git_reset_default
git_revparse_single
git_revparse_ext
git_revparse
git_signature_default
git_stash_save
git_stash_apply
git_stash_foreach
git_stash_drop
git_stash_pop
git_status_foreach
git_status_foreach_ext
git_status_file
git_status_list_new
git_strarray_copy
git_submodule_update
git_submodule_lookup
git_submodule_foreach
git_submodule_add_setup
git_submodule_add_to_index
git_submodule_set_branch
git_submodule_set_url
git_submodule_init
git_submodule_repo_init
git_submodule_open
git_submodule_reload
git_submodule_status
git_submodule_location
git_tag_create
git_tag_annotation_create
git_tag_create_frombuffer
git_tag_create_lightweight
git_tag_delete
git_tree_entry_bypath
git_treebuilder_new
git_blame_init_options
git_checkout_init_options
git_cherrypick_init_options
git_clone_init_options
git_diff_init_options
git_diff_find_init_options
git_diff_format_email_init_options
git_merge_file_init_input
git_merge_file_init_options
git_merge_init_options
git_merge_base_many
git_merge_bases_many
git_merge_base_octopus
git_rebase_init_options
git_rebase_init
git_rebase_open
git_rebase_next
git_rebase_commit
git_rebase_abort
git_rebase_finish
git_remote_init_callbacks
git_fetch_init_options
git_push_init_options
git_repository_init_init_options
git_revert_init_options
git_stash_apply_init_options
git_status_init_options
git_submodule_update_init_options
git_blob_lookup
git_blob_lookup_prefix
git_blob_create_fromworkdir
git_blob_create_fromdisk
git_blob_create_frombuffer
git_branch_set_upstream
git_branch_upstream_remote
git_commit_lookup
git_commit_lookup_prefix
git_commit_tree
git_commit_parent
git_commit_create
git_config_open_default
git_config_new
git_config_snapshot
git_config_get_entry
git_config_get_int32
git_config_get_int64
git_config_get_bool
git_config_get_path
git_config_get_string
git_config_get_string_buf
git_config_next
git_config_set_int32
git_config_set_int64
git_config_set_bool
git_config_set_string
git_config_delete_multivar
git_config_lock
git_diff_format_email
git_diff_commit_as_email
git_index_open
git_index_new
git_index_read
git_index_write
git_index_read_tree
git_index_remove
git_index_remove_directory
git_index_add
git_index_add_bypath
git_index_add_frombuffer
git_index_remove_bypath
git_index_conflict_add
git_index_conflict_get
git_index_conflict_remove
git_index_conflict_cleanup
git_index_conflict_iterator_new
git_message_prettify
git_note_iterator_new
git_note_read
git_note_create
git_note_remove
git_note_default_ref
git_object_lookup
git_object_lookup_prefix
git_odb_new
git_odb_open
git_odb_write
git_odb_hash
git_odb_hashfile
git_odb_object_dup
git_odb_backend_pack
git_odb_backend_loose
git_odb_backend_one_pack
git_oid_fromstr
git_oid_fromstrp
git_oid_fromstrn
git_packbuilder_new
git_packbuilder_insert
git_packbuilder_insert_tree
git_packbuilder_insert_commit
git_packbuilder_insert_walk
git_packbuilder_insert_recur
git_packbuilder_write
git_packbuilder_foreach
git_packbuilder_set_callbacks
git_refdb_new
git_refdb_open
git_reflog_read
git_reflog_write
git_reflog_append
git_reflog_delete
git_reference_dwim
git_reference_resolve
git_reference_remove
git_reference_list
git_reference_iterator_new
git_reference_iterator_glob_new
git_reference_ensure_log
git_remote_create_anonymous
git_remote_dup
git_remote_connect
git_remote_list
git_remote_download
git_remote_upload
git_remote_update_tips
git_remote_fetch
git_remote_prune
git_repository_open
git_repository_wrap_odb
git_repository_discover
git_repository_init
git_repository_init_ext
git_revwalk_new
git_revwalk_push
git_revwalk_push_glob
git_revwalk_push_head
git_revwalk_hide
git_revwalk_hide_glob
git_revwalk_hide_head
git_revwalk_push_ref
git_revwalk_hide_ref
git_revwalk_push_range
git_signature_new
git_signature_now
git_signature_dup
git_submodule_resolve_url
git_submodule_set_ignore
git_submodule_set_update
git_tag_lookup
git_tag_lookup_prefix
git_tag_target
git_tag_list
git_tag_list_match
git_tag_peel
git_trace_set
git_transaction_new
git_transaction_commit
git_tree_lookup
git_tree_lookup_prefix
git_tree_entry_dup
git_tree_entry_to_object
git_treebuilder_insert
git_treebuilder_write
git_tree_walk
git_blob_create_fromchunks
git_branch_create
git_branch_upstream_name
git_branch_remote_name
git_config_open_level
git_reference_delete
git_refspec_transform
git_refspec_rtransform
git_remote_create
git_remote_create_with_fetchspec
git_remote_lookup
git_remote_add_fetch
git_remote_add_push
git_remote_rename
git_remote_default_branch
git_repository_message
git_transaction_set_target
git_transaction_set_symbolic_target
git_transaction_set_reflog
git_transaction_remove
git_cherrypick_commit
git_cherrypick
git_revert_commit
git_revert
git_cred_userpass_plaintext_new
git_cred_ssh_key_new
git_cred_ssh_interactive_new
git_cred_ssh_key_from_agent
git_cred_ssh_custom_new
git_cred_default_new
git_cred_ssh_key_memory_new
git_commit_header_field
git_config_find_global
git_config_find_xdg
git_config_find_system
git_config_find_programdata
git_repository_set_workdir
git_repository_config
git_repository_config_snapshot
git_repository_odb
git_repository_refdb
git_repository_index
git_config_parse_bool
git_config_parse_int32
git_config_parse_int64
git_config_parse_path
git_ignore_path_is_ignored
git_index_find_prefix
git_transaction_lock_ref
git_odb_open_wstream
git_odb_stream_write
git_odb_open_rstream
git_config_get_mapped
git_status_should_ignore
git_cred_username_new
git_treebuilder_remove
git_attr_get
git_attr_get_many
git_attr_add_macro
git_commit_create_v
git_commit_amend
git_config_open_global
git_config_multivar_iterator_new
git_config_iterator_new
git_branch_iterator_new
git_config_set_multivar
git_remote_set_url
git_remote_set_pushurl
git_remote_set_autotag
git_repository_set_head_detached_from_annotated
git_config_delete_entry
git_config_iterator_glob_new
git_config_lookup_map_value
git_cred_userpass
git_describe_init_options
git_indexer_new
git_describe_init_format_options
git_describe_commit
git_describe_workdir
git_describe_format
git_branch_create_from_annotated
git_diff_tree_to_tree
git_diff_tree_to_index
git_diff_index_to_workdir
git_diff_tree_to_workdir
git_diff_tree_to_workdir_with_index
git_diff_index_to_index
git_diff_merge
git_filter_list_apply_to_file
git_filter_list_apply_to_blob
git_filter_list_stream_data
git_filter_list_stream_file
git_filter_list_stream_blob
git_repository_ident
git_repository_set_ident
git_remote_push
git_repository_message_remove
git_reset_from_annotated
git_revwalk_add_hide_cb
git_submodule_add_finalize
git_submodule_set_fetch_recurse_submodules
git_submodule_sync
git_remote_get_fetch_refspecs
git_remote_get_push_refspecs
git_reference_next
git_reference_next_name
git_odb_read
git_odb_read_prefix
git_odb_read_header
git_odb_stream_read
git_object_dup
git_graph_ahead_behind
git_indexer_append
git_indexer_commit
git_odb_write_pack
git_packbuilder_write_buf
git_refdb_compress
].each do |fn|
  CTypes.set_fn_header(fn, "CLEAR_GIT_ERROR();");
  CTypes.set_fn_footer(fn, "RAISE_GIT_ERROR(native_return_value);")
  CTypes.set_fn_return_type(fn, CTypes['ignore'])
end

# Creation Methods & OIDs
# -----------------------

# creators = lib['FunctionDecls'].select { |p| p['name'].include?('create') }.map { |f| f['name'] } 
# lib['ParmDecls'].select { |p| creators.include?(p['function'][/[a-z0-9_*]*$/i]) }.select { |p| p['type']['type_name'] == 'git_oid *' }.map { |p| [p['name'], p['function']] }

CTypes.define('out:git_oid *') do
  self.out_only = true
  self.type_name = "git_oid"
  self.recv_template = <<-EOS
git_oid * %{value} = (git_oid*)calloc(1, sizeof(git_oid));
EOS
  self.invocation_arg_template = "%{value}"
  self.boxing_fn.invocation_template = "mrb_value %{as} = %{box} == NULL ? mrb_nil_value() : mruby_giftwrap_git_oid(mrb, %{box});"
end

[["id", "git_blob_create_fromworkdir"],
 ["id", "git_blob_create_fromdisk"],
 ["id", "git_blob_create_fromchunks"],
 ["id", "git_blob_create_frombuffer"],
 ["id", "git_commit_create"],
 ["id", "git_commit_create_v"],
 ["out", "git_note_create"],
 ["oid", "git_tag_create"],
 ["oid", "git_tag_annotation_create"],
 ["oid", "git_tag_create_frombuffer"],
 ["oid", "git_tag_create_lightweight"],
 ["out", "git_reference_name_to_id"],
 ["id", "git_treebuilder_write"]].each do |name, fn|
   CTypes.set_fn_param_type(fn, name, CTypes['out:git_oid *'])
end

# git_strarray out params
# -----------------------

CTypes.set_destructor("git_strarray", "git_strarray_free")
CTypes.define("out:git_strarray *") do
  self.type_name = "git_strarray"
  self.recv_template = "git_strarray * %{value} = (git_strarray*)calloc(1, sizeof(git_strarray));"
  self.get_args_template = ""
  self.invocation_arg_template = "%{value}"
  self.boxing_fn.invocation_template = "mrb_value %{as} = %{box} == NULL ? mrb_nil_value() : mruby_giftwrap_git_strarray(mrb, %{box});"
  self.out_only = true
end

[["array", "git_reference_list"],
 ["array", "git_remote_get_fetch_refspecs"], 
 ["array", "git_remote_get_push_refspecs"],
 ["out", "git_remote_list"], 
 ["problems", "git_remote_rename"],
 ["pathspecs", "git_reset_default"],
 ["tgt", "git_strarray_copy"],
 ["tag_names", "git_tag_list"],
 ["tag_names", "git_tag_list_match"]].each do |name, fn|
  CTypes.set_fn_param_type(fn, name, CTypes['out:git_strarray *'])
end

# Convert force params to booleans
# --------------------------------

# lib['ParmDecls'].select { |p| p['name'] == 'force' }.map { |p| [p['name'], p['function']] }

[["force", "git_branch_create"],
 ["force", "git_branch_create_from_annotated"],
 ["force", "git_branch_move"],
 ["force", "git_config_add_file_ondisk"],
 ["force", "git_index_read"],
 ["force", "git_note_create"],
 ["force", "git_reference_symbolic_create_matching"],
 ["force", "git_reference_symbolic_create"],
 ["force", "git_reference_create"],
 ["force", "git_reference_create_matching"],
 ["force", "git_reference_rename"],
 ["force", "git_submodule_reload"],
 ["force", "git_tag_create"],
 ["force", "git_tag_create_frombuffer"],
 ["force", "git_tag_create_lightweight"]].each do |name, fn|
  CTypes.set_fn_param_type(fn, name, CTypes['bool'])
end
