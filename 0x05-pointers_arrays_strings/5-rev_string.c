#include "main.h"
#include <string.h>
/**
 *rev_string - reversing
 *@s : s
 */
void rev_string(char *s)
{
int m;
int i;
char array;

for (i = 0; s[i] != '\0'; i++)
{

}
i = i - 1;

for (m = 0; m <= i; m++, i--)
{
array = s[m];
s[m] = s[i];
s[i] = array;
}
}
