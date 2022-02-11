#include "main.h"
/**
 * print_array - printing
 *@a : array
 *@n : int
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i <= n; i++)
{
printf("%d", a[i]);
printf(",");
printf(" ");
}
printf("\n");
}
