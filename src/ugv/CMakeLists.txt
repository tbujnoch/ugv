# unstructured grid visualization library

add_library(ugv SHARED)

target_sources(ugv
	PUBLIC
		ugv.h
	PRIVATE
		ugv.cpp
)

target_compile_features(ugv
	PUBLIC
		cxx_strong_enums
		cxx_lambdas
		cxx_range_for
)

target_compile_definitions(ugv
	PRIVATE
		UGV
)

target_compile_options(ugv
	PRIVATE
		/WX
)

#target_include_directories(ugv 
#	PUBLIC 
#		${CMAKE_CURRENT_SOURCE_DIR}
#)

find_package(TBB CONFIG REQUIRED)

target_link_libraries(ugv 
	PRIVATE 
		TBB::tbb
)

#install(TARGETS ugv EXPORT ugvTargets
#	LIBRARY DESTINATION lib
#	ARCHIVE DESTINATION lib
#	RUNTIME DESTINATION bin
#	INCLUDES DESTINATION include
#)