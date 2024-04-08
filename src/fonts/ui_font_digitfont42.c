/*******************************************************************************
 * Size: 42 px
 * Bpp: 1
 * Opts: --bpp 1 --size 42 --font C:\Users\nsiri\OneDrive\Desktop\assets\digital display tfb.ttf -o C:\Users\nsiri\OneDrive\Desktop\assets\ui_font_digitfont42.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_DIGITFONT42
#define UI_FONT_DIGITFONT42 1
#endif

#if UI_FONT_DIGITFONT42

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xb, 0x6d, 0xb6, 0xdb, 0x0, 0x36, 0xdb, 0x6d,
    0xb2, 0x1b, 0x0,

    /* U+0022 "\"" */
    0x47, 0x3c, 0xf3, 0xce, 0x20,

    /* U+0023 "#" */
    0x2, 0x2, 0x0, 0x10, 0x10, 0x0, 0xc1, 0x80,
    0x6, 0xc, 0x0, 0x30, 0x60, 0x1, 0x83, 0x0,
    0xc, 0x18, 0x0, 0x60, 0xc0, 0x3, 0x6, 0x7,
    0xf8, 0x3f, 0xfe, 0x40, 0x3e, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7d, 0x83, 0x7f, 0xfc, 0x1f, 0xe0,
    0x60, 0xc0, 0x3, 0x6, 0x0, 0x18, 0x30, 0x0,
    0xc1, 0x80, 0x6, 0xc, 0x0, 0x30, 0x60, 0x1,
    0x83, 0x0, 0x8, 0x8, 0x0, 0x0, 0x40,

    /* U+0024 "$" */
    0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0, 0x30,
    0x0, 0x0, 0xff, 0x87, 0xfc, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0xc, 0x0, 0x60, 0x3, 0x0,
    0x18, 0x0, 0xc0, 0x1, 0xff, 0xf, 0xf8, 0x0,
    0x30, 0x1, 0x80, 0xc, 0x0, 0x60, 0x3, 0x0,
    0x18, 0x0, 0xc0, 0x6, 0x0, 0x30, 0x1, 0x9f,
    0xf0, 0xff, 0x80, 0x0, 0x3, 0x0, 0x18, 0x0,
    0xc0, 0x6, 0x0, 0x30, 0x1, 0x0,

    /* U+0025 "%" */
    0x0, 0x1, 0x0, 0x0, 0xe0, 0x0, 0x1c, 0x0,
    0x7, 0x3, 0x80, 0xe0, 0x7c, 0x38, 0x31, 0x87,
    0x6, 0x31, 0xc0, 0x38, 0x30, 0x7, 0x6, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1c, 0x0, 0x7, 0x80,
    0x0, 0xe0, 0x70, 0x38, 0xe, 0x7, 0x6, 0x31,
    0xc0, 0xc6, 0x38, 0x18, 0xce, 0x0, 0xe0, 0xc0,
    0x1c,

    /* U+0026 "&" */
    0x3f, 0xe0, 0x7, 0xfc, 0x3, 0x0, 0x0, 0x60,
    0x0, 0xc, 0x0, 0x1, 0x80, 0x10, 0x30, 0x6,
    0x6, 0x0, 0xc0, 0xc0, 0x18, 0x18, 0x3, 0x3,
    0x0, 0x60, 0x1f, 0xf0, 0x23, 0xfe, 0xf, 0x80,
    0x33, 0xb0, 0x6, 0xe6, 0x0, 0xd8, 0xc0, 0x18,
    0x18, 0x3, 0x3, 0x0, 0x60, 0x60, 0xc, 0xc,
    0x1, 0xb9, 0x80, 0x37, 0xb0, 0x6, 0x79, 0xff,
    0x7, 0x3f, 0xe0, 0x40,

    /* U+0027 "'" */
    0x7f, 0xe0,

    /* U+0028 "(" */
    0x7e, 0xbe, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0, 0x0, 0x0, 0x0, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xbe,
    0x7e,

    /* U+0029 ")" */
    0x7e, 0x7d, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
    0x3, 0x3, 0x3, 0x0, 0x0, 0x0, 0x3, 0x3,
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7d,
    0x7e,

    /* U+002A "*" */
    0x0, 0x80, 0x0, 0xc0, 0x0, 0x60, 0x7, 0x31,
    0x83, 0xd9, 0xc0, 0xed, 0xc0, 0x38, 0xe0, 0xc,
    0x60, 0x7c, 0x1f, 0x7e, 0xf, 0xc1, 0x8c, 0x1,
    0xe7, 0x1, 0xdb, 0xc1, 0xcc, 0xe0, 0xc6, 0x30,
    0x3, 0x0, 0x1, 0x0, 0x0,

    /* U+002B "+" */
    0x0, 0x3, 0x0, 0xc0, 0x30, 0x7f, 0x9f, 0xe0,
    0xc0, 0x30, 0xc, 0x0, 0x0,

    /* U+002C "," */
    0x7f, 0xe0,

    /* U+002D "-" */
    0xff, 0xff, 0xf0,

    /* U+002E "." */
    0x6c,

    /* U+002F "/" */
    0x0, 0x6, 0x0, 0x1c, 0x0, 0x78, 0x0, 0xe0,
    0x3, 0xc0, 0x7, 0x0, 0x1c, 0x0, 0x38, 0x0,
    0xe0, 0x1, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7, 0x0, 0xe, 0x0,
    0x3c, 0x0, 0x70, 0x1, 0xc0, 0x7, 0x80, 0xe,
    0x0, 0x3c, 0x0, 0x70, 0x0, 0xc0, 0x0,

    /* U+0030 "0" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x3, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xf, 0x0, 0x67, 0xfc, 0x3f,
    0xe0,

    /* U+0031 "1" */
    0x5f, 0xff, 0xfc, 0x3f, 0xff, 0xf4,

    /* U+0032 "2" */
    0x3f, 0xe1, 0xff, 0x0, 0x6, 0x0, 0x30, 0x1,
    0x80, 0xc, 0x0, 0x60, 0x3, 0x0, 0x18, 0x0,
    0xc0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0x3, 0x0,
    0x18, 0x0, 0xc0, 0x6, 0x0, 0x30, 0x1, 0x80,
    0xc, 0x0, 0x60, 0x3, 0x0, 0x7, 0xfc, 0x3f,
    0xe0,

    /* U+0033 "3" */
    0xff, 0x9f, 0xf0, 0x1, 0x80, 0x30, 0x6, 0x0,
    0xc0, 0x18, 0x3, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x3f, 0xf9, 0xff, 0x0, 0x18, 0x3, 0x0, 0x60,
    0xc, 0x1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x1f,
    0xfc, 0xff, 0x80,

    /* U+0034 "4" */
    0x0, 0x4, 0x0, 0x70, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x0, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0xc, 0x0, 0x20, 0x0,

    /* U+0035 "5" */
    0x3f, 0xe1, 0xff, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x0, 0x7f, 0xc3, 0xfe, 0x0, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0xc, 0x0, 0x67, 0xfc, 0x3f,
    0xe0,

    /* U+0036 "6" */
    0x3f, 0xe1, 0xff, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x0, 0x7f, 0xc3, 0xfe, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xf, 0x0, 0x67, 0xfc, 0x3f,
    0xe0,

    /* U+0037 "7" */
    0x7f, 0xe1, 0xff, 0x0, 0x6, 0x0, 0x30, 0x1,
    0x80, 0xc, 0x0, 0x60, 0x3, 0x0, 0x18, 0x0,
    0xc0, 0x6, 0x0, 0x0, 0x0, 0x0, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0xc, 0x0, 0x20, 0x1,

    /* U+0038 "8" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xf, 0x0, 0x67, 0xfc, 0x3f,
    0xe0,

    /* U+0039 "9" */
    0x7f, 0xe5, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x0, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0xc, 0x0, 0x20, 0x0,

    /* U+003A ":" */
    0x66, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x66,

    /* U+003B ";" */
    0x6f, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x6, 0x66, 0x66, 0x0,

    /* U+003C "<" */
    0x0, 0x20, 0x7, 0x0, 0xe0, 0x1c, 0x1, 0x80,
    0x0, 0x7c, 0xf, 0xc0, 0x1, 0x80, 0x1c, 0x1,
    0xe0, 0xf, 0x0, 0x70, 0x2,

    /* U+003D "=" */
    0x7f, 0xdf, 0xf0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xff, 0x7f, 0xc0,

    /* U+003E ">" */
    0x60, 0x7, 0x0, 0x38, 0x1, 0xc0, 0x8, 0x0,
    0x1e, 0x1, 0xf0, 0xc0, 0x1c, 0x3, 0x80, 0x70,
    0x6, 0x0, 0x0, 0x0,

    /* U+003F "?" */
    0x1f, 0xf0, 0x7f, 0xc0, 0x0, 0xc0, 0x3, 0x0,
    0xc, 0x0, 0x30, 0x0, 0xc0, 0x3, 0x0, 0xc,
    0x0, 0x30, 0x0, 0xc7, 0xfc, 0x1f, 0xf1, 0x80,
    0x6, 0x0, 0x18, 0x0, 0x60, 0x1, 0x80, 0x6,
    0x0, 0x18, 0x0, 0x60, 0x1, 0x80, 0x6, 0x0,
    0x0, 0x0, 0x60, 0x1, 0x80, 0x0,

    /* U+0040 "@" */
    0x7e, 0x7e, 0xbf, 0x7d, 0xc0, 0x3, 0xc0, 0x3,
    0xc0, 0x3, 0xc0, 0x3, 0xc3, 0xe3, 0xc4, 0x13,
    0xc4, 0x13, 0xc4, 0x13, 0xc4, 0x13, 0x4, 0x10,
    0x7, 0xf0, 0x3, 0xe0, 0xc4, 0x10, 0xc4, 0x10,
    0xc4, 0x10, 0xc4, 0x10, 0xc4, 0x10, 0xc0, 0x0,
    0xc0, 0x0, 0xc0, 0x0, 0xc0, 0x0, 0xbe, 0x7c,
    0x7f, 0x7e,

    /* U+0041 "A" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xe, 0x0, 0x20, 0x0,

    /* U+0042 "B" */
    0x7f, 0xe5, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xf, 0x0, 0x77, 0xfc, 0x7f,
    0xe0,

    /* U+0043 "C" */
    0x7f, 0xf7, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x5,
    0xff, 0x7f, 0xe0,

    /* U+0044 "D" */
    0x7f, 0xe5, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x3, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xf, 0x0, 0x77, 0xfc, 0x7f,
    0xe0,

    /* U+0045 "E" */
    0x7f, 0xf7, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x60,
    0x3, 0xfe, 0x7f, 0xf0, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x5,
    0xff, 0x7f, 0xe0,

    /* U+0046 "F" */
    0x7f, 0xf7, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x1f,
    0xf3, 0xff, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0x20, 0x0,
    0x0,

    /* U+0047 "G" */
    0x7f, 0xe5, 0xff, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0x3, 0xfe, 0x1f, 0xf3, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xf, 0x0, 0x77, 0xfc, 0x7f,
    0xe0,

    /* U+0048 "H" */
    0x0, 0x4, 0x0, 0x70, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xe, 0x0, 0x20, 0x0,

    /* U+0049 "I" */
    0x2f, 0xff, 0xff, 0xf, 0xff, 0xfe, 0x0,

    /* U+004A "J" */
    0x0, 0x0, 0x0, 0x40, 0x6, 0x0, 0x30, 0x1,
    0x80, 0xc, 0x0, 0x60, 0x3, 0x0, 0x18, 0x0,
    0xc0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xe, 0xff, 0x8f, 0xfc,

    /* U+004B "K" */
    0x0, 0x4, 0x0, 0x70, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0x3, 0x18,
    0x18, 0xe0, 0xc3, 0x86, 0xe, 0x30, 0x39, 0x80,
    0xec, 0x3, 0xe0, 0xe, 0x0, 0x20, 0x0,

    /* U+004C "L" */
    0x0, 0x4, 0x0, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x0, 0x0, 0x0, 0x0, 0x60, 0x3, 0x0,
    0x18, 0x0, 0xc0, 0x6, 0x0, 0x30, 0x1, 0x80,
    0xc, 0x0, 0x60, 0x2, 0xff, 0x8f, 0xfe,

    /* U+004D "M" */
    0x7f, 0xf5, 0xff, 0x70, 0xc7, 0x86, 0x3c, 0x31,
    0xe1, 0x8f, 0xc, 0x78, 0x63, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xe, 0x0, 0x20, 0x0,

    /* U+004E "N" */
    0x0, 0x4, 0x0, 0x70, 0x7, 0xc0, 0x3d, 0x1,
    0xec, 0xf, 0x78, 0x79, 0xe3, 0xc7, 0x9e, 0x1e,
    0xf0, 0x76, 0x1, 0x80, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xe, 0x0, 0x30, 0x1,

    /* U+004F "O" */
    0x7f, 0xf5, 0xff, 0x70, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x3, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xf, 0x0, 0x77, 0xfd, 0x7f,
    0xf0,

    /* U+0050 "P" */
    0x7f, 0xf5, 0xff, 0x70, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0x3, 0x0,
    0x18, 0x0, 0xc0, 0x6, 0x0, 0x30, 0x1, 0x80,
    0xc, 0x0, 0x60, 0x2, 0x0, 0x0, 0x0,

    /* U+0051 "Q" */
    0x7f, 0xf5, 0xff, 0x70, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x3, 0x0,
    0x78, 0xc3, 0xc7, 0x1e, 0x1c, 0xf0, 0x77, 0x81,
    0xbc, 0x5, 0xe0, 0x2f, 0x0, 0x77, 0xfd, 0x7f,
    0xf0,

    /* U+0052 "R" */
    0x7f, 0xf5, 0xff, 0x70, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0x3, 0x18,
    0x18, 0xe0, 0xc3, 0x86, 0xe, 0x30, 0x39, 0x80,
    0xec, 0x3, 0xe0, 0xe, 0x0, 0x20, 0x0,

    /* U+0053 "S" */
    0x7f, 0xf5, 0xff, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0x3, 0xfe, 0x1f, 0xf0, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0xc, 0x0, 0x67, 0xfd, 0x7f,
    0xf0,

    /* U+0054 "T" */
    0xff, 0xf3, 0xfc, 0x0, 0x0, 0x60, 0x6, 0x0,
    0x60, 0x6, 0x0, 0x60, 0x6, 0x0, 0x60, 0x6,
    0x0, 0x60, 0x6, 0x0, 0x0, 0x4, 0x0, 0x60,
    0x6, 0x0, 0x60, 0x6, 0x0, 0x60, 0x6, 0x0,
    0x60, 0x6, 0x0, 0x60,

    /* U+0055 "U" */
    0x0, 0x4, 0x0, 0x70, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xe, 0xff, 0xaf, 0xfe,

    /* U+0056 "V" */
    0x80, 0xe, 0x0, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x20, 0xb, 0x0,
    0x7c, 0x7, 0x60, 0x3b, 0x83, 0x8e, 0x1c, 0x71,
    0xc1, 0xdc, 0xe, 0xe0, 0x36, 0x0,

    /* U+0057 "W" */
    0x0, 0x4, 0x0, 0x70, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc3, 0x1e, 0x18, 0xf0, 0xc7, 0x86,
    0x3c, 0x31, 0xe1, 0x8f, 0x0, 0x77, 0xfd, 0x7f,
    0xf0,

    /* U+0058 "X" */
    0x40, 0xb, 0x80, 0x7f, 0x1, 0x9c, 0xe, 0x38,
    0x70, 0xe1, 0xc1, 0xce, 0x7, 0x38, 0xc, 0xc0,
    0x0, 0x3, 0xff, 0xf, 0xfc, 0x0, 0x0, 0x33,
    0x1, 0xce, 0x7, 0x38, 0x38, 0x70, 0xe1, 0xc7,
    0x3, 0xb8, 0xe, 0xe0, 0x1f, 0x0, 0x70,

    /* U+0059 "Y" */
    0xc0, 0x37, 0x1, 0xf8, 0x1c, 0xe1, 0xc7, 0xe,
    0x1c, 0xe0, 0x67, 0x3, 0xf0, 0x9, 0x0, 0x20,
    0x1, 0x80, 0xc, 0x0, 0x60, 0x3, 0x0, 0x18,
    0x0, 0xc0, 0x6, 0x0, 0x30, 0x1, 0x80, 0xc,
    0x0, 0x20, 0x1, 0x0,

    /* U+005A "Z" */
    0x7f, 0xf1, 0xff, 0x0, 0x6, 0x0, 0x70, 0x3,
    0x0, 0x38, 0x3, 0x80, 0x1c, 0x1, 0xc0, 0xe,
    0x0, 0x60, 0x0, 0x0, 0x60, 0x7, 0x0, 0x38,
    0x3, 0x80, 0x1c, 0x1, 0xc0, 0xc, 0x0, 0xe0,
    0x2, 0x0, 0x0, 0x0, 0xff, 0x8f, 0xfe,

    /* U+005B "[" */
    0x7e, 0xbe, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0, 0x0, 0x0, 0x0, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xbe,
    0x7e,

    /* U+005C "\\" */
    0xc0, 0x1, 0xc0, 0x3, 0xc0, 0x3, 0x80, 0x7,
    0x80, 0x7, 0x0, 0x7, 0x0, 0xe, 0x0, 0xe,
    0x0, 0x1c, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x70, 0x0, 0xe0,
    0x1, 0xe0, 0x1, 0xc0, 0x1, 0xc0, 0x3, 0xc0,
    0x3, 0x80, 0x7, 0x80, 0x7, 0x0, 0x6,

    /* U+005D "]" */
    0x7e, 0x7d, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3,
    0x3, 0x3, 0x3, 0x0, 0x0, 0x0, 0x3, 0x3,
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7d,
    0x7e,

    /* U+005E "^" */
    0x2, 0x0, 0x60, 0x6, 0x0, 0x60, 0x6, 0x0,
    0x60, 0x0, 0x3, 0x9c, 0x79, 0xef, 0xf, 0xe0,
    0x7c, 0x3,

    /* U+005F "_" */
    0x3f, 0xe3, 0xff, 0xc0,

    /* U+0060 "`" */
    0x47, 0x1c, 0x71, 0x80,

    /* U+0061 "a" */
    0x3f, 0xe1, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xe, 0x0, 0x20, 0x0,

    /* U+0062 "b" */
    0x7f, 0xe5, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xf, 0x0, 0x77, 0xfc, 0x7f,
    0xe0,

    /* U+0063 "c" */
    0x7f, 0xf7, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x5,
    0xff, 0x7f, 0xe0,

    /* U+0064 "d" */
    0x7f, 0xe5, 0xff, 0x30, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x3, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xf, 0x0, 0x77, 0xfc, 0x7f,
    0xe0,

    /* U+0065 "e" */
    0x7f, 0xf7, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x60,
    0x3, 0xfe, 0x7f, 0xf0, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x5,
    0xff, 0x7f, 0xe0,

    /* U+0066 "f" */
    0x7f, 0xf7, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x1f,
    0xf3, 0xff, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0x20, 0x0,
    0x0,

    /* U+0067 "g" */
    0x7f, 0xe5, 0xff, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0x3, 0xfe, 0x1f, 0xf3, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xf, 0x0, 0x77, 0xfc, 0x7f,
    0xe0,

    /* U+0068 "h" */
    0x0, 0x4, 0x0, 0x70, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xe, 0x0, 0x20, 0x0,

    /* U+0069 "i" */
    0x2f, 0xff, 0xff, 0xf, 0xff, 0xfe, 0x0,

    /* U+006A "j" */
    0x0, 0x0, 0x0, 0x40, 0x6, 0x0, 0x30, 0x1,
    0x80, 0xc, 0x0, 0x60, 0x3, 0x0, 0x18, 0x0,
    0xc0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xe, 0xff, 0x8f, 0xfc,

    /* U+006B "k" */
    0x0, 0x4, 0x0, 0x70, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0x3, 0x18,
    0x18, 0xe0, 0xc3, 0x86, 0xe, 0x30, 0x39, 0x80,
    0xec, 0x3, 0xe0, 0xe, 0x0, 0x20, 0x0,

    /* U+006C "l" */
    0x0, 0x4, 0x0, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x0, 0x0, 0x0, 0x0, 0x60, 0x3, 0x0,
    0x18, 0x0, 0xc0, 0x6, 0x0, 0x30, 0x1, 0x80,
    0xc, 0x0, 0x60, 0x2, 0xff, 0x8f, 0xfe,

    /* U+006D "m" */
    0x7f, 0xf5, 0xff, 0x70, 0xc7, 0x86, 0x3c, 0x31,
    0xe1, 0x8f, 0xc, 0x78, 0x63, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xe, 0x0, 0x20, 0x0,

    /* U+006E "n" */
    0x0, 0x4, 0x0, 0x70, 0x7, 0xc0, 0x3d, 0x1,
    0xec, 0xf, 0x78, 0x79, 0xe3, 0xc7, 0x9e, 0x1e,
    0xf0, 0x76, 0x1, 0x80, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xe, 0x0, 0x30, 0x1,

    /* U+006F "o" */
    0x7f, 0xf5, 0xff, 0x70, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x3, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xf, 0x0, 0x77, 0xfd, 0x7f,
    0xf0,

    /* U+0070 "p" */
    0x7f, 0xf5, 0xff, 0x70, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0x3, 0x0,
    0x18, 0x0, 0xc0, 0x6, 0x0, 0x30, 0x1, 0x80,
    0xc, 0x0, 0x60, 0x2, 0x0, 0x0, 0x0,

    /* U+0071 "q" */
    0x7f, 0xf5, 0xff, 0x70, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x0, 0x3, 0x0,
    0x78, 0xc3, 0xc7, 0x1e, 0x1c, 0xf0, 0x77, 0x81,
    0xbc, 0x5, 0xe0, 0x2f, 0x0, 0x77, 0xfd, 0x7f,
    0xf0,

    /* U+0072 "r" */
    0x7f, 0xf5, 0xff, 0x70, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x7f, 0xc3, 0xfe, 0x60, 0x3, 0x18,
    0x18, 0xe0, 0xc3, 0x86, 0xe, 0x30, 0x39, 0x80,
    0xec, 0x3, 0xe0, 0xe, 0x0, 0x20, 0x0,

    /* U+0073 "s" */
    0x7f, 0xf5, 0xff, 0x30, 0x1, 0x80, 0xc, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0x3, 0xfe, 0x1f, 0xf0, 0x0,
    0x60, 0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0xc, 0x0, 0x67, 0xfd, 0x7f,
    0xf0,

    /* U+0074 "t" */
    0xff, 0xf3, 0xfc, 0x0, 0x0, 0x60, 0x6, 0x0,
    0x60, 0x6, 0x0, 0x60, 0x6, 0x0, 0x60, 0x6,
    0x0, 0x60, 0x6, 0x0, 0x0, 0x4, 0x0, 0x60,
    0x6, 0x0, 0x60, 0x6, 0x0, 0x60, 0x6, 0x0,
    0x60, 0x6, 0x0, 0x60,

    /* U+0075 "u" */
    0x0, 0x4, 0x0, 0x70, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc0, 0x1e, 0x0, 0xf0, 0x7, 0x80,
    0x3c, 0x1, 0xe0, 0xe, 0xff, 0xaf, 0xfe,

    /* U+0076 "v" */
    0x80, 0xe, 0x0, 0xf0, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x20, 0xb, 0x0,
    0x7c, 0x7, 0x60, 0x3b, 0x83, 0x8e, 0x1c, 0x71,
    0xc1, 0xdc, 0xe, 0xe0, 0x36, 0x0,

    /* U+0077 "w" */
    0x0, 0x4, 0x0, 0x70, 0x7, 0x80, 0x3c, 0x1,
    0xe0, 0xf, 0x0, 0x78, 0x3, 0xc0, 0x1e, 0x0,
    0xf0, 0x6, 0x0, 0x0, 0x0, 0x60, 0xf, 0x0,
    0x78, 0x3, 0xc3, 0x1e, 0x18, 0xf0, 0xc7, 0x86,
    0x3c, 0x31, 0xe1, 0x8f, 0x0, 0x77, 0xfd, 0x7f,
    0xf0,

    /* U+0078 "x" */
    0x40, 0xb, 0x80, 0x7f, 0x1, 0x9c, 0xe, 0x38,
    0x70, 0xe1, 0xc1, 0xce, 0x7, 0x38, 0xc, 0xc0,
    0x0, 0x3, 0xff, 0xf, 0xfc, 0x0, 0x0, 0x33,
    0x1, 0xce, 0x7, 0x38, 0x38, 0x70, 0xe1, 0xc7,
    0x3, 0xb8, 0xe, 0xe0, 0x1f, 0x0, 0x70,

    /* U+0079 "y" */
    0xc0, 0x37, 0x1, 0xf8, 0x1c, 0xe1, 0xc7, 0xe,
    0x1c, 0xe0, 0x67, 0x3, 0xf0, 0x9, 0x0, 0x20,
    0x1, 0x80, 0xc, 0x0, 0x60, 0x3, 0x0, 0x18,
    0x0, 0xc0, 0x6, 0x0, 0x30, 0x1, 0x80, 0xc,
    0x0, 0x20, 0x1, 0x0,

    /* U+007A "z" */
    0x7f, 0xf1, 0xff, 0x0, 0x6, 0x0, 0x70, 0x3,
    0x0, 0x38, 0x3, 0x80, 0x1c, 0x1, 0xc0, 0xe,
    0x0, 0x60, 0x0, 0x0, 0x60, 0x7, 0x0, 0x38,
    0x3, 0x80, 0x1c, 0x1, 0xc0, 0xc, 0x0, 0xe0,
    0x2, 0x0, 0x0, 0x0, 0xff, 0x8f, 0xfe,

    /* U+007B "{" */
    0x3, 0xf0, 0x2f, 0x81, 0x80, 0xc, 0x0, 0x60,
    0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0, 0x30,
    0x1, 0x81, 0xf0, 0x7, 0x80, 0x3, 0x0, 0x18,
    0x0, 0xc0, 0x6, 0x0, 0x30, 0x1, 0x80, 0xc,
    0x0, 0x60, 0x3, 0x0, 0x18, 0x0, 0xbe, 0x3,
    0xf0,

    /* U+007C "|" */
    0x1f, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xf4,

    /* U+007D "}" */
    0x7e, 0x1, 0xf4, 0x0, 0x30, 0x0, 0xc0, 0x3,
    0x0, 0xc, 0x0, 0x30, 0x0, 0xc0, 0x3, 0x0,
    0xc, 0x0, 0x30, 0x0, 0xc0, 0x0, 0xfc, 0x3,
    0xe0, 0x30, 0x0, 0xc0, 0x3, 0x0, 0xc, 0x0,
    0x30, 0x0, 0xc0, 0x3, 0x0, 0xc, 0x0, 0x30,
    0x1f, 0x40, 0x7e, 0x0,

    /* U+007E "~" */
    0x16, 0xc, 0xee, 0x3f, 0xde, 0xf7, 0x1d, 0xcc,
    0x1b, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 167, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 131, .box_w = 3, .box_h = 27, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 12, .adv_w = 165, .box_w = 6, .box_h = 6, .ofs_x = 2, .ofs_y = 23},
    {.bitmap_index = 17, .adv_w = 374, .box_w = 21, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 248, .box_w = 13, .box_h = 38, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 142, .adv_w = 294, .box_w = 19, .box_h = 24, .ofs_x = -1, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 552, .box_w = 19, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 101, .box_w = 2, .box_h = 6, .ofs_x = 2, .ofs_y = 25},
    {.bitmap_index = 261, .adv_w = 166, .box_w = 8, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 165, .box_w = 8, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 311, .adv_w = 336, .box_w = 17, .box_h = 17, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 348, .adv_w = 227, .box_w = 10, .box_h = 10, .ofs_x = 2, .ofs_y = 7},
    {.bitmap_index = 361, .adv_w = 66, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 363, .adv_w = 220, .box_w = 10, .box_h = 2, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 366, .adv_w = 82, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 367, .adv_w = 253, .box_w = 15, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 254, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 75, .box_w = 2, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 461, .adv_w = 256, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 502, .adv_w = 222, .box_w = 11, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 256, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 576, .adv_w = 256, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 617, .adv_w = 256, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 658, .adv_w = 253, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 697, .adv_w = 259, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 738, .adv_w = 256, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 777, .adv_w = 83, .box_w = 4, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 787, .adv_w = 90, .box_w = 4, .box_h = 25, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 800, .adv_w = 230, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 821, .adv_w = 229, .box_w = 10, .box_h = 9, .ofs_x = 2, .ofs_y = 11},
    {.bitmap_index = 833, .adv_w = 232, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 853, .adv_w = 272, .box_w = 14, .box_h = 26, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 899, .adv_w = 294, .box_w = 16, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 949, .adv_w = 232, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 988, .adv_w = 233, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1029, .adv_w = 232, .box_w = 11, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1064, .adv_w = 233, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1105, .adv_w = 232, .box_w = 11, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1140, .adv_w = 230, .box_w = 11, .box_h = 24, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1173, .adv_w = 256, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1214, .adv_w = 254, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1253, .adv_w = 66, .box_w = 2, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1260, .adv_w = 265, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1299, .adv_w = 261, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1338, .adv_w = 232, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1377, .adv_w = 262, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1416, .adv_w = 264, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1455, .adv_w = 264, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1496, .adv_w = 264, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1535, .adv_w = 262, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1576, .adv_w = 264, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1615, .adv_w = 264, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1656, .adv_w = 232, .box_w = 12, .box_h = 24, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 1692, .adv_w = 264, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1731, .adv_w = 256, .box_w = 13, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1769, .adv_w = 262, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1810, .adv_w = 253, .box_w = 14, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1849, .adv_w = 245, .box_w = 13, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1885, .adv_w = 249, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1924, .adv_w = 152, .box_w = 8, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1949, .adv_w = 248, .box_w = 15, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1996, .adv_w = 166, .box_w = 8, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2021, .adv_w = 248, .box_w = 12, .box_h = 12, .ofs_x = 2, .ofs_y = 22},
    {.bitmap_index = 2039, .adv_w = 216, .box_w = 13, .box_h = 2, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2043, .adv_w = 214, .box_w = 5, .box_h = 5, .ofs_x = 4, .ofs_y = 24},
    {.bitmap_index = 2047, .adv_w = 240, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2086, .adv_w = 248, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2127, .adv_w = 222, .box_w = 11, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2162, .adv_w = 248, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2203, .adv_w = 214, .box_w = 11, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2238, .adv_w = 219, .box_w = 11, .box_h = 24, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2271, .adv_w = 258, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2312, .adv_w = 253, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2351, .adv_w = 67, .box_w = 2, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2358, .adv_w = 251, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2397, .adv_w = 256, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2436, .adv_w = 235, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2475, .adv_w = 246, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2514, .adv_w = 249, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2553, .adv_w = 248, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2594, .adv_w = 251, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2633, .adv_w = 254, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2674, .adv_w = 251, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2713, .adv_w = 254, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2754, .adv_w = 229, .box_w = 12, .box_h = 24, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 2790, .adv_w = 253, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2829, .adv_w = 251, .box_w = 13, .box_h = 23, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2867, .adv_w = 253, .box_w = 13, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2908, .adv_w = 259, .box_w = 14, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2947, .adv_w = 253, .box_w = 13, .box_h = 22, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2983, .adv_w = 239, .box_w = 13, .box_h = 24, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3022, .adv_w = 258, .box_w = 13, .box_h = 25, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3063, .adv_w = 165, .box_w = 2, .box_h = 28, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 3070, .adv_w = 261, .box_w = 14, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3114, .adv_w = 264, .box_w = 15, .box_h = 6, .ofs_x = 1, .ofs_y = 9}
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
const lv_font_t ui_font_digitfont42 = {
#else
lv_font_t ui_font_digitfont42 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 41,          /*The maximum line height required by the font*/
    .base_line = 7,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -4,
    .underline_thickness = 3,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_DIGITFONT42*/

