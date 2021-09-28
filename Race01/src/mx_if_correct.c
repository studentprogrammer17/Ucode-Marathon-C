#include "calculator.h"
bool mx_if_correct_operand(char *str) {
    if(mx_strlen(str) == 0) return false;
    if(*str == '-' || *str == '+'){
        str++;
    }
    while(*str != '\0') {
        if(!mx_isdigit(*str) && *str != '?') return false;
        str++;
    }
    return true;
}

int mx_check_operands(int argc, char **argv) {
    int err = -1;
        
    for(int i = 1; i < 5; i++) {
        argv[i] = mx_strtrim(argv[i]); 
    }

    if(argc != 5) 
    {
        err = 3;
        mx_printerr(err, argv[0]);
        return 1;
    }

    if(argv[2][0] == '-' || 
       argv[2][0] == '+' || 
       argv[2][0] == '/' ||  
       argv[2][0] == '*' ||
       (mx_strlen(argv[2]) == 1 && argv[2][0] == '?')) {} 
    else {
        err = (int)INCORRECT_OPERATION; 
        mx_printerr(err, argv[2]);
        return 1;
    }

    if(!mx_if_correct_operand(argv[1])) {
        err = (int)INCORRECT_OPERAND;
        mx_printerr(err, argv[1]);
        return 1;
        
    } else if(!mx_if_correct_operand(argv[3])) {
        err = (int)INCORRECT_OPERAND;
        mx_printerr(err, argv[3]);
        return 1;
    }

    if(!mx_if_correct_operand(argv[4])) {
        err = (int)INCORRECT_RESULT;
        mx_printerr(err, argv[4]);
    }

    if((argv[3][0] == '0' && argv[2][0] == '/')) {
        return 1;
    }
    return 0;
}
