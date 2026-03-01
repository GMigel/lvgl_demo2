#include "lvgl.h"

/* Объявляем подключённый шрифт */
LV_FONT_DECLARE(dejavu_10_ru);
LV_FONT_DECLARE(dejavu_12_ru);
LV_FONT_DECLARE(dejavu_14_ru);
LV_FONT_DECLARE(dejavu_16_ru);
LV_FONT_DECLARE(dejavu_18_ru);
LV_FONT_DECLARE(dejavu_20_ru);
LV_FONT_DECLARE(dejavu_22_ru);
LV_FONT_DECLARE(dejavu_24_ru);
LV_FONT_DECLARE(dejavu_26_ru);
LV_FONT_DECLARE(dejavu_28_ru);

void app_create(void)
{
    /* Создаём метку */
    lv_obj_t *label = lv_label_create(lv_screen_active());

    /* UTF-8 строка с русским текстом */
    lv_label_set_text(label, "LVGL на русском");

    /* Устанавливаем шрифт с кириллицей */
    lv_obj_set_style_text_font(label, &dejavu_10_ru, 0);

    /* Центрируем */
    lv_obj_center(label);
}