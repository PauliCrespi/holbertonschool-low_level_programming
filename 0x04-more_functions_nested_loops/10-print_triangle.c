#include "main.h"
/**
 *print_triangle - print triangle
 *
 *
 */
void print_triangle(int size)
{
int space;
int hash;
int line;

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
_putchar(10);
}
