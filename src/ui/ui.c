// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.2.3
// LVGL version: 8.3.3
// Project name: game

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t *ui_Screen2;
void ui_event_Button2(lv_event_t *e);
lv_obj_t *ui_Button2;
void ui_event_Label2(lv_event_t *e);
void ui_event_button1(lv_event_t *e);
lv_obj_t *ui_button1;
void ui_event_button2(lv_event_t *e);
lv_obj_t *ui_button2;
void ui_event_restartButton(lv_event_t *e);
lv_obj_t *ui_restartButton;
lv_obj_t *ui_restartLabel;
lv_obj_t *ui_Label2;
lv_obj_t *ui_Image5;
lv_obj_t *ui_Screen4;
lv_obj_t *ui_Image1;
lv_obj_t *ui_Image7;
lv_obj_t *ui_Image3;
lv_obj_t *ui_Image4;
lv_obj_t *ui_Slider2;
lv_obj_t *ui_Slider1;
lv_obj_t *ui_Image6;
lv_obj_t *ui_Image2;
lv_obj_t *ui____initial_actions0;
const lv_img_dsc_t *ui_imgset_[22] = {&ui_img_0_png, &ui_img_1_png, &ui_img_10259980_png, &ui_img_11_png, &ui_img_12_png, &ui_img_2_png, &ui_img_13_png, &ui_img_3_png, &ui_img_14_png, &ui_img_4_png, &ui_img_15_png, &ui_img_5_png, &ui_img_16_png, &ui_img_6_png, &ui_img_17_png, &ui_img_7_png, &ui_img_18_png, &ui_img_8_png, &ui_img_19_png, &ui_img_20_png, &ui_img_21_png, &ui_img_9_png};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP != 0
#error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Button2(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        ui_Screen4_screen_init();
        _ui_screen_change(ui_Screen4, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0);
    }
}
void ui_event_Label2(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        ui_Screen4_screen_init();
        _ui_screen_change(ui_Screen4, LV_SCR_LOAD_ANIM_OVER_TOP, 500, 0);
    }
}

void ui_event_button1(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_PRESSED)
    {
        buttonClicked(e);
    }
    if (event_code == LV_EVENT_RELEASED)
    {
        buttonReleased(e);
    }
}
void ui_event_button2(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_PRESSED)
    {
        buttonClicked(e);
    }
    if (event_code == LV_EVENT_RELEASED)
    {
        buttonReleased(e);
    }
}
void ui_event_restartButton(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        restartGame(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_img_src(ui_Screen2, &ui_img_b_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button2 = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_Button2, 114);
    lv_obj_set_height(ui_Button2, 50);
    lv_obj_set_x(ui_Button2, -5);
    lv_obj_set_y(ui_Button2, 109);
    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0x73B8CA), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Button2);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Label2, -1);
    lv_obj_set_y(ui_Label2, 1);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "START");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0xDDBD25), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_Label2, LV_TEXT_DECOR_UNDERLINE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image5 = lv_img_create(ui_Screen2);
    lv_obj_set_width(ui_Image5, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Image5, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Image5, 508);
    lv_obj_set_y(ui_Image5, 67);
    lv_obj_set_align(ui_Image5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image5, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image5, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    lv_obj_add_event_cb(ui_Label2, ui_event_Label2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);
}
void ui_Screen4_screen_init(void)
{
    ui_Screen4 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen4, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_img_src(ui_Screen4, &ui_img_10259980_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image1 = lv_img_create(ui_Screen4);
    lv_img_set_src(ui_Image1, &ui_img_1_png);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Image1, -165);
    lv_obj_set_y(ui_Image1, 43);
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image7 = lv_img_create(ui_Screen4);
    lv_img_set_src(ui_Image7, &ui_img_0_png);
    lv_obj_set_width(ui_Image7, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Image7, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Image7, -71);
    lv_obj_set_y(ui_Image7, 54);
    lv_obj_set_align(ui_Image7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image7, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image7, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image3 = lv_img_create(ui_Screen4);
    lv_img_set_src(ui_Image3, &ui_img_13_png);
    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Image3, 158);
    lv_obj_set_y(ui_Image3, 36);
    lv_obj_set_align(ui_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image4 = lv_img_create(ui_Screen4);
    lv_img_set_src(ui_Image4, &ui_img_0_png);
    lv_obj_set_width(ui_Image4, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Image4, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Image4, -61);
    lv_obj_set_y(ui_Image4, 55);
    lv_obj_set_align(ui_Image4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image4, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image4, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Slider2 = lv_slider_create(ui_Screen4);
    lv_slider_set_value(ui_Slider2, 100, LV_ANIM_OFF);
    if (lv_slider_get_mode(ui_Slider2) == LV_SLIDER_MODE_RANGE)
        lv_slider_set_left_value(ui_Slider2, 0, LV_ANIM_OFF);
    lv_obj_set_width(ui_Slider2, 150);
    lv_obj_set_height(ui_Slider2, 10);
    lv_obj_set_x(ui_Slider2, -119);
    lv_obj_set_y(ui_Slider2, -100);
    lv_obj_set_align(ui_Slider2, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_img_src(ui_Slider2, &ui_img_red_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Slider2, lv_color_hex(0x07F87D), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Slider2, &ui_img_green_png, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Slider2, lv_color_hex(0x0BF638), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider2, 256, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Slider1 = lv_slider_create(ui_Screen4);
    lv_obj_set_width(ui_Slider1, 142);
    lv_obj_set_height(ui_Slider1, 10);
    lv_obj_set_x(ui_Slider1, 126);
    lv_obj_set_y(ui_Slider1, -100);
    lv_obj_set_align(ui_Slider1, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Slider1, &ui_img_green_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_grad_color(ui_Slider1, lv_color_hex(0xFFFFFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Slider1, &ui_img_red_png, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Slider1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Slider1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Image6 = lv_img_create(ui_Screen4);
    lv_img_set_src(ui_Image6, &ui_img_0_png);
    lv_obj_set_width(ui_Image6, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Image6, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Image6, 3);
    lv_obj_set_y(ui_Image6, -75);
    lv_obj_set_align(ui_Image6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image6, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image6, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image2 = lv_img_create(ui_Screen4);
    lv_img_set_src(ui_Image2, &ui_img_ko_png);
    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_Image2, -60);
    lv_obj_set_y(ui_Image2, 232);
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_button1 = lv_btn_create(ui_Screen4);
    lv_obj_set_width(ui_button1, 50);
    lv_obj_set_height(ui_button1, 70);
    lv_obj_set_x(ui_button1, -210);
    lv_obj_set_y(ui_button1, 0);
    lv_obj_set_align(ui_button1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_button1, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(ui_button1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_button1, 50, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_button2 = lv_btn_create(ui_Screen4);
    lv_obj_set_width(ui_button2, 50);
    lv_obj_set_height(ui_button2, 70);
    lv_obj_set_x(ui_button2, 210);
    lv_obj_set_y(ui_button2, 0);
    lv_obj_set_align(ui_button2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_button2, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_color(ui_button2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_button2, 50, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_restartButton = lv_btn_create(ui_Screen4);
    lv_obj_set_width(ui_restartButton, 100);
    lv_obj_set_height(ui_restartButton, LV_SIZE_CONTENT); /// 50
    lv_obj_set_x(ui_restartButton, 0);
    lv_obj_set_y(ui_restartButton, -10);
    lv_obj_set_align(ui_restartButton, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_restartButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_add_flag(ui_restartButton, LV_OBJ_FLAG_HIDDEN); /// Flags
    lv_obj_clear_flag(ui_restartButton, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_bg_opa(ui_restartButton, 100, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_restartLabel = lv_label_create(ui_restartButton);
    lv_obj_set_width(ui_restartLabel, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_restartLabel, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_restartLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_restartLabel, "Restart");

    lv_obj_add_event_cb(ui_button1, ui_event_button1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_button2, ui_event_button2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_restartButton, ui_event_restartButton, LV_EVENT_ALL, NULL);
}

void ui_init(void)
{
    LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                              false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen2_screen_init();
    ui_Screen4_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Screen2);
}
