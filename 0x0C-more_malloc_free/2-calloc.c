#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - function
 *@nmemb : number of members
 *@size : bytes.
 *Return: pointer or null.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (0);
	for(i = 0; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}
	return (p);
	free(p);
}
