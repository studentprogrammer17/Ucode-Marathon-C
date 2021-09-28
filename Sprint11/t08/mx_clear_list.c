#include "list.h"

void mx_clear_list(t_list **list)
{
    int size = 0;
    t_list *current = *list;

    while(current != NULL) {
        size++;
        current = current->next;
    }

    while(size){

       if((*list)->next == NULL){
            free(*list);
            *list = NULL;
            size--;
        }

        else{
            t_list *head = NULL;
            head = (*list)->next;
            free(*list);
            *list = head;
            size--;
        }
    }
}

