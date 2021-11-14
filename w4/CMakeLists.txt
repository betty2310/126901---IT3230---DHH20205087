cmake_minimum_required(VERSION 3.0.0)
project(Stacks VERSION 0.1.0)

include(CTest)
enable_testing()
include_directories(include)
set(SOURCES src/main.c src/stack.c src/postfix.c)
# file(GLOB SOURCES "src/*.c")

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
add_executable(main ${SOURCES})
