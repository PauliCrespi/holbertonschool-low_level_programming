#include "main.h"
/**
 *square - natural square root
 *@n : int
 *@i : int
 *Return: int
 */
int square(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i == n)
	{
		return (-1);
	}
	else if (i * i != n)
	{
		return (square(n, i + 1));
	}
	return (0);
}
/**
 *_sqrt_recursion - square root
 *@n : int
 *Return: square root
 */
int _sqrt_recursion(int n)
{
	int root;

	if (n < 0)
	{
		root = -1;
	}
	else
	{
	root = square(n, 1);
	}
	return (root);
}
