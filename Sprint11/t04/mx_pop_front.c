#include "list.h"

void mx_pop_front(t_list **list)
{
    if (*list == NULL || list == NULL){
        return;
    }

    else if((*list)->next == NULL){
        free(*list);
        *list = NULL;
    }

    else{
        t_list *head = NULL;
        head = (*list)->next;
        free(*list);
        *list = head;
    }

}

