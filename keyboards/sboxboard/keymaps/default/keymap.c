// Copyright (c) 2022 Marco Pelegrini <marco@pelegrini.ca>
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define KC_A_THEN_B SAFE_RANGE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        // Логика выполняется только при НАЖАТИИ клавиши
        switch (keycode) {
            case KC_A_THEN_B:
                if (record->event.pressed) {
                    // 1. Отправляем первое нажатие (например, KC_A)
                    tap_code(KC_L);
                    
                    // 2. Отправляем второе нажатие (например, KC_B)
                    // QMK автоматически добавляет небольшой промежуток между tap_code вызовами.
                    tap_code(KC_ENT);
                }
                return false; // Сообщаем QMK, что мы обработали этот кейкод
        }
    }
    return true; // Возвращаем true для всех остальных кейкодов
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ A │ J │ I │
     * ├───┼───┼───┤
     * │ B │ P │ L │
     * └───┴───┴───┘
     */
    [0] = LAYOUT(
        KC_A,   KC_J,   KC_I,
        KC_B,   KC_P,   KC_A_THEN_B
    )
};
