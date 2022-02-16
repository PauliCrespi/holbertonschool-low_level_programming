#include "main.h"
/**
 *leet - array
 *@arr : array
 *Return: char
 */
char *leet(char *arr)
{
	int i;
	int j;
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	int nums[] = {'4', '3', '0', '7', '1'};

	for (i = 0; arr[i] != '\0'; i++)
	{
		for (j = 0; lower[j] != '\0' && upper[j] != '\0'; j++)
		{
		if (arr[i] == lower[j] || arr[i] == upper[j])
		{
			arr[i] = nums[j];
		}
		}
	}
return (arr);
}
