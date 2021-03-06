#include "progmem.h"

static const unsigned char PROGMEM font[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xC0, 0xE0, 0xE0, 0xF0, 0x70, 0x70,
    0x70, 0x70, 0xF0, 0xE0, 0xE0, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xE0,
    0xF0, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0x70, 0x70,
    0x70, 0x70, 0xF0, 0xE0, 0xE0, 0xC0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0x70, 0x70, 0x70,
    0x70, 0xF0, 0xE0, 0xE0, 0xC0, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
    0xC0, 0xF0, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF0, 0x70, 0x70, 0x70,
    0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0,
    0xF0, 0xF0, 0x30, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70,
    0x70, 0x70, 0x70, 0xF0, 0xF0, 0xF0, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x80, 0xC0, 0xE0, 0xE0, 0x70, 0x70, 0x70,
    0x70, 0x70, 0xE0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x80, 0xC0, 0xE0, 0xE0, 0xF0, 0x70, 0x70,
    0x70, 0x70, 0xF0, 0xE0, 0xE0, 0xC0, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
    0x80, 0x40, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xF8, 0xFF, 0xFF, 0x07, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x07, 0xFF, 0xFF, 0xF8, 0x00,
    0x00, 0x00, 0x00, 0x02, 0x07, 0x03, 0x03, 0x01, 0x00,
    0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x03, 0x07, 0x07, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xC0, 0xE1, 0xFF, 0x7F, 0x1F, 0x00, 0x00,
    0x00, 0x01, 0x01, 0x03, 0x01, 0x00, 0xC0, 0xC0, 0xC0,
    0xC0, 0xE0, 0x71, 0x7F, 0x3F, 0x0F, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x70, 0x70, 0x70, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x80, 0xE0, 0x70, 0x3C, 0x0E, 0x07,
    0x01, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0x7F, 0x70, 0x70, 0x70,
    0x70, 0xF0, 0xF0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x80, 0xE0, 0xF0, 0xFC, 0xFE, 0xEF, 0xE7,
    0xE1, 0xE0, 0xE0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
    0xF0, 0xFC, 0x3F, 0x0F, 0x03, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0F, 0x9F, 0xBF, 0xB0, 0xE0, 0xE0, 0xE0,
    0xE0, 0xE0, 0xB0, 0xBF, 0x9F, 0x0F, 0x00, 0x00, 0x00,
    0x00, 0x3E, 0xFF, 0xFF, 0xC1, 0x80, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x80, 0x80, 0xC1, 0xFF, 0xFF, 0x3F, 0x00,
    0x00, 0x00, 0x00, 0x80, 0xE0, 0xE0, 0x30, 0x30, 0x30,
    0x30, 0x60, 0x40, 0x80, 0x00, 0x80, 0xC0, 0x60, 0x30,
    0x30, 0x30, 0x30, 0x70, 0xE0, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0,
    0xE0, 0xF0, 0xF8, 0xF8, 0xDC, 0x8E, 0x86, 0x83, 0x81,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x0F, 0x7F, 0xFF, 0xF0, 0xC0, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x80, 0xC0, 0xF0, 0xFF, 0x7F, 0x0F, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x70, 0x38, 0x1C,
    0x0E, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x60, 0xE0, 0xE0, 0xC0, 0x80, 0x01, 0x01, 0x01,
    0x01, 0x03, 0x83, 0xC7, 0xFF, 0xFE, 0x78, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x3C, 0x3E, 0x3B, 0x39, 0x38, 0x38, 0x38, 0x38,
    0x38, 0x38, 0xFF, 0xFF, 0xFF, 0x38, 0x38, 0x38, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x40, 0xC0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00,
    0x00, 0x80, 0x80, 0xC1, 0xFF, 0xFF, 0x3F, 0x00, 0x00,
    0x00, 0x7E, 0xFF, 0xFF, 0xC3, 0x81, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x81, 0xC3, 0xFF, 0xFF, 0x7E, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xF8, 0x7E, 0x1F,
    0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x7C, 0xFF, 0xFF, 0xC3, 0x81, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x81, 0xC3, 0xFF, 0xFF, 0x7C, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x07, 0x07, 0xC7,
    0xE7, 0xF7, 0x3F, 0x1F, 0x07, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x0F, 0x3F, 0x38, 0x70, 0x60, 0x60,
    0x60, 0x30, 0x10, 0x09, 0x07, 0x0D, 0x18, 0x30, 0x60,
    0x60, 0x60, 0x60, 0x38, 0x3F, 0x0F, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
    0xC0, 0x61, 0x71, 0x39, 0x1D, 0x1F, 0x0F, 0x07, 0x03,
    0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x06, 0x07, 0x07, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x01, 0x03, 0x07, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x06, 0x07, 0x07,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x02, 0x03, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
