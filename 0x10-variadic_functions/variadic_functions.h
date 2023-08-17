#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int power(int x);
void print_digit(int x);
void print_strings(const char *separator, const unsigned int n, ...);
void print_each_string(char* s);
void print_all(const char * const format, ...);

#endif