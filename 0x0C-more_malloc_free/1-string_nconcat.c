#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat - function
 *@s1 : pointer one
 *@s2 : pointer two
 *@n : unsigned int
 *Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i = 0, size = 0, sumsize = 0;
	unsigned int j = 0, sizee = 0;

	if (s1 == NULL)
		return (0);
	for (size = 0; s1[size] != '\0'; size++)
	{
	}
	if (s2 == NULL)
		return (0);
	for (sizee = 0; s2[sizee] != '\0'; sizee++)
	{
	}
	if (n > sizee)
		n = sizee;
	sumsize = size + n + 1;
	p = malloc(sumsize * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j <= n; j++, i++)
	{
		if (s2[j] != '\0')
			p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
