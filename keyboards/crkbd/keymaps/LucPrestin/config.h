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

#define EE_HANDS
#define USE_SERIAL_PD2

#define TAPPING_TERM_PER_KEY

#define OLED_BRIGHTNESS 192

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RGB_TEST
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 20
    #define RGBLIGHT_VAL_STEP 20
#endif
