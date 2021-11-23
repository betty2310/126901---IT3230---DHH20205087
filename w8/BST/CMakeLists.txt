cmake_minimum_required(VERSION 3.0.0)
project(BST VERSION 0.1.0)

include(CTest)
enable_testing()
include_directories(include)

set(SOURCES src/main.c src/bst.c)

add_executable(BST ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
