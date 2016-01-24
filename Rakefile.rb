namespace :readme do
  desc 'Run the ruby version of the README'
  task :run do
    rm_rf 'sandbox'
    mkdir 'sandbox'
    mkdir_p 'sandbox/wd'
    
    sh "mruby readme.rb"
  end
end
