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

	if (size <= 0)
		return (-1);
	if (array != NULL || cmp != NULL)
	{
		for (i = 0; i < size && !cmp(array[i]); i++)
		{

		}
	}
	else
		return (-1);
	return (i);
}
