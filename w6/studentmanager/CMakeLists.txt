cmake_minimum_required(VERSION 3.0.0)
project(studentmanager VERSION 0.1.0)

include(CTest)
include_directories(include)
enable_testing()

add_executable(studentmanager main.c student.c binarySearch.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
