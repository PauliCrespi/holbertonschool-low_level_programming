#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - function copying a s
 *@str : pointer
 *Return: char
 */
char *_strdup(char *str)
{
	char *p;
	int i;
	int sizee;

	if (str == NULL)
		return (NULL);
	for (sizee = 0; str[sizee] != '\0'; sizee++)
	{

	}
	sizee = sizee + 1;
	p = malloc(sizee * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= sizee; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
