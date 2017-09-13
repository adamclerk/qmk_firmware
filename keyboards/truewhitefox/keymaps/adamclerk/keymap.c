/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

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
#include "truewhitefox.h"
#undef LEADER_TIMEOUT
#define LEADER_TIMEOUT 2000

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
    1u = 8 spaces
    1.25 = 10 spaces
    1.5u = 12 spaces
    1.75 = 14 spaces
    2u = 16 spaces

    height = 3 \nl

    */
    /* Layer 0: Default Layer
     *
     * ,-----------------------------------------------------------------------------------------------------------------------------------------------.
     * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
     * |    E   |    1   |    2   |    3   |    4   |    5   |    6   |    7   |    8   |    9   |    0   |    -   |    =   |    \   |    `   |    S   |
     * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
     * |-----------------------------------------------------------------------------------------------------------------------------------------------|
     * |            |        |        |        |        |        |        |        |        |        |        |        |        |             |        |
     * |     Tab    |    Q   |    W   |    E   |    R   |  T     |    Y   |    U   |    I   |    O   |    P   |    [   |    ]   |    Bak      |   Dl   |
     * |            |        |        |        |        |        |        |        |        |        |        |        |        |             |        |
     * |-----------------------------------------------------------------------------------------------------------------------------------------------|
     * |              |        |        |        |        |        |        |        |        |        |        |        |                    |        |
     * |      Cap     |    A   |    S   |    D   |    F   |    G   |    H   |    J   |    K   |    L   |    ;   |    '   |         Enter      |   PU   |
     * |              |        |        |        |        |        |        |        |        |        |        |        |                    |        |
     * |-----------------------------------------------------------------------------------------------------------------------------------------------|
     * |                  |        |        |        |        |        |        |        |        |        |        |                |        |        |
     * |       Shi        |    Z   |    X   |    C   |    V   |    B   |    N   |    M   |    ,   |    .   |    /   |       Shi      |   Up   |   PD   |
     * |                  |        |        |        |        |        |        |        |        |        |        |                |        |        |
     * |-----------------------------------------------------------------------------------------------------------------------------------------------|
     * |          |          |          |                                                   |          |          |      |         |         |         |
     * |   Ctrl   |    Gui   |    Alt   |                        Space                      |    Alt   |   Ctrl   |      |    Lf   |    Dn   |    Rt   |
     * |          |          |          |                                                   |          |          |      |         |         |         |
     * `-----------------------------------------------------------------------------------------------------------------------------------------------'
     */
    [0] = KEYMAP( \
        /* -----------------------------------------------------------------------------------------------------------------------------------------------.
        * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |*/
           KC_GESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_MINS,  KC_EQL, KC_BSLS,  KC_GRV, KC_LEAD,\
        /*|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
        * |-----------------------------------------------------------------------------------------------------------------------------------------------|
        * |            |        |        |        |        |        |        |        |        |        |        |        |        |             |        |*/
              KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_LBRC,  KC_RBRC,   KC_BSPC,    KC_DEL,\
        /*|            |        |        |        |        |        |        |        |        |        |        |        |        |             |        |
        * |-----------------------------------------------------------------------------------------------------------------------------------------------|
        * |              |        |        |        |        |        |        |        |        |        |        |        |                    |        |*/
               KC_FN0,      KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,  KC_SCLN, KC_QUOT,        KC_ENT,       KC_PGUP,\
        /*|              |        |        |        |        |        |        |        |        |        |        |        |                    |        |
        * |-----------------------------------------------------------------------------------------------------------------------------------------------|
        * |                  |        |        |        |        |        |        |        |        |        |        |                |        |        |*/
                KC_LSFT,        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,   KC_COMM, KC_DOT, KC_SLSH,      KC_RSFT,     KC_UP,  KC_PGDN,\
        /*|                  |        |        |        |        |        |        |        |        |        |        |                |        |        |
        * |-----------------------------------------------------------------------------------------------------------------------------------------------|
        * |          |          |          |                                                       |          |          |     |        |        |        |*/
            KC_LCTL,   KC_LALT,   KC_LGUI,                          KC_SPC,                         KC_LGUI,   KC_RALT,         KC_LEFT, KC_DOWN, KC_RGHT \
        /*|          |          |          |                                                       |          |          |     |        |        |        |
        * `-----------------------------------------------------------------------------------------------------------------------------------------------'*/
    ),
    [1] = KEYMAP( \
        /* -----------------------------------------------------------------------------------------------------------------------------------------------.
        * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |*/
           KC_TRNS,   KC_F1,  KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_TRNS, KC_TRNS, KC_TRNS,\
        /*|        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
        * |-----------------------------------------------------------------------------------------------------------------------------------------------|
        * |            |        |        |        |        |        |        |        |        |        |        |        |        |             |        |*/
             KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  BL_OFF,  BL_DEC,  BL_INC,  BL_ON,     KC_DEL ,   KC_INS ,\
        /*|            |        |        |        |        |        |        |        |        |        |        |        |        |             |        |
        * |-----------------------------------------------------------------------------------------------------------------------------------------------|
        * |              |        |        |        |        |        |        |        |        |        |        |        |                    |        |*/
              KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,       KC_VOLU,\
        /*|              |        |        |        |        |        |        |        |        |        |        |        |                    |        |
        * |-----------------------------------------------------------------------------------------------------------------------------------------------|
        * |                  |        |        |        |        |        |        |        |        |        |        |                |        |        |*/
                KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,     KC_PGUP, KC_VOLD,\
        /*|                  |        |        |        |        |        |        |        |        |        |        |                |        |        |
        * |-----------------------------------------------------------------------------------------------------------------------------------------------|
        * |          |          |          |                                                       |          |          |     |        |        |        |*/
            KC_TRNS,   KC_TRNS,   KC_TRNS,                         KC_TRNS,                           KC_TRNS,   KC_TRNS,       KC_HOME, KC_PGDN,  KC_END \
        /*|          |          |          |                                                       |          |          |     |        |        |        |
        * `-----------------------------------------------------------------------------------------------------------------------------------------------'*/
    )
};

const uint16_t fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1)
};

/* custom action function */
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {}

LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_ONE_KEY(KC_F) {
      register_code(KC_S);
      unregister_code(KC_S);
    }
    SEQ_TWO_KEYS(KC_A, KC_S) {
      register_code(KC_H);
      unregister_code(KC_H);
    }
    SEQ_THREE_KEYS(KC_A, KC_S, KC_D) {
      register_code(KC_LGUI);
      register_code(KC_S);
      unregister_code(KC_S);
      unregister_code(KC_LGUI);
    }
  }
}
  