#include "main.h"
#include <ctype.h>

/**
*main - check the code.
* Return: Always 0.
*/

int _isalpha(int c)
{
char zero = 0;
char one = 1;

if (c >= 'A' && c <= 'Z')
{
_putchar(one);
return 1;
}
else if (c >= 'a' && c <= 'z')
{
_putchar(one);
return (1);
}
else 
{
_putchar (zero);
return (0);
}
}
