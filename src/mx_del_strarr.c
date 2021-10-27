#include "../inc/libmx.h"

void mx_del_strarr(char ***arr) {
    while (**arr){
        mx_strdel(*arr);
        *arr = NULL;
        arr++;
    }
}
