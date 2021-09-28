#include "list.h"

void mx_push_index(t_list **list, void *data, int index)
{
    if(index <= 0) {
        mx_push_front(list,data);
    }

    t_list *head = *list, *p;
    int size = 0;
    t_list *cur = mx_create_node(data);
    
    while(head->next != NULL) {

        if(size == index) {
            p = head->next;
            head->next = cur;
            cur->next = p;
        }

        else if(size == index) {
            p = *list;
            cur->next = p;
        }
        size++;
        head = head->next;
    }

    if(index > size) {
         mx_push_back(list,data);;
    }
    
}

