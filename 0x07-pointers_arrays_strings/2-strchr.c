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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			f = &s[i];
			flag = 1;
			break;
		}
		if (flag == 1)
			break;
	}
	if (flag == 1)
		return (f);
	else
		return (0);
}
