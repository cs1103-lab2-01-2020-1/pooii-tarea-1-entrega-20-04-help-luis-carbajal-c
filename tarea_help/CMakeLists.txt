CMAKE_MINIMUM_REQUIRED(VERSION 3.15)

PROJECT(tarea_help)

file(GLOB SOURCES "src/*")

add_executable(tarea_help ${SOURCES})