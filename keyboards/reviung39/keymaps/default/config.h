{\rtf1\ansi\ansicpg1252\cocoartf1404\cocoasubrtf470
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 /* Copyright 2019 gtips\
 *\
 * This program is free software: you can redistribute it and/or modify\
 * it under the terms of the GNU General Public License as published by\
 * the Free Software Foundation, either version 2 of the License, or\
 * (at your option) any later version.\
 *\
 * This program is distributed in the hope that it will be useful,\
 * but WITHOUT ANY WARRANTY; without even the implied warranty of\
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\
 * GNU General Public License for more details.\
 *\
 * You should have received a copy of the GNU General Public License\
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.\
 */\
\
#pragma once\
\
// place overrides here\
\
#define RGB_DI_PIN D3\
#ifdef RGB_DI_PIN\
  #define RGBLED_NUM 11\
  #define RGBLIGHT_HUE_STEP 16\
  #define RGBLIGHT_SAT_STEP 16\
  #define RGBLIGHT_VAL_STEP 16\
  #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */\
  #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */\
// /*== all animations enable ==*/\
  #define RGBLIGHT_ANIMATIONS\
// /*== or choose animations ==*/\
//   #define RGBLIGHT_EFFECT_BREATHING\
//   #define RGBLIGHT_EFFECT_RAINBOW_MOOD\
//   #define RGBLIGHT_EFFECT_RAINBOW_SWIRL\
//   #define RGBLIGHT_EFFECT_SNAKE\
//   #define RGBLIGHT_EFFECT_KNIGHT\
//   #define RGBLIGHT_EFFECT_CHRISTMAS\
//   #define RGBLIGHT_EFFECT_STATIC_GRADIENT\
//   #define RGBLIGHT_EFFECT_RGB_TEST\
//   #define RGBLIGHT_EFFECT_ALTERNATING\
// /*== customize breathing effect ==*/\
//   /*==== (DEFAULT) use fixed table instead of exp() and sin() ====*/\
//   #define RGBLIGHT_BREATHE_TABLE_SIZE 256      // 256(default) or 128 or 64\
//   /*==== use exp() and sin() ====*/\
//   #define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85  // 1 to 2.7\
//   #define RGBLIGHT_EFFECT_BREATHE_MAX    255   // 0 to 255\
#endif}