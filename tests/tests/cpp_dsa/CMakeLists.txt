# Define test suite.
define_test_suite(test_cpp_dsa_singly_linked_list)
define_test_suite(test_cpp_dsa_doubly_linked_list)
define_test_suite(test_cpp_dsa_stack_vector)
define_test_suite(test_cpp_dsa_stack_list)
define_test_suite(test_cpp_dsa_queue_list)
define_test_suite(test_cpp_dsa_binary_tree_pointers)
define_test_suite(test_cpp_dsa_binary_tree_vector)

## Code Under Test sources and includes ################################################################################
target_sources(test_cpp_dsa_singly_linked_list PRIVATE ${SOURCES_CPP_DSA})
target_include_directories(test_cpp_dsa_singly_linked_list PRIVATE ${INCLUDE_DIRS_CPP_DSA})

target_sources(test_cpp_dsa_doubly_linked_list PRIVATE ${SOURCES_CPP_DSA})
target_include_directories(test_cpp_dsa_doubly_linked_list PRIVATE ${INCLUDE_DIRS_CPP_DSA})

target_sources(test_cpp_dsa_stack_vector PRIVATE ${SOURCES_CPP_DSA})
target_include_directories(test_cpp_dsa_stack_vector PRIVATE ${INCLUDE_DIRS_CPP_DSA})

target_sources(test_cpp_dsa_stack_list PRIVATE ${SOURCES_CPP_DSA})
target_include_directories(test_cpp_dsa_stack_list PRIVATE ${INCLUDE_DIRS_CPP_DSA})

target_sources(test_cpp_dsa_queue_list PRIVATE ${SOURCES_CPP_DSA})
target_include_directories(test_cpp_dsa_queue_list PRIVATE ${INCLUDE_DIRS_CPP_DSA})

target_sources(test_cpp_dsa_binary_tree_pointers PRIVATE ${SOURCES_CPP_DSA})
target_include_directories(test_cpp_dsa_binary_tree_pointers PRIVATE ${INCLUDE_DIRS_CPP_DSA})

target_sources(test_cpp_dsa_binary_tree_vector PRIVATE ${SOURCES_CPP_DSA})
target_include_directories(test_cpp_dsa_binary_tree_vector PRIVATE ${INCLUDE_DIRS_CPP_DSA})

## Test sources and includes ###########################################################################################
target_sources(test_cpp_dsa_singly_linked_list PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/test_singly_linked_list.cpp")
target_include_directories(test_cpp_dsa_singly_linked_list PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")

target_sources(test_cpp_dsa_doubly_linked_list PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/test_doubly_linked_list.cpp")
target_include_directories(test_cpp_dsa_doubly_linked_list PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")

target_sources(test_cpp_dsa_stack_vector PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/test_stack_vector.cpp")
target_include_directories(test_cpp_dsa_stack_vector PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")

target_sources(test_cpp_dsa_stack_list PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/test_stack_list.cpp")
target_include_directories(test_cpp_dsa_stack_list PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")

target_sources(test_cpp_dsa_queue_list PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/test_queue_list.cpp")
target_include_directories(test_cpp_dsa_queue_list PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")

target_sources(test_cpp_dsa_binary_tree_pointers PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/test_binary_tree_pointers.cpp")
target_include_directories(test_cpp_dsa_binary_tree_pointers PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")

target_sources(test_cpp_dsa_binary_tree_vector PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/test_binary_tree_vector.cpp")
target_include_directories(test_cpp_dsa_binary_tree_vector PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")
