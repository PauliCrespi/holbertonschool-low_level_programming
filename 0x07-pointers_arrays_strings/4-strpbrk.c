#include "main.h"
/**
 *_strpbrk - string finding
 *@s : pointer
 *@accept : pointer
 *Return: null or pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int flag = 0;
	char *f;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				f = &s[i];
				break;
			}
			if (flag == 1)
				break;
		}
		if (flag == 1)
			break;
	}
	if (flag == 1)
		return (f);
	else
		return (NULL);
}
