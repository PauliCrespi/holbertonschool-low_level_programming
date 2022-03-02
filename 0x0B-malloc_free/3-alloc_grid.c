#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - function
 *@width : int
 *@height : int
 *Return: int
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(height * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
