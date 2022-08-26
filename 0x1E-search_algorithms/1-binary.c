#include "search_algos.h"

/**
 * binary_search - algorithm
 * @array : to search in
 * @size : int
 * @value : value to search
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;
	while (high >= low)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = low + (high - low) / 2;
		if (array[i] < value)
			low = i + 1;
		else if (array[i] > value)
			high = i - 1;
		else
			return (i);
	}
	return (-1);
}
