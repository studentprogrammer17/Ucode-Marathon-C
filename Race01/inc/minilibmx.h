#ifndef MINILIBMX_H
#define MINILIBMX_H

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool if_correct(int size, char** str);

bool mx_isdigit(int c);

bool mx_isspace(char c);

bool mx_if_correct_operand(char *str);

void mx_printerr(int err, char *arg);

void mx_printchar(char c);

void mx_printint(int n);

void mx_print_expression(int left_correct, int right_correct, char *result, char operation);

void mx_get_suitable_expression(char *left, char *right, char *result, char operation);

void mx_printstr(const char *s);

void mx_printchar(char c);

int mx_atoi(const char *str);

int mx_strlen(const char *s);

int calculate(char **arr);

int count_qm(char *appearance);

int find_min_value(char *appearance);

long long *get_needed_element(char *appearance, int *needed_len);

int mx_check_operands(int argc, char **argv);

long long *mx_copy_int_arr(const long long *src, int size);

int find_max_value(char *appearance);

char *mx_strcat(char *s1, const char *s2);

char *mx_strnew(const int size);

char *mx_strcpy(char *dst, const char *src);

char *mx_strtrim(const char *str);

char *mx_itoa(int num);

char *mx_strncpy(char *dst, const char *src, int len);

double mx_pow(double n, unsigned int pow);

#endif /* MINILIBMX_H */
