#include "list.h"

t_list *mx_sort_list(t_list *list, bool(*cmp)(void *a, void *b))
{
    for(t_list *temp1 = list; temp1 ; temp1 = temp1->next)
    {

        for(t_list *temp2 = list; temp2->next ; temp2 = temp2->next)
        {
            
            if(cmp(temp2->data, temp2->next->data))
            {
                void *temp = temp2->data;
                temp2->data = temp2->next->data;
                temp2->next->data = temp;
            }
        }
    }

    return list;
}

