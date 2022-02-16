#include "main.h"
/**
 *_strcmp - str
 *@s1 : s
 *@s2 : s2
 *Return: counter
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
			else
		{
				return (s1[i] - s2[i]);
				break;
		}
	}
	if (s1[i] != '\0' && s2[i] == '\0')
	{
			return (0);
	}
		else if (s1[i] == '\0' && s2[i] != '\0')
	{
			return (0);
	}
		else
	{
			return (0);
	}
}
