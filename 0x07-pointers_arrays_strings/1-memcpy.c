#include "main.h"
/**
 *_memcpy - memory copy
 *@dest : pointer
 *@src : src pointer
 *@n : intput unsigned int
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
