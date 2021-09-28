#include "calculator.h"

int main(int argc, char** argv) {
    
    if(mx_check_operands(argc, argv)) return 1;

    mx_get_suitable_expression(argv[1], argv[3], argv[4], *argv[2]);
    
    return 0;
}
