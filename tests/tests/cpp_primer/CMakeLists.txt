# Define test suite.
define_test_suite(test_cpp_primer_launcher)

## Code Under Test sources and includes ################################################################################
target_sources(test_cpp_primer_launcher PRIVATE ${SOURCES_CPP_PRIMER})
target_include_directories(test_cpp_primer_launcher PRIVATE ${INCLUDE_DIRS_CPP_PRIMER})

## Test sources and includes ###########################################################################################
target_sources(test_cpp_primer_launcher PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/test_launcher.cpp")
target_include_directories(test_cpp_primer_launcher PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")
