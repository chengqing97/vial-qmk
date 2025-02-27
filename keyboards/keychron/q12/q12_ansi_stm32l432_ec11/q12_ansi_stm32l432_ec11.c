/* Copyright 2022 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE

const ckled2001_led PROGMEM g_ckled2001_leds[RGB_MATRIX_LED_COUNT] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
    // {0, I_1,    G_1,    H_1}
    {0, I_2,    G_2,    H_2},  //
    {0, I_3,    G_3,    H_3},  //
    {0, I_4,    G_4,    H_4},  //
    {0, I_5,    G_5,    H_5},  // Esc
    {0, I_6,    G_6,    H_6},  // F1
    {0, I_7,    G_7,    H_7},  // F2
    {0, I_8,    G_8,    H_8},  // F3
    {0, I_9,    G_9,    H_9},  // F4
    {0, I_10,   G_10,   H_10}, // F5
    {0, I_11,   G_11,   H_11}, // F6
    {0, I_12,   G_12,   H_12}, // F7
    {0, I_13,   G_13,   H_13}, // F8
    {0, I_14,   G_14,   H_14}, // F9
    {0, I_15,   G_15,   H_15}, // F10
    {0, I_16,   G_16,   H_16}, // F11
    {0, L_16,   J_16,   K_16}, // F12
    {0, L_15,   J_15,   K_15}, //home
    {0, L_14,   J_14,   K_14}, //end


    {0, C_1,    A_1,    B_1},  // num_lock
    {0, C_2,    A_2,    B_2},  // /
    {0, C_3,    A_3,    B_3},  // *
    {0, C_4,    A_4,    B_4},  // -
    {0, C_5,    A_5,    B_5},  // ~`
    {0, C_6,    A_6,    B_6},  // 1!
    {0, C_7,    A_7,    B_7},  // 2@
    {0, C_8,    A_8,    B_8},  // 3#
    {0, C_9,    A_9,    B_9},  // 4$
    {0, C_10,   A_10,   B_10}, // 5%
    {0, C_11,   A_11,   B_11}, // 6^
    {0, C_12,   A_12,   B_12}, // 7&
    {0, C_13,   A_13,   B_13}, // 8*
    {0, C_14,   A_14,   B_14}, // 9(
    {0, C_15,   A_15,   B_15}, // 0)
    {0, C_16,   A_16,   B_16}, // -_
    {0, L_13,   J_13,   K_13}, // =+
    {0, L_12,   J_12,   K_12}, // BackSpace
    {0, L_11,   J_11,   K_11}, //

    {0, F_1,    D_1,    E_1},  // 7
    {0, F_2,    D_2,    E_2},  // 8
    {0, F_3,    D_3,    E_3},  // 9
    // {0, F_4,    D_4,    E_4},  //
    {0, F_5,    D_5,    E_5},  // TAB
    {0, F_6,    D_6,    E_6},  // Q
    {0, F_7,    D_7,    E_7},  // W
    {0, F_8,    D_8,    E_8},  // E
    {0, F_9,    D_9,    E_9},  // R
    {0, F_10,   D_10,   E_10}, // T
    {0, F_11,   D_11,   E_11}, // Y
    {0, F_12,   D_12,   E_12}, // U
    {0, F_13,   D_13,   E_13}, // I
    {0, F_14,   D_14,   E_14}, // O
    {0, F_15,   D_15,   E_15}, // P
    {0, F_16,   D_16,   E_16}, // [
    {0, L_10,   J_10,   K_10}, // ]
    {0, L_9,    J_9,    K_9},  // \|
    {0, L_8,    J_8,    K_8},  //

    {1, C_16,   A_16,   B_16}, // 4
    {1, C_15,   A_15,   B_15}, // 5
    {1, C_14,   A_14,   B_14}, // 6
    {0, F_4,    D_4,    E_4},  // +
    {1, C_12,   A_12,   B_12}, // CapsLock
    {1, C_11,   A_11,   B_11}, // A
    {1, C_10,   A_10,   B_10}, // S
    {1, C_9,    A_9,    B_9},  // D
    {1, C_8,    A_8,    B_8},  // F
    {1, C_7,    A_7,    B_7},  // G
    {1, C_6,    A_6,    B_6},  // H
    {1, C_5,    A_5,    B_5},  // J
    {1, C_4,    A_4,    B_4},  // k
    {1, C_3,    A_3,    B_3},  // l
    {1, C_2,    A_2,    B_2},  // ；
    {1, C_1,    A_1,    B_1},  // '
    {1, L_1,    J_1,    K_1},  // Enter
    {1, L_2,    J_2,    K_2},  //

    {1, I_16,   G_16,   H_16}, // 1
    {1, I_15,   G_15,   H_15}, // 2
    {1, I_14,   G_14,   H_14}, // 3
    {1, I_12,   G_12,   H_12}, //Shift_L
    {1, I_10,   G_10,   H_10}, // Z
    {1, I_9,    G_9,    H_9},  // X
    {1, I_8,    G_8,    H_8},  // C
    {1, I_7,    G_7,    H_7},  // V
    {1, I_6,    G_6,    H_6},  // B
    {1, I_5,    G_5,    H_5},  // N
    {1, I_4,    G_4,    H_4},  // M
    {1, I_3,    G_3,    H_3},  // ,
    {1, I_2,    G_2,    H_2},  // .
    {1, I_1,    G_1,    H_1},  // ?
    {1, L_3,    J_3,    K_3},  // Shift_R
    {1, L_4,    J_4,    K_4},  // Up

    {1, F_16,   D_16,   E_16}, // 0
    {1, F_14,   D_14,   E_14}, // .
    {1, I_13,   G_13,   H_13}, // Enter
    {1, F_12,   D_12,   E_12}, // Ctrl_L
    {1, F_11,   D_11,   E_11}, // Win_L
    {1, F_10,   D_10,   E_10}, // Alt_L
    {1, F_6,    D_6,    E_6},  // Space
    {1, F_3,    D_3,    E_3},  // Alt_R
    {1, F_2,    D_2,    E_2},  // Fn
    {1, F_1,    D_1,    E_1},  // Ctrl_R
    {1, L_5,    J_5,    K_5},  // Left
    {1, L_6,    J_6,    K_6},  // Down
    {1, L_7,    J_7,    K_7},  // Right
};

#define __ NO_LED

led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        {  3,  4,  5,  6,  7,  8,  9, 10, 11, 12, 13, 14, 15,  16,  17, __,  0,  1 },
        { 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34,  35,  36, 18, 19, 20 },
        { 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52,  53,  54, 37, 38, 39 },
        { 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 91,  71,  72, 55, 56, 57 },
        { 76, __, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, __,  87,  88, 73, 74, 75 },
        { 92, 93, 94, __, __, 21, 95, 58, __, 96, 97, 98, 99, 100, 101, 89,  2, 90 },
    },
    {
        // LED Index to Physical Position
                {11,0},  {23,0},  {34,0},  {49,0},  {63,0},  {75,0},  {86,0},  {98,0},   {112,0},  {123,0},  {135,0},  {146,0},  {161,0},  {172,0},  {184,0},  {195,0},  {209,0},  {224,0},
        {0,15}, {11,15}, {23,15}, {34,15}, {49,15}, {60,15}, {72,15}, {83,15}, {95,15},  {106,15}, {118,15}, {129,15}, {141,15}, {152,15}, {164,15}, {175,15}, {186,15}, {204,15}, {224,15},
        {0,26}, {11,26}, {23,26},          {52,26}, {66,26}, {78,26}, {89,26}, {101,26}, {112,26}, {123,26}, {135,26}, {146,26}, {158,26}, {169,26}, {181,26}, {192,26}, {207,26}, {224,26},
        {0,38}, {11,38}, {23,38}, {34,32}, {53,38}, {69,38}, {81,38}, {92,38}, {103,38}, {115,38}, {126,38}, {138,38}, {149,38}, {161,38}, {172,38}, {184,38},           {202,38}, {224,38},
        {0,49}, {11,49}, {23,49},          {56,49}, {75,49}, {86,49}, {98,49}, {109,49}, {121,49}, {132,49}, {144,49}, {155,49}, {166,49}, {178,49},           {194,49}, {213,52},
                {6,61},  {23,61}, {34,55}, {50,61}, {65,61}, {79,61},                    {122,61},                               {163,61}, {175,61}, {186,61}, {201,64}, {213,64}, {224,64},
    },
    {
        // RGB LED Index to Flag
           1, 1, 1,  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,    1,
        8, 4, 4, 4,  1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,    1,
        4, 4, 4,     1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,
        4, 4, 4, 4,  8, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1,    1,
        4, 4, 4,     1,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    1, 1,
           4, 4, 1,  1, 1, 1,          4,          1, 1, 1, 1, 1, 1,
    }
};

#endif

#ifdef ENCODER_ENABLE

void encoder0_pad_cb(void *param) {
    (void)param;

    encoder_insert_state(0);
}

void keyboard_post_init_kb(void) {
    pin_t encoders_pad_a[] = ENCODERS_PAD_A;
    pin_t encoders_pad_b[] = ENCODERS_PAD_B;
    palEnableLineEvent(encoders_pad_a[0], PAL_EVENT_MODE_BOTH_EDGES);
    palEnableLineEvent(encoders_pad_b[0], PAL_EVENT_MODE_BOTH_EDGES);
    palSetLineCallback(encoders_pad_a[0], encoder0_pad_cb, NULL);
    palSetLineCallback(encoders_pad_b[0], encoder0_pad_cb, NULL);

    // allow user keymaps to do custom post_init
    keyboard_post_init_user();
}

#endif // ENCODER_ENABLE
