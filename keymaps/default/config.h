/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* The config.h File
   https://docs.qmk.fm/#/config_options?id=the-configh-file */

/* Handedness */
#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS


#define QUICK_TAP_TERM 0  // https://docs.qmk.fm/#/tap_hold?id=quick-tap-term
#define TAPPING_TERM 200  // https://docs.qmk.fm/#/tap_hold?id=tapping-term
#define PERMISSIVE_HOLD   // https://docs.qmk.fm/#/tap_hold?id=permissive-hold


/* Adding mouse keys to your keyboard
https://docs.qmk.fm/#/feature_mouse_keys?id=adding-mouse-keys-to-your-keyboard */
/* Source: http://benvallack.com/notebook/36-key-corne-keyboard-layout/
#define MK_KINETIC_SPEED
#define MOUSEKEY_DELAY 8
#define MOUSEKEY_INTERVAL 8
#define MOUSEKEY_MOVE_DELTA 2
#define MOUSEKEY_INITIAL_SPEED 2
#define MOUSEKEY_DECELERATED_SPEED 100
#define MOUSEKEY_MAX_SPEED 11
#undef MOUSEKEY_WHEEL_INTERVAL
#define MOUSEKEY_WHEEL_INTERVAL 83
#undef MOUSEKEY_WHEEL_MAX_SPEED
#define MOUSEKEY_WHEEL_MAX_SPEED 3
#undef MOUSEKEY_WHEEL_TIME_TO_MAX
#define MOUSEKEY_WHEEL_TIME_TO_MAX 80
*/

/* Underglow */
/*
#undef RGBLED_NUM
#define RGBLED_NUM 14  // Number of LEDs
#define RGBLIGHT_SLEEP
*/
