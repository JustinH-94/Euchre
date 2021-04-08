cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(DeckDeal)

include_directories(.)
include (gtest.cmake)
find_package(Threads)

add_executable(inclass src/main.cpp)
add_executable(inclass-test Test/main.cpp src/main.cpp)
target_link_libraries(inclass-test gtest ${CMAKE_THREAD_LIBS_INIT})
