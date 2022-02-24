#include "main.h"
#include "2-strlen_recursion.c"
/**
 *pal - auxiliary function
 *@s : pointer
 *@start : int
 *@length : int
 *@l : int
 *Return: int
 */
int pal(char *s, int start, int length, int l)
{
	if (start <= l / 2)
	{
		if (s[start] == s[length])
		{
			return (pal(s, start + 1, length - 1, l));
		}
		if (s[start] != s[length])
			return (0);
	}
	return (1);
}
/**
 *is_palindrome - search for palindrome
 *@s : pointer
 *Return: 1 if palindrome or 0
 */
int is_palindrome(char *s)
{
	int length;
	int l;

	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		l = _strlen_recursion(s);
		length = _strlen_recursion(s);
		return (pal(s, 0, length - 1, l));
	}
}
