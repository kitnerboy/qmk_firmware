#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        // KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_GRV,
        // ... продолжайте заполнять раскладку


        KC_ESC,     KC_P1,      KC_P2,      KC_P3,  KC_P4,      KC_P5,		
        KC_TAB,     KC_Q,       KC_W,       KC_E,   KC_R,       KC_T, 		
        KC_LSFT,    KC_A,       KC_S,       KC_D,   KC_F,       KC_G,       KC_LBRC, 
        KC_LCTL,    KC_Z,       KC_X,       KC_C,   KC_V,       KC_B,       KC_MINUS,
        											KC_SPC,     KC_LSFT,    KC_LCTL
    )
};