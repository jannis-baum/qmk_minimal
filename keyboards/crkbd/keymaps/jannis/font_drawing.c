#include QMK_KEYBOARD_H
#include "font_drawing.h"

typedef struct _char_location {
    uint8_t index;
    uint8_t length;
} char_location;

uint8_t get_char_location(char_location *loc, uint8_t character) {
    switch(character) {
        case '\0': loc->index = 0;  loc->length = 1; return 0;
        case '0':  loc->index = 1;  loc->length = 2; return 0;
        case '1':  loc->index = 3;  loc->length = 2; return 0;
        case '2':  loc->index = 5;  loc->length = 2; return 0;
        case '3':  loc->index = 7;  loc->length = 2; return 0;
        case ':':  loc->index = 9;  loc->length = 1; return 0;
        case '4':  loc->index = 11; loc->length = 2; return 0;
        case '5':  loc->index = 14; loc->length = 2; return 0;
        case '6':  loc->index = 16; loc->length = 2; return 0;
        case '7':  loc->index = 18; loc->length = 2; return 0;
        case '8':  loc->index = 20; loc->length = 2; return 0;
        case '9':  loc->index = 22; loc->length = 2; return 0;
        case 'I':  loc->index = 24; loc->length = 3; return 0;
        case 'C':  loc->index = 27; loc->length = 3; return 0;
        default: return 1;
    }
}

// text should at least be of length oled_max_chars()
uint8_t oled_draw(uint8_t *text) {
    uint8_t chars = oled_max_chars();
    uint8_t lines = oled_max_lines();
    uint8_t font_columns = (OLED_FONT_END+1) / lines;

    char_location *loc = malloc(sizeof(char_location));

    for (uint8_t li = 0; li < lines; li++) {
        oled_set_cursor(0, li);
        uint8_t *text_line = text;

        for (uint8_t ci = 0; ci < chars;) {
            if (get_char_location(loc, *text_line++)) return 1;
            ci += loc->length;
            if (ci > chars) break;

            for (uint8_t sub_ci = 0; sub_ci < loc->length;  sub_ci++) {
                oled_write_char(loc->index + li * font_columns + sub_ci, 0);
            }
        }
    }
    return 0;
}
