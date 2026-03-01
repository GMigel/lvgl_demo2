cmake_minimum_required(VERSION 3.10)
project(lvgl_pc)

set(CMAKE_C_STANDARD 99)

add_definitions(-DLV_CONF_INCLUDE_SIMPLE)

add_subdirectory(lib/lvgl)

find_package(SDL2 REQUIRED)

add_executable(lvgl_pc
    src/main.c
    src/app.c
    src/fonts/dejavu_10_ru.c
    src/fonts/dejavu_12_ru.c
    src/fonts/dejavu_14_ru.c
    src/fonts/dejavu_16_ru.c
    src/fonts/dejavu_18_ru.c
    src/fonts/dejavu_20_ru.c
    src/fonts/dejavu_22_ru.c
    src/fonts/dejavu_24_ru.c
    src/fonts/dejavu_26_ru.c
    src/fonts/dejavu_28_ru.c
)

target_include_directories(lvgl_pc PRIVATE
    .
    src
)

target_link_libraries(lvgl_pc
    lvgl
    SDL2::SDL2
)