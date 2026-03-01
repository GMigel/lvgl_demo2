add_library(app STATIC
    app.c
    ../app/fonts/dejavu_10_ru.c
    ../app/fonts/dejavu_12_ru.c
    ../app/fonts/dejavu_14_ru.c
    ../app/fonts/dejavu_16_ru.c
    ../app/fonts/dejavu_18_ru.c
    ../app/fonts/dejavu_20_ru.c
    ../app/fonts/dejavu_22_ru.c
    ../app/fonts/dejavu_24_ru.c
    ../app/fonts/dejavu_26_ru.c
    ../app/fonts/dejavu_28_ru.c
)

target_include_directories(app PUBLIC
    .
    ${CMAKE_SOURCE_DIR}
)

target_link_libraries(app PUBLIC lvgl)
