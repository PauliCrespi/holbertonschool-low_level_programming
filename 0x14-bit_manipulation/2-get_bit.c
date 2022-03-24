#include "main.h"
/**
 *get_bit - func
 *@n : unsigned int
 *@index : index
 *Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitstatus = (n >> index) & 1;

	if (index  > (sizeof(n) * 8))
	{
		return (-1);
	}
	else
	{
		return (bitstatus);
	}
}
