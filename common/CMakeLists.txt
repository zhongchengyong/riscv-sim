aux_source_directory(. COMMON_SRC)
add_library(libcommon STATIC ${COMMON_SRC})

# Specify here the include directories exported by this library
target_include_directories(libcommon PUBLIC ${CMAKE_SOURCE_DIR})
