#include "../inc/libmx.h"

void mx_str_reverse(char *s) {
    if (!s) {
        return;
    }
    for (int i = 0; i <= (mx_strlen(s) - 1) / 2; i++) {
        mx_swap_char(&s[i], &s[mx_strlen(s) - 1 - i]);
    }
}
