#pragma once

#include <stdint.h>
#include <stddef.h>

enum
{
    white = 15,
    black = 0,
    light_blue = 9,
    blue = 1,
    light_green = 10,
    green = 2,
    light_cyan = 11,
    cyan = 3,
    light_red = 12,
    red = 4,
    light_gray = 7,
    gray = 8,
    magenta = 5,
    brown = 6,
    pink = 13,
    yellow = 14,
};

void print_clear();
void print_char(char character);
void print_str(char *string);
void print_set_color(uint8_t foreground, uint8_t background);
