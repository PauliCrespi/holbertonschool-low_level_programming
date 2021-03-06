#include "main.h"
/**
 *set_bit - func
 *@n : pointer
 *@index : unsigned int
 *Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	if (index > (sizeof(n) * 8))
		return (-1);
	i = i << index;
	*n = i | *n;
	return (1);
}
