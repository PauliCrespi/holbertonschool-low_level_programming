#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - Random number evaluation
 *
 *Return: zero
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
{
printf("is negative\n");
}
else if (n > 0)
{
printf("is positive \n");
}
else
{
printf("is zero \n");
}
return (0);
}
