#include "main.h"
/**
 *_strcat - str
 *@dest : dest
 *@src : src
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i;
int n = 0;
int j;

for (i = 0; dest[i] != '\0'; i++)
{

}
for (j = i; src[n] != '\0'; j++, n++)
{
dest[j] = src[n];
}
dest[j] = 0;
return (dest);
}
