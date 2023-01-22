#include "stekeeb_eval.h"

#ifdef RGB_MATRIX_ENABLE
const is31_led PROGMEM g_is31_leds[RGB_MATRIX_LED_COUNT] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
    {0, A_1,    B_1,    C_1},
    {0, A_2,    B_2,    C_2},
    {0, A_3,    B_3,    C_3},

    {0, D_1,    E_1,    F_1},
    {0, D_2,    E_2,    F_2},
    {0, D_3,    E_3,    F_3},

    {0, G_1,    H_1,    I_1},
    {0, G_2,    H_2,    I_2},
    {0, G_3,    H_3,    I_3},
};


led_config_t g_led_config = { {
        // Key Matrix to LED Index
        {NO_LED, NO_LED, NO_LED},
        { 0, 1, 2 },
        { 3, 4, 5 },
        { 6, 7, 8 }
    }, {
        // LED Index to Physical Position
        { 0,  0},    { 112,  0 },   { 224,  0 }, 
        { 0,  112 }, { 112,  112 }, { 224,  112 },
        { 0,  224 }, { 112,  224 }, { 224,  224 }
    }, {
        // LED Index to Flag
        4, 4, 4, 
        4, 4, 4,
        4, 4, 4
    } 
};
#endif