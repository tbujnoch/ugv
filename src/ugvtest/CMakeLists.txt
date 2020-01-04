# ugvTest application

add_executable(ugvTest)

target_sources(ugvTest
	PRIVATE
		main.cpp
)

target_compile_features(ugvTest
	PUBLIC
		cxx_strong_enums
		cxx_lambdas
		cxx_range_for
)

target_include_directories(
	ugvTest
	PRIVATE ../ugv
)

find_package(Boost 1.71 REQUIRED 
	COMPONENTS
		filesystem
)

target_link_libraries(ugvTest
	PRIVATE 
		ugv
		Boost::filesystem 
)

target_compile_options(ugvTest
	PRIVATE
		/WX
)

#install(TARGETS ugvTest EXPORT ugvTestTargets
#	LIBRARY DESTINATION lib
#	ARCHIVE DESTINATION lib
#	RUNTIME DESTINATION bin
#	INCLUDES DESTINATION include
#)
