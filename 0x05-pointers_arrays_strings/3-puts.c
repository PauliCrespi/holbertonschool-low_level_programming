#include "main.h"
/**
 *_puts - array char to string
 *@str : str
 *Return: string
 */
void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
