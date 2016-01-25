#ifndef MRUBY_Git_FUNCTIONS_HEADER
#define MRUBY_Git_FUNCTIONS_HEADER

#define BIND_git_annotated_commit_free_FUNCTION TRUE
#define BIND_git_annotated_commit_from_fetchhead_FUNCTION TRUE
#define BIND_git_annotated_commit_from_ref_FUNCTION TRUE
#define BIND_git_annotated_commit_from_revspec_FUNCTION TRUE
#define BIND_git_annotated_commit_id_FUNCTION TRUE
#define BIND_git_annotated_commit_lookup_FUNCTION TRUE
#define BIND_git_attr_add_macro_FUNCTION TRUE
#define BIND_git_attr_cache_flush_FUNCTION TRUE
#define BIND_git_attr_foreach_FUNCTION FALSE
#define BIND_git_attr_get_FUNCTION TRUE
#define BIND_git_attr_get_many_FUNCTION FALSE
#define BIND_git_attr_value_FUNCTION TRUE
#define BIND_git_blame_buffer_FUNCTION TRUE
#define BIND_git_blame_file_FUNCTION TRUE
#define BIND_git_blame_free_FUNCTION TRUE
#define BIND_git_blame_get_hunk_byindex_FUNCTION TRUE
#define BIND_git_blame_get_hunk_byline_FUNCTION TRUE
#define BIND_git_blame_get_hunk_count_FUNCTION TRUE
#define BIND_git_blame_init_options_FUNCTION TRUE
#define BIND_git_blob_create_frombuffer_FUNCTION TRUE
#define BIND_git_blob_create_fromchunks_FUNCTION FALSE
#define BIND_git_blob_create_fromdisk_FUNCTION TRUE
#define BIND_git_blob_create_fromworkdir_FUNCTION TRUE
#define BIND_git_blob_filtered_content_FUNCTION TRUE
#define BIND_git_blob_free_FUNCTION TRUE
#define BIND_git_blob_id_FUNCTION TRUE
#define BIND_git_blob_is_binary_FUNCTION TRUE
#define BIND_git_blob_lookup_FUNCTION TRUE
#define BIND_git_blob_lookup_prefix_FUNCTION TRUE
#define BIND_git_blob_owner_FUNCTION TRUE
#define BIND_git_blob_rawcontent_FUNCTION TRUE
#define BIND_git_blob_rawsize_FUNCTION TRUE
#define BIND_git_branch_create_FUNCTION TRUE
#define BIND_git_branch_create_from_annotated_FUNCTION TRUE
#define BIND_git_branch_delete_FUNCTION TRUE
#define BIND_git_branch_is_head_FUNCTION TRUE
#define BIND_git_branch_iterator_free_FUNCTION TRUE
#define BIND_git_branch_iterator_new_FUNCTION TRUE
#define BIND_git_branch_lookup_FUNCTION TRUE
#define BIND_git_branch_move_FUNCTION TRUE
#define BIND_git_branch_name_FUNCTION TRUE
#define BIND_git_branch_next_FUNCTION TRUE
#define BIND_git_branch_remote_name_FUNCTION TRUE
#define BIND_git_branch_set_upstream_FUNCTION TRUE
#define BIND_git_branch_upstream_FUNCTION TRUE
#define BIND_git_branch_upstream_name_FUNCTION TRUE
#define BIND_git_branch_upstream_remote_FUNCTION TRUE
#define BIND_git_buf_contains_nul_FUNCTION TRUE
#define BIND_git_buf_free_FUNCTION TRUE
#define BIND_git_buf_grow_FUNCTION TRUE
#define BIND_git_buf_is_binary_FUNCTION TRUE
#define BIND_git_buf_set_FUNCTION TRUE
#define BIND_git_checkout_head_FUNCTION TRUE
#define BIND_git_checkout_index_FUNCTION TRUE
#define BIND_git_checkout_init_options_FUNCTION TRUE
#define BIND_git_checkout_tree_FUNCTION TRUE
#define BIND_git_cherrypick_FUNCTION TRUE
#define BIND_git_cherrypick_commit_FUNCTION TRUE
#define BIND_git_cherrypick_init_options_FUNCTION TRUE
#define BIND_git_clone_FUNCTION TRUE
#define BIND_git_clone_init_options_FUNCTION TRUE
#define BIND_git_commit_amend_FUNCTION TRUE
#define BIND_git_commit_author_FUNCTION TRUE
#define BIND_git_commit_body_FUNCTION TRUE
#define BIND_git_commit_committer_FUNCTION TRUE
#define BIND_git_commit_create_FUNCTION FALSE
#define BIND_git_commit_create_v_FUNCTION TRUE
#define BIND_git_commit_free_FUNCTION TRUE
#define BIND_git_commit_header_field_FUNCTION TRUE
#define BIND_git_commit_id_FUNCTION TRUE
#define BIND_git_commit_lookup_FUNCTION TRUE
#define BIND_git_commit_lookup_prefix_FUNCTION TRUE
#define BIND_git_commit_message_FUNCTION TRUE
#define BIND_git_commit_message_encoding_FUNCTION TRUE
#define BIND_git_commit_message_raw_FUNCTION TRUE
#define BIND_git_commit_nth_gen_ancestor_FUNCTION TRUE
#define BIND_git_commit_owner_FUNCTION TRUE
#define BIND_git_commit_parent_FUNCTION TRUE
#define BIND_git_commit_parent_id_FUNCTION TRUE
#define BIND_git_commit_parentcount_FUNCTION TRUE
#define BIND_git_commit_raw_header_FUNCTION TRUE
#define BIND_git_commit_summary_FUNCTION TRUE
#define BIND_git_commit_time_FUNCTION TRUE
#define BIND_git_commit_time_offset_FUNCTION TRUE
#define BIND_git_commit_tree_FUNCTION TRUE
#define BIND_git_commit_tree_id_FUNCTION TRUE
#define BIND_git_config_add_file_ondisk_FUNCTION TRUE
#define BIND_git_config_backend_foreach_match_FUNCTION FALSE
#define BIND_git_config_delete_entry_FUNCTION TRUE
#define BIND_git_config_delete_multivar_FUNCTION TRUE
#define BIND_git_config_entry_free_FUNCTION TRUE
#define BIND_git_config_find_global_FUNCTION TRUE
#define BIND_git_config_find_programdata_FUNCTION TRUE
#define BIND_git_config_find_system_FUNCTION TRUE
#define BIND_git_config_find_xdg_FUNCTION TRUE
#define BIND_git_config_foreach_FUNCTION FALSE
#define BIND_git_config_foreach_match_FUNCTION FALSE
#define BIND_git_config_free_FUNCTION TRUE
#define BIND_git_config_get_bool_FUNCTION TRUE
#define BIND_git_config_get_entry_FUNCTION TRUE
#define BIND_git_config_get_int32_FUNCTION TRUE
#define BIND_git_config_get_int64_FUNCTION TRUE
#define BIND_git_config_get_mapped_FUNCTION TRUE
#define BIND_git_config_get_multivar_foreach_FUNCTION FALSE
#define BIND_git_config_get_path_FUNCTION TRUE
#define BIND_git_config_get_string_FUNCTION TRUE
#define BIND_git_config_get_string_buf_FUNCTION TRUE
#define BIND_git_config_iterator_free_FUNCTION TRUE
#define BIND_git_config_iterator_glob_new_FUNCTION TRUE
#define BIND_git_config_iterator_new_FUNCTION TRUE
#define BIND_git_config_lock_FUNCTION TRUE
#define BIND_git_config_lookup_map_value_FUNCTION TRUE
#define BIND_git_config_multivar_iterator_new_FUNCTION TRUE
#define BIND_git_config_new_FUNCTION TRUE
#define BIND_git_config_next_FUNCTION TRUE
#define BIND_git_config_open_default_FUNCTION TRUE
#define BIND_git_config_open_global_FUNCTION TRUE
#define BIND_git_config_open_level_FUNCTION TRUE
#define BIND_git_config_open_ondisk_FUNCTION TRUE
#define BIND_git_config_parse_bool_FUNCTION TRUE
#define BIND_git_config_parse_int32_FUNCTION TRUE
#define BIND_git_config_parse_int64_FUNCTION TRUE
#define BIND_git_config_parse_path_FUNCTION TRUE
#define BIND_git_config_set_bool_FUNCTION TRUE
#define BIND_git_config_set_int32_FUNCTION TRUE
#define BIND_git_config_set_int64_FUNCTION TRUE
#define BIND_git_config_set_multivar_FUNCTION TRUE
#define BIND_git_config_set_string_FUNCTION TRUE
#define BIND_git_config_snapshot_FUNCTION TRUE
#define BIND_git_cred_default_new_FUNCTION TRUE
#define BIND_git_cred_free_FUNCTION TRUE
#define BIND_git_cred_has_username_FUNCTION TRUE
#define BIND_git_cred_ssh_custom_new_FUNCTION FALSE
#define BIND_git_cred_ssh_interactive_new_FUNCTION FALSE
#define BIND_git_cred_ssh_key_from_agent_FUNCTION TRUE
#define BIND_git_cred_ssh_key_memory_new_FUNCTION TRUE
#define BIND_git_cred_ssh_key_new_FUNCTION TRUE
#define BIND_git_cred_username_new_FUNCTION TRUE
#define BIND_git_cred_userpass_FUNCTION FALSE
#define BIND_git_cred_userpass_plaintext_new_FUNCTION TRUE
#define BIND_git_describe_commit_FUNCTION TRUE
#define BIND_git_describe_format_FUNCTION TRUE
#define BIND_git_describe_init_format_options_FUNCTION TRUE
#define BIND_git_describe_init_options_FUNCTION TRUE
#define BIND_git_describe_result_free_FUNCTION TRUE
#define BIND_git_describe_workdir_FUNCTION TRUE
#define BIND_git_diff_blob_to_buffer_FUNCTION FALSE
#define BIND_git_diff_blobs_FUNCTION FALSE
#define BIND_git_diff_buffers_FUNCTION FALSE
#define BIND_git_diff_commit_as_email_FUNCTION TRUE
#define BIND_git_diff_find_init_options_FUNCTION TRUE
#define BIND_git_diff_find_similar_FUNCTION TRUE
#define BIND_git_diff_foreach_FUNCTION FALSE
#define BIND_git_diff_format_email_FUNCTION TRUE
#define BIND_git_diff_format_email_init_options_FUNCTION TRUE
#define BIND_git_diff_free_FUNCTION TRUE
#define BIND_git_diff_get_delta_FUNCTION TRUE
#define BIND_git_diff_get_stats_FUNCTION TRUE
#define BIND_git_diff_index_to_index_FUNCTION TRUE
#define BIND_git_diff_index_to_workdir_FUNCTION TRUE
#define BIND_git_diff_init_options_FUNCTION TRUE
#define BIND_git_diff_is_sorted_icase_FUNCTION TRUE
#define BIND_git_diff_merge_FUNCTION TRUE
#define BIND_git_diff_num_deltas_FUNCTION TRUE
#define BIND_git_diff_num_deltas_of_type_FUNCTION TRUE
#define BIND_git_diff_print_FUNCTION FALSE
#define BIND_git_diff_stats_deletions_FUNCTION TRUE
#define BIND_git_diff_stats_files_changed_FUNCTION TRUE
#define BIND_git_diff_stats_free_FUNCTION TRUE
#define BIND_git_diff_stats_insertions_FUNCTION TRUE
#define BIND_git_diff_stats_to_buf_FUNCTION TRUE
#define BIND_git_diff_status_char_FUNCTION TRUE
#define BIND_git_diff_tree_to_index_FUNCTION TRUE
#define BIND_git_diff_tree_to_tree_FUNCTION TRUE
#define BIND_git_diff_tree_to_workdir_FUNCTION TRUE
#define BIND_git_diff_tree_to_workdir_with_index_FUNCTION TRUE
#define BIND_git_fetch_init_options_FUNCTION TRUE
#define BIND_git_filter_list_apply_to_blob_FUNCTION TRUE
#define BIND_git_filter_list_apply_to_data_FUNCTION TRUE
#define BIND_git_filter_list_apply_to_file_FUNCTION TRUE
#define BIND_git_filter_list_contains_FUNCTION TRUE
#define BIND_git_filter_list_free_FUNCTION TRUE
#define BIND_git_filter_list_load_FUNCTION TRUE
#define BIND_git_filter_list_stream_blob_FUNCTION TRUE
#define BIND_git_filter_list_stream_data_FUNCTION TRUE
#define BIND_git_filter_list_stream_file_FUNCTION TRUE
#define BIND_git_graph_ahead_behind_FUNCTION TRUE
#define BIND_git_graph_descendant_of_FUNCTION TRUE
#define BIND_git_ignore_add_rule_FUNCTION TRUE
#define BIND_git_ignore_clear_internal_rules_FUNCTION TRUE
#define BIND_git_ignore_path_is_ignored_FUNCTION TRUE
#define BIND_git_index_add_FUNCTION TRUE
#define BIND_git_index_add_all_FUNCTION FALSE
#define BIND_git_index_add_bypath_FUNCTION TRUE
#define BIND_git_index_add_frombuffer_FUNCTION FALSE
#define BIND_git_index_caps_FUNCTION TRUE
#define BIND_git_index_checksum_FUNCTION TRUE
#define BIND_git_index_clear_FUNCTION TRUE
#define BIND_git_index_conflict_add_FUNCTION TRUE
#define BIND_git_index_conflict_cleanup_FUNCTION TRUE
#define BIND_git_index_conflict_get_FUNCTION TRUE
#define BIND_git_index_conflict_iterator_free_FUNCTION TRUE
#define BIND_git_index_conflict_iterator_new_FUNCTION TRUE
#define BIND_git_index_conflict_next_FUNCTION TRUE
#define BIND_git_index_conflict_remove_FUNCTION TRUE
#define BIND_git_index_entry_is_conflict_FUNCTION TRUE
#define BIND_git_index_entry_stage_FUNCTION TRUE
#define BIND_git_index_entrycount_FUNCTION TRUE
#define BIND_git_index_find_FUNCTION TRUE
#define BIND_git_index_find_prefix_FUNCTION TRUE
#define BIND_git_index_free_FUNCTION TRUE
#define BIND_git_index_get_byindex_FUNCTION TRUE
#define BIND_git_index_get_bypath_FUNCTION TRUE
#define BIND_git_index_has_conflicts_FUNCTION TRUE
#define BIND_git_index_new_FUNCTION TRUE
#define BIND_git_index_open_FUNCTION TRUE
#define BIND_git_index_owner_FUNCTION TRUE
#define BIND_git_index_path_FUNCTION TRUE
#define BIND_git_index_read_FUNCTION TRUE
#define BIND_git_index_read_tree_FUNCTION TRUE
#define BIND_git_index_remove_FUNCTION TRUE
#define BIND_git_index_remove_all_FUNCTION FALSE
#define BIND_git_index_remove_bypath_FUNCTION TRUE
#define BIND_git_index_remove_directory_FUNCTION TRUE
#define BIND_git_index_set_caps_FUNCTION TRUE
#define BIND_git_index_update_all_FUNCTION FALSE
#define BIND_git_index_write_FUNCTION TRUE
#define BIND_git_index_write_tree_FUNCTION TRUE
#define BIND_git_index_write_tree_to_FUNCTION TRUE
#define BIND_git_indexer_append_FUNCTION FALSE
#define BIND_git_indexer_commit_FUNCTION TRUE
#define BIND_git_indexer_free_FUNCTION TRUE
#define BIND_git_indexer_hash_FUNCTION TRUE
#define BIND_git_indexer_new_FUNCTION FALSE
#define BIND_git_libgit2_features_FUNCTION TRUE
#define BIND_git_libgit2_init_FUNCTION TRUE
#define BIND_git_libgit2_opts_FUNCTION TRUE
#define BIND_git_libgit2_shutdown_FUNCTION TRUE
#define BIND_git_libgit2_version_FUNCTION TRUE
#define BIND_git_merge_FUNCTION TRUE
#define BIND_git_merge_analysis_FUNCTION TRUE
#define BIND_git_merge_base_FUNCTION TRUE
#define BIND_git_merge_base_many_FUNCTION FALSE
#define BIND_git_merge_base_octopus_FUNCTION FALSE
#define BIND_git_merge_bases_FUNCTION TRUE
#define BIND_git_merge_bases_many_FUNCTION FALSE
#define BIND_git_merge_commits_FUNCTION TRUE
#define BIND_git_merge_file_FUNCTION TRUE
#define BIND_git_merge_file_from_index_FUNCTION TRUE
#define BIND_git_merge_file_init_input_FUNCTION TRUE
#define BIND_git_merge_file_init_options_FUNCTION TRUE
#define BIND_git_merge_file_result_free_FUNCTION TRUE
#define BIND_git_merge_init_options_FUNCTION TRUE
#define BIND_git_merge_trees_FUNCTION TRUE
#define BIND_git_message_prettify_FUNCTION TRUE
#define BIND_git_note_author_FUNCTION TRUE
#define BIND_git_note_committer_FUNCTION TRUE
#define BIND_git_note_create_FUNCTION TRUE
#define BIND_git_note_default_ref_FUNCTION TRUE
#define BIND_git_note_foreach_FUNCTION FALSE
#define BIND_git_note_free_FUNCTION TRUE
#define BIND_git_note_id_FUNCTION TRUE
#define BIND_git_note_iterator_free_FUNCTION TRUE
#define BIND_git_note_iterator_new_FUNCTION TRUE
#define BIND_git_note_message_FUNCTION TRUE
#define BIND_git_note_next_FUNCTION TRUE
#define BIND_git_note_read_FUNCTION TRUE
#define BIND_git_note_remove_FUNCTION TRUE
#define BIND_git_object__size_FUNCTION TRUE
#define BIND_git_object_dup_FUNCTION TRUE
#define BIND_git_object_free_FUNCTION TRUE
#define BIND_git_object_id_FUNCTION TRUE
#define BIND_git_object_lookup_FUNCTION TRUE
#define BIND_git_object_lookup_bypath_FUNCTION TRUE
#define BIND_git_object_lookup_prefix_FUNCTION TRUE
#define BIND_git_object_owner_FUNCTION TRUE
#define BIND_git_object_peel_FUNCTION TRUE
#define BIND_git_object_short_id_FUNCTION TRUE
#define BIND_git_object_string2type_FUNCTION TRUE
#define BIND_git_object_type_FUNCTION TRUE
#define BIND_git_object_type2string_FUNCTION TRUE
#define BIND_git_object_typeisloose_FUNCTION TRUE
#define BIND_git_odb_add_alternate_FUNCTION TRUE
#define BIND_git_odb_add_backend_FUNCTION TRUE
#define BIND_git_odb_add_disk_alternate_FUNCTION TRUE
#define BIND_git_odb_backend_loose_FUNCTION TRUE
#define BIND_git_odb_backend_one_pack_FUNCTION TRUE
#define BIND_git_odb_backend_pack_FUNCTION TRUE
#define BIND_git_odb_exists_FUNCTION TRUE
#define BIND_git_odb_exists_prefix_FUNCTION TRUE
#define BIND_git_odb_foreach_FUNCTION FALSE
#define BIND_git_odb_free_FUNCTION TRUE
#define BIND_git_odb_get_backend_FUNCTION TRUE
#define BIND_git_odb_hash_FUNCTION TRUE
#define BIND_git_odb_hashfile_FUNCTION TRUE
#define BIND_git_odb_new_FUNCTION TRUE
#define BIND_git_odb_num_backends_FUNCTION TRUE
#define BIND_git_odb_object_data_FUNCTION FALSE
#define BIND_git_odb_object_dup_FUNCTION TRUE
#define BIND_git_odb_object_free_FUNCTION TRUE
#define BIND_git_odb_object_id_FUNCTION TRUE
#define BIND_git_odb_object_size_FUNCTION TRUE
#define BIND_git_odb_object_type_FUNCTION TRUE
#define BIND_git_odb_open_FUNCTION TRUE
#define BIND_git_odb_open_rstream_FUNCTION TRUE
#define BIND_git_odb_open_wstream_FUNCTION TRUE
#define BIND_git_odb_read_FUNCTION TRUE
#define BIND_git_odb_read_header_FUNCTION TRUE
#define BIND_git_odb_read_prefix_FUNCTION TRUE
#define BIND_git_odb_refresh_FUNCTION TRUE
#define BIND_git_odb_stream_finalize_write_FUNCTION TRUE
#define BIND_git_odb_stream_free_FUNCTION TRUE
#define BIND_git_odb_stream_read_FUNCTION FALSE
#define BIND_git_odb_stream_write_FUNCTION TRUE
#define BIND_git_odb_write_FUNCTION TRUE
#define BIND_git_odb_write_pack_FUNCTION FALSE
#define BIND_git_oid_cmp_FUNCTION TRUE
#define BIND_git_oid_cpy_FUNCTION TRUE
#define BIND_git_oid_equal_FUNCTION TRUE
#define BIND_git_oid_fmt_FUNCTION FALSE
#define BIND_git_oid_fromraw_FUNCTION FALSE
#define BIND_git_oid_fromstr_FUNCTION TRUE
#define BIND_git_oid_fromstrn_FUNCTION TRUE
#define BIND_git_oid_fromstrp_FUNCTION TRUE
#define BIND_git_oid_iszero_FUNCTION TRUE
#define BIND_git_oid_ncmp_FUNCTION TRUE
#define BIND_git_oid_nfmt_FUNCTION FALSE
#define BIND_git_oid_pathfmt_FUNCTION FALSE
#define BIND_git_oid_shorten_add_FUNCTION TRUE
#define BIND_git_oid_shorten_free_FUNCTION TRUE
#define BIND_git_oid_shorten_new_FUNCTION TRUE
#define BIND_git_oid_strcmp_FUNCTION TRUE
#define BIND_git_oid_streq_FUNCTION TRUE
#define BIND_git_oid_tostr_FUNCTION FALSE
#define BIND_git_oid_tostr_s_FUNCTION TRUE
#define BIND_git_oidarray_free_FUNCTION TRUE
#define BIND_git_packbuilder_foreach_FUNCTION FALSE
#define BIND_git_packbuilder_free_FUNCTION TRUE
#define BIND_git_packbuilder_hash_FUNCTION TRUE
#define BIND_git_packbuilder_insert_FUNCTION TRUE
#define BIND_git_packbuilder_insert_commit_FUNCTION TRUE
#define BIND_git_packbuilder_insert_recur_FUNCTION TRUE
#define BIND_git_packbuilder_insert_tree_FUNCTION TRUE
#define BIND_git_packbuilder_insert_walk_FUNCTION TRUE
#define BIND_git_packbuilder_new_FUNCTION TRUE
#define BIND_git_packbuilder_object_count_FUNCTION TRUE
#define BIND_git_packbuilder_set_callbacks_FUNCTION FALSE
#define BIND_git_packbuilder_set_threads_FUNCTION TRUE
#define BIND_git_packbuilder_write_FUNCTION FALSE
#define BIND_git_packbuilder_write_buf_FUNCTION TRUE
#define BIND_git_packbuilder_written_FUNCTION TRUE
#define BIND_git_patch_free_FUNCTION TRUE
#define BIND_git_patch_from_blob_and_buffer_FUNCTION TRUE
#define BIND_git_patch_from_blobs_FUNCTION TRUE
#define BIND_git_patch_from_buffers_FUNCTION FALSE
#define BIND_git_patch_from_diff_FUNCTION TRUE
#define BIND_git_patch_get_delta_FUNCTION TRUE
#define BIND_git_patch_get_hunk_FUNCTION TRUE
#define BIND_git_patch_get_line_in_hunk_FUNCTION TRUE
#define BIND_git_patch_line_stats_FUNCTION TRUE
#define BIND_git_patch_num_hunks_FUNCTION TRUE
#define BIND_git_patch_num_lines_in_hunk_FUNCTION TRUE
#define BIND_git_patch_print_FUNCTION FALSE
#define BIND_git_patch_size_FUNCTION TRUE
#define BIND_git_patch_to_buf_FUNCTION TRUE
#define BIND_git_pathspec_free_FUNCTION TRUE
#define BIND_git_pathspec_match_diff_FUNCTION TRUE
#define BIND_git_pathspec_match_index_FUNCTION TRUE
#define BIND_git_pathspec_match_list_diff_entry_FUNCTION TRUE
#define BIND_git_pathspec_match_list_entry_FUNCTION TRUE
#define BIND_git_pathspec_match_list_entrycount_FUNCTION TRUE
#define BIND_git_pathspec_match_list_failed_entry_FUNCTION TRUE
#define BIND_git_pathspec_match_list_failed_entrycount_FUNCTION TRUE
#define BIND_git_pathspec_match_list_free_FUNCTION TRUE
#define BIND_git_pathspec_match_tree_FUNCTION TRUE
#define BIND_git_pathspec_match_workdir_FUNCTION TRUE
#define BIND_git_pathspec_matches_path_FUNCTION TRUE
#define BIND_git_pathspec_new_FUNCTION TRUE
#define BIND_git_push_init_options_FUNCTION TRUE
#define BIND_git_rebase_abort_FUNCTION TRUE
#define BIND_git_rebase_commit_FUNCTION TRUE
#define BIND_git_rebase_finish_FUNCTION TRUE
#define BIND_git_rebase_free_FUNCTION TRUE
#define BIND_git_rebase_init_FUNCTION TRUE
#define BIND_git_rebase_init_options_FUNCTION TRUE
#define BIND_git_rebase_next_FUNCTION TRUE
#define BIND_git_rebase_open_FUNCTION TRUE
#define BIND_git_rebase_operation_byindex_FUNCTION TRUE
#define BIND_git_rebase_operation_current_FUNCTION TRUE
#define BIND_git_rebase_operation_entrycount_FUNCTION TRUE
#define BIND_git_refdb_compress_FUNCTION TRUE
#define BIND_git_refdb_free_FUNCTION TRUE
#define BIND_git_refdb_new_FUNCTION TRUE
#define BIND_git_refdb_open_FUNCTION TRUE
#define BIND_git_reference_cmp_FUNCTION TRUE
#define BIND_git_reference_create_FUNCTION TRUE
#define BIND_git_reference_create_matching_FUNCTION TRUE
#define BIND_git_reference_delete_FUNCTION TRUE
#define BIND_git_reference_dwim_FUNCTION TRUE
#define BIND_git_reference_ensure_log_FUNCTION TRUE
#define BIND_git_reference_foreach_FUNCTION FALSE
#define BIND_git_reference_foreach_glob_FUNCTION FALSE
#define BIND_git_reference_foreach_name_FUNCTION FALSE
#define BIND_git_reference_free_FUNCTION TRUE
#define BIND_git_reference_has_log_FUNCTION TRUE
#define BIND_git_reference_is_branch_FUNCTION TRUE
#define BIND_git_reference_is_note_FUNCTION TRUE
#define BIND_git_reference_is_remote_FUNCTION TRUE
#define BIND_git_reference_is_tag_FUNCTION TRUE
#define BIND_git_reference_is_valid_name_FUNCTION TRUE
#define BIND_git_reference_iterator_free_FUNCTION TRUE
#define BIND_git_reference_iterator_glob_new_FUNCTION TRUE
#define BIND_git_reference_iterator_new_FUNCTION TRUE
#define BIND_git_reference_list_FUNCTION TRUE
#define BIND_git_reference_lookup_FUNCTION TRUE
#define BIND_git_reference_name_FUNCTION TRUE
#define BIND_git_reference_name_to_id_FUNCTION TRUE
#define BIND_git_reference_next_FUNCTION TRUE
#define BIND_git_reference_next_name_FUNCTION TRUE
#define BIND_git_reference_normalize_name_FUNCTION FALSE
#define BIND_git_reference_owner_FUNCTION TRUE
#define BIND_git_reference_peel_FUNCTION TRUE
#define BIND_git_reference_remove_FUNCTION TRUE
#define BIND_git_reference_rename_FUNCTION TRUE
#define BIND_git_reference_resolve_FUNCTION TRUE
#define BIND_git_reference_set_target_FUNCTION TRUE
#define BIND_git_reference_shorthand_FUNCTION TRUE
#define BIND_git_reference_symbolic_create_FUNCTION TRUE
#define BIND_git_reference_symbolic_create_matching_FUNCTION TRUE
#define BIND_git_reference_symbolic_set_target_FUNCTION TRUE
#define BIND_git_reference_symbolic_target_FUNCTION TRUE
#define BIND_git_reference_target_FUNCTION TRUE
#define BIND_git_reference_target_peel_FUNCTION TRUE
#define BIND_git_reference_type_FUNCTION TRUE
#define BIND_git_reflog_append_FUNCTION TRUE
#define BIND_git_reflog_delete_FUNCTION TRUE
#define BIND_git_reflog_drop_FUNCTION TRUE
#define BIND_git_reflog_entry_byindex_FUNCTION TRUE
#define BIND_git_reflog_entry_committer_FUNCTION TRUE
#define BIND_git_reflog_entry_id_new_FUNCTION TRUE
#define BIND_git_reflog_entry_id_old_FUNCTION TRUE
#define BIND_git_reflog_entry_message_FUNCTION TRUE
#define BIND_git_reflog_entrycount_FUNCTION TRUE
#define BIND_git_reflog_free_FUNCTION TRUE
#define BIND_git_reflog_read_FUNCTION TRUE
#define BIND_git_reflog_rename_FUNCTION TRUE
#define BIND_git_reflog_write_FUNCTION TRUE
#define BIND_git_refspec_direction_FUNCTION TRUE
#define BIND_git_refspec_dst_FUNCTION TRUE
#define BIND_git_refspec_dst_matches_FUNCTION TRUE
#define BIND_git_refspec_force_FUNCTION TRUE
#define BIND_git_refspec_rtransform_FUNCTION TRUE
#define BIND_git_refspec_src_FUNCTION TRUE
#define BIND_git_refspec_src_matches_FUNCTION TRUE
#define BIND_git_refspec_string_FUNCTION TRUE
#define BIND_git_refspec_transform_FUNCTION TRUE
#define BIND_git_remote_add_fetch_FUNCTION TRUE
#define BIND_git_remote_add_push_FUNCTION TRUE
#define BIND_git_remote_autotag_FUNCTION TRUE
#define BIND_git_remote_connect_FUNCTION TRUE
#define BIND_git_remote_connected_FUNCTION TRUE
#define BIND_git_remote_create_FUNCTION TRUE
#define BIND_git_remote_create_anonymous_FUNCTION TRUE
#define BIND_git_remote_create_with_fetchspec_FUNCTION TRUE
#define BIND_git_remote_default_branch_FUNCTION TRUE
#define BIND_git_remote_delete_FUNCTION TRUE
#define BIND_git_remote_disconnect_FUNCTION TRUE
#define BIND_git_remote_download_FUNCTION TRUE
#define BIND_git_remote_dup_FUNCTION TRUE
#define BIND_git_remote_fetch_FUNCTION TRUE
#define BIND_git_remote_free_FUNCTION TRUE
#define BIND_git_remote_get_fetch_refspecs_FUNCTION TRUE
#define BIND_git_remote_get_push_refspecs_FUNCTION TRUE
#define BIND_git_remote_get_refspec_FUNCTION TRUE
#define BIND_git_remote_init_callbacks_FUNCTION TRUE
#define BIND_git_remote_is_valid_name_FUNCTION TRUE
#define BIND_git_remote_list_FUNCTION TRUE
#define BIND_git_remote_lookup_FUNCTION TRUE
#define BIND_git_remote_ls_FUNCTION FALSE
#define BIND_git_remote_name_FUNCTION TRUE
#define BIND_git_remote_owner_FUNCTION TRUE
#define BIND_git_remote_prune_FUNCTION TRUE
#define BIND_git_remote_prune_refs_FUNCTION TRUE
#define BIND_git_remote_push_FUNCTION TRUE
#define BIND_git_remote_pushurl_FUNCTION TRUE
#define BIND_git_remote_refspec_count_FUNCTION TRUE
#define BIND_git_remote_rename_FUNCTION TRUE
#define BIND_git_remote_set_autotag_FUNCTION TRUE
#define BIND_git_remote_set_pushurl_FUNCTION TRUE
#define BIND_git_remote_set_url_FUNCTION TRUE
#define BIND_git_remote_stats_FUNCTION TRUE
#define BIND_git_remote_stop_FUNCTION TRUE
#define BIND_git_remote_update_tips_FUNCTION TRUE
#define BIND_git_remote_upload_FUNCTION TRUE
#define BIND_git_remote_url_FUNCTION TRUE
#define BIND_git_repository_config_FUNCTION TRUE
#define BIND_git_repository_config_snapshot_FUNCTION TRUE
#define BIND_git_repository_detach_head_FUNCTION TRUE
#define BIND_git_repository_discover_FUNCTION TRUE
#define BIND_git_repository_fetchhead_foreach_FUNCTION FALSE
#define BIND_git_repository_free_FUNCTION TRUE
#define BIND_git_repository_get_namespace_FUNCTION TRUE
#define BIND_git_repository_hashfile_FUNCTION TRUE
#define BIND_git_repository_head_FUNCTION TRUE
#define BIND_git_repository_head_detached_FUNCTION TRUE
#define BIND_git_repository_head_unborn_FUNCTION TRUE
#define BIND_git_repository_ident_FUNCTION TRUE
#define BIND_git_repository_index_FUNCTION TRUE
#define BIND_git_repository_init_FUNCTION TRUE
#define BIND_git_repository_init_ext_FUNCTION TRUE
#define BIND_git_repository_init_init_options_FUNCTION TRUE
#define BIND_git_repository_is_bare_FUNCTION TRUE
#define BIND_git_repository_is_empty_FUNCTION TRUE
#define BIND_git_repository_is_shallow_FUNCTION TRUE
#define BIND_git_repository_mergehead_foreach_FUNCTION FALSE
#define BIND_git_repository_message_FUNCTION TRUE
#define BIND_git_repository_message_remove_FUNCTION TRUE
#define BIND_git_repository_odb_FUNCTION TRUE
#define BIND_git_repository_open_FUNCTION TRUE
#define BIND_git_repository_open_bare_FUNCTION TRUE
#define BIND_git_repository_open_ext_FUNCTION TRUE
#define BIND_git_repository_path_FUNCTION TRUE
#define BIND_git_repository_refdb_FUNCTION TRUE
#define BIND_git_repository_set_head_FUNCTION TRUE
#define BIND_git_repository_set_head_detached_FUNCTION TRUE
#define BIND_git_repository_set_head_detached_from_annotated_FUNCTION TRUE
#define BIND_git_repository_set_ident_FUNCTION TRUE
#define BIND_git_repository_set_namespace_FUNCTION TRUE
#define BIND_git_repository_set_workdir_FUNCTION TRUE
#define BIND_git_repository_state_FUNCTION TRUE
#define BIND_git_repository_state_cleanup_FUNCTION TRUE
#define BIND_git_repository_workdir_FUNCTION TRUE
#define BIND_git_repository_wrap_odb_FUNCTION TRUE
#define BIND_git_reset_FUNCTION TRUE
#define BIND_git_reset_default_FUNCTION TRUE
#define BIND_git_reset_from_annotated_FUNCTION TRUE
#define BIND_git_revert_FUNCTION TRUE
#define BIND_git_revert_commit_FUNCTION TRUE
#define BIND_git_revert_init_options_FUNCTION TRUE
#define BIND_git_revparse_FUNCTION TRUE
#define BIND_git_revparse_ext_FUNCTION TRUE
#define BIND_git_revparse_single_FUNCTION TRUE
#define BIND_git_revwalk_add_hide_cb_FUNCTION FALSE
#define BIND_git_revwalk_free_FUNCTION TRUE
#define BIND_git_revwalk_hide_FUNCTION TRUE
#define BIND_git_revwalk_hide_glob_FUNCTION TRUE
#define BIND_git_revwalk_hide_head_FUNCTION TRUE
#define BIND_git_revwalk_hide_ref_FUNCTION TRUE
#define BIND_git_revwalk_new_FUNCTION TRUE
#define BIND_git_revwalk_next_FUNCTION TRUE
#define BIND_git_revwalk_push_FUNCTION TRUE
#define BIND_git_revwalk_push_glob_FUNCTION TRUE
#define BIND_git_revwalk_push_head_FUNCTION TRUE
#define BIND_git_revwalk_push_range_FUNCTION TRUE
#define BIND_git_revwalk_push_ref_FUNCTION TRUE
#define BIND_git_revwalk_repository_FUNCTION TRUE
#define BIND_git_revwalk_reset_FUNCTION TRUE
#define BIND_git_revwalk_simplify_first_parent_FUNCTION TRUE
#define BIND_git_revwalk_sorting_FUNCTION TRUE
#define BIND_git_signature_default_FUNCTION TRUE
#define BIND_git_signature_dup_FUNCTION TRUE
#define BIND_git_signature_free_FUNCTION TRUE
#define BIND_git_signature_new_FUNCTION TRUE
#define BIND_git_signature_now_FUNCTION TRUE
#define BIND_git_stash_apply_FUNCTION TRUE
#define BIND_git_stash_apply_init_options_FUNCTION TRUE
#define BIND_git_stash_drop_FUNCTION TRUE
#define BIND_git_stash_foreach_FUNCTION FALSE
#define BIND_git_stash_pop_FUNCTION TRUE
#define BIND_git_stash_save_FUNCTION TRUE
#define BIND_git_status_byindex_FUNCTION TRUE
#define BIND_git_status_file_FUNCTION TRUE
#define BIND_git_status_foreach_FUNCTION FALSE
#define BIND_git_status_foreach_ext_FUNCTION FALSE
#define BIND_git_status_init_options_FUNCTION TRUE
#define BIND_git_status_list_entrycount_FUNCTION TRUE
#define BIND_git_status_list_free_FUNCTION TRUE
#define BIND_git_status_list_new_FUNCTION TRUE
#define BIND_git_status_should_ignore_FUNCTION FALSE
#define BIND_git_strarray_copy_FUNCTION TRUE
#define BIND_git_strarray_free_FUNCTION TRUE
#define BIND_git_submodule_add_finalize_FUNCTION TRUE
#define BIND_git_submodule_add_setup_FUNCTION TRUE
#define BIND_git_submodule_add_to_index_FUNCTION TRUE
#define BIND_git_submodule_branch_FUNCTION TRUE
#define BIND_git_submodule_fetch_recurse_submodules_FUNCTION TRUE
#define BIND_git_submodule_foreach_FUNCTION FALSE
#define BIND_git_submodule_free_FUNCTION TRUE
#define BIND_git_submodule_head_id_FUNCTION TRUE
#define BIND_git_submodule_ignore_FUNCTION TRUE
#define BIND_git_submodule_index_id_FUNCTION TRUE
#define BIND_git_submodule_init_FUNCTION TRUE
#define BIND_git_submodule_location_FUNCTION TRUE
#define BIND_git_submodule_lookup_FUNCTION TRUE
#define BIND_git_submodule_name_FUNCTION TRUE
#define BIND_git_submodule_open_FUNCTION TRUE
#define BIND_git_submodule_owner_FUNCTION TRUE
#define BIND_git_submodule_path_FUNCTION TRUE
#define BIND_git_submodule_reload_FUNCTION TRUE
#define BIND_git_submodule_repo_init_FUNCTION TRUE
#define BIND_git_submodule_resolve_url_FUNCTION TRUE
#define BIND_git_submodule_set_branch_FUNCTION TRUE
#define BIND_git_submodule_set_fetch_recurse_submodules_FUNCTION TRUE
#define BIND_git_submodule_set_ignore_FUNCTION TRUE
#define BIND_git_submodule_set_update_FUNCTION TRUE
#define BIND_git_submodule_set_url_FUNCTION TRUE
#define BIND_git_submodule_status_FUNCTION TRUE
#define BIND_git_submodule_sync_FUNCTION TRUE
#define BIND_git_submodule_update_FUNCTION TRUE
#define BIND_git_submodule_update_init_options_FUNCTION TRUE
#define BIND_git_submodule_update_strategy_FUNCTION TRUE
#define BIND_git_submodule_url_FUNCTION TRUE
#define BIND_git_submodule_wd_id_FUNCTION TRUE
#define BIND_git_tag_annotation_create_FUNCTION TRUE
#define BIND_git_tag_create_FUNCTION TRUE
#define BIND_git_tag_create_frombuffer_FUNCTION TRUE
#define BIND_git_tag_create_lightweight_FUNCTION TRUE
#define BIND_git_tag_delete_FUNCTION TRUE
#define BIND_git_tag_foreach_FUNCTION FALSE
#define BIND_git_tag_free_FUNCTION TRUE
#define BIND_git_tag_id_FUNCTION TRUE
#define BIND_git_tag_list_FUNCTION TRUE
#define BIND_git_tag_list_match_FUNCTION TRUE
#define BIND_git_tag_lookup_FUNCTION TRUE
#define BIND_git_tag_lookup_prefix_FUNCTION TRUE
#define BIND_git_tag_message_FUNCTION TRUE
#define BIND_git_tag_name_FUNCTION TRUE
#define BIND_git_tag_owner_FUNCTION TRUE
#define BIND_git_tag_peel_FUNCTION TRUE
#define BIND_git_tag_tagger_FUNCTION TRUE
#define BIND_git_tag_target_FUNCTION TRUE
#define BIND_git_tag_target_id_FUNCTION TRUE
#define BIND_git_tag_target_type_FUNCTION TRUE
#define BIND_git_trace_set_FUNCTION FALSE
#define BIND_git_transaction_commit_FUNCTION TRUE
#define BIND_git_transaction_free_FUNCTION TRUE
#define BIND_git_transaction_lock_ref_FUNCTION TRUE
#define BIND_git_transaction_new_FUNCTION TRUE
#define BIND_git_transaction_remove_FUNCTION TRUE
#define BIND_git_transaction_set_reflog_FUNCTION TRUE
#define BIND_git_transaction_set_symbolic_target_FUNCTION TRUE
#define BIND_git_transaction_set_target_FUNCTION TRUE
#define BIND_git_tree_entry_byid_FUNCTION TRUE
#define BIND_git_tree_entry_byindex_FUNCTION TRUE
#define BIND_git_tree_entry_byname_FUNCTION TRUE
#define BIND_git_tree_entry_bypath_FUNCTION TRUE
#define BIND_git_tree_entry_cmp_FUNCTION TRUE
#define BIND_git_tree_entry_dup_FUNCTION TRUE
#define BIND_git_tree_entry_filemode_FUNCTION TRUE
#define BIND_git_tree_entry_filemode_raw_FUNCTION TRUE
#define BIND_git_tree_entry_free_FUNCTION TRUE
#define BIND_git_tree_entry_id_FUNCTION TRUE
#define BIND_git_tree_entry_name_FUNCTION TRUE
#define BIND_git_tree_entry_to_object_FUNCTION TRUE
#define BIND_git_tree_entry_type_FUNCTION TRUE
#define BIND_git_tree_entrycount_FUNCTION TRUE
#define BIND_git_tree_free_FUNCTION TRUE
#define BIND_git_tree_id_FUNCTION TRUE
#define BIND_git_tree_lookup_FUNCTION TRUE
#define BIND_git_tree_lookup_prefix_FUNCTION TRUE
#define BIND_git_tree_owner_FUNCTION TRUE
#define BIND_git_tree_walk_FUNCTION FALSE
#define BIND_git_treebuilder_clear_FUNCTION TRUE
#define BIND_git_treebuilder_entrycount_FUNCTION TRUE
#define BIND_git_treebuilder_filter_FUNCTION FALSE
#define BIND_git_treebuilder_free_FUNCTION TRUE
#define BIND_git_treebuilder_get_FUNCTION TRUE
#define BIND_git_treebuilder_insert_FUNCTION TRUE
#define BIND_git_treebuilder_new_FUNCTION TRUE
#define BIND_git_treebuilder_remove_FUNCTION TRUE
#define BIND_git_treebuilder_write_FUNCTION TRUE
#define BIND_giterr_clear_FUNCTION TRUE
#define BIND_giterr_last_FUNCTION TRUE
#define BIND_giterr_set_oom_FUNCTION TRUE
#define BIND_giterr_set_str_FUNCTION TRUE
#define BIND_imaxdiv_FUNCTION FALSE
#endif
