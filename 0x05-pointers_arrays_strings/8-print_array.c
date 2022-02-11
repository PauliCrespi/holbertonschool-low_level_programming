#include "main.h"
/**
 * print_array - printing
 *@a : array
 *@n : int
 */
void print_array(int *a, int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != (n - 1))
{
printf(",");
printf(" ");
}
}
printf("\n");
}
else
{
for (i = 0; i > n; i--)
{
printf(" ");
}
}
}
