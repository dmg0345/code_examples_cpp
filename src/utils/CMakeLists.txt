## Add 'version' component #############################################################################################
add_subdirectory("version")

## All layer sources and include directories ###########################################################################
# Collect source files of all components.
set(SOURCES_UTILS_ALL
    ${SOURCES_VERSION}
    CACHE INTERNAL ""
)

# Collect include dirs of all components.
set(INCLUDE_DIRS_UTILS_ALL
    ${INCLUDE_DIRS_VERSION}
    CACHE INTERNAL ""
)
