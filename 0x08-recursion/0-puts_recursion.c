#include "main.h"
/**
 *_puts_recursion - print a string
 *@s : pointer
 */
void _puts_recursion(char *s)
{
	if (*s != 0)
	{
		_putchar(*s);
		s++;
	}
	if (*s != 0)
	{
		_puts_recursion(s);
	}
	else
	{
	_putchar('\n');
	}
}
