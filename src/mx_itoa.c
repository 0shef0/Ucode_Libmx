#include "../inc/libmx.h"

char *mx_itoa(int number) {
    int i = 0;
    int buf = number;
    while ( buf != 0 ){
        i++;
        buf /= 10;
    }
    char *str = mx_strnew(i+1);
    for ( int j = i - 1; j >= 0; j--) {
        str[j] = ( number % 10 ) + 48;
        number /= 10;
    }
    return str;
}
