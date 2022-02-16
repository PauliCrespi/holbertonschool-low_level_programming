#include "main.h"
/**
 *rot13 - array
 *@arr : array
 *Return: char
 */
char *rot13(char *arr)
{
	int i;
	int j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; arr[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
		if (arr[i] == input[j])
		{
			arr[i] = output[j];
			break;
		}
		}
	}
return (arr);
}
