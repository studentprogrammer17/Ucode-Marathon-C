#include "list.h"

void mx_pop_back(t_list **list)
{
    if (*list == NULL){
        return;
    }

    t_list *previous = *list;
    while (previous->next->next) {
        previous = previous->next;
    }

    t_list to_delete = *previous->next;

    previous->next = to_delete.next;
    
    free(to_delete.next);
}

