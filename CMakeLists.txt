# Adapted from https://gist.github.com/Strus/042a92a00070a943053006bf46912ae9
# Build the compilation database with `cmake -S . -G "Unix Makefiles" -B cmake`
# The database is exported in the cmake/ directory

cmake_minimum_required(VERSION 3.8)
project(st_eur)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Change path from /src if needed, or add more directories
file(GLOB_RECURSE sources
        "${CMAKE_SOURCE_DIR}/src/*.c"
        "${CMAKE_SOURCE_DIR}/src/*.cpp"
)

# Add precompiler definitions like that:
# add_definitions(-DSOME_DEFINITION)

add_executable(st_eur ${sources})

# Add include directories
target_include_directories(st_eur PUBLIC "${CMAKE_SOURCE_DIR}/include")

# Add lib directories
file(GLOB lib_paths
        "${CMAKE_SOURCE_DIR}/libs/*"
)

foreach(path IN LISTS lib_paths)

    string(REGEX MATCH "([a-z]+)$" lib_name ${path}) # last word of the path is the name
    # message(STATUS "path=${path}")
    # message(STATUS "name=${lib_name}")

    # Add the library only as an interface since we don't plan on compiling anyway
    add_library(${lib_name} INTERFACE)
    set_target_properties(${lib_name} PROPERTIES
          INTERFACE_INCLUDE_DIRECTORIES "${path}/include"
    )

    target_link_libraries(st_eur ${lib_name}) # also adds the required include path

endforeach()

# If you have precompiled headers you can add them like this
# trget_precompiled_headers(st_eur PRIVATE "${CMAKE_SOURCE_DIR}/src/pch.h")
