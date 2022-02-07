#include "main.h"
#include <ctype.h>

/**
* _islower - check for lowercases
* c is a letter.
* Return: Always 0.
*/
int _islower(int c)
{
if (c >= 'A' && c <= 'Z')
{
_putchar("0");
return (0);
}
else if (c >= 'a' && c <= 'z')
{
_putchar("1");
return (1);
}
}
