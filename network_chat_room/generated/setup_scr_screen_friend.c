/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"

static int screen_friend_digital_clock_1_hour_value = 11;
static int screen_friend_digital_clock_1_min_value = 25;
static int screen_friend_digital_clock_1_sec_value = 50;
static char screen_friend_digital_clock_1_meridiem[] = "AM";
void screen_friend_digital_clock_1_timer(lv_timer_t *timer)
{	clock_count_12(&screen_friend_digital_clock_1_hour_value, &screen_friend_digital_clock_1_min_value, &screen_friend_digital_clock_1_sec_value, screen_friend_digital_clock_1_meridiem);
	if (lv_obj_is_valid(guider_ui.screen_friend_digital_clock_1))
	{
		lv_dclock_set_text_fmt(guider_ui.screen_friend_digital_clock_1, "%02d:%02d:%02d %s", screen_friend_digital_clock_1_hour_value, screen_friend_digital_clock_1_min_value, screen_friend_digital_clock_1_sec_value, screen_friend_digital_clock_1_meridiem);
	}
}
static lv_obj_t * g_kb_screen_friend;
static void kb_screen_friend_event_cb(lv_event_t *e)
{
	lv_event_code_t code = lv_event_get_code(e);
	lv_obj_t *kb = lv_event_get_target(e);
	if(code == LV_EVENT_READY || code == LV_EVENT_CANCEL){
		lv_obj_add_flag(kb, LV_OBJ_FLAG_HIDDEN);
	}
}
__attribute__((unused)) static void ta_screen_friend_event_cb(lv_event_t *e)
{

	lv_event_code_t code = lv_event_get_code(e);
	lv_obj_t *ta = lv_event_get_target(e);
	lv_obj_t *kb = lv_event_get_user_data(e);
	if (code == LV_EVENT_FOCUSED || code == LV_EVENT_CLICKED)
	{
		lv_keyboard_set_textarea(kb, ta);
		lv_obj_move_foreground(kb);
		lv_obj_clear_flag(kb, LV_OBJ_FLAG_HIDDEN);
	}
	if (code == LV_EVENT_CANCEL || code == LV_EVENT_DEFOCUSED)
	{
		lv_keyboard_set_textarea(kb, NULL);
		lv_obj_move_background(kb);
		lv_obj_add_flag(kb, LV_OBJ_FLAG_HIDDEN);
	}
}

void setup_scr_screen_friend(lv_ui *ui){

	//Write codes screen_friend
	ui->screen_friend = lv_obj_create(NULL);

	//Create keyboard on screen_friend
	g_kb_screen_friend = lv_keyboard_create(ui->screen_friend);
	lv_obj_add_event_cb(g_kb_screen_friend, kb_screen_friend_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(g_kb_screen_friend, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(g_kb_screen_friend, &lv_font_simsun_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_scrollbar_mode(ui->screen_friend, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_bg_color(ui->screen_friend, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_friend_top_cont_2
	ui->screen_friend_top_cont_2 = lv_obj_create(ui->screen_friend);
	lv_obj_set_pos(ui->screen_friend_top_cont_2, 0, 0);
	lv_obj_set_size(ui->screen_friend_top_cont_2, 800, 50);
	lv_obj_set_scrollbar_mode(ui->screen_friend_top_cont_2, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_top_cont_2. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_top_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_top_cont_2, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_top_cont_2, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_top_cont_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_top_cont_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_top_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_top_cont_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_top_cont_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_top_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_top_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_top_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_friend_top_cont_2, lv_color_make(0xe6, 0xe6, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_friend_top_cont_2, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_friend_top_cont_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_friend_top_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_friend_top_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_friend_top_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_friend_top_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	static bool screen_friend_digital_clock_1_timer_enabled = false;

	//Write codes screen_friend_digital_clock_1
	ui->screen_friend_digital_clock_1 = lv_dclock_create(ui->screen_friend_top_cont_2,"11:25:50 AM");
	lv_obj_set_style_text_align(ui->screen_friend_digital_clock_1, LV_TEXT_ALIGN_CENTER, 0);
	lv_obj_set_pos(ui->screen_friend_digital_clock_1, 650, 0);
	lv_obj_set_size(ui->screen_friend_digital_clock_1, 150, 50);

	//create timer
	if (!screen_friend_digital_clock_1_timer_enabled) {
		lv_timer_create(screen_friend_digital_clock_1_timer, 1000, NULL);
		screen_friend_digital_clock_1_timer_enabled = true;
	}
	//Set style for screen_friend_digital_clock_1. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_digital_clock_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_digital_clock_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_digital_clock_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_digital_clock_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_digital_clock_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_digital_clock_1, lv_color_make(0x3c, 0x3c, 0x3c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_friend_digital_clock_1, &lv_font_arial_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_friend_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_friend_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_friend_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_friend_digital_clock_1, 7, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_friend_digital_clock_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_friend_option_cont_3
	ui->screen_friend_option_cont_3 = lv_obj_create(ui->screen_friend);
	lv_obj_set_pos(ui->screen_friend_option_cont_3, 0, 430);
	lv_obj_set_size(ui->screen_friend_option_cont_3, 800, 50);
	lv_obj_set_scrollbar_mode(ui->screen_friend_option_cont_3, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_option_cont_3. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_option_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_option_cont_3, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_option_cont_3, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_option_cont_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_option_cont_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_option_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_option_cont_3, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_option_cont_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_option_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_option_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_option_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_friend_option_cont_3, lv_color_make(0xe6, 0xe6, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_friend_option_cont_3, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_friend_option_cont_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_friend_option_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_friend_option_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_friend_option_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_friend_option_cont_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_friend_imgbtn_1
	ui->screen_friend_imgbtn_1 = lv_imgbtn_create(ui->screen_friend_option_cont_3);
	lv_obj_set_pos(ui->screen_friend_imgbtn_1, 75, 0);
	lv_obj_set_size(ui->screen_friend_imgbtn_1, 50, 50);
	lv_obj_set_scrollbar_mode(ui->screen_friend_imgbtn_1, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_imgbtn_1. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_1, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_friend_imgbtn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_1, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Set style for screen_friend_imgbtn_1. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_1, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_1, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_PRESSED);

	//Set style for screen_friend_imgbtn_1. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_1, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_1, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_1, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_1, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_1, LV_IMGBTN_STATE_RELEASED, NULL, &_1_2_alpha_50x50, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_1, LV_IMGBTN_STATE_PRESSED, NULL, &_1_1_alpha_50x50, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_1, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_1_2_alpha_50x50, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_1, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_1_1_alpha_50x50, NULL);

	//Write codes screen_friend_imgbtn_2
	ui->screen_friend_imgbtn_2 = lv_imgbtn_create(ui->screen_friend_option_cont_3);
	lv_obj_set_pos(ui->screen_friend_imgbtn_2, 275, 0);
	lv_obj_set_size(ui->screen_friend_imgbtn_2, 50, 50);
	lv_obj_set_scrollbar_mode(ui->screen_friend_imgbtn_2, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_imgbtn_2. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_2, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_friend_imgbtn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_2, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Set style for screen_friend_imgbtn_2. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_2, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_2, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_PRESSED);

	//Set style for screen_friend_imgbtn_2. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_2, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_2, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_2, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_2, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_2, LV_IMGBTN_STATE_RELEASED, NULL, &_2_2_alpha_50x50, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_2, LV_IMGBTN_STATE_PRESSED, NULL, &_2_1_alpha_50x50, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_2, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_2_2_alpha_50x50, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_2, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_2_1_alpha_50x50, NULL);

	//Write codes screen_friend_imgbtn_3
	ui->screen_friend_imgbtn_3 = lv_imgbtn_create(ui->screen_friend_option_cont_3);
	lv_obj_set_pos(ui->screen_friend_imgbtn_3, 475, 0);
	lv_obj_set_size(ui->screen_friend_imgbtn_3, 50, 50);
	lv_obj_set_scrollbar_mode(ui->screen_friend_imgbtn_3, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_imgbtn_3. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_3, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_3, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_friend_imgbtn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_3, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Set style for screen_friend_imgbtn_3. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_3, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_3, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_3, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_PRESSED);

	//Set style for screen_friend_imgbtn_3. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_3, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_3, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_3, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_3, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_3, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_3, LV_IMGBTN_STATE_RELEASED, NULL, &_3_2_alpha_50x50, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_3, LV_IMGBTN_STATE_PRESSED, NULL, &_3_1_alpha_50x50, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_3, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_3_2_alpha_50x50, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_3, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_3_1_alpha_50x50, NULL);

	//Write codes screen_friend_imgbtn_4
	ui->screen_friend_imgbtn_4 = lv_imgbtn_create(ui->screen_friend_option_cont_3);
	lv_obj_set_pos(ui->screen_friend_imgbtn_4, 675, 0);
	lv_obj_set_size(ui->screen_friend_imgbtn_4, 50, 50);
	lv_obj_set_scrollbar_mode(ui->screen_friend_imgbtn_4, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_imgbtn_4. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_4, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_4, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_friend_imgbtn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_4, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Set style for screen_friend_imgbtn_4. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_4, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_4, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_4, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_PRESSED);

	//Set style for screen_friend_imgbtn_4. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_4, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_4, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_4, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_4, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_4, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_4, LV_IMGBTN_STATE_RELEASED, NULL, &_23_1_alpha_50x50, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_4, LV_IMGBTN_STATE_PRESSED, NULL, &_24_2_alpha_50x50, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_4, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_23_1_alpha_50x50, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_4, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_24_2_alpha_50x50, NULL);

	//Write codes screen_friend_friend_cont_2
	ui->screen_friend_friend_cont_2 = lv_obj_create(ui->screen_friend);
	lv_obj_set_pos(ui->screen_friend_friend_cont_2, 0, 50);
	lv_obj_set_size(ui->screen_friend_friend_cont_2, 800, 380);
	lv_obj_set_scrollbar_mode(ui->screen_friend_friend_cont_2, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_friend_cont_2. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_friend_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_friend_cont_2, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_friend_cont_2, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_friend_cont_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_friend_cont_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_friend_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_friend_cont_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_friend_cont_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_friend_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_friend_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_friend_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_friend_friend_cont_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_friend_friend_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_friend_friend_cont_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_friend_friend_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_friend_friend_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_friend_friend_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_friend_friend_cont_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_friend_friend_infor_cont_1
	ui->screen_friend_friend_infor_cont_1 = lv_obj_create(ui->screen_friend_friend_cont_2);
	lv_obj_set_pos(ui->screen_friend_friend_infor_cont_1, 205, 0);
	lv_obj_set_size(ui->screen_friend_friend_infor_cont_1, 590, 380);
	lv_obj_set_scrollbar_mode(ui->screen_friend_friend_infor_cont_1, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_friend_infor_cont_1. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_friend_infor_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_friend_infor_cont_1, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_friend_infor_cont_1, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_friend_infor_cont_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_friend_infor_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_friend_infor_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_friend_infor_cont_1, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_friend_infor_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_friend_infor_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_friend_infor_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_friend_infor_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_friend_friend_infor_cont_1, lv_color_make(0xe6, 0xe6, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_friend_friend_infor_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_friend_friend_infor_cont_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_friend_friend_infor_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_friend_friend_infor_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_friend_friend_infor_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_friend_friend_infor_cont_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_friend_img_6
	ui->screen_friend_img_6 = lv_img_create(ui->screen_friend_friend_infor_cont_1);
	lv_obj_set_pos(ui->screen_friend_img_6, 260, 50);
	lv_obj_set_size(ui->screen_friend_img_6, 80, 80);
	lv_obj_set_scrollbar_mode(ui->screen_friend_img_6, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_img_6. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_img_recolor(ui->screen_friend_img_6, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_img_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->screen_friend_img_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_add_flag(ui->screen_friend_img_6, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->screen_friend_img_6,&_4_2_alpha_80x80);
	lv_img_set_pivot(ui->screen_friend_img_6, 50,50);
	lv_img_set_angle(ui->screen_friend_img_6, 0);

	//Write codes screen_friend_label_18
	ui->screen_friend_label_18 = lv_label_create(ui->screen_friend_friend_infor_cont_1);
	lv_obj_set_pos(ui->screen_friend_label_18, 200, 135);
	lv_obj_set_size(ui->screen_friend_label_18, 200, 24);
	lv_obj_set_scrollbar_mode(ui->screen_friend_label_18, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_friend_label_18, "the best boy");
	lv_label_set_long_mode(ui->screen_friend_label_18, LV_LABEL_LONG_WRAP);

	//Set style for screen_friend_label_18. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_label_18, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_label_18, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_label_18, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_label_18, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_label_18, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_label_18, lv_color_make(0x3c, 0x3c, 0x3c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_friend_label_18, &lv_font_arial_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_friend_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_friend_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_friend_label_18, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_friend_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_friend_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_friend_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_friend_label_18, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_friend_label_20
	ui->screen_friend_label_20 = lv_label_create(ui->screen_friend_friend_infor_cont_1);
	lv_obj_set_pos(ui->screen_friend_label_20, 200, 175);
	lv_obj_set_size(ui->screen_friend_label_20, 200, 24);
	lv_obj_set_scrollbar_mode(ui->screen_friend_label_20, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_friend_label_20, "id:1355692441");
	lv_label_set_long_mode(ui->screen_friend_label_20, LV_LABEL_LONG_WRAP);

	//Set style for screen_friend_label_20. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_label_20, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_label_20, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_label_20, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_label_20, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_label_20, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_label_20, lv_color_make(0x3c, 0x3c, 0x3c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_friend_label_20, &lv_font_arial_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_friend_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_friend_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_friend_label_20, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_friend_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_friend_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_friend_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_friend_label_20, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_friend_spangroup_2
	ui->screen_friend_spangroup_2 = lv_spangroup_create(ui->screen_friend_friend_infor_cont_1);
	lv_obj_set_pos(ui->screen_friend_spangroup_2, 20, 5);
	lv_obj_set_size(ui->screen_friend_spangroup_2, 180, 68);
	lv_obj_set_scrollbar_mode(ui->screen_friend_spangroup_2, LV_SCROLLBAR_MODE_OFF);
	lv_spangroup_set_align(ui->screen_friend_spangroup_2, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->screen_friend_spangroup_2, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->screen_friend_spangroup_2, LV_SPAN_MODE_BREAK);

	//Set style for screen_friend_spangroup_2. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_spangroup_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_spangroup_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_spangroup_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_spangroup_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_spangroup_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_spangroup_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_spangroup_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_spangroup_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_spangroup_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_spangroup_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_spangroup_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_friend_spangroup_2, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_friend_spangroup_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_friend_spangroup_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_friend_spangroup_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_friend_spangroup_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_friend_spangroup_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_friend_spangroup_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//create spans
	lv_span_t *screen_friend_spangroup_2_span;

	//create a new span
	screen_friend_spangroup_2_span = lv_spangroup_new_span(ui->screen_friend_spangroup_2);
	lv_span_set_text(screen_friend_spangroup_2_span, "flag:\nthe world is best world!");
	lv_style_set_text_color(&screen_friend_spangroup_2_span->style, lv_color_make(0x00, 0x00, 0x00));
	lv_style_set_text_decor(&screen_friend_spangroup_2_span->style, LV_TEXT_DECOR_UNDERLINE);
	lv_style_set_text_font(&screen_friend_spangroup_2_span->style, &lv_font_arial_18);
	lv_spangroup_refr_mode(ui->screen_friend_spangroup_2);

	//Write codes screen_friend_imgbtn_11
	ui->screen_friend_imgbtn_11 = lv_imgbtn_create(ui->screen_friend_friend_infor_cont_1);
	lv_obj_set_pos(ui->screen_friend_imgbtn_11, 540, 10);
	lv_obj_set_size(ui->screen_friend_imgbtn_11, 40, 30);
	lv_obj_set_scrollbar_mode(ui->screen_friend_imgbtn_11, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_imgbtn_11. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_11, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_11, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_friend_imgbtn_11, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_11, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Set style for screen_friend_imgbtn_11. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_11, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_11, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_11, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_11, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_11, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_11, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_11, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_11, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_11, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_11, 255, LV_PART_MAIN|LV_STATE_PRESSED);

	//Set style for screen_friend_imgbtn_11. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_11, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_11, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_11, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_11, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_11, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_11, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_11, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_11, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_11, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_11, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_11, LV_IMGBTN_STATE_RELEASED, NULL, &_15_alpha_40x30, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_11, LV_IMGBTN_STATE_PRESSED, NULL, &_15_1_alpha_40x30, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_11, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_15_alpha_40x30, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_11, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_15_1_alpha_40x30, NULL);
	lv_obj_add_flag(ui->screen_friend_imgbtn_11, LV_OBJ_FLAG_CHECKABLE);

	//Write codes screen_friend_btn_2
	ui->screen_friend_btn_2 = lv_btn_create(ui->screen_friend_friend_infor_cont_1);
	lv_obj_set_pos(ui->screen_friend_btn_2, 320, 290);
	lv_obj_set_size(ui->screen_friend_btn_2, 150, 50);
	lv_obj_set_scrollbar_mode(ui->screen_friend_btn_2, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_btn_2. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_btn_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_btn_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_btn_2, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_friend_btn_2, lv_color_make(0xe6, 0xe6, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_friend_btn_2, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_friend_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_btn_2, lv_color_make(0x3c, 0x3c, 0x3c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_friend_btn_2, &lv_font_arial_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_friend_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_friend_btn_2_label = lv_label_create(ui->screen_friend_btn_2);
	lv_label_set_text(ui->screen_friend_btn_2_label, "message");
	lv_obj_set_style_pad_all(ui->screen_friend_btn_2, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_friend_btn_2_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_friend_btn_3
	ui->screen_friend_btn_3 = lv_btn_create(ui->screen_friend_friend_infor_cont_1);
	lv_obj_set_pos(ui->screen_friend_btn_3, 145, 290);
	lv_obj_set_size(ui->screen_friend_btn_3, 150, 50);
	lv_obj_set_scrollbar_mode(ui->screen_friend_btn_3, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_btn_3. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_btn_3, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_btn_3, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_btn_3, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_btn_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_btn_3, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_friend_btn_3, lv_color_make(0xe6, 0xe6, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_friend_btn_3, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_friend_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_btn_3, lv_color_make(0x3c, 0x3c, 0x3c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_friend_btn_3, &lv_font_arial_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_friend_btn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_friend_btn_3_label = lv_label_create(ui->screen_friend_btn_3);
	lv_label_set_text(ui->screen_friend_btn_3_label, "telepthone");
	lv_obj_set_style_pad_all(ui->screen_friend_btn_3, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_friend_btn_3_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_friend_label_21
	ui->screen_friend_label_21 = lv_label_create(ui->screen_friend_friend_infor_cont_1);
	lv_obj_set_pos(ui->screen_friend_label_21, 200, 215);
	lv_obj_set_size(ui->screen_friend_label_21, 200, 24);
	lv_obj_set_scrollbar_mode(ui->screen_friend_label_21, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_friend_label_21, "remark:LT");
	lv_label_set_long_mode(ui->screen_friend_label_21, LV_LABEL_LONG_WRAP);

	//Set style for screen_friend_label_21. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_label_21, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_label_21, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_label_21, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_label_21, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_label_21, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_label_21, lv_color_make(0x3c, 0x3c, 0x3c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_friend_label_21, &lv_font_arial_24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_friend_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_friend_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_friend_label_21, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_friend_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_friend_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_friend_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_friend_label_21, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_friend_imgbtn_12
	ui->screen_friend_imgbtn_12 = lv_imgbtn_create(ui->screen_friend_friend_infor_cont_1);
	lv_obj_set_pos(ui->screen_friend_imgbtn_12, 480, 10);
	lv_obj_set_size(ui->screen_friend_imgbtn_12, 40, 30);
	lv_obj_set_scrollbar_mode(ui->screen_friend_imgbtn_12, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_imgbtn_12. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_12, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_12, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_friend_imgbtn_12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_12, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Set style for screen_friend_imgbtn_12. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_12, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_12, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_12, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_12, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_12, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_12, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_12, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_12, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_12, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_12, 255, LV_PART_MAIN|LV_STATE_PRESSED);

	//Set style for screen_friend_imgbtn_12. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_12, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_12, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_12, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_12, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_12, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_12, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_12, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_12, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_12, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_12, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_12, LV_IMGBTN_STATE_RELEASED, NULL, &_17_alpha_40x30, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_12, LV_IMGBTN_STATE_PRESSED, NULL, &_17_1_alpha_40x30, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_12, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_17_alpha_40x30, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_12, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_17_1_alpha_40x30, NULL);
	lv_obj_add_flag(ui->screen_friend_imgbtn_12, LV_OBJ_FLAG_CHECKABLE);

	//Write codes screen_friend_delete_friend_cont_5
	ui->screen_friend_delete_friend_cont_5 = lv_obj_create(ui->screen_friend_friend_infor_cont_1);
	lv_obj_set_pos(ui->screen_friend_delete_friend_cont_5, 270, 100);
	lv_obj_set_size(ui->screen_friend_delete_friend_cont_5, 300, 150);
	lv_obj_set_scrollbar_mode(ui->screen_friend_delete_friend_cont_5, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_delete_friend_cont_5. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_delete_friend_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_delete_friend_cont_5, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_delete_friend_cont_5, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_delete_friend_cont_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_delete_friend_cont_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_delete_friend_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_delete_friend_cont_5, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_delete_friend_cont_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_delete_friend_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_delete_friend_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_delete_friend_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_friend_delete_friend_cont_5, lv_color_make(0xe6, 0xe6, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_friend_delete_friend_cont_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_friend_delete_friend_cont_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_friend_delete_friend_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_friend_delete_friend_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_friend_delete_friend_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_friend_delete_friend_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Hidden for widget screen_friend_delete_friend_cont_5
	lv_obj_add_flag(ui->screen_friend_delete_friend_cont_5, LV_OBJ_FLAG_HIDDEN);


	//Write codes screen_friend_label_22
	ui->screen_friend_label_22 = lv_label_create(ui->screen_friend_delete_friend_cont_5);
	lv_obj_set_pos(ui->screen_friend_label_22, 30, 25);
	lv_obj_set_size(ui->screen_friend_label_22, 250, 60);
	lv_obj_set_scrollbar_mode(ui->screen_friend_label_22, LV_SCROLLBAR_MODE_OFF);
	lv_label_set_text(ui->screen_friend_label_22, "Are you sure you want to delete the friend?");
	lv_label_set_long_mode(ui->screen_friend_label_22, LV_LABEL_LONG_WRAP);

	//Set style for screen_friend_label_22. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_label_22, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_label_22, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_label_22, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_label_22, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_label_22, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_label_22, lv_color_make(0x3c, 0x3c, 0x3c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_friend_label_22, &lv_font_arial_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_friend_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->screen_friend_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_friend_label_22, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_friend_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_friend_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_friend_label_22, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_friend_label_22, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_friend_btn_4
	ui->screen_friend_btn_4 = lv_btn_create(ui->screen_friend_delete_friend_cont_5);
	lv_obj_set_pos(ui->screen_friend_btn_4, 50, 95);
	lv_obj_set_size(ui->screen_friend_btn_4, 80, 40);
	lv_obj_set_scrollbar_mode(ui->screen_friend_btn_4, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_btn_4. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_btn_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_btn_4, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_btn_4, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_btn_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_btn_4, lv_color_make(0xe6, 0xe6, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_friend_btn_4, lv_color_make(0xe6, 0xe6, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_friend_btn_4, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_friend_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_btn_4, lv_color_make(0x3c, 0x3c, 0x3c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_friend_btn_4, &lv_font_arial_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_friend_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_friend_btn_4_label = lv_label_create(ui->screen_friend_btn_4);
	lv_label_set_text(ui->screen_friend_btn_4_label, "YES");
	lv_obj_set_style_pad_all(ui->screen_friend_btn_4, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_friend_btn_4_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_friend_btn_5
	ui->screen_friend_btn_5 = lv_btn_create(ui->screen_friend_delete_friend_cont_5);
	lv_obj_set_pos(ui->screen_friend_btn_5, 160, 95);
	lv_obj_set_size(ui->screen_friend_btn_5, 80, 40);
	lv_obj_set_scrollbar_mode(ui->screen_friend_btn_5, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_btn_5. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_btn_5, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_btn_5, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_btn_5, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_btn_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_btn_5, lv_color_make(0xe6, 0xe6, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_friend_btn_5, lv_color_make(0xe6, 0xe6, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_friend_btn_5, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_friend_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_btn_5, lv_color_make(0x3c, 0x3c, 0x3c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_friend_btn_5, &lv_font_arial_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_friend_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_friend_btn_5_label = lv_label_create(ui->screen_friend_btn_5);
	lv_label_set_text(ui->screen_friend_btn_5_label, "NO");
	lv_obj_set_style_pad_all(ui->screen_friend_btn_5, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_friend_btn_5_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_friend_edit_remark_cont_5
	ui->screen_friend_edit_remark_cont_5 = lv_obj_create(ui->screen_friend_friend_infor_cont_1);
	lv_obj_set_pos(ui->screen_friend_edit_remark_cont_5, 300, 132);
	lv_obj_set_size(ui->screen_friend_edit_remark_cont_5, 300, 150);
	lv_obj_set_scrollbar_mode(ui->screen_friend_edit_remark_cont_5, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_edit_remark_cont_5. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_edit_remark_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_edit_remark_cont_5, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_edit_remark_cont_5, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_edit_remark_cont_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_edit_remark_cont_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_edit_remark_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_edit_remark_cont_5, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_edit_remark_cont_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_edit_remark_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_edit_remark_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_edit_remark_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_friend_edit_remark_cont_5, lv_color_make(0xe6, 0xe6, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_friend_edit_remark_cont_5, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_friend_edit_remark_cont_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_friend_edit_remark_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_friend_edit_remark_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_friend_edit_remark_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_friend_edit_remark_cont_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Hidden for widget screen_friend_edit_remark_cont_5
	lv_obj_add_flag(ui->screen_friend_edit_remark_cont_5, LV_OBJ_FLAG_HIDDEN);


	//Write codes screen_friend_btn_7
	ui->screen_friend_btn_7 = lv_btn_create(ui->screen_friend_edit_remark_cont_5);
	lv_obj_set_pos(ui->screen_friend_btn_7, 50, 105);
	lv_obj_set_size(ui->screen_friend_btn_7, 80, 35);
	lv_obj_set_scrollbar_mode(ui->screen_friend_btn_7, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_btn_7. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_btn_7, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_btn_7, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_btn_7, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_btn_7, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_btn_7, lv_color_make(0xe6, 0xe6, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_btn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_btn_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_friend_btn_7, lv_color_make(0xe6, 0xe6, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_friend_btn_7, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_friend_btn_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_btn_7, lv_color_make(0x3c, 0x3c, 0x3c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_friend_btn_7, &lv_font_arial_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_friend_btn_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_friend_btn_7_label = lv_label_create(ui->screen_friend_btn_7);
	lv_label_set_text(ui->screen_friend_btn_7_label, "YES");
	lv_obj_set_style_pad_all(ui->screen_friend_btn_7, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_friend_btn_7_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_friend_btn_6
	ui->screen_friend_btn_6 = lv_btn_create(ui->screen_friend_edit_remark_cont_5);
	lv_obj_set_pos(ui->screen_friend_btn_6, 160, 105);
	lv_obj_set_size(ui->screen_friend_btn_6, 80, 35);
	lv_obj_set_scrollbar_mode(ui->screen_friend_btn_6, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_btn_6. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_btn_6, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_btn_6, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_btn_6, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_btn_6, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_btn_6, lv_color_make(0xe6, 0xe6, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_btn_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_friend_btn_6, lv_color_make(0xe6, 0xe6, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_friend_btn_6, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_friend_btn_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_btn_6, lv_color_make(0x3c, 0x3c, 0x3c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_friend_btn_6, &lv_font_arial_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_friend_btn_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	ui->screen_friend_btn_6_label = lv_label_create(ui->screen_friend_btn_6);
	lv_label_set_text(ui->screen_friend_btn_6_label, "NO");
	lv_obj_set_style_pad_all(ui->screen_friend_btn_6, 0, LV_STATE_DEFAULT);
	lv_obj_align(ui->screen_friend_btn_6_label, LV_ALIGN_CENTER, 0, 0);

	//Write codes screen_friend_ta_8
	ui->screen_friend_ta_8 = lv_textarea_create(ui->screen_friend_edit_remark_cont_5);
	lv_obj_set_pos(ui->screen_friend_ta_8, 30, 25);
	lv_obj_set_size(ui->screen_friend_ta_8, 250, 40);
	lv_obj_set_scrollbar_mode(ui->screen_friend_ta_8, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_ta_8. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_ta_8, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_ta_8, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_ta_8, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_ta_8, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_ta_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_ta_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_ta_8, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_ta_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_ta_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_ta_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_ta_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_friend_ta_8, lv_color_make(0xe6, 0xe6, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_friend_ta_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_friend_ta_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_ta_8, lv_color_make(0x3c, 0x3c, 0x3c), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_friend_ta_8, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_friend_ta_8, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_friend_ta_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_friend_ta_8, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_friend_ta_8, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_friend_ta_8, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_friend_ta_8, 4, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Set style for screen_friend_ta_8. Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_ta_8, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_ta_8, lv_color_make(0x21, 0x95, 0xf6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_ta_8, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_textarea_set_text(ui->screen_friend_ta_8,"Hello World");

	//use keyboard on screen_friend_ta_8
	lv_obj_add_event_cb(ui->screen_friend_ta_8, ta_screen_friend_event_cb, LV_EVENT_ALL, g_kb_screen_friend);

	//Write codes screen_friend_spangroup_3
	ui->screen_friend_spangroup_3 = lv_spangroup_create(ui->screen_friend_edit_remark_cont_5);
	lv_obj_set_pos(ui->screen_friend_spangroup_3, 40, 75);
	lv_obj_set_size(ui->screen_friend_spangroup_3, 250, 24);
	lv_obj_set_scrollbar_mode(ui->screen_friend_spangroup_3, LV_SCROLLBAR_MODE_OFF);
	lv_spangroup_set_align(ui->screen_friend_spangroup_3, LV_TEXT_ALIGN_LEFT);
	lv_spangroup_set_overflow(ui->screen_friend_spangroup_3, LV_SPAN_OVERFLOW_CLIP);
	lv_spangroup_set_mode(ui->screen_friend_spangroup_3, LV_SPAN_MODE_BREAK);

	//Set style for screen_friend_spangroup_3. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_spangroup_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_spangroup_3, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_spangroup_3, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_spangroup_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_spangroup_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_spangroup_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_spangroup_3, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_spangroup_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_spangroup_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_spangroup_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_spangroup_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_friend_spangroup_3, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_friend_spangroup_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_friend_spangroup_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_friend_spangroup_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_friend_spangroup_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_friend_spangroup_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_friend_spangroup_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//create spans
	lv_span_t *screen_friend_spangroup_3_span;

	//create a new span
	screen_friend_spangroup_3_span = lv_spangroup_new_span(ui->screen_friend_spangroup_3);
	lv_span_set_text(screen_friend_spangroup_3_span, "please input the friend's remark!");
	lv_style_set_text_color(&screen_friend_spangroup_3_span->style, lv_color_make(0x3c, 0x3c, 0x3c));
	lv_style_set_text_decor(&screen_friend_spangroup_3_span->style, LV_TEXT_DECOR_UNDERLINE);
	lv_style_set_text_font(&screen_friend_spangroup_3_span->style, &lv_font_arial_16);
	lv_spangroup_refr_mode(ui->screen_friend_spangroup_3);

	//Write codes screen_friend_friend_list
	ui->screen_friend_friend_list = lv_list_create(ui->screen_friend_friend_cont_2);
	lv_obj_set_pos(ui->screen_friend_friend_list, 0, 51);
	lv_obj_set_size(ui->screen_friend_friend_list, 200, 330);
	lv_obj_set_scrollbar_mode(ui->screen_friend_friend_list, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_friend_list. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_friend_list, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_friend_list, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_friend_list, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_friend_list, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_friend_list, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_friend_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_friend_list, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_friend_list, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_friend_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_friend_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_friend_list, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_friend_friend_list, lv_color_make(0xe1, 0xe6, 0xee), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_friend_friend_list, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_friend_friend_list, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_friend_friend_list, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_friend_friend_list, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_friend_friend_list, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_friend_friend_list, 5, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Set style for screen_friend_friend_list. Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_friend_list, 3, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_friend_list, lv_color_make(0xff, 0xff, 0xff), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_friend_list, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Set style state: LV_STATE_DEFAULT for style_screen_friend_friend_list_extra_btns_main_default
	static lv_style_t style_screen_friend_friend_list_extra_btns_main_default;
	ui_init_style(&style_screen_friend_friend_list_extra_btns_main_default);
	lv_style_set_radius(&style_screen_friend_friend_list_extra_btns_main_default, 3);
	lv_style_set_bg_color(&style_screen_friend_friend_list_extra_btns_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_friend_friend_list_extra_btns_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_friend_friend_list_extra_btns_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_friend_friend_list_extra_btns_main_default, 255);
	lv_style_set_text_color(&style_screen_friend_friend_list_extra_btns_main_default, lv_color_make(0x3c, 0x3c, 0x3c));
	lv_style_set_text_font(&style_screen_friend_friend_list_extra_btns_main_default, &lv_font_montserratMedium_24);

	//Set style state: LV_STATE_DEFAULT for style_screen_friend_friend_list_extra_texts_main_default
	static lv_style_t style_screen_friend_friend_list_extra_texts_main_default;
	ui_init_style(&style_screen_friend_friend_list_extra_texts_main_default);
	lv_style_set_radius(&style_screen_friend_friend_list_extra_texts_main_default, 3);
	lv_style_set_bg_color(&style_screen_friend_friend_list_extra_texts_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_color(&style_screen_friend_friend_list_extra_texts_main_default, lv_color_make(0xff, 0xff, 0xff));
	lv_style_set_bg_grad_dir(&style_screen_friend_friend_list_extra_texts_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_bg_opa(&style_screen_friend_friend_list_extra_texts_main_default, 255);
	lv_style_set_text_color(&style_screen_friend_friend_list_extra_texts_main_default, lv_color_make(0x0D, 0x30, 0x55));
	lv_style_set_text_font(&style_screen_friend_friend_list_extra_texts_main_default, &lv_font_montserratMedium_24);

	lv_obj_t *screen_friend_friend_list_item;
	screen_friend_friend_list_item = lv_list_add_btn(ui->screen_friend_friend_list, &_4_2_alpha_20x20, "save");
	ui->screen_friend_friend_list_item0 = screen_friend_friend_list_item;
	lv_obj_add_style(screen_friend_friend_list_item, &style_screen_friend_friend_list_extra_btns_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);


	//Write codes screen_friend_search_cont
	ui->screen_friend_search_cont = lv_obj_create(ui->screen_friend_friend_cont_2);
	lv_obj_set_pos(ui->screen_friend_search_cont, 0, 0);
	lv_obj_set_size(ui->screen_friend_search_cont, 200, 51);
	lv_obj_set_scrollbar_mode(ui->screen_friend_search_cont, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_search_cont. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_search_cont, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_search_cont, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_search_cont, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_search_cont, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_search_cont, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_search_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_search_cont, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_search_cont, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_search_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_search_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_search_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_friend_search_cont, lv_color_make(0xe6, 0xe6, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_friend_search_cont, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_friend_search_cont, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_friend_search_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_friend_search_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_friend_search_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_friend_search_cont, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes screen_friend_imgbtn_14
	ui->screen_friend_imgbtn_14 = lv_imgbtn_create(ui->screen_friend_search_cont);
	lv_obj_set_pos(ui->screen_friend_imgbtn_14, 160, 10);
	lv_obj_set_size(ui->screen_friend_imgbtn_14, 30, 30);
	lv_obj_set_scrollbar_mode(ui->screen_friend_imgbtn_14, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_imgbtn_14. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_14, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_14, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_friend_imgbtn_14, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_14, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Set style for screen_friend_imgbtn_14. Part: LV_PART_MAIN, State: LV_STATE_PRESSED
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_14, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_14, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_14, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_14, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_14, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_14, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_14, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_14, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_14, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_14, 255, LV_PART_MAIN|LV_STATE_PRESSED);

	//Set style for screen_friend_imgbtn_14. Part: LV_PART_MAIN, State: LV_STATE_CHECKED
	lv_obj_set_style_shadow_width(ui->screen_friend_imgbtn_14, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_color(ui->screen_friend_imgbtn_14, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_opa(ui->screen_friend_imgbtn_14, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_spread(ui->screen_friend_imgbtn_14, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_imgbtn_14, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_imgbtn_14, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_text_color(ui->screen_friend_imgbtn_14, lv_color_make(0xFF, 0x33, 0xFF), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_recolor(ui->screen_friend_imgbtn_14, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_recolor_opa(ui->screen_friend_imgbtn_14, 0, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_obj_set_style_img_opa(ui->screen_friend_imgbtn_14, 255, LV_PART_MAIN|LV_STATE_CHECKED);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_14, LV_IMGBTN_STATE_RELEASED, NULL, &_22_2_alpha_30x30, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_14, LV_IMGBTN_STATE_PRESSED, NULL, &_22_1_alpha_30x30, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_14, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &_22_2_alpha_30x30, NULL);
	lv_imgbtn_set_src(ui->screen_friend_imgbtn_14, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &_22_1_alpha_30x30, NULL);
	lv_obj_add_flag(ui->screen_friend_imgbtn_14, LV_OBJ_FLAG_CHECKABLE);

	//Write codes screen_friend_ta_9
	ui->screen_friend_ta_9 = lv_textarea_create(ui->screen_friend_search_cont);
	lv_obj_set_pos(ui->screen_friend_ta_9, 0, 5);
	lv_obj_set_size(ui->screen_friend_ta_9, 150, 40);
	lv_obj_set_scrollbar_mode(ui->screen_friend_ta_9, LV_SCROLLBAR_MODE_OFF);

	//Set style for screen_friend_ta_9. Part: LV_PART_MAIN, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_ta_9, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_ta_9, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_color(ui->screen_friend_ta_9, lv_color_make(0xff, 0xff, 0xff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->screen_friend_ta_9, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_ta_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->screen_friend_ta_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->screen_friend_ta_9, lv_color_make(0x21, 0x95, 0xf6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->screen_friend_ta_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->screen_friend_ta_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->screen_friend_ta_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->screen_friend_ta_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->screen_friend_ta_9, lv_color_make(0xe6, 0xe6, 0xe6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->screen_friend_ta_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->screen_friend_ta_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->screen_friend_ta_9, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->screen_friend_ta_9, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->screen_friend_ta_9, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->screen_friend_ta_9, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->screen_friend_ta_9, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->screen_friend_ta_9, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->screen_friend_ta_9, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->screen_friend_ta_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Set style for screen_friend_ta_9. Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT
	lv_obj_set_style_radius(ui->screen_friend_ta_9, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->screen_friend_ta_9, lv_color_make(0x21, 0x95, 0xf6), LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->screen_friend_ta_9, 255, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_textarea_set_text(ui->screen_friend_ta_9,"press");

	//use keyboard on screen_friend_ta_9
	lv_obj_add_event_cb(ui->screen_friend_ta_9, ta_screen_friend_event_cb, LV_EVENT_ALL, g_kb_screen_friend);

	//Init events for screen
	events_init_screen_friend(ui);
}