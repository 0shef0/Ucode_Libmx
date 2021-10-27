#include "../inc/libmx.h"

char *mx_strndup(const char *str, size_t n){
    char *d = mx_strnew(n+1);
    if (d == NULL) {
        return NULL;
    }
    mx_strncpy (d, str, n);
    return d;
}
