#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - function
 *@b : int
 *Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(b) * sizeof(unsigned int));
	if (p == NULL)
		exit(98);
	return (p);
}
