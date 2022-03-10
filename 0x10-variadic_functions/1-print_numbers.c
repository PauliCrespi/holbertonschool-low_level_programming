#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *print_numbers - function
 *@separator : char
 *@n : const unsigned int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list agrs;
	int j;

	va_start(agrs, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(agrs, int));
		if (separator != NULL && i != n - 1)
		{
			for (j = 0; j < 1; j++)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(agrs);
}
