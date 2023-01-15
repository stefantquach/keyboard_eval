#include QMK_KEYBOARD_H

#define _BASE 0
#define _HUE 1
#define _VAL 2
#define _MOD 3
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ A │ B │ C │
     * ├───┼───┼───┤
     * │ D │ E │ F │
     * ├───┼───┼───┤
     * │ G │ H │ I │
     * └───┴───┴───┘
     */
    [_BASE] = LAYOUT(
                          KC_MPLY, \
        KC_A,    KC_B,    KC_C, \
        KC_D,    KC_E,    KC_F, \
        MO(_HUE),  MO(_VAL),  MO(_MOD)  
    ),

    [_HUE] = LAYOUT(
                                 _______ , \
        _______ ,    _______ ,    _______ , \
        _______ ,    _______ ,    _______ , \
        MO(_HUE),  MO(_VAL),  MO(_MOD)  
    ),

    [_VAL] = LAYOUT(
                        _______ , \
    _______ ,    _______ ,    _______ , \
    _______ ,    _______ ,    _______ , \
    MO(_HUE),  MO(_VAL),  MO(_MOD)  
    ),

    [_MOD] = LAYOUT(
                            RGB_TOG , \
    _______ ,    _______ ,    _______ , \
    _______ ,    _______ ,    _______ , \
    MO(_HUE),  MO(_VAL),  MO(_MOD)  
    ),
};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BASE] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [_HUE] =  { ENCODER_CCW_CW(RGB_HUD, RGB_HUI) },
    [_VAL] =  { ENCODER_CCW_CW(RGB_VAD, RGB_VAI) },
    [_MOD] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD) },
};
#endif