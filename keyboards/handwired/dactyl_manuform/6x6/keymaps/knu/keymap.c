#include QMK_KEYBOARD_H

enum layers {
  QWERTY,
  LOWER,
  RAISE,
};

#define LSFT_GRAVE	MT(MOD_LSFT,KC_GRAVE)
#define RSFT_BSLS	MT(MOD_RSFT,KC_BSLS)
#define LGUI_EISUU	MT(MOD_LGUI,KC_LANG2)
#define LALT_DEL	MT(MOD_LALT,KC_DEL)
#define RALT_KANA	MT(MOD_RALT,KC_LANG1)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [QWERTY] = LAYOUT_6x6(

    KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,             KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12 ,
    KC_ESC,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,              KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_BSPC,
    KC_TAB,    KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,              KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_MINS,
    KC_LCTL,   KC_A,      KC_S,      KC_D,      KC_F,      KC_G,              KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOT,
    LSFT_GRAVE,KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,              KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,   RSFT_BSLS,
                          KC_EQL,    KC_LBRC,                                                       KC_GRAVE,  KC_RBRC,
                                                KC_SPC,    LGUI_EISUU,        KC_ENT,    KC_BSPC,
                                                LALT_DEL,  KC_HOME,           KC_PGUP,   RALT_KANA,
                                                TT(LOWER), KC_END,            KC_PGDN,   TT(RAISE)
  ),

  [LOWER] = LAYOUT_6x6(

    KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,             KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12 ,
    _______,   _______,   _______,   _______,   _______,   _______,           _______,   _______,   KC_LPRN,   KC_RPRN,   KC_SLSH,   KC_BSPC,
    _______,   _______,   _______,   _______,   _______,   KC_LBRC,           KC_RBRC,   KC_P7,     KC_P8,     KC_P9,     KC_ASTR,   _______,
    _______,   KC_HOME,   KC_PGDN,   KC_PGUP,   KC_END,    KC_LPRN,           KC_RPRN,   KC_P4,     KC_P5,     KC_P6,     KC_MINS,   _______,
    _______,   KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,   _______,           _______,   KC_P1,     KC_P2,     KC_P3,     KC_PLUS,   KC_EQL,
                          _______,   KC_PSCR,                                                       KC_P0,     KC_DOT,
                                                _______,   _______,           _______,   _______,
                                                _______,   RESET,             _______,   _______,
                                                _______,   _______,           _______,   _______
  ),

  [RAISE] = LAYOUT_6x6(

    KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,             KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_F12 ,
    _______,   _______,   _______,   _______,   _______,   KC_LBRC,           KC_RBRC,   _______,   KC_NLCK,   KC_INS,    KC_SLCK,   KC_MUTE,
    _______,   KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,   KC_LPRN,           KC_RPRN,   KC_MPRV,   KC_MPLY,   KC_MNXT,   _______,   KC_VOLU,
    _______,   _______,   _______,   _______,   _______,   _______,           _______,   _______,   _______,   _______,   _______,   KC_VOLD,
    _______,   KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,   _______,           _______,   KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,   _______,
                          _______,   _______,                                                       _______,   _______,
                                                _______,   _______,           _______,   _______,
                                                KC_INS,    _______,           RESET,     _______,
                                                _______,   _______,           _______,   _______
  ),

};
