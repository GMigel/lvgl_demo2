cmake_minimum_required(VERSION 3.10)
project(lvgl_pc)

set(CMAKE_C_STANDARD 99)

add_definitions(-DLV_CONF_INCLUDE_SIMPLE)

add_subdirectory(lib/lvgl)

find_package(SDL2 REQUIRED)

add_executable(lvgl_pc
    src/main.c
    src/app.c
)

target_include_directories(lvgl_pc PRIVATE
    .
    src
)

target_link_libraries(lvgl_pc
    lvgl
    SDL2::SDL2
)