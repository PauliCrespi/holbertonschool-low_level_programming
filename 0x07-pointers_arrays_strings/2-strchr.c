#include "main.h"
/**
 *_strchr - string search
 *@s : pointer
 *@c : searchinf char
 *Return: pointer or null
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	if (c != '\0' && *s == '\0')
		return (0);
	else
		return (s);
}
