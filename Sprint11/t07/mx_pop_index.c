#include "list.h"

void mx_pop_index(t_list **list, int index)
{
    if(index < 0)
    {
        mx_pop_front(list);
    }

    t_list *head = *list,*p;
    int size = 0;

    while (head->next != NULL) {
        
        if(size == index) {
            p = head->next;
            mx_pop_back(&head);
            head->next = p;
        }

        size++;
        head = head->next;
    }

    if(index > size) {
        mx_pop_back(&head);
    }
}

