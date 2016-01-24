namespace :bindings do
  desc 'Extract type information from C files'
  task :scrape do
    File.delete('declarations.json') if File.exists?('declarations.json')
    
    headers = Dir['headers/git2/*.h']
    
    if headers.length == 0
      $stderr.puts "No headers. Please copy libgit2/include/* files into #{Dir.pwd}/headers"
      $stderr.puts "(Note: Had to modify stash.h to #include oid.h for proper generation)"
      $stderr.puts "(Note: Had to modify transaction.h to #include oid.h for proper generation)"
      $stderr.puts "(Note: Had to modify transaction.h to #include types.h for proper generation)"
      $stderr.puts "(Note: Had to modify pack.h to #include buffer.h for proper generation)"
      $stderr.puts "(Note: Had to modify patch.h to #include buffer.h for proper generation)"
      $stderr.puts "(Note: Had to modify rebase.h to #include checkout.h for proper generation)"
      exit 1
    end
    
    headers.each do |header|
      sh "clang2json -Iheaders #{header} >> declarations.json"
    end
  end

  desc 'Generate bindings'
  task :generate do
    cmd = ['mrbind generate']
    cmd << '-input declarations.json'
    cmd << '-module Git'
    cmd << '-gem mruby-git'
    cmd << '-load mruby-bindings.in/ctypes.rb' if File.exists?('mruby-bindings.in/ctypes.rb')
    cmd << '-load mruby-bindings.in/fn_types.rb' if File.exists?('mruby-bindings.in/fn_types.rb')
    cmd << '-load mruby-bindings.in/macro_types.rb' if File.exists?('mruby-bindings.in/macro_types.rb')
    cmd << '-includes mruby-bindings.in/includes.h' if File.exists?('mruby-bindings.in/includes.h')
    cmd << '-output bindings'
    cmd << '-force'
    cmd << '-verbose' if ENV['VERBOSE']
    sh cmd.join(' ')
  end
  
  desc "Merge generated code into mrbgem"
  task :merge do
    sh "mrbind merge -from bindings -to ."
  end
  
  namespace :merge do
    desc "Merge generated code from src folder"
    task :src do
      sh "mrbind merge -from bindings -to . src"
    end
    
    desc "Merge generated code from include folder"
    task :include do
      sh "mrbind merge -from bindings -to . include"
    end
    
    desc "Merge generated code from mrblib folder"
    task :mrblib do
      sh "mrbind merge -from bindings -to . mrblib"
    end
  end
  
  desc 'Regenerate functions & classes headers'
  task :'enable-functions' do
    sh 'mrbind enable-functions -m Git -g mruby-git -o .'
  end
  
  task :fn_count do
    sh "cat include/mruby_Git_functions.h | egrep 'TRUE|FALSE' | wc -l"
  end

  task :bound_fns do
    sh "cat include/mruby_Git_functions.h | egrep 'TRUE'"
  end

  task :bound_fn_count do
    sh "cat include/mruby_Git_functions.h | egrep 'TRUE' | wc -l"
  end

  task :unbound_fns do
    sh "cat include/mruby_Git_functions.h | egrep 'FALSE'"
  end

  task :unbound_fn_count do
    sh "cat include/mruby_Git_functions.h | egrep 'FALSE' | wc -l"
  end
  
  task :'show-macro' do
    require 'json'
    File.open('./declarations.json') do |f|
      f.each_line do |l|
        decl = JSON.parse(l)
        if decl['kind'] == 'MacroDefinition' && decl['name'] == ENV['name']
          puts decl['text']
          break
        end
      end
    end
  end
end
