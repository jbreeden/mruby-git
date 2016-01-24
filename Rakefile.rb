namespace :readme do
  desc 'Run the ruby version of the README'
  task :run do
    rm_rf 'sandbox'
    mkdir 'sandbox'
    mkdir_p 'sandbox/wd'
    
    sh "mruby readme.rb"
  end
end

namespace :lib do
  desc 'Read comments for all functions returning integers'
  task :'read-int-fns' do
    MRubyBindings.read_declarations("declarations.json") do |lib|
      lib['FunctionDecls'].select { |f| 
        f['return_type']['type_name'] == 'int' 
      }.each { |f|
        # Greedily remove up to the last comment to isolate the desired function
        puts `head -#{f['line']} #{f['file']} | tail -100`.sub(/(.*)(\/\*\*)/m, '\2')
      }
    end
  end
  
  task 'read-buf' do
    MRubyBindings.read_declarations("declarations.json") do |lib|
      lib['ParmDecls'].select { |p| p['type']['type_name'] =~ /git_buf/i }.each { |f|
        system "clear"
        system "head -#{f['line']} #{f['file']} | tail -50"
        $stdin.gets
      }
    end
  end
  
  task :read do
    interests = %w[
      git_attr_get
      git_attr_get_many
      git_attr_add_macro
      git_commit_create_v
      git_libgit2_features
      git_branch_create_from_annotated
      git_commit_amend
      git_config_open_global
      git_config_get_multivar_foreach
      git_config_multivar_iterator_new
      git_config_set_multivar
      git_config_delete_entry
      git_config_iterator_new
      git_config_iterator_glob_new
      git_config_lookup_map_value
      git_config_backend_foreach_match
      git_cred_userpass
      git_describe_init_options
      git_describe_init_format_options
      git_describe_commit
      git_describe_workdir
      git_describe_format
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
      git_graph_ahead_behind
      git_indexer_new
      git_indexer_append
      git_indexer_commit
      git_object_dup
      git_odb_read
      git_odb_read_prefix
      git_odb_read_header
      git_odb_stream_read
      git_odb_write_pack
      git_oid_streq
      git_oid_shorten_add
      git_packbuilder_write_buf
      git_patch_num_lines_in_hunk
      git_refdb_compress
      git_reference_next
      git_reference_next_name
      git_remote_set_url
      git_remote_set_pushurl
      git_remote_get_fetch_refspecs
      git_remote_get_push_refspecs
      git_remote_push
      git_remote_set_autotag
      git_repository_message_remove
      git_repository_set_head_detached_from_annotated
      git_repository_ident
      git_repository_set_ident
      git_reset_from_annotated
      git_revwalk_next
      git_revwalk_add_hide_cb
      git_submodule_add_finalize
      git_submodule_set_fetch_recurse_submodules
      git_submodule_sync
    ]
    
    MRubyBindings.read_declarations("declarations.json") do |lib|
      lib['FunctionDecls'].select { |f| 
        interests.include?(f['name'])
      }.each { |f|
        # Greedily remove up to the last comment to isolate the desired function
        system 'clear'
        puts `head -#{f['line']} #{f['file']} | tail -100`.sub(/(.*)(\/\*\*)/m, '\2')
        $stdin.gets
      }
    end
  end
  
  # lib['FunctionDecls'].map { |f| [f['return_type']['type_name'], f['name'], f['file'], f['line']] }.select { |a| a[0] == 'int' }
end
