#include "main.h"
#include <stdio.h>
/**
 *fizzbuzz - fizzingbuzzing
 */
void fizzbuzz(void)
{
int n;

for (n = 1; n <= 100; n++)
{
if ((n % 3) == 0)
{
printf("Fizz");
if ((n % 5) == 0)
{
printf("Buzz");
}
}
else if ((n % 5) == 0)
{
printf("Buzz");
}
else
{
printf("%d", n);
}
_putchar(' ');
}
}
