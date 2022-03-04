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

	if (max < min)
		return (NULL);
	if (min == max)
	{
		p = malloc(sizeof(int));
		if (p == NULL)
			return (NULL);
		p[0] = min;
	}
	else if (min < max)
	{
		p = malloc(sizeof(int) * ((max  - min) + 1));
		if (p == NULL)
			return (NULL);
		for (j = min; j <= max; j++, i++)
		{
			p[i] = j;
		}
	}
	return (p);
}
