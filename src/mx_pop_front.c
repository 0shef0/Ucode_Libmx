#include "../inc/libmx.h"

void mx_pop_front(t_list **head) {
    if (!*head) {
        return;
    }
    t_list *tmp = *head;
    if (tmp->next != NULL) {
        *head = tmp->next;
    } else {
        *head = tmp;
    }
    free(tmp);
    tmp = NULL;
}
