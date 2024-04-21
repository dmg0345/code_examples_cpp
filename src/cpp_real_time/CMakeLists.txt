## Sources #############################################################################################################
# Collect sources and add them to target.
set(SOURCES_CPP_REAL_TIME
    ""
    CACHE INTERNAL ""
)

## Includes ############################################################################################################
# Collect include directories.
set(INCLUDE_DIRS_CPP_REAL_TIME
    "${CMAKE_CURRENT_SOURCE_DIR}/inc"
    CACHE INTERNAL ""
)

## All layer sources and include directories ###########################################################################
# Collect source files of all components.
set(SOURCES_CPP_REAL_TIME_ALL
    ${SOURCES_CPP_REAL_TIME}
    CACHE INTERNAL ""
)

# Collect include dirs of all components.
set(INCLUDE_DIRS_CPP_REAL_TIME_ALL
    ${INCLUDE_DIRS_CPP_REAL_TIME}
    CACHE INTERNAL ""
)
