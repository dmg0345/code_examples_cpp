## Add Linked Lists ####################################################################################################
add_subdirectory("linked_list")

## Add Stacks ##########################################################################################################
add_subdirectory("stack")

## Add Queues ##########################################################################################################
add_subdirectory("queue")

## All layer sources and include directories ###########################################################################
# Collect source files of all components.
set(SOURCES_CPP_DSA
    ${SOURCES_CPP_DSA_LINKED_LIST}
    ${SOURCES_CPP_DSA_STACK}
    ${SOURCES_CPP_DSA_QUEUE}
    CACHE INTERNAL ""
)

# Collect include dirs of all components.
set(INCLUDE_DIRS_CPP_DSA
    "${CMAKE_CURRENT_SOURCE_DIR}/inc"
    ${INCLUDE_DIRS_CPP_DSA_LINKED_LIST}
    ${INCLUDE_DIRS_CPP_DSA_STACK}
    ${INCLUDE_DIRS_CPP_DSA_QUEUE}
    CACHE INTERNAL ""
)
