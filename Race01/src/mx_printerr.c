#include "minilibmx.h"

void mx_printerr(int err, char *arg) {
    char error[100] = {"\0"};
    switch(err) {
       case 0 : 
            mx_strcat(error, "Invalid operand: ");
            mx_strcat(error, arg); 
            mx_strcat(error, "\n");
            write(2, error, mx_strlen(error));
        break;

        case 1 : 
            mx_strcat(error, "Invalid operation: ");
            mx_strcat(error, arg); 
            mx_strcat(error, "\n");
            write(2, error, mx_strlen(error));
        break;

        case 2 : 
            mx_strcat(error, "Invalid result: ");
            mx_strcat(error, arg); 
            mx_strcat(error, "\n");
            write(2, error, mx_strlen(error));
        break;

        case 3 : 
            mx_strcat(error, "usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]\n");
            write(2, error, mx_strlen(error));
        break;
    }
}
