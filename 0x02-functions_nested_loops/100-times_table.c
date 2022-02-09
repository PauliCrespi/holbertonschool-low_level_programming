#include "main.h"
/**
 *print_times_table - n times table
 *@n : input
 *Return: times table
 */
void print_times_table(int n)
{
int m;
int x;
int multi;
int v;

for (m = 0; m <= n; m++)
{
for (x = 0; x <= n; x++)
{
multi = x * m;
if (multi > 9 && multi < 100)
{
_putchar (' ');
v = multi / 10;
_putchar (v + '0');
v = multi % 10;
_putchar(v + '0');
}
else if (multi > 99)
{
v = multi / 100;
_putchar (v);
v = multi / 10;
_putchar (v);
v = multi % 10;
_putchar (v);
}
else if (multi < 9 &&  x != 0)
{
_putchar (' ');
_putchar (' ');
_putchar (v);
}
else
{
_putchar (' ');
_putchar (' ');
_putchar (v);
}
if (x <= (n - 1))
{
_putchar (',');
}
}
_putchar ('\n');
}}
