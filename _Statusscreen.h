/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
/*
#define STATUS_LOGO_Y            6
#define STATUS_LOGO_WIDTH       40

const unsigned char status_logo_bmp[] PROGMEM = {
  B00011110,B00000000,B10000000,B00000000,B01111000,
  B00010000,B00000000,B10000000,B00000000,B01000000,
  B00010000,B10100011,B10011001,B01100000,B01110000,
  B00011100,B11010100,B10100101,B10000000,B00001000,
  B00010000,B10010100,B10111101,B00001111,B00001000,
  B00010000,B10010100,B10100001,B00000000,B01001000,
  B00011110,B10010011,B10011101,B00000000,B00110000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000011,B10000000,B00000000,B00000000,
  B00000000,B00000010,B01000000,B00000000,B00000000,
  B00000000,B00000010,B01010110,B01100000,B00000000,
  B00000000,B00000011,B10011000,B10010000,B00000000,
  B00000000,B00000010,B00010000,B10010000,B00000000,
  B00000000,B00000010,B00010000,B10010000,B00000000,
  B00000000,B00000010,B00010000,B01100000,B00000000
};
 */

#pragma once

#define STATUS_LOGO_WIDTH 40

const unsigned char status_logo_bmp[] PROGMEM = {
  B00000000,B00000000,B00000000,B00000000,B00000000,
  B10000000,B00000000,B00001000,B00000000,B00000001,
  B11100000,B00000000,B00011100,B00000000,B00000111,
  B11111000,B00000000,B00011100,B00000000,B00011110,
  B01111110,B00000000,B00111110,B00000000,B01111110,
  B00111111,B11000100,B00100010,B00100001,B11111100,
  B00000001,B11110100,B01100111,B00010111,B10000000,
  B00000000,B00011100,B01110111,B00011000,B00000000,
  B00000000,B11111100,B11111111,B10011111,B00000000,
  B00111111,B11111100,B00010100,B00011111,B11111100,
  B00111111,B11111100,B00000000,B00111111,B11111100,
  B00111110,B00011110,B00000000,B00111000,B01111100,
  B00000000,B00111111,B10000000,B11111100,B00000000,
  B00000000,B11111111,B10001001,B11111111,B00000000,
  B00000011,B11100111,B10011101,B11100111,B11000000,
  B00000111,B11000111,B00011100,B01100011,B11100000,
  B00000111,B10000110,B00111110,B00110001,B11100000,
  B00000011,B00001110,B00111110,B00110000,B11000000,
  B00000000,B00001100,B01111110,B00111000,B00000000,
  B00000000,B00011100,B00111100,B00011000,B00000000,
  B00000000,B00011100,B00011100,B00011100,B00000000,
  B00000000,B00001000,B10011101,B10010000,B00000000,
  B00000000,B00000000,B10111100,B10000000,B00000000,
  B00000000,B00000001,B00011100,B11000000,B00000000,
  B00000000,B00011111,B00011100,B11111000,B00000000,
  B00000000,B00011111,B10001000,B11111100,B00000000,
  B00000000,B00001100,B00000000,B00011000,B00000000,
  B00000000,B00000000,B00000000,B00000000,B00000000
};


//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          73
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          81
#endif
