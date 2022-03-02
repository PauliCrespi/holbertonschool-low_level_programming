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
	int i;
	int sizee;


	for (sizee = 0; str[sizee] != '\0'; sizee++)
	{

	}
	sizee = sizee + 1;
	if (str == NULL)
	{
		return (0);
	}
	else
	{
		p = malloc(sizee * sizeof(char));
		for (i = 0; i <= sizee; i++)
		{
			p[i] = str[i];
		}
	}
	if (p == 0)
		return (0);
	return (p);
}
