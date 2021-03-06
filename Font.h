/*
  Font drawing library

  Copyright 2009/2010 Benjamin Sonntag <benjamin@sonntag.fr> http://benjamin.sonntag.fr/
  
  History:
  	2010-01-01 - V0.0 Initial code at Berlin after 26C3

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place - Suite 330,
  Boston, MA 02111-1307, USA.
*/

#ifndef Font_h
#define Font_h

#include <inttypes.h>
#include <avr/pgmspace.h>

namespace Font
{

typedef struct {
  uint8_t offset;
  uint8_t len;
} PROGMEM char_entry;

typedef struct {
  uint8_t height;
  uint16_t len;
  char_entry* table;
  prog_uint8_t* data;
} font_defn;

typedef enum {
  ROBO_FONT = 0,
  VERDANA_FONT,
  MS_FONT
} CharFont;

extern void SetFont(CharFont f);

extern uint8_t Draw(unsigned char letter,int x,int y,int set=1);

extern uint8_t Draw90(unsigned char letter,int x,int y,int set=1);

}

#endif

