#pragma once

#ifndef HEADER_H

#define HEADER_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

char *mx_file_to_str(const char *filename);
char *mx_strcat(char *restrict s1, const char *restrict s2);
int mx_count_words(const char *str, char delimiter);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *s1);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strjoin(const char *s1, const char *s2);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
bool mx_isspace(char c);

#endif

