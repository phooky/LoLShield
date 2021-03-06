#include "Font.h"

#define MSFONT_HEIGHT 7
#define MSFONT_DATA_SIZE 179
 
Font::char_entry msfont_table[128] PROGMEM = {
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0, 1},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {1, 1},
  {0,0},
  {2, 5},
  {7, 2},
  {9, 4},
  {13, 4},
  {17, 4},
  {21, 4},
  {25, 4},
  {29, 4},
  {33, 4},
  {37, 4},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {41, 4},
  {45, 6},
  {51, 5},
  {56, 4},
  {60, 5},
  {65, 4},
  {69, 4},
  {73, 4},
  {77, 5},
  {82, 5},
  {87, 3},
  {90, 4},
  {94, 5},
  {99, 4},
  {103, 7},
  {110, 6},
  {116, 6},
  {122, 5},
  {127, 5},
  {132, 4},
  {136, 4},
  {140, 5},
  {145, 5},
  {150, 5},
  {155, 7},
  {162, 7},
  {169, 5},
  {174, 5},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},

};
 
prog_uint8_t msfont_data[MSFONT_DATA_SIZE] PROGMEM = {
0x5f,
0x40,
0x3e,
0x41,
0x41,
0x41,
0x3e,
0x2,
0x7f,
0x62,
0x51,
0x49,
0x46,
0x22,
0x49,
0x49,
0x36,
0xf,
0x8,
0x8,
0x7f,
0x2f,
0x49,
0x49,
0x39,
0x3e,
0x49,
0x49,
0x32,
0x1,
0x61,
0x19,
0x7,
0x36,
0x49,
0x49,
0x36,
0x26,
0x49,
0x49,
0x3e,
0x2,
0x59,
0x9,
0x6,
0x3e,
0x41,
0x5d,
0x55,
0x4e,
0x20,
0x7e,
0x9,
0x9,
0x9,
0x7e,
0x7f,
0x49,
0x49,
0x36,
0x3e,
0x41,
0x41,
0x41,
0x22,
0x7f,
0x41,
0x41,
0x3e,
0x7f,
0x49,
0x49,
0x41,
0x7f,
0x9,
0x9,
0x1,
0x3e,
0x41,
0x41,
0x49,
0x3a,
0x7f,
0x8,
0x8,
0x8,
0x7f,
0x41,
0x7f,
0x41,
0x20,
0x40,
0x40,
0x3f,
0x7f,
0x8,
0x14,
0x23,
0x40,
0x7f,
0x40,
0x40,
0x40,
0x7f,
0x2,
0x4,
0x8,
0x4,
0x2,
0x7f,
0x7f,
0x2,
0x4,
0x8,
0x10,
0x7f,
0x3e,
0x41,
0x41,
0x41,
0x41,
0x3e,
0x7f,
0x9,
0x9,
0x9,
0x6,
0x3e,
0x41,
0x51,
0x21,
0x5e,
0x7f,
0x9,
0x19,
0x66,
0x26,
0x49,
0x49,
0x32,
0x1,
0x1,
0x7f,
0x1,
0x1,
0x3f,
0x40,
0x40,
0x40,
0x3f,
0x1f,
0x20,
0x40,
0x20,
0x1f,
0x7f,
0x20,
0x10,
0x8,
0x10,
0x20,
0x7f,
0x41,
0x22,
0x14,
0x8,
0x14,
0x22,
0x41,
0x7,
0x8,
0x78,
0x8,
0x7,
0x61,
0x51,
0x49,
0x45,
0x43,

};
 
Font::font_defn msfont = {
  MSFONT_HEIGHT,
  MSFONT_DATA_SIZE,
  msfont_table,
  msfont_data
};
