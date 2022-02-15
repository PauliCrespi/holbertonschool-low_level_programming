#include "main.h"
/**
 *_strncat - str
 *@dest : dest
 *@src : src
 *@n : n
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int m = 0;
int j;
int l;

for (i = 0; dest[i] != '\0'; i++)
{

}
for (l = 0; src[l] != '\0'; l++)
{

}
if (n > l)
{
n = l;
}
for (j = i; m < n; j++)
{
dest[j] = src[m];
m++;
}
return (dest);
}
