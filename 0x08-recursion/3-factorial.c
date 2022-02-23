#include "main.h"
/**
 *factorial - multi
 *@n : int
 *Return: 1, -1 or multi
 */
int factorial(int n)
{
	int multi;

	if (n == 0)
	{
		multi = 1;
	}
	else if (n < 0)
	{
		multi = -1;
	}
	else
	{
		multi = n * factorial(n - 1);
	}
	return (multi);
}
