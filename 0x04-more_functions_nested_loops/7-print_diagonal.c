#include "main.h"
/**
*print_diagonal - printing bars
*@n : input
*
*/
void print_diagonal(int n)
{
int c;
int space = 0;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (c = 1; c <= n; c++)
{
if (n == 1)
{
_putchar ('\\');
}
else
{
if (c == 1)
{
_putchar('\\');
}
else 
{
for (space = 1; space < c; space++)
{
_putchar(' ');
}
_putchar('\\');
}
_putchar('\n');
}
}
}
}
