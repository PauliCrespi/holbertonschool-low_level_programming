#include <stdlib.h>
#include <stdio.h>
/**
*main - print the whole alphabet
*Return: zero
*/
int main(void)
{
int comma;
int ch;
comma = 44;
for (ch = '0'; ch <= '9'; ch++)
{
putchar (ch);
putchar (comma);
if (ch <9)
{
putchar (' ');
}
}
putchar ('\n');
return (0);
}
