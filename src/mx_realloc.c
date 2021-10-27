#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    size_t old_size = size;
    void *newptr = malloc(size);
    if ( newptr == NULL ){
        return NULL;
    }
    if ( size <= old_size ) {
        mx_memcpy(newptr, ptr, size);
    } else {
        mx_memcpy(newptr, ptr, size);
    }
    free(ptr);
    return newptr;
}
