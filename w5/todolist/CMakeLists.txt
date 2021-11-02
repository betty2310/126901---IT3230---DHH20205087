cmake_minimum_required(VERSION 3.0.0)

project(toDoList VERSION 0.1.0)

include(CTest)

enable_testing()

include_directories(include)

set(SOURCES src/main.c src/queue.c src/todo.c)

add_executable(todolist ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})

set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

include(CPack)