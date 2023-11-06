#pragma once

// Use the lily version to get the Lily58 logo instead of the qmk logo
#define OLED_FONT_H "lib/glcdfont_lily.c"

#define VIAL_KEYBOARD_UID {0x7E, 0xFD, 0xFC, 0x5B, 0x7D, 0x39, 0x48, 0x06}

/* VIAL secure unlock keystroke (currently, both big thumb keys) */
#define VIAL_UNLOCK_COMBO_ROWS {4, 9}
#define VIAL_UNLOCK_COMBO_COLS {4, 4}

/* Select hand configuration */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define USE_SERIAL_PD2 // what is this?

/* Space reduction */
#define DYNAMIC_KEYMAP_LAYER_COUNT 10
#define VIAL_TAP_DANCE_ENTRIES 13
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT

/* Other configs */
#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 175

/* See https://docs.qmk.fm/#/tap_hold?id=permissive-hold */
// #define PERMISSIVE_HOLD // NOTE Can cause accidential home row mods triggering on fast keyrolls

/* Enable rapid switch from tap to hold, disables double tap hold auto-repeat, except for one-shot keys. */
#define QUICK_TAP_TERM 0 // 0 disbles key repeat on hold

