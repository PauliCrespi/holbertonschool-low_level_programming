#include <stdlib.h>
#include <stdio.h>
/**
*main - print the whole alphabet in upper and lowercase
*Return: zero
*/
int main(void)
{
char ch;
char CH;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar (ch);
}
for (CH = 'A'; CH <= 'Z'; CH++)
{
putchar(CH);
}
putchar('\n');
return (0);
}
