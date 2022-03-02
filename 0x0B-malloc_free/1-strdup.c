#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - function
 *@str : pointer
 *Return: char
 */
char *_strdup(char *str)
{
	char *p;
	long unsigned int i;

	if (str == NULL)
	{
		return (0);
	}
	else
	{
		p = malloc(sizeof(str) * sizeof(char));
		for (i = 0; i <= sizeof(str) + 1; i++)
		{
			p[i] = str[i];
		}
	}
	if (p == 0)
		return (0);
	return (p);
}
