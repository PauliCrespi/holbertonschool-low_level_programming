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
return (0);
}
for (CH = 'A'; CH <= 'Z'; ch++)
{
putchar(CH);
}
putchar('\n');
return (0);
}
