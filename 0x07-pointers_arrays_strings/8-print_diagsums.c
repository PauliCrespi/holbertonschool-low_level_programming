#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - diagonal sum
 *@a : pointer to array of array
 *@size : input int
 */
void print_diagsums(int *a, int size)
{
	int i;
	int right;
	int left;

	for (i = 0; i <= size; i++)
	{
		right = right + a[i];
		a = a + size;
	}
	a = a - size;
	for (i = size; i != 0; i--)
	{
		left = left + a[i];
		a = a - size;
	}
	printf("%d, %d\n", right, left);
}
