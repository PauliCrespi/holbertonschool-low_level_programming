#include "main.h"

/**
 *print_square - square
 *@size : size of square input
 */
void print_square(int size)
{
int lines;
int hash;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (lines = 0; lines < size; lines++)
{
for (hash = 0; hash < size; hash++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
