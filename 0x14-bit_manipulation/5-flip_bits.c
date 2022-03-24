#include "main.h"
/**
 *flip_bits - func
 *@n : int
 *@m : int
 *Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int last_bit_n;
	int last_bit_m;

	while (n > 0 || m > 0)
	{
		last_bit_n = n & 1;
		last_bit_m = m & 1;
		if (last_bit_n != last_bit_m)
		{
			count++;
		}
		n = n >> 1;
		m = m >> 1;
	}
		return (count);
}
