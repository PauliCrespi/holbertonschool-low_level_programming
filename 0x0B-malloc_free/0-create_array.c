#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creating an array
 *@size : unsigned int
 *@c : char
 *Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (0);
	else if (size > 0)
	{
		p = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}
		return (p);
}
