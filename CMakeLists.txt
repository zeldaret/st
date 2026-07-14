# See CONTRIBUTING.md for explanations
# Adapted from https://gist.github.com/Strus/042a92a00070a943053006bf46912ae9
# Build the compilation database with `cmake -S . -G "Unix Makefiles" -B cmake`
# The database is exported in the cmake/ directory

cmake_minimum_required(VERSION 3.8)
project(st_decomp)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Change path from /src if needed, or add more directories
file(GLOB_RECURSE sources
        "${CMAKE_SOURCE_DIR}/src/*.c"
        "${CMAKE_SOURCE_DIR}/src/*.cpp"
)

# Add precompiler definitions like that:
# add_definitions(-DSOME_DEFINITION)

add_executable(st_decomp ${sources})

# Add include directories
target_include_directories(st_decomp PUBLIC "${CMAKE_SOURCE_DIR}/include")

# Add lib directories
file(GLOB lib_paths
        "${CMAKE_SOURCE_DIR}/libs/*"
)

foreach(path IN LISTS lib_paths)

    # Retrieve the name of the lib
    string(REGEX MATCH "([a-z]+)$" lib_name ${path}) # last word of the path is the name

    # Add the library as an interface only since we don't intend on actually compiling anyway
    add_library(${lib_name} INTERFACE)
    set_target_properties(${lib_name} PROPERTIES
          INTERFACE_INCLUDE_DIRECTORIES "${path}/include"
    )

    target_link_libraries(st_decomp ${lib_name}) # also adds the required include path

endforeach()

# If you have precompiled headers you can add them like this
# trget_precompiled_headers(st_decomp PRIVATE "${CMAKE_SOURCE_DIR}/src/pch.h")
