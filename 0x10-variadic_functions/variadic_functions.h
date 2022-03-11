#ifndef VF
#define VF
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
 *struct print - Struct print
 *@optss : char pointer
 *@f : function
 *
 */
typedef struct print
{
	char *optss;
	void (*f)(va_list);
} print_opt;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list cha);
void print_int(va_list intt);
void print_float(va_list flo);
void print_string(va_list str);
#endif
