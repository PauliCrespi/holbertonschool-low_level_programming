#include <stdlib.h>
#include <stdio.h>
/**
*main - print the whole alphabet except q and e
*Return: zero
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar (ch);
}
}
putchar ('\n');
return (0);
}
