#include QMK_KEYBOARD_H
#include <stdio.h>

enum layer_number {
  _QWERTY = 0,
  _SYMBOL = 1,
  _NUMBER = 2,
  _FUNC = 3,
  _NAV = 4,
  _MOUSE = 5,
  _MEDIA = 6,
  _LAYER07 = 7,
  _LAYER08 = 8,
  _LAYER09 = 9,
};

// Keycodes aliases
// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)
// Right-hand home row mods
#define HOME_J RSFT_T(KC_J)
#define HOME_K RCTL_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)

#define CUT LCTL(KC_X)
#define COPY LCTL(KC_C)
#define PASTE LCTL(KC_V)
#define UNDO LCTL(KC_Z)
#define REDO C_S_T(KC_Z)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Layer 0
    [_QWERTY] = LAYOUT(
    KC_GRAVE, KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,     KC_7,    KC_8,    KC_9,    KC_0,      KC_GRV,
    KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,      KC_MINS,
    KC_LCTL,  HOME_A, HOME_S,  HOME_D,  HOME_F,  KC_G,                      KC_H,     HOME_J,  HOME_K,  HOME_L,  HOME_SCLN, KC_QUOT,
    KC_LSFT,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  XXXXXXX,   XXXXXXX, KC_N,     KC_M,    KC_COMM, KC_DOT,  KC_SLSH,   KC_RSFT,
              XXXXXXX, LT(6,KC_ESC), LT(4,KC_SPC), LT(5,KC_SPC),   LT(1,KC_ENT), LT(2,KC_BSPC), LT(3,KC_DEL), XXXXXXX
    ),

    [_SYMBOL] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, KC_RSFT, KC_RSFT, KC_LALT, KC_RGUI, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_NUMBER] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_LBRC, KC_1,    KC_2,    KC_3,    KC_RBRC,                   REDO,    PASTE,   COPY,    CUT,     UNDO,    XXXXXXX,
    XXXXXXX, KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,                    XXXXXXX, KC_RSFT, KC_RSFT, KC_LALT, KC_RGUI, XXXXXXX,
    XXXXXXX, KC_GRAVE, KC_7,   KC_8,    KC_9,   KC_BSLS,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               _______, _______, KC_0,    KC_MINS, _______, _______, _______, _______
    ),

    [_FUNC] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_F11,  KC_F4,   KC_F5,   KC_F6,   XXXXXXX,                   XXXXXXX, KC_RSFT, KC_RSFT, KC_LALT, KC_RGUI, XXXXXXX,
    XXXXXXX, KC_F10,  KC_F1,   KC_F2,   KC_F3,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_NAV] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   C_S_T(KC_Z), LCTL(KC_V), LCTL(KC_C), LCTL(KC_X), LCTL(KC_Z),XXXXXXX,
    XXXXXXX, KC_LSFT, KC_LSFT, KC_LALT, KC_LGUI, XXXXXXX,                   XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX,
                               _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_MOUSE] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   C_S_T(KC_Z), LCTL(KC_V), LCTL(KC_C), LCTL(KC_X), LCTL(KC_Z),XXXXXXX,
    XXXXXXX, KC_LSFT, KC_LSFT, KC_LALT, KC_LGUI, XXXXXXX,                   XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX,
                               _______, _______, _______, _______, KC_BTN2, KC_BTN1, KC_BTN3, KC_BTN2
    ),

    [_MEDIA] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, KC_LSFT, KC_LSFT, KC_LALT, KC_LGUI, XXXXXXX,                   XXXXXXX, KC_MPRV, KC_VOLU, KC_VOLD, KC_MNXT, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               _______, _______, _______, _______, KC_MPLY, KC_MUTE, _______, _______
    ),

    [_LAYER07] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_LAYER08] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_LAYER09] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               _______, _______, _______, _______, _______, _______, _______, _______
    ),

};

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;
  }
  return rotation;
}

// Tri layers
// https://docs.qmk.fm/#/ref_functions?id=update_tri_layer_statestate-x-y-z
// layer_state_t layer_state_set_user(layer_state_t state) {
//     state = update_tri_layer_state(state, _RAISE, _LOWER, _ADJUST);
//     return state;
// }

static void render_logo(void) {
    static const char PROGMEM logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(logo, false);
}

char keylog_str[24] = {};
char keylogs_str[21] = {};
int keylogs_str_idx = 0;

char wpm[4];
char layer_misc[7];

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '
};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
    char name = ' ';
    if (keycode < 60) {
        name = code_to_name[keycode];
    }

    // update keylog
    snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
             record->event.key.row, record->event.key.col,
             keycode, name);

    // update keylogs
    if (keylogs_str_idx == sizeof(keylogs_str) - 1) {
        keylogs_str_idx = 0;
        for (int i = 0; i < sizeof(keylogs_str) - 1; i++) {
            keylogs_str[i] = ' ';
        }
    }

    keylogs_str[keylogs_str_idx] = name;
    keylogs_str_idx++;
}

const char *read_keylog(void) {
  return keylog_str;
}

const char *read_keylogs(void) {
  return keylogs_str;
}

static void render_status(void) {
    oled_write_P(PSTR("layer "), false);

    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("QWERTY"), false);
            break;
        case _SYMBOL:
            oled_write_P(PSTR("Symbol"), false);
            break;
        case _NUMBER:
            oled_write_P(PSTR("Number"), false);
            break;
        case _FUNC:
            oled_write_P(PSTR("Func"), false);
            break;
        case _NAV:
            oled_write_P(PSTR("Nav"), false);
            break;
        case _MOUSE:
            oled_write_P(PSTR("Mouse"), false);
            break;
        case _MEDIA:
            oled_write_P(PSTR("Media"), false);
            break;
        default:
            sprintf(layer_misc, "MO(%01d) ", get_highest_layer(layer_state));
	    oled_write(layer_misc, false);
            break;
    }

    oled_write_P(PSTR("  "), false);
    sprintf(wpm, "%03d", get_current_wpm());
    oled_write(wpm, false);
    oled_write_P(PSTR(" wpm\n"), false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status();
    } else {
        render_logo();
    }
    return false;
}

#endif // OLED_ENABLE
