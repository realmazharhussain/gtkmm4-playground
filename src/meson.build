lib_sources = files('helloworld.cc')
main_sources = files('base.cc')

libtest1 = library(
	              'test1', lib_sources,
		          include_directories: include_dir,
		          dependencies: gtkmm_dep
		          )

executable(
	      'test1', main_sources,
          include_directories: include_dir,
          dependencies : gtkmm_dep,
          link_with: libtest1,
          install: true
          )
