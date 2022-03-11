#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *print_char - print char
 *@cha : va list
 */
void print_char(va_list cha)
{
	printf("%c", va_arg(cha, int));
}
/**
 *print_int - print int
 *@intt : va list
 */
void print_int(va_list intt)
{
	printf("%d", va_arg(intt, int));
}
/**
 *print_float - print float
 *@flo : va list
 */
void print_float(va_list flo)
{
	printf("%f", va_arg(flo, double));
}
/**
 *print_string - print string
 *@str : va list
 */
void print_string(va_list str)
{
	char *stringg = va_arg(str, char *);

	if (stringg != NULL)
		printf("%s", stringg);
	else
		printf("(NIL)");
}
/**
 * print_all - function
 * @format : char
 */
void print_all(const char * const format, ...)
{
	print_opt opts[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string},
	{NULL, NULL}
	};
	int i;
	int j = 0;
	va_list agrs;
	char *sepa = "";

	va_start(agrs, format);
	while (format && format[j])
	{
		i = 0;
		while (opts[i].optss != NULL)
		{
			if (*(opts[i].optss) == format[j])
			{
				printf("%s", sepa);
				opts[i].f(agrs);
				sepa = ", ";
				break;
			}
			i++;
		}
		j++;
	}
		va_end(agrs);
		printf("\n");
}
