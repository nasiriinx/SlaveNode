/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:\Users\nsiri\OneDrive\Desktop\assets\digital display tfb.ttf -o C:\Users\nsiri\OneDrive\Desktop\assets\ui_font_Digital16.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_DIGITAL16
#define UI_FONT_DIGITAL16 1
#endif

#if UI_FONT_DIGITAL16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0x7f, 0xa0,

    /* U+0022 "\"" */
    0xb4,

    /* U+0023 "#" */
    0x0, 0x24, 0x24, 0x24, 0xe7, 0xe7, 0x24, 0x24,
    0x24, 0x0,

    /* U+0024 "$" */
    0x21, 0x8, 0xe8, 0x42, 0xe, 0x8, 0x42, 0x17,
    0x10, 0x80,

    /* U+0025 "%" */
    0x0, 0x44, 0xac, 0x48, 0x0, 0x10, 0x32, 0x25,
    0x22,

    /* U+0026 "&" */
    0x71, 0x2, 0x24, 0x47, 0x31, 0xe2, 0x44, 0x8a,
    0xe4,

    /* U+0027 "'" */
    0xc0,

    /* U+0028 "(" */
    0x72, 0x49, 0x24, 0x8c,

    /* U+0029 ")" */
    0xc4, 0x92, 0x49, 0x38,

    /* U+002A "*" */
    0x10, 0xa8, 0xe7, 0x73, 0x8a, 0x80, 0x0,

    /* U+002B "+" */
    0x4b, 0xa4,

    /* U+002C "," */
    0xc0,

    /* U+002D "-" */
    0xf0,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x4, 0x10, 0x82, 0x0, 0x2, 0x18, 0x42, 0x0,

    /* U+0030 "0" */
    0x74, 0x63, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+0031 "1" */
    0x7f, 0xc0,

    /* U+0032 "2" */
    0x70, 0x42, 0x17, 0x42, 0x10, 0x83, 0x80,

    /* U+0033 "3" */
    0xf0, 0x42, 0x10, 0xf8, 0x21, 0xf, 0x80,

    /* U+0034 "4" */
    0x8c, 0x63, 0x17, 0x4, 0x21, 0x8,

    /* U+0035 "5" */
    0x74, 0x21, 0x7, 0x4, 0x21, 0xb, 0x80,

    /* U+0036 "6" */
    0x74, 0x21, 0x7, 0x46, 0x31, 0x8b, 0x80,

    /* U+0037 "7" */
    0xf0, 0x42, 0x10, 0x84, 0x21, 0x8, 0x0,

    /* U+0038 "8" */
    0x74, 0x63, 0x17, 0x46, 0x31, 0x8b, 0x80,

    /* U+0039 "9" */
    0x74, 0x63, 0x18, 0xb8, 0x21, 0x8, 0x40,

    /* U+003A ":" */
    0x81,

    /* U+003B ";" */
    0x81, 0x80,

    /* U+003C "<" */
    0x8, 0xb8, 0x20, 0x80,

    /* U+003D "=" */
    0xf0, 0xf,

    /* U+003E ">" */
    0x84, 0x3c, 0x80,

    /* U+003F "?" */
    0x70, 0x42, 0x10, 0xba, 0x10, 0x84, 0x20,

    /* U+0040 "@" */
    0x7a, 0x19, 0x6b, 0xac, 0x4a, 0xaa, 0x81, 0xe0,

    /* U+0041 "A" */
    0x74, 0x63, 0x18, 0xba, 0x31, 0x8c, 0x40,

    /* U+0042 "B" */
    0x74, 0x63, 0x17, 0x46, 0x31, 0x8b, 0x80,

    /* U+0043 "C" */
    0x7c, 0x21, 0x8, 0x42, 0x10, 0x83, 0xc0,

    /* U+0044 "D" */
    0x74, 0x63, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+0045 "E" */
    0x7c, 0x21, 0x8, 0x3e, 0x10, 0x83, 0xc0,

    /* U+0046 "F" */
    0x7c, 0x21, 0x8, 0x3e, 0x10, 0x84, 0x0,

    /* U+0047 "G" */
    0x74, 0x21, 0x8, 0x3a, 0x31, 0x8b, 0x80,

    /* U+0048 "H" */
    0x8c, 0x63, 0x17, 0x46, 0x31, 0x88,

    /* U+0049 "I" */
    0x7f, 0xc0,

    /* U+004A "J" */
    0x0, 0x42, 0x10, 0xc6, 0x31, 0x8b, 0x80,

    /* U+004B "K" */
    0x8c, 0x63, 0x17, 0x52, 0xd2, 0x88,

    /* U+004C "L" */
    0x4, 0x21, 0x8, 0x42, 0x10, 0x83, 0xc0,

    /* U+004D "M" */
    0x75, 0x6b, 0x18, 0xc6, 0x31, 0x88, 0x0,

    /* U+004E "N" */
    0x4, 0x73, 0x59, 0xc6, 0x31, 0x88, 0x0,

    /* U+004F "O" */
    0x74, 0x63, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+0050 "P" */
    0x74, 0x63, 0x18, 0xba, 0x10, 0x84, 0x0,

    /* U+0051 "Q" */
    0x74, 0x63, 0x18, 0xc6, 0xb3, 0x8b, 0x80,

    /* U+0052 "R" */
    0x74, 0x63, 0x18, 0xba, 0x92, 0x8c, 0x0,

    /* U+0053 "S" */
    0x74, 0x21, 0x8, 0x38, 0x21, 0xb, 0x80,

    /* U+0054 "T" */
    0xf1, 0x8, 0x42, 0x0, 0x84, 0x21, 0x0,

    /* U+0055 "U" */
    0x4, 0x63, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+0056 "V" */
    0x8c, 0x63, 0x10, 0x46, 0x2a, 0x50,

    /* U+0057 "W" */
    0x4, 0x63, 0x18, 0xc6, 0xb5, 0xab, 0x80,

    /* U+0058 "X" */
    0x8c, 0xb4, 0x8f, 0x1, 0x5a, 0x88,

    /* U+0059 "Y" */
    0x8e, 0x54, 0x22, 0x10, 0x84, 0x20,

    /* U+005A "Z" */
    0xf0, 0x46, 0x20, 0x11, 0x8, 0x7, 0x80,

    /* U+005B "[" */
    0x72, 0x49, 0x24, 0x8c,

    /* U+005C "\\" */
    0x81, 0x6, 0x8, 0x0, 0x0, 0x82, 0xc, 0x10,

    /* U+005D "]" */
    0xc4, 0x92, 0x49, 0x38,

    /* U+005E "^" */
    0x1, 0x8, 0xa8, 0x80,

    /* U+005F "_" */
    0x78,

    /* U+0060 "`" */
    0x90,

    /* U+0061 "a" */
    0x74, 0x63, 0x18, 0xba, 0x31, 0x8c, 0x40,

    /* U+0062 "b" */
    0x74, 0x63, 0x17, 0x46, 0x31, 0x8b, 0x80,

    /* U+0063 "c" */
    0x7c, 0x21, 0x8, 0x42, 0x10, 0x83, 0xc0,

    /* U+0064 "d" */
    0x74, 0x63, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+0065 "e" */
    0x7c, 0x21, 0x8, 0x3e, 0x10, 0x83, 0xc0,

    /* U+0066 "f" */
    0x7c, 0x21, 0x8, 0x3e, 0x10, 0x84, 0x0,

    /* U+0067 "g" */
    0x74, 0x21, 0x8, 0x3a, 0x31, 0x8b, 0x80,

    /* U+0068 "h" */
    0x8c, 0x63, 0x17, 0x46, 0x31, 0x88,

    /* U+0069 "i" */
    0x7f, 0xc0,

    /* U+006A "j" */
    0x0, 0x42, 0x10, 0xc6, 0x31, 0x8b, 0x80,

    /* U+006B "k" */
    0x8c, 0x63, 0x17, 0x52, 0xd2, 0x88,

    /* U+006C "l" */
    0x4, 0x21, 0x8, 0x42, 0x10, 0x83, 0xc0,

    /* U+006D "m" */
    0x75, 0x6b, 0x18, 0xc6, 0x31, 0x88, 0x0,

    /* U+006E "n" */
    0x4, 0x73, 0x59, 0xc6, 0x31, 0x88, 0x0,

    /* U+006F "o" */
    0x74, 0x63, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+0070 "p" */
    0x74, 0x63, 0x18, 0xba, 0x10, 0x84, 0x0,

    /* U+0071 "q" */
    0x74, 0x63, 0x18, 0xc6, 0xb3, 0x8b, 0x80,

    /* U+0072 "r" */
    0x74, 0x63, 0x18, 0xba, 0x92, 0x8c, 0x0,

    /* U+0073 "s" */
    0x74, 0x21, 0x8, 0x38, 0x21, 0xb, 0x80,

    /* U+0074 "t" */
    0xf1, 0x8, 0x42, 0x0, 0x84, 0x21, 0x0,

    /* U+0075 "u" */
    0x4, 0x63, 0x18, 0xc6, 0x31, 0x8b, 0x80,

    /* U+0076 "v" */
    0x8c, 0x63, 0x10, 0x46, 0x2a, 0x50,

    /* U+0077 "w" */
    0x4, 0x63, 0x18, 0xc6, 0xb5, 0xab, 0x80,

    /* U+0078 "x" */
    0x8c, 0xb4, 0x8f, 0x1, 0x5a, 0x88,

    /* U+0079 "y" */
    0x8e, 0x54, 0x22, 0x10, 0x84, 0x20,

    /* U+007A "z" */
    0xf0, 0x46, 0x20, 0x11, 0x8, 0x7, 0x80,

    /* U+007B "{" */
    0x19, 0x8, 0x4c, 0x10, 0x84, 0x20, 0xc0,

    /* U+007C "|" */
    0xfb, 0xc0,

    /* U+007D "}" */
    0xc1, 0x8, 0x41, 0x90, 0x84, 0x26, 0x0,

    /* U+007E "~" */
    0x62, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 64, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 50, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 3, .adv_w = 63, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 4, .adv_w = 143, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 94, .box_w = 5, .box_h = 16, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 24, .adv_w = 112, .box_w = 8, .box_h = 9, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 33, .adv_w = 210, .box_w = 7, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 42, .adv_w = 38, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 43, .adv_w = 63, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 63, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 0, .ofs_y = 4},
    {.bitmap_index = 58, .adv_w = 87, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 60, .adv_w = 25, .box_w = 1, .box_h = 2, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 61, .adv_w = 84, .box_w = 4, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 62, .adv_w = 31, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 63, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 97, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 29, .box_w = 1, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 98, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 87, .adv_w = 85, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 94, .adv_w = 98, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 98, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 107, .adv_w = 98, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 99, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 98, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 135, .adv_w = 32, .box_w = 1, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 34, .box_w = 1, .box_h = 9, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 138, .adv_w = 88, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 142, .adv_w = 87, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 144, .adv_w = 88, .box_w = 4, .box_h = 5, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 147, .adv_w = 104, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 154, .adv_w = 112, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 88, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 89, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 176, .adv_w = 88, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 183, .adv_w = 89, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 88, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 197, .adv_w = 88, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 204, .adv_w = 98, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 211, .adv_w = 97, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 25, .box_w = 1, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 219, .adv_w = 101, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 99, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 88, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 100, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 246, .adv_w = 101, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 101, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 260, .adv_w = 101, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 100, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 101, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 101, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 88, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 295, .adv_w = 101, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 98, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 100, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 315, .adv_w = 96, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 321, .adv_w = 93, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 327, .adv_w = 95, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 334, .adv_w = 58, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 338, .adv_w = 94, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 346, .adv_w = 63, .box_w = 3, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 350, .adv_w = 94, .box_w = 5, .box_h = 5, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 354, .adv_w = 82, .box_w = 5, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 355, .adv_w = 82, .box_w = 2, .box_h = 2, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 356, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 94, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 85, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 377, .adv_w = 94, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 384, .adv_w = 82, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 391, .adv_w = 84, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 398, .adv_w = 98, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 96, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 411, .adv_w = 26, .box_w = 1, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 413, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 98, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 426, .adv_w = 90, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 94, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 95, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 447, .adv_w = 94, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 461, .adv_w = 97, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 475, .adv_w = 97, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 482, .adv_w = 87, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 496, .adv_w = 96, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 96, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 509, .adv_w = 99, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 515, .adv_w = 96, .box_w = 5, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 528, .adv_w = 98, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 535, .adv_w = 63, .box_w = 1, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 99, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 544, .adv_w = 101, .box_w = 6, .box_h = 2, .ofs_x = 0, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_Digital16 = {
#else
lv_font_t ui_font_Digital16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_DIGITAL16*/

