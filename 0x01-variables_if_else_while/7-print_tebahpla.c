#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */
/**
 * *main - print the whole alphabet
 * *Return: zero
 * */
int main(void)
{
char ch;
for (ch = 'z'; ch <= 'a'; ch--)
{
putchar (ch);
}
putchar ('\n');
return (0);
}
