#include "main.h"
/**
 *_strstr - string
 *@haystack : pointer
 *@needle : pointer
 *Return: null or pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int flag = 0;
	int j;
	int f;

	while (haystack[i])
	{
		if (haystack[i] == needle[0])
			flag = 1;
		i++;
	}
	if (flag == 0)
	{
		return (0);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			f = i;
			for (j = 0; needle[j] != '\0'; j++, f++)
			{
				if (haystack[f] == needle[j])
					flag = 2;
				else
					break;
				if (flag != 2)
					break;
			}
			if (flag != 2)
				break;
		}
		if (flag == 2)
			break;
		else
			haystack++;
	}
	return (haystack);
}		
