#include <stdlib.h>
#include <time.h>
/* main - function checks last digit
*Return: zero
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int lastDigit;
lastDigit = n % 10;
printf("Last digit of %d is %d", n, lastDigit);
if (lastDigit > 5)
{
printf("and is greater than five\n");
}
else if (lastDigit == 0)
{
printf("and is 0\n");
}
else if (lastDigit > 6 && lastDigit != 0)
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
