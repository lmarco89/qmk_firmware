#include QMK_KEYBOARD_H

// Add home and end to function layer function-a = end, function-i = home
// LAYERS
#define _QWERTY 0      // QWERTY layer
#define _QW _QWERTY

#define _FUNCTION 1    // Function layer
#define _FN _FUNCTION

#define _CONTROL 2     // Control layer
#define _CN _CONTROL

#define MO_FN MO(1)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_60_iso(
    //       2        3        4        5        6        7        8        9        10       11       12       13       14       15       16
    KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,
    KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    MO(_FN), KC_LGUI, KC_LALT,                   KC_SPC,                             KC_RALT, MO(_FN), KC_RGUI, KC_RCTL
  ),

  [_FUNCTION] = LAYOUT_60_iso(
    //       2        3        4        5        6        7        8        9        10       11       12       13       14       15       16
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
    _______, KC_MEDIA_PREV_TRACK, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_NEXT_TRACK, _______, _______, _______,  _______, _______,   _______,  KC_PGUP, _______, _______,
    KC_CAPS, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, KC_LEFT,  KC_DOWN, KC_UP, KC_RGHT, _______, _______, _______, _______,
    _______, _______, _______, KC_APP,  _______, _______, _______, KC_PGDN, _______, _______, _______, _______, _______,
    _______, _______, _______,                   TG(_CN),                            _______, _______, _______, _______
  ),

  [_CONTROL] = LAYOUT_60_iso(
    //       2        3        4        5        6        7        8        9        10       11       12       13       14       15       16
    TG(_CN), KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  RESET,
    _______, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_LCTL, RGB_TOG, RGB_HUD, RGB_SAD, RGB_VAD, _______, _______, _______, _______, _______, KC_HOME, KC_END,  KC_DEL, _______,
    KC_LSFT, _______, BL_DEC,  BL_TOGG, BL_INC,  BL_STEP, _______, _______, _______, _______, KC_PGDN, KC_PGUP, KC_UP,
    TG(_CN), _______, KC_LALT,                   XXXXXXX,                            _______, KC_LEFT, KC_DOWN, KC_RGHT
  ),
};
