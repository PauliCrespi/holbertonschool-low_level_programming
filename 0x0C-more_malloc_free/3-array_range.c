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

	if (max < min)
	{
		p = malloc(sizeof(int));
		p[0] = 0;
	}
	if (min == max)
	{
		if (min == max)
		{
			p = malloc(sizeof(int));
			if (p == NULL)
				return (0);
			p[0] = min;
		}
	}
	else if (min < max)
	{
		p = malloc(0);
		if (p == NULL)
			return (0);
		for (j = min; j <= max; j++, i++)
		{
			mem = mem + (sizeof(int));
			p = (int *) realloc(p, mem);
			if (p == NULL)
				return (0);
			p[i] = j;
		}
	}
	return (p);
}
