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
		return (0);
	}
	else if (min == max)
	{
		p = malloc((sizeof(min) * sizeof(int)) + (sizeof(max) * sizeof(int)));
		if (p == NULL)
			return (0);
		p[0] = min;
		p[1] = max;
	}
	else
	{
		p = malloc(0);
		if (p == NULL)
			return (0);
		for (j = min; j <= max; j++, i++)
		{
			mem = mem + (sizeof(j) * sizeof(int));
			p = (int *) realloc(p, mem);
			if (p == NULL)
				return (0);
			p[i] = j;
		}
	}
	return (p);
}
