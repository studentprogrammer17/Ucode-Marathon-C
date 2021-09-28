#pragma once

#ifndef CALC_H

#define CALC_H

#include <unistd.h>

#include <stdlib.h>

#include <stdbool.h>

#define NOT_INT -65535

int mx_strncmp(const char *s1, const char *s2, int n);

bool mx_isdigit(int c);

bool mx_isspace(char c);

int mx_atoi(const char *str);

void mx_printchar(char c);

void mx_printint(int n);


#endif

