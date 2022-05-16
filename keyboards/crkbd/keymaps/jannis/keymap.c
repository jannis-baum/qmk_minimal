/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include <stdio.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_LBRC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LOPT,  KC_SPC, KC_LCMD,    KC_RCMD,  KC_SPC, KC_RCMD
                                      //`--------------------------'  `--------------------------'
  )
};

#if defined(OLED_ENABLE) && defined(RAW_ENABLE)

#include <stdlib.h>
#include "raw_hid.h"
#include "transactions.h"
#include "font_drawing.h"

#define min(a, b) ((a) < (b) ? (a) : (b))

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) return OLED_ROTATION_180;
    return rotation;
}

void user_sync_oled_handler(uint8_t in_buflen, const void* in_data, uint8_t out_buflen, void* out_data) {
    oled_draw((uint8_t*)in_data);
}

void keyboard_post_init_user(void) {
    transaction_register_rpc(USER_SYNC_OLED, user_sync_oled_handler);
}

uint8_t *oled_sync_todo = NULL;
void raw_hid_receive(uint8_t *data, uint8_t length) {
    if (*data) {
        if (oled_sync_todo) free(oled_sync_todo);
        oled_sync_todo = malloc((length - 1) * sizeof(uint8_t*));
        for (uint8_t i = 1; i < length; i++) {
            *(oled_sync_todo+i-1) = *(data+i);
        }
    }
    else oled_draw(data+1);
    raw_hid_send(data, RAW_EPSIZE);
}

void housekeeping_task_user(void) {
    if (!oled_sync_todo || !is_keyboard_master()) return;
    static uint32_t last_sync = 0;
    if (timer_elapsed32(last_sync) < 500) return;

    if(transaction_rpc_send(USER_SYNC_OLED, RAW_EPSIZE-1, oled_sync_todo)) {
        last_sync = timer_read32();
        free(oled_sync_todo);
        oled_sync_todo = NULL;
    }
}

#endif
