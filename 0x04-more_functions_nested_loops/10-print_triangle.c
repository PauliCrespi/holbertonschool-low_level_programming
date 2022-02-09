#include "main.h"
/**
 *print_triangle - print triangle
 *@size : size of triangle
 *
 */
void print_triangle(int size)
{
int space;
int hash;
int line;
if (size <= 0)
{
_putchar(10);
}
else
{
for (line = 1; line <= size; line++)
{
for (space = 1; space <= size - line; space++)
{
_putchar(' ');
}
for (hash = 1; hash <= line; hash++)
{
_putchar('#');
}
_putchar(10);
}
}
}
