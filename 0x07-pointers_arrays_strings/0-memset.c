#include "main.h"
/**
 *_memset - memory set
 *@s : pointer
 *@b : value
 *@n : input
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
