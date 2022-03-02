#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - function
 *@grid : int
 *@height : int
 *Return: int
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

