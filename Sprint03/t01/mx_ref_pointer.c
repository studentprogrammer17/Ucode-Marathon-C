void mx_ref_pointer(int i, int******ptr);

void mx_ref_pointer(int i, int ******ptr)
{   
    int *p_ptr1;
    int **p_ptr2;
    int ***p_ptr3;
    int ****p_ptr4;
    int *****p_ptr5;

    p_ptr1 = &i;
    p_ptr2 = &p_ptr1;
    p_ptr3 = &p_ptr2;
    p_ptr4 = &p_ptr3;
    p_ptr5 = &p_ptr4;
    ptr = &p_ptr5;   
}
