#include "main.h"
/**
 *cap_string - changing
 *@arrstr : char
 *Return: arrstr
 */
char *cap_string(char *arrstr)
{
	int i;
	int j;
	char flags1[] = {'\n', '\t', ',', ';', '.', '!', '?', ')',
'}', '(', '{', '"', ' '};
	if (arrstr[0] >= 'a' && arrstr[0] <= 'z')
		arrstr[0] = arrstr[0] - 32;
	for (i = 0; arrstr[i] != '\0'; i++)
	{
		for (j = 0; flags1[j] != '\0'; j++)
		{
			if (arrstr[i] == flags1[j])
			{
				if (arrstr[i + 1] == ' ')
				{
					if (arrstr[i + 2] >= 'a' && arrstr[i] <= 'z')
					{
						arrstr[i + 2] = arrstr[i + 2] - 32;
					}
				}
				else if (arrstr[i + 1] >= 'a' && arrstr[i + 1] <= 'z')
				{
					arrstr[i + 1] = arrstr[i + 1] - 32;
				}
			}
		}
	}
	return (arrstr);
}
