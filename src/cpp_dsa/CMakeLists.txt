## Add Linked Lists ####################################################################################################
add_subdirectory("linked_list")

## Add Stacks ##########################################################################################################
add_subdirectory("stack")

## Add Queues ##########################################################################################################
add_subdirectory("queue")

## Add Binary Trees ####################################################################################################
add_subdirectory("binary_tree")

## Add Hash Tables #####################################################################################################
add_subdirectory("hash_table")

## Add Graph ###########################################################################################################
add_subdirectory("graph")

## All layer sources and include directories ###########################################################################
# Collect source files of all components.
set(SOURCES_CPP_DSA
    ${SOURCES_CPP_DSA_LINKED_LIST}
    ${SOURCES_CPP_DSA_STACK}
    ${SOURCES_CPP_DSA_QUEUE}
    ${SOURCES_CPP_DSA_BINARY_TREE}
    ${SOURCES_CPP_DSA_HASH_TABLE}
    ${SOURCES_CPP_DSA_GRAPH}
    CACHE INTERNAL ""
)

# Collect include dirs of all components.
set(INCLUDE_DIRS_CPP_DSA
    "${CMAKE_CURRENT_SOURCE_DIR}/inc"
    ${INCLUDE_DIRS_CPP_DSA_LINKED_LIST}
    ${INCLUDE_DIRS_CPP_DSA_STACK}
    ${INCLUDE_DIRS_CPP_DSA_QUEUE}
    ${INCLUDE_DIRS_CPP_DSA_BINARY_TREE}
    ${INCLUDE_DIRS_CPP_DSA_HASH_TABLE}
    ${INCLUDE_DIRS_CPP_DSA_GRAPH}
    CACHE INTERNAL ""
)
