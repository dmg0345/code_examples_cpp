## Include third-party components ######################################################################################
add_subdirectory("third_party")

## Include chapters ####################################################################################################
add_subdirectory("chapter_1")
add_subdirectory("chapter_2")
add_subdirectory("chapter_3")
add_subdirectory("chapter_4")
add_subdirectory("chapter_5")
add_subdirectory("chapter_6")
add_subdirectory("chapter_7")

## Sources #############################################################################################################
# Collect sources and add them to target.
set(SOURCES_CPP_PRIMER
    ""
    CACHE INTERNAL ""
)

## Includes ############################################################################################################
# Collect include directories.
set(INCLUDE_DIRS_CPP_PRIMER
    "${CMAKE_CURRENT_SOURCE_DIR}/inc"
    CACHE INTERNAL ""
)

## All layer sources and include directories ###########################################################################
# Collect source files of all components.
set(SOURCES_CPP_PRIMER_ALL
    ${SOURCES_CPP_PRIMER}
    ${SOURCES_CPP_PRIMER_THIRD_PARTY}
    ${SOURCES_CPP_PRIMER_CHAPTER_1}
    ${SOURCES_CPP_PRIMER_CHAPTER_2}
    ${SOURCES_CPP_PRIMER_CHAPTER_3}
    ${SOURCES_CPP_PRIMER_CHAPTER_4}
    ${SOURCES_CPP_PRIMER_CHAPTER_5}
    ${SOURCES_CPP_PRIMER_CHAPTER_6}
    ${SOURCES_CPP_PRIMER_CHAPTER_7}
    CACHE INTERNAL ""
)

# Collect include dirs of all components.
set(INCLUDE_DIRS_CPP_PRIMER_ALL
    ${INCLUDE_DIRS_CPP_PRIMER}
    ${INCLUDE_DIRS_CPP_PRIMER_THIRD_PARTY}
    ${INCLUDE_DIRS_CPP_PRIMER_CHAPTER_1}
    ${INCLUDE_DIRS_CPP_PRIMER_CHAPTER_2}
    ${INCLUDE_DIRS_CPP_PRIMER_CHAPTER_3}
    ${INCLUDE_DIRS_CPP_PRIMER_CHAPTER_4}
    ${INCLUDE_DIRS_CPP_PRIMER_CHAPTER_5}
    ${INCLUDE_DIRS_CPP_PRIMER_CHAPTER_6}
    ${INCLUDE_DIRS_CPP_PRIMER_CHAPTER_7}
    CACHE INTERNAL ""
)
