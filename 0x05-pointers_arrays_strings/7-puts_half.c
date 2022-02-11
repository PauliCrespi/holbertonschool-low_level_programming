#include "main.h"
/**
 *puts_half - puts
 *@str : s
 */
void puts_half(char *str)
{
int i;
int m;

for (i = 0; str[i] != '\0'; i++)
{

}
if (i % 2 != 0)
{
i = ((i / 2) + 1);
}
else
{
i = i / 2;
}
for (m = i; str[m] != '\0'; m++)
{
_putchar(str[m]);
}
_putchar('\n');
}
