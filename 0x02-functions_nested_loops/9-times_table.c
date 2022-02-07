#include "main.h"
/**
 *times_table - 9
 *Return: 9
 */
void times_table(void)
{
int m;
int x;
int multi;
int v;

for (m = 0; m <= 9; m++)
{
for (x = 0; x <= 9; x++)
{
multi = x * m;
if (multi > 9 && m != 0)
{
v = multi / 10;
_putchar (v + '0');
v = multi % 10;
_putchar(v + '0');
}
else
{
_putchar (' ');
_putchar (multi + '0');
}
if (x <= 8)
{
_putchar (',');
_putchar (' ');
}}
_putchar ('\n');
}}
