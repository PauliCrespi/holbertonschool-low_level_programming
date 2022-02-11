#include "main.h"
/**
 *puts2 - put
 *@str : s
 */
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
