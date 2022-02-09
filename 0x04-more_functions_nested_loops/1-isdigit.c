#include <ctype.h>
#include "main.h"

/**
 *_isdigit - checking for a digit
 *@c : input
 *Return: 1 if digit, 0 if else
 */
int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
