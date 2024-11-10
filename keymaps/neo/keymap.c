enum layer_names {
    DEF,
    SHIF,
    SYM,
    NAVNUM,
    CUST
};

#include QMK_KEYBOARD_H
#include "definitions.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------       ----------------------------------------------------.
 * | Tab  |   J  |   D  |   U  |   A  |   X         |   P  |   H  |   L  |   M  |   W  |  ß  |     Bksp |
 * |------+------+------+------+------+------       +------+------+------+------+-----+------+----------|
 * | M3   |   C  |   T  |   I  |   E  |   O         |   B  |   N  |   R  |   S  |   G  |  Q  |  M3 |    |
 * |------+------+------+------+------+------       +------+------+------+------+------+---------  Enter|
 * | M2   |   F  |   V  |   Ü  |   Ä  |   Ö         |   Y  |   Z  |   ,  |   .  |   K  | M2        |    |
 * |------+------+------+------+------+------       +------+------+------+------+------+----------------|
 * | Ctrl   |  M4  |   Win |   Alt |  Click         |  Space  |      |       |   M6  |  M4  | Strg      |
 * `-----------------------------------------       ------------------------------------------------'
 */


[DEF] = LAYOUT(
    KC_TAB,      KC_J,    KC_D,    KC_U,    KC_A,    KC_X,         KC_P,    KC_H,    KC_L,    KC_M,    KC_W,   DE_SS,    KC_BSPC,
    MO(SYM),     KC_C,    KC_T,    KC_I,    KC_E,    KC_O,         KC_B,    KC_N,    KC_R,    KC_S,    KC_G,   KC_Q,        MO(SYM),
    KC_LSFT,    KC_F,    KC_V,    DE_UDIA, DE_ADIA, DE_ODIA,      DE_Y,    DE_Z,    KC_COMM, KC_DOT,  KC_K,   KC_LSFT,        KC_ENTER,
    KC_LCTL,    MO(NAVNUM),   KC_LGUI,   KC_LALT,    KC_BTN1,      KC_SPC,    MO(NAVNUM),   KC_NO,  OSL(CUST), MO(NAVNUM),       KC_RCTL
),

[SHIF] = LAYOUT(
    KC_TAB,     S(KC_J),    S(KC_D),    S(KC_U),    S(KC_A),    KC_X,         KC_P,    KC_H,    KC_L,    KC_M,    KC_W,   DE_SS,    KC_BSPC,
    MO(SYM),     KC_C,    KC_T,    KC_I,    KC_E,    KC_O,         KC_B,    KC_N,    KC_R,    KC_S,    KC_G,   KC_Q,        MO(SYM),
    MO(SHIF),    KC_F,    KC_V,    DE_UDIA, DE_ADIA, DE_ODIA,      DE_Y,    DE_Z,    KC_COMM, KC_DOT,  KC_K,   MO(SHIF),        KC_ENTER,
    KC_LCTL,    MO(NAVNUM),   KC_LGUI,   KC_LALT,    KC_BTN1,      KC_SPC,    MO(NAVNUM),   KC_NO,  OSL(CUST), MO(NAVNUM),       KC_RCTL
),

[SYM] = LAYOUT(
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
),

[NAVNUM] = LAYOUT(
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
),

[CUST] = LAYOUT(
KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
),

};