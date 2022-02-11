#include "main.h"
/**
 *print_rev - print string in reverse
 *@s : s
 */
void print_rev(char *s)
{
int m;
int i;

for (i = 0; s[i] != '\0'; i++)
{

}
i = i - 1;

for (m = i; m >= 0; m--)
{
_putchar(s[m]);
}
_putchar('\n');
}
