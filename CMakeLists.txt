cmake_minimum_required(VERSION 4.0.0)
project(dywoqc)

set(CMAKE_C_STANDARD 23)
file(GLOB_RECURSE SOURCES_RECURSE CONFIGURE_DEPENDS src/**/*.c)

add_library(${PROJECT_NAME} STATIC ${SOURCES_RECURSE})
target_include_directories(${PROJECT_NAME} PUBLIC include/dywoqc/)
