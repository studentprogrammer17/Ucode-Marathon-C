#include "list.h"

t_list *mx_create_node(void *data)
{
    t_list *head = (t_list*)malloc(sizeof(t_list));
    
    head->next = NULL;
    head->data = data;

    return head;
    
}

