#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - function
 *@min : int
 *@max : int
 *Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int i = 0;
	int j;
	int mem = 0;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		p = malloc(0);
		for (j = min; j <= max; j++, i++)
		{
			mem = mem + (sizeof(j) * sizeof(int));
			p = (int *) realloc(p, mem);
			if (p == NULL)
				return (NULL);
			p[i] = j;
		}
	}
	return (p);
}
