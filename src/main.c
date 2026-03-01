#define SDL_MAIN_HANDLED

#include <SDL2/SDL.h>
#include "lvgl.h"

/* объявление из app.c */
void app_create(void);

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;

    /* Инициализация LVGL */
    lv_init();

    /* Создание SDL окна 320x240 */
    lv_display_t *disp = lv_sdl_window_create(320, 240);

    /* Мышь */
    lv_indev_t *mouse = lv_sdl_mouse_create();
    lv_indev_set_display(mouse, disp);

    /* Клавиатура */
    lv_indev_t *kb = lv_sdl_keyboard_create();
    lv_indev_set_display(kb, disp);

    /* Создание GUI */
    app_create();

    /* Главный цикл */
    while (1)
    {
        lv_timer_handler();
        SDL_Delay(5);
    }

    return 0;
}