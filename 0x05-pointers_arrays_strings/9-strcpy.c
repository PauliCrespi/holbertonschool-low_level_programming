#include "main.h"
/**
 *_strcpy - str copy
 *@dest : dest
 *@src : copied one
 *Return: pointer to dest
 */
char _strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] <= '\0'; i++)
{
dest[i] = src[i];
}
return (*dest);
}
