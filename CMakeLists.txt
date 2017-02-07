cmake_minimum_required(VERSION 3.3)
project(cse225_listsort)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp itemType.h itemType.cpp unsortedtype.h sortedtype.h unsortedtype.cpp)
add_executable(cse225_listsort ${SOURCE_FILES})