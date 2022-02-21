#include "main.h"
/**
 *_strstr - string
 *@haystack : pointer
 *@needle : pointer
 *Return: null or pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	char *c;
	int flag = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				flag = 1;
				while (haystack[i] != ' ' && haystack[i] != '\0')
				{
					i++;
					j++;
					if (haystack[i] != needle[j])
					flag = 0;
					c = &haystack[i - 1];
					break;
				}
			}
			if (flag == 1)
				break;
		}
		if (flag == 1)
			break;
	}
	if (flag == 0)
		return (0);
	else
		return (c);
}
