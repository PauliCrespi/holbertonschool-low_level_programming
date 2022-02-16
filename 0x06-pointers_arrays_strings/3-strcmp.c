#include "main.h"
/**
 *_strcmp - str
 *@s1 : s
 *@s2 : s2
 *Return: counter
 */
int _strcmp(char *s1, char *s2)
{
int i;
int ret = 0;

for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] == s2[i])
{
ret = ret + 0;
}
else if (s1[i] < s2[i])
{
ret = ret + (s2[i] - s1[i]);
}
ret = ret + (s1[i] - s2[i]);
}
return (ret);
}
