cmake_minimum_required(VERSION 3.30)
set(CMAKE_C_COMPILER "gcc")

project(
  rata-tui
  VERSION 0.0
  DESCRIPTION "Terminal User Interface for apps."
  LANGUAGES C)

set(CMAKE_C_STANDARD 23)
set(CMAKE_C_STANDARD_REQUIRED True)

find_package(Curses REQUIRED)

file(GLOB_RECURSE SRC_FILES ${PROJECT_SOURCE_DIR}/*.c)

add_compile_options(-lncurses -O3 -std=gnu23 -Wall -Wextra -Wpedantic -Werror -g -march=native)

add_compile_options(-fsanitize=address)
add_link_options(-fsanitize=address)

add_executable(${PROJECT_NAME} ${SRC_FILES})

target_link_libraries(${PROJECT_NAME})
