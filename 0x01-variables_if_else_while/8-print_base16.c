#include <stdlib.h>
#include <stdio.h>
/**
 * *main - print the whole alphabet
 * *Return: zero
 * */
int main(void)
{
char letter;
int ch;
for (ch = '0'; ch <= '9'; ch++)
{
putchar (ch);
}
for (letter = 'a'; ch <= 'f'; ch++)
{
putchar (letter);
}
putchar ('\n');
return (0);
}
