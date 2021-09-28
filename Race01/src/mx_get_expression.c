#include "minilibmx.h"

int count_qm(char *appearance) {
    int counter = 0;
    int length = mx_strlen(appearance);

    for (int i = 0; i < length; i++) {
        if (appearance[i] == '?') {
            counter++;
        }
    }

    return counter;
}

int find_min_value(char *appearance) {
    int length = mx_strlen(appearance);
    char *pattern_min = malloc(sizeof(*appearance) * length);
    
    mx_strcpy(pattern_min, appearance);
    int len = mx_strlen(appearance);
    pattern_min[len] = '\0';

    for (int i = 0; i < len; i++) {
        if (appearance[i] == '?') {
            pattern_min[i] = '0';
        } else {
            pattern_min[i] = appearance[i];
        }
    }

    int min = mx_atoi(pattern_min);
    free(pattern_min);
    
    return min;
}

int find_max_value(char *appearance) {
    int length = mx_strlen(appearance);
    char *pattern_max = malloc(sizeof(*appearance) * length);
    mx_strcpy(pattern_max, appearance);
    int len = mx_strlen(appearance);
    pattern_max[len] = '\0';

    for (int i = 0; i < len; i++) {
        if (appearance[i] == '?') {
            pattern_max[i] = '9';
        } else {
            pattern_max[i] = appearance[i];
        }
    }

    int min = mx_atoi(pattern_max);
    free(pattern_max);

    return min;
}

long long *get_needed_element(char *appearance, int *needed_len) {
    int length = mx_strlen(appearance);
    int factor = 1;

     if (appearance[0] == '-' || appearance[0] == '+') {
        length--;
        if (appearance[0] == '-') {
            factor = -1;
        }
        appearance++;
    }
    
    long long max = mx_pow(10, length);
    long long *correct_arr = (long long *)malloc(sizeof(long long) * max);
    int last_index = 0;
    int qm_count = count_qm(appearance);

    if (qm_count == 0) {
        correct_arr[last_index] = mx_atoi(appearance) * factor;
        last_index++;
    } else {
      int pattern_length = mx_strlen(appearance);
        int number = find_min_value(appearance);
        for (; number < max; number++) {
            char *number_str = mx_itoa(number);
            int number_str_len = mx_strlen(number_str);
            
            int minimal_length = 1;
            for (int i = 0; appearance[i] != '?'; i++) {
                minimal_length++;
            }
            
            int is_correct = 1;
            if (number_str_len < minimal_length) continue;
            for (int j = 0; j < number_str_len; j++) {
                if (appearance[j + (pattern_length - number_str_len)] == '?') continue;
                if (appearance[j + (pattern_length - number_str_len)] != number_str[j]) {
                    is_correct = 0;
                    break;
                }
            }
            if (is_correct) {
                correct_arr[last_index] = number * factor;
                last_index++;
            }
        }  
    }

    *needed_len = last_index;
    long long *result = mx_copy_int_arr(correct_arr, *needed_len);
    free(correct_arr);
    return result;
}


void mx_print_expression(int left_correct, int right_correct, char *result, char operation) {
    
    mx_printstr(mx_itoa(left_correct));
    mx_printstr(" ");
    mx_printchar(operation);
    mx_printstr(" ");
    mx_printstr(mx_itoa(right_correct));
    mx_printstr(" ");
    mx_printstr("=");
    mx_printstr(" ");
    mx_printstr(result);
    mx_printstr("\n");

}


void mx_get_suitable_expression(char *left, char *right, char *result, char operation){

    if(operation == '?') {
        mx_get_suitable_expression(left, right, result, '+');
        mx_get_suitable_expression(left, right, result, '-');
        mx_get_suitable_expression(left, right, result, '*');
        mx_get_suitable_expression(left, right, result, '/');
        return;
    }


    int pattern_length = mx_strlen(result), right_correct_len = 0, left_correct_len = 0;
    long long *right_correct = get_needed_element(right, &right_correct_len);
    long long *left_correct = get_needed_element(left, &left_correct_len);
    int min_result = find_min_value(result);
    int max_result = find_max_value(result);
    int factor = 0;
        
    if(result[0] == '-') {
        factor = -1;
    }

    if(factor == -1) {
        int buff = min_result;
        min_result = max_result;
        max_result = buff;
    }

    for (int left_index = 0; left_index < left_correct_len; left_index++) {
        for (int right_index = 0; right_index < right_correct_len; right_index++) {
            int number = 0;
            if (operation == '+') {
                number = left_correct[left_index] + right_correct[right_index];
            } else if (operation == '-') {
                number = left_correct[left_index] - right_correct[right_index];
            } else if (operation == '*') {
                number = left_correct[left_index] * right_correct[right_index];
            } else if (operation == '/') {
                if (right_correct[right_index] == 0) continue;
                number = left_correct[left_index] / right_correct[right_index];
            }
            if(number >= min_result && number <= max_result){
                char *number_str = mx_itoa(number);
                int number_str_len = mx_strlen(number_str);
                int is_correct = 1;

                for (int j = 0; j < number_str_len; j++) {
                    if (result[j + (pattern_length - number_str_len)] == '?') continue;
                    if (result[j + (pattern_length - number_str_len)] != number_str[j]) {
                        is_correct = 0;
                        break;
                    }
                }

                if (is_correct) {
                mx_print_expression(left_correct[left_index], right_correct[right_index], number_str, operation);
                }
                
                free(number_str);
            }
        }
    }
    free(right_correct);
    free(left_correct);
}
