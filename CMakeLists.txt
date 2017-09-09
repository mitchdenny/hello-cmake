cmake_minimum_required (VERSION 2.6)
project (hello-cmake)

include_directories ("${PROJECT_SOURCE_DIR}/greeter")
add_subdirectory (greeter)

add_executable (hello-cmake main.cc)
target_link_libraries (hello-cmake greeter)
