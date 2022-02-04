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
	int ccc;
	comma = 44;

	for (ch = '0'; ch < '9'; ch++)
	{
		for (cc = ch; cc <= '9'; cc++)
		{
			for (ccc = cc; ccc <= '9'; ccc++)
			{
			if (ch != cc && ch != ccc && cc != ccc)
			{
				putchar (ch);
				putchar (cc);
				putchar (ccc);
				if (ch < '7' && cc < '9' && ccc <= '9')
				{
					putchar (comma);
					putchar (' ');
				}}
		}}}
	putchar ('\n');
	return (0);
}
