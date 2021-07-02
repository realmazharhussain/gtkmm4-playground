project('test1', 'cpp',
        version: '0.1.0')

gtkmm_dep = dependency('gtkmm-4.0')
gtkmm_inc = include_directories('include')

subdir('src')

main_sources = files('main.cxx')
executable('demo', main_sources,
	   include_directories: gtkmm_inc,
           dependencies : gtkmm_dep,
           link_with: libtest1,
           install: true)
