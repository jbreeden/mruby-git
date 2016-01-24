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
        system "clear"
        system "head -#{f['line']} #{f['file']} | tail -50"
        $stdin.gets
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
end
