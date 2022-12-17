#include QMK_KEYBOARD_H

enum layers {
  QWERTY,
  LOWER,
  RAISE,
  GAME,
  EMACS,
};

enum custom_keycodes {
  CK_DBLZERO = SAFE_RANGE,
  CK_KILL,
};

#define LSFT_GRAVE	MT(MOD_LSFT,KC_GRAVE)
#define RSFT_BSLS	MT(MOD_RSFT,KC_BSLS)
#define LGUI_EISUU	MT(MOD_LGUI,KC_LNG2)
#define LALT_DEL	MT(MOD_LALT,KC_DEL)
#define RALT_KANA	MT(MOD_RALT,KC_LNG1)
#define RAISE_ENT	LT(RAISE,KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [QWERTY] = LAYOUT_6x6(

    KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,     KC_F6,             KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,    KC_0,
    KC_ESC,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,              KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_GRAVE,
    KC_TAB,    KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,              KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_BSLS,
    KC_LCTL,   KC_A,      KC_S,      KC_D,      KC_F,      KC_G,              KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOT,
    LSFT_GRAVE,KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,              KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,   RSFT_BSLS,
                          KC_EQL,    KC_LBRC,                                                       KC_RBRC,   KC_MINS,
                                                KC_SPC,    LGUI_EISUU,        RAISE_ENT, KC_BSPC,
                                                LALT_DEL,  KC_HOME,           KC_PGUP,   RALT_KANA,
                                                TT(LOWER), KC_END,            KC_PGDN,   TT(LOWER)
  ),

  [LOWER] = LAYOUT_6x6(

    _______,   _______,   _______,   _______,   _______,   _______,           _______,   _______,   _______,   _______,   _______,   _______,
    _______,   _______,   _______,   _______,   _______,   _______,           _______,   _______,   _______,   _______,   KC_SLSH,   KC_BSPC,
    _______,   HYPR(KC_Q),HYPR(KC_W),HYPR(KC_E),HYPR(KC_R),HYPR(KC_T),        KC_MINS,   KC_P7,     KC_P8,     KC_P9,     KC_ASTR,   _______,
    _______,   HYPR(KC_A),HYPR(KC_S),HYPR(KC_D),HYPR(KC_F),TG(GAME),          KC_C,      KC_P4,     KC_P5,     KC_P6,     KC_MINS,   _______,
    _______,   HYPR(KC_Z),HYPR(KC_X),HYPR(KC_C),HYPR(KC_V),HYPR(KC_B),        KC_BSPC,   KC_P1,     KC_P2,     KC_P3,     KC_PLUS,   KC_EQL,
                          _______,   KC_PSCR,                                                       KC_0,      KC_DOT,
                                                _______,   _______,           _______,   _______,
                                                _______,   QK_BOOT,           QK_BOOT,   _______,
                                                _______,   _______,           _______,   _______
  ),

  [RAISE] = LAYOUT_6x6(

    _______,   _______,   _______,   _______,   _______,   _______,           _______,   _______,   _______,   _______,   _______,   _______,
    _______,   KC_F1,     KC_F2,     KC_F3,     KC_F4,     KC_F5,             KC_F6,     KC_F7,     KC_F8,     KC_F9,     KC_F10,    KC_F11,
    _______,   _______,   _______,   _______,   _______,   KC_LPRN,           KC_RPRN,   KC_MPRV,   KC_MPLY,   KC_MNXT,   _______,   KC_F12,
    MO(EMACS), _______,   _______,   _______,   _______,   _______,           KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,   KC_ENTER,  _______,
    _______,   _______,   _______,   _______,   _______,   _______,           KC_HOME,   KC_PGDN,   KC_PGUP,   KC_END,    KC_ESC,    _______,
                          _______,   _______,                                                       _______,   _______,
                                                _______,   _______,           _______,   _______,
                                                KC_INS,    _______,           _______,   _______,
                                                _______,   _______,           _______,   _______
  ),

  [GAME] = LAYOUT_6x6(

    _______,   _______,   _______,   _______,   _______,   _______,           _______,   _______,   _______,   _______,   _______,   _______,
    _______,   _______,   _______,   _______,   _______,   _______,           _______,   _______,   _______,   _______,   _______,   _______,
    _______,   _______,   _______,   _______,   _______,   _______,           _______,   _______,   _______,   _______,   _______,   _______,
    _______,   _______,   _______,   _______,   _______,   _______,           _______,   _______,   _______,   _______,   _______,   _______,
    KC_LSFT,   _______,   _______,   _______,   _______,   _______,           _______,   _______,   _______,   _______,   _______,   KC_RSFT,
                          _______,   _______,                                                       _______,   _______,
                                                _______,   _______,           _______,   _______,
                                                _______,   _______,           _______,   _______,
                                                _______,   _______,           _______,   _______
  ),

  [EMACS] = LAYOUT_6x6(

    _______,   _______,   _______,   _______,   _______,   _______,           _______,   _______,   _______,   _______,   _______,   _______,
    _______,   _______,   _______,   _______,   _______,   _______,           _______,   _______,   _______,   _______,   _______,   _______,
    _______,   C(KC_Q),   C(KC_W),   KC_END,    C(KC_R),   C(KC_T),           C(KC_Y),   C(KC_U),   KC_TAB,    C(KC_O),   KC_UP,     _______,
    _______,   KC_HOME,   C(KC_S),   KC_DEL,    KC_RIGHT,  KC_ESC,            KC_BSPC,   S(KC_ENT), CK_KILL,   C(KC_L),   _______,   _______,
    _______,   C(KC_Z),   C(KC_X),   C(KC_C),   KC_PGDN,   KC_LEFT,           KC_DOWN,   KC_ENT,    C(KC_HOME),C(KC_END), _______,   _______,
                          _______,   _______,                                                       _______,   _______,
                                                _______,   _______,           _______,   _______,
                                                _______,   _______,           _______,   _______,
                                                _______,   _______,           _______,   _______
  ),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case CK_DBLZERO:
        if (record->event.pressed) {
            SEND_STRING("00");
        }
        break;
    case CK_KILL:
        if (record->event.pressed) {
            register_code(KC_LSFT);
            tap_code(KC_END);
            unregister_code(KC_LSFT);
            tap_code(KC_DEL);
        }
        break;
    }
    return true;
}
