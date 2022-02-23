#include "main.h"
/**
 *_pow_recursion - to the power of
 *@x : int
 *@y : int
 *Return: multi or -1
 */
int _pow_recursion(int x, int y)
{
	int multi;

	if (y < 0)
	{
		multi = -1;
	}
	else if (y > 1)
	{
		multi = x * _pow_recursion(x, y - 1);
	}
	else if (y == 1)
	{
		multi = x;
	}
	return (multi);
}
