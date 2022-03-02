#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat - function
 *@s1 : pointer
 *@s2 : pointer 2
 *Return: char
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0;
	int size = 0;
	int sizee = 0;
	int j = 0;
	int sumsize = 0;
	if (s1 != NULL)
	{
		for (size = 0; s1[size] != '\0'; size++)
		{
	
		}
	}
	if (s2 != NULL)
	{
		for (sizee = 0; s2[sizee] != '\0'; sizee++)
		{
	
		}
	}
	sumsize = size + sizee + 1;
	p = malloc(sumsize * sizeof(char));
	if (size != 0 && s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			p[i] = s1[i];
		}
	}
	if (sizee != 0 && s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++, i++)
		{
			p[i] = s2[j];
		}
	}
	p[i] = '\0';
	if (p == NULL)
		return (NULL);
	return (p);
}
