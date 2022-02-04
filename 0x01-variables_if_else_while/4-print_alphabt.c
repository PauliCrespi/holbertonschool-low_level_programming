include <stdlib.h>
/* more headers goes there */
/* main - print the whole alphabet except q and e
*Return: zero
*/
int main(void)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
while (ch != 'q' && ch != 'e')
{
putchar (ch'\n');
getch();
}
}
return (0);
}
