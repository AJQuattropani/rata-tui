cmake_minimum_required(VERSION 3.30)
set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CPP_COMPILER "g++")

project(
  rata-tui
  VERSION 0.0
  DESCRIPTION "Terminal User Interface for apps."
  LANGUAGES C CXX)

set(CMAKE_C_STANDARD 23)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED True)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(Curses REQUIRED)

file(GLOB_RECURSE SRC_FILES ${PROJECT_SOURCE_DIR}/*.cpp ${PROJECT_SOURCE_DIR}/*.c)

add_compile_options(-fsanitize=address -O3 -Wall -Wextra -Wpedantic -Werror -g -march=native)

add_link_options(-fsanitize=address)

add_executable(${PROJECT_NAME} ${SRC_FILES})

target_link_libraries(${PROJECT_NAME} ncurses)
