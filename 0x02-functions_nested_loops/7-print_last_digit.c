#include "main.h"
/**
 *print_last_digit - print lastdigit
 * @n : int
 * Return: last digit
 */
int print_last_digit(int n)
{
char lastdigit = n % 10;
_putchar(lastdigit);
return (lastdigit);
}
