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


	for (sizee = 0; str[sizee] != '\0'; sizee++)
	{

	}
	sizee = sizee + 1;
	p = malloc(sizee * sizeof(char));
	for (i = 0; i <= sizee; i++)
	{
		p[i] = str[i];
	}
	if (p == NULL ||	str == 0)
		return (NULL);
	return (p);
}
