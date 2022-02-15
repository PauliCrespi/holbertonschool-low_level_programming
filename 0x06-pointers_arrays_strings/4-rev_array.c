#include "main.h"
/**
 *reverse_array - reversing
 *@a : a
 *@n : input
 */
void reverse_array(int *a, int n)
{
int i;
int temp;
int m = n - 1;

for (i = 0; i < n / 2; i++, m--)
{
temp = a[i];
a[i] = a[m];
a[m] = temp;
}
}
