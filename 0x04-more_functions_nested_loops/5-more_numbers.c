#include "main.h"
/**
*more_numbers - print 0 to 9
*/
void more_numbers(void)
{
int i;
int n;
int print;

for (i = 0; i < 10; i++)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
{
_putchar('1');
print = n % 10;
}
else
{
print = n;
}
_putchar(print + '0');
}
_putchar('\n');
}
}
