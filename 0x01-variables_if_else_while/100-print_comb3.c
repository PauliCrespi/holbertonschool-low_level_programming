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
int cc;
comma = 44;
for (ch = '0'; ch <= '9'; ch++)
{
for (cc = '0'; cc < '9'; cc++)
{
if (ch != cc)
{
putchar (ch);
putchar (cc);
if (ch < '8' && cc < '9')
{
putchar (comma);
putchar (' ');
}}
}}
putchar ('\n');
return (0);
}
