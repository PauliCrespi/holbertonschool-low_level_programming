#include "main.h"
/**
 * primenums - prime numbers
 * @n : int
 * @i : int
 * Return: int
 */
int primenums(int n, int i)
{
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (primenums(n, i + 1));
}
/**
 * is_prime_number - main
 * @n : int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 1)
		return (0);
	if (n == 1)
		return (0);
	return (primenums(n, 2));
}
