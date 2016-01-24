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
  git_buf
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
  git_strarray
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

CTypes.define('out:git_buf *') do
  self.out_only = true
  self.type_name = "git_buf"
  self.recv_template = <<-EOS
git_buf * %{value} = (git_buf*)calloc(1, sizeof(git_buf));
*%{value}) = GIT_BUF_INIT;
EOS
  self.invocation_arg_template = "&%{value}"
  self.boxing_fn.invocation_template = "mrb_value %{as} = %{box} == NULL ? mrb_nil_value() : mruby_giftwrap_#{type}(mrb, %{box});"
end

# Table generated in `rake bindings:pry` shell with this line:
# lib['ParmDecls'].select { |p| p['type']['type_name'].include?('git_buf') }.map { |p| [p['type']['type_name'], p['name'], p['function']] }
[["git_buf *", "out", "git_blob_filtered_content"],
  ["git_buf *", "out", "git_branch_upstream_name"],
  ["git_buf *", "out", "git_branch_remote_name"],
  ["git_buf *", "buf", "git_branch_upstream_remote"],
  ["git_buf *", "buffer", "git_buf_free"],
  ["git_buf *", "buffer", "git_buf_grow"],
  ["git_buf *", "buffer", "git_buf_set"],
  ["const git_buf *", "buf", "git_buf_is_binary"],
  ["const git_buf *", "buf", "git_buf_contains_nul"],
  ["git_buf *", "out", "git_commit_header_field"],
  ["git_buf *", "out", "git_config_find_global"],
  ["git_buf *", "out", "git_config_find_xdg"],
  ["git_buf *", "out", "git_config_find_system"],
  ["git_buf *", "out", "git_config_find_programdata"],
  ["git_buf *", "out", "git_config_get_path"],
  ["git_buf *", "out", "git_config_get_string_buf"],
  ["git_buf *", "out", "git_config_parse_path"],
  ["git_buf *", "out", "git_describe_format"],
  ["git_buf *", "out", "git_diff_stats_to_buf"],
  ["git_buf *", "out", "git_diff_format_email"],
  ["git_buf *", "out", "git_diff_commit_as_email"],
  ["git_buf *", "out", "git_filter_list_apply_to_data"],
  ["git_buf *", "in", "git_filter_list_apply_to_data"],
  ["git_buf *", "out", "git_filter_list_apply_to_file"],
  ["git_buf *", "out", "git_filter_list_apply_to_blob"],
  ["git_buf *", "data", "git_filter_list_stream_data"],
  ["git_buf *", "out", "git_message_prettify"],
  ["git_buf *", "out", "git_object_short_id"],
  ["git_buf *", "buf", "git_packbuilder_write_buf"],
  ["git_buf *", "out", "git_patch_to_buf"],
  ["git_buf *", "out", "git_refspec_transform"],
  ["git_buf *", "out", "git_refspec_rtransform"],
  ["git_buf *", "out", "git_remote_default_branch"],
  ["git_buf *", "out", "git_repository_discover"],
  ["git_buf *", "out", "git_repository_message"],
  ["git_buf *", "out", "git_submodule_resolve_url"]].each do |type, name, fn|
  
  
  
end
