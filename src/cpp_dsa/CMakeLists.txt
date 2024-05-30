## Add Linked Lists ####################################################################################################
add_subdirectory("linked_list")

## All layer sources and include directories ###########################################################################
# Collect source files of all components.
set(SOURCES_CPP_DSA
    ${SOURCES_CPP_DSA_LINKED_LIST}
    CACHE INTERNAL ""
)

# Collect include dirs of all components.
set(INCLUDE_DIRS_CPP_DSA
    "${CMAKE_CURRENT_SOURCE_DIR}/inc"
    ${INCLUDE_DIRS_CPP_DSA_LINKED_LIST}
    CACHE INTERNAL ""
)
