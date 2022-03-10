#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 *sum_them_all - function
 *@n : const unsigned int
 *Return: int sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list agrs;

	if (n == 0)
	{
		sum = 0;
	}
	else
	{

		va_start(agrs, n);

		for (i = 0; i < n; i++)
		{
			sum = sum + va_arg(agrs, int);
		}
		va_end(agrs);
	}
	return (sum);
}
