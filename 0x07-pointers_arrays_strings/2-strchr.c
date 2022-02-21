#include "main.h"
/**
 *_strchr - string search
 *@s : pointer
 *@c : searchinf char
 *Return: pointer or null
 */
char *_strchr(char *s, char c)
{
	int i;
	int flag = 0;
	char *f;

	for (i = 0; flag == 0; i++)
	{
		if (s[i] == c)
		{
			f = &s[i];
			flag = 1;
		}
	}
	if (flag == 0)
		return (NULL);
	else
		return (f);
}
