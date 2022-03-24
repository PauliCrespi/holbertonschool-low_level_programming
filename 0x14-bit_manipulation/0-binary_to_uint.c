#include "main.h"
/**
 *binary_to_uint - func
 *@b : char
 *Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		x <<= 1;
		x += b[i] - '0';
		i++;
	}
	return (x);
}
