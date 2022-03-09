#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - function
 *@array : pointer
 *@size : int
 *@cmp : pointer to function
 *Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; !cmp(array[i]); i++)
		{
			if (i == size)
				return (-1);
		}
		return (i);
	}
}
