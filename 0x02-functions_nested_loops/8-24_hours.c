#include "main.h"

/**
*jack_bauer - check the code
*Return: Always 0.
*/
void jack_bauer(void)
{
int one;
int four;
int print;

for (one = 00; one <= 23; one++)
{
for (four = 00; four <= 59; four++)
{
print = one / 10;
_putchar (print + '0');
print = one % 10;
_putchar (print + '0');
_putchar (':');
print = four / 10;
_putchar(print + '0');
print = four % 10;
_putchar(print + '0');
_putchar('\n');
}
}
}
