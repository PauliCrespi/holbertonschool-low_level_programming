#include "main.h"
/**
 *_strspn - string bytes counter
 *@s : pointer
 *@accept : pointer
 *Return: byte count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int counter = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			counter++;
			}
		}
	}
return (counter);
}
