#include <avr/pgmspace.h>

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

#include "Font.h"
#include "Charliplexing.h"
#include <inttypes.h>

#include "Robofont.h"

uint8_t drawInternal(unsigned char letter,int x,int y,int set,uint8_t rotate=0) {
  uint16_t len = get_char_len(letter);

  for (uint16_t row = 0; row < 9; row++) {
    for (uint16_t col = 0; col < len; col++) {
      int xp = x + col;
      int yp = y + row;
      if (get_char_bit(letter, row, col) && (xp >=0) && (xp < 14)) {
        if (!rotate) {
          LedSign::Set(xp, yp, set);
        } else {
          LedSign::Set(yp, xp, set);
        }
      }
    }
  }
  return len+1;
}


/* -----------------------------------------------------------------  */
/** Draws a figure (0-9). You should call it with set=1, 
 * wait a little them call it again with set=0
 * @param figure is the figure [0-9]
 * @param x,y coordinates, 
 * @param set is 1 or 0 to draw or clear it
 */
uint8_t Font::Draw(unsigned char letter,int x,int y,int set) {
  return drawInternal(letter,x,y,set);
}


/* -----------------------------------------------------------------  */
/** Draw a figure in the other direction (rotated 90°)
 * @param figure is the figure [0-9]
 * @param x,y coordinates, 
 * @param set is 1 or 0 to draw or clear it
*/
uint8_t Font::Draw90(unsigned char letter,int x,int y,int set) {
  return drawInternal(letter,x,y,set,1);
}





