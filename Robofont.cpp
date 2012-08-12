#include "Font.h"

#define ROBOFONT_HEIGHT 9
#define ROBOFONT_DATA_SIZE 188

Font::char_entry robofont_table[128] PROGMEM = {
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
  {1, 5},
  {0,0},
  {6, 5},
  {11, 4},
  {15, 5},
  {20, 5},
  {25, 5},
  {30, 5},
  {35, 5},
  {40, 5},
  {45, 5},
  {50, 5},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {0,0},
  {55, 1},
  {56, 5},
  {61, 5},
  {66, 5},
  {71, 5},
  {76, 5},
  {81, 5},
  {86, 5},
  {91, 5},
  {96, 5},
  {101, 2},
  {103, 5},
  {108, 5},
  {113, 5},
  {118, 5},
  {123, 5},
  {128, 5},
  {133, 5},
  {138, 5},
  {143, 5},
  {148, 5},
  {153, 5},
  {158, 5},
  {163, 5},
  {168, 5},
  {173, 5},
  {178, 5},
  {183, 5},
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
 
prog_uint8_t robofont_data[ROBOFONT_DATA_SIZE] PROGMEM = {
0x40,
0x7e,
0x42,
0x42,
0x42,
0x7e,
0x7e,
0x42,
0x42,
0x42,
0x7e,
0x40,
0x42,
0x7e,
0x40,
0x78,
0x4a,
0x4a,
0x4a,
0xe,
0x40,
0x4a,
0x4a,
0x4a,
0x7e,
0x1e,
0x10,
0x10,
0x7c,
0x10,
0x4e,
0x4a,
0x4a,
0x4a,
0x78,
0x7e,
0x4a,
0x4a,
0x4a,
0x78,
0x42,
0x22,
0x12,
0xa,
0x6,
0x7e,
0x4a,
0x4a,
0x4a,
0x7e,
0xe,
0x4a,
0x4a,
0x4a,
0x7e,
0x5e,
0x6,
0x6,
0x52,
0x12,
0x1e,
0x7e,
0xa,
0xa,
0x7e,
0x7e,
0x7e,
0x7a,
0x4a,
0x4e,
0x78,
0x7e,
0x7e,
0x42,
0x42,
0x42,
0x7e,
0x7e,
0x42,
0x42,
0x3c,
0x7e,
0x7a,
0x4a,
0x4a,
0x4a,
0x7e,
0x7a,
0xa,
0xa,
0xa,
0x7e,
0x7e,
0x42,
0x56,
0x76,
0x7e,
0x7e,
0x8,
0x8,
0x7e,
0x7e,
0x7e,
0x60,
0x60,
0x40,
0x40,
0x7e,
0x7e,
0x7e,
0x18,
0x24,
0x42,
0x7e,
0x60,
0x60,
0x60,
0x60,
0x7e,
0x2,
0xe,
0x2,
0x7e,
0x7e,
0x7a,
0x2,
0x2,
0x7e,
0x7e,
0x42,
0x42,
0x46,
0x7e,
0x7e,
0x7a,
0xa,
0xa,
0xe,
0x7e,
0x42,
0xe2,
0xe2,
0x7e,
0x7e,
0x7a,
0xa,
0xe,
0x78,
0x6e,
0x6a,
0x4a,
0x4a,
0x7a,
0x2,
0x2,
0x7e,
0x7a,
0x2,
0x7e,
0x40,
0x40,
0x7e,
0x7e,
0x1e,
0x3e,
0x40,
0x20,
0x1e,
0x7e,
0x60,
0x7e,
0x40,
0x7e,
0x42,
0x24,
0x18,
0x24,
0x42,
0xe,
0xe,
0x78,
0x8,
0xe,
0x46,
0x66,
0x52,
0x4a,
0x46,

};

Font::font_defn robofont = {
  ROBOFONT_HEIGHT,
  ROBOFONT_DATA_SIZE,
  robofont_table,
  robofont_data
};