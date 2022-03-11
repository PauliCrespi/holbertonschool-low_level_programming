#ifndef VARIADICFUNCTIONS_H
#define VARIADICFUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct print
{
char *optss;
void (*f)(va_list);
} print_opt;

#endif /* VARIADICFUNCTIONS_H */
