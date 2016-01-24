## int git_attr_get(const char ** value_out, git_repository * repo, uint32_t flags, const char * path, const char * name)
# Param: value_out (const char **)
CTypes.set_fn_param_type('git_attr_get', 'value_out', CTypes['out:cstring:nofree'])

## int git_blob_create_frombuffer(git_oid * id, git_repository * repo, const void * buffer, size_t len)
# Param: buffer (const void *)
CTypes.set_fn_param_type('git_blob_create_frombuffer', 'buffer', CTypes['in-buffer:const void *, int'])
CTypes.set_fn_param_type('git_blob_create_frombuffer', 'len', CTypes['ignore']) # Handled by buffer CType (len comes from string)

## int git_branch_name(const char ** out, const git_reference * ref)
# Param: out (const char **)
CTypes.set_fn_param_type('git_branch_name', 'out', CTypes['out:cstring:nofree'])

## int git_branch_next(git_reference ** out, git_branch_t * out_type, git_branch_iterator * iter)
# Param: out_type (git_branch_t *)
CTypes.set_fn_param_type('git_branch_next', 'out_type', CTypes['out:int *'])

## int git_buf_set(git_buf * buffer, const void * data, size_t datalen)
# Param: data (const void *)
CTypes.set_fn_param_type('git_buf_set', 'data', CTypes['in-buffer:const void *, int'])
CTypes.set_fn_param_type('git_buf_set', 'datalen', CTypes['ignore'])

# ## int git_commit_create(git_oid * id, git_repository * repo, const char * update_ref, const git_signature * author, const git_signature * committer, const char * message_encoding, const char * message, const git_tree * tree, size_t parent_count, const git_commit *[] parents)
# # Param: parents (const git_commit *[])
# CTypes.set_fn_param_type('git_commit_create', 'parents', CTypes['???'])

## int git_config_get_bool(int * out, const git_config * cfg, const char * name)
# Param: out (int *)
CTypes.set_fn_param_type('git_config_get_bool', 'out', CTypes['out-bool:int *'])

## int git_config_get_int32(int32_t * out, const git_config * cfg, const char * name)
# Param: out (int32_t *)
CTypes.set_fn_param_type('git_config_get_int32', 'out', CTypes['out:int *'])

## int git_config_get_int64(int64_t * out, const git_config * cfg, const char * name)
# Param: out (int64_t *)
CTypes.set_fn_param_type('git_config_get_int64', 'out', CTypes['out:int *'])

## int git_config_get_mapped(int * out, const git_config * cfg, const char * name, const git_cvar_map * maps, size_t map_n)
# Param: out (int *)
CTypes.set_fn_param_type('git_config_get_mapped', 'out', CTypes['out:int *'])


## int git_config_get_string(const char ** out, const git_config * cfg, const char * name)
# Param: out (const char **)
CTypes.set_fn_param_type('git_config_get_string', 'out', CTypes['out:cstring:nofree'])

## int git_config_lookup_map_value(int * out, const git_cvar_map * maps, size_t map_n, const char * value)
# Param: out (int *)
CTypes.set_fn_param_type('git_config_lookup_map_value', 'out', CTypes['out:int *'])

## int git_config_parse_bool(int * out, const char * value)
# Param: out (int *)
CTypes.set_fn_param_type('git_config_parse_bool', 'out', CTypes['out-bool:int *'])

## int git_config_parse_int32(int32_t * out, const char * value)
# Param: out (int32_t *)
CTypes.set_fn_param_type('git_config_parse_int32', 'out', CTypes['out:int *'])

## int git_config_parse_int64(int64_t * out, const char * value)
# Param: out (int64_t *)
CTypes.set_fn_param_type('git_config_parse_int64', 'out', CTypes['out:int *'])

## int git_config_set_int64(git_config * cfg, const char * name, int64_t value)
# Param: value (int64_t)
CTypes.set_fn_param_type('git_config_set_int64', 'value', CTypes['int'])

## int git_graph_ahead_behind(size_t * ahead, size_t * behind, git_repository * repo, const git_oid * local, const git_oid * upstream)
# Param: ahead (size_t *)
CTypes.set_fn_param_type('git_graph_ahead_behind', 'ahead', CTypes['out:int *'])
# Param: behind (size_t *)
CTypes.set_fn_param_type('git_graph_ahead_behind', 'behind', CTypes['out:int *'])

## int git_ignore_path_is_ignored(int * ignored, git_repository * repo, const char * path)
# Param: ignored (int *)
CTypes.set_fn_param_type('git_ignore_path_is_ignored', 'ignored', CTypes['out-bool:int *'])

## void git_libgit2_version(int * major, int * minor, int * rev)
# Param: major (int *)
CTypes.set_fn_param_type('git_libgit2_version', 'major', CTypes['out:int *'])
# Param: minor (int *)
CTypes.set_fn_param_type('git_libgit2_version', 'minor', CTypes['out:int *'])
# Param: rev (int *)
CTypes.set_fn_param_type('git_libgit2_version', 'rev', CTypes['out:int *'])

# ## int git_merge_base_many(git_oid * out, git_repository * repo, size_t length, const git_oid [] input_array)
# # Param: input_array (const git_oid [])
# CTypes.set_fn_param_type('git_merge_base_many', 'input_array', CTypes['???'])

# ## int git_merge_base_octopus(git_oid * out, git_repository * repo, size_t length, const git_oid [] input_array)
# # Param: input_array (const git_oid [])
# CTypes.set_fn_param_type('git_merge_base_octopus', 'input_array', CTypes['???'])

# ## int git_merge_bases_many(git_oidarray * out, git_repository * repo, size_t length, const git_oid [] input_array)
# # Param: input_array (const git_oid [])
# CTypes.set_fn_param_type('git_merge_bases_many', 'input_array', CTypes['???'])

## int git_note_default_ref(int * out, git_repository * repo)
# Param: out (int *)
CTypes.set_fn_param_type('git_note_default_ref', 'out', CTypes['out:int *'])

## int git_odb_hash(git_oid * out, const void * data, size_t len, git_otype type)
# Param: data (const void *)
CTypes.set_fn_param_type('git_odb_hash', 'data', CTypes['in-buffer:const void *, int'])
CTypes.set_fn_param_type('git_odb_hash', 'len', CTypes['ignore'])

## int git_odb_read_header(size_t * len_out, git_otype * type_out, git_odb * db, const git_oid * id)
# Param: type_out (git_otype *)
CTypes.set_fn_param_type('git_odb_read_header', 'type_out', CTypes['???'])

# ## int git_odb_stream_read(git_odb_stream * stream, char * buffer, size_t len)
# # Param: buffer (char *)
# CTypes.set_fn_param_type('git_odb_stream_read', 'buffer', CTypes['???'])

## int git_odb_write(git_oid * out, git_odb * odb, const void * data, size_t len, git_otype type)
# Param: data (const void *)
CTypes.set_fn_param_type('git_odb_write', 'data', CTypes['in-buffer:const void *, int'])
CTypes.set_fn_param_type('git_odb_write', 'len', CTypes['ignore'])

## char * git_oid_tostr_s(const git_oid * oid)
# Return value (char *)
CTypes.set_fn_return_type('git_oid_tostr_s', CTypes['out:cstring:nofree'])

## int git_reference_next_name(const char ** out, git_reference_iterator * iter)
# Param: out (const char **)
CTypes.set_fn_param_type('git_reference_next_name', 'out', CTypes['out:cstring:nofree'])

# ## int git_reference_normalize_name(char * buffer_out, size_t buffer_size, const char * name, unsigned int flags)
# # Param: buffer_out (char *)
# CTypes.set_fn_param_type('git_reference_normalize_name', 'buffer_out', CTypes['???'])

## int git_repository_ident(const char ** name, const char ** email, const git_repository * repo)
# Param: name (const char **)
CTypes.set_fn_param_type('git_repository_ident', 'name', CTypes['out:cstring:nofree'])
# Param: email (const char **)
CTypes.set_fn_param_type('git_repository_ident', 'email', CTypes['out:cstring:nofree'])

## int git_status_file(unsigned int * status_flags, git_repository * repo, const char * path)
# Param: status_flags (unsigned int *)
CTypes.set_fn_param_type('git_status_file', 'status_flags', CTypes['out:int *'])

## int git_submodule_location(unsigned int * location_status, git_submodule * submodule)
# Param: location_status (unsigned int *)
CTypes.set_fn_param_type('git_submodule_location', 'location_status', CTypes['out:int *'])

## int git_submodule_status(unsigned int * status, git_repository * repo, const char * name, git_submodule_ignore_t ignore)
# Param: status (unsigned int *)
CTypes.set_fn_param_type('git_submodule_status', 'status', CTypes['out:int *'])
