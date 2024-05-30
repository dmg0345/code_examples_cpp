# Define test suite.
define_test_suite(test_cpp_dsa_singly_linked_list)
define_test_suite(test_cpp_dsa_doubly_linked_list)

## Code Under Test sources and includes ################################################################################
target_sources(test_cpp_dsa_singly_linked_list PRIVATE ${SOURCES_CPP_DSA})
target_include_directories(test_cpp_dsa_singly_linked_list PRIVATE ${INCLUDE_DIRS_CPP_DSA})

target_sources(test_cpp_dsa_doubly_linked_list PRIVATE ${SOURCES_CPP_DSA})
target_include_directories(test_cpp_dsa_doubly_linked_list PRIVATE ${INCLUDE_DIRS_CPP_DSA})

## Test sources and includes ###########################################################################################
target_sources(test_cpp_dsa_singly_linked_list PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/test_singly_linked_list.cpp")
target_include_directories(test_cpp_dsa_singly_linked_list PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")

target_sources(test_cpp_dsa_doubly_linked_list PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/test_doubly_linked_list.cpp")
target_include_directories(test_cpp_dsa_doubly_linked_list PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")
