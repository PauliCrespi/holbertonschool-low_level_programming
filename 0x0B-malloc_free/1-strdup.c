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


	sizee = sizeof(str) + 1;
	if (str == NULL)
	{
		return (0);
	}
	else
	{
		p = malloc(sizeof(sizee) * sizeof(char));
		for (i = 0; str[i] != '\0'; i++)
		{
			p[i] = str[i];
		}
	}
	if (p == 0)
		return (0);
	return (p);
}
