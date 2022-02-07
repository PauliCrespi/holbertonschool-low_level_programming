#include "main.h"
/**
 *times_table - 9
 *Return: 9
 */
void times_table(void)
{
char m;
char x;
int multi;
int v;

for (m = 0; m >= 9; m++)
{
for (x = 0; x >= 9; x++)
{
multi = x * m;
if (multi > 9)
{
v = multi / 10;
_putchar (v);
v = multi % 10;
_putchar(v);
if (x <= 8)
{
_putchar (',');
_putchar (' ');
}}
_putchar ('\n');
}}}
