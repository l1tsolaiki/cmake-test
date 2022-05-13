cmake_minimum_required(VERSION 3.14)
project(test-mimalloc)

set(CMAKE_CXX_FLAGS "-Werror -Wreserved-identifier")

add_subdirectory(contrib EXCLUDE_FROM_ALL)
add_subdirectory(lib)

add_executable(test-mimalloc main.cpp)
target_link_libraries(test-mimalloc PRIVATE greetings)
