find_package(SDL2 REQUIRED)

add_definitions(-DLV_CONF_INCLUDE_SIMPLE)
#add_definitions(-DLV_CONF_PATH=\"${CMAKE_SOURCE_DIR}/lv_conf_pc.h\")

add_executable(lvgl_pc
    main_pc.c
)

target_link_libraries(lvgl_pc
    lvgl
    app
    SDL2::SDL2
)

target_include_directories(lvgl_pc PRIVATE
    ../
)