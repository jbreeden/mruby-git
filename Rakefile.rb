namespace :readme do
  desc 'Prep the environment to run readme.rb'
  task :prep do
    rm_rf 'sandbox'
    mkdir 'sandbox'
    mkdir_p 'sandbox/wd'    
  end
  
  desc 'Run the ruby version of the README'
  task :run => :prep do
    sh "mruby readme.rb"
  end
  
  desc 'Convert to README.md'
  task :convert do
    File.open('README.md', 'w') do |md|
      File.open('readme.rb', 'r') do |rb|
        rb.each_line do |l|
          break if l.strip == '__END__'
          md.puts l.sub(/^#( ?)/, '')
        end
      end
    end
  end
end
