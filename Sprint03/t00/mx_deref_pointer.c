void mx_deref_pointer(char ******str);

void mx_deref_pointer(char ******str)
{
    char *ptr_str1;
    char **ptr_str2;
    char ***ptr_str3;
    char ****ptr_str4;
    char *****ptr_str5;
    str = &ptr_str5;
    ptr_str5 = &ptr_str4;
    ptr_str4 = &ptr_str3;
    ptr_str3 = &ptr_str2;
    ptr_str2 = &ptr_str1;
    ptr_str1 = "Follow the white rabbit!";
}
