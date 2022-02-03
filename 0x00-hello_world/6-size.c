#include <stdio.h>
/**
 * *main - print size
 * *Return: a zero
 * */
int main(void)
{
printf("Size of a char:%lu\n", sizeof(char), "byte(s)\n");
printf("Size of an int:%lu\n", sizeof(int), "byte(s)\n");
printf("Size of a long int:%lu\n", sizeof(longint), "byte(s)\n");
printf("Size of a long long int:%lu", sizeof(longlongint), "byte(s)\n");
printf("Size of a float:%lu", sizeof(float), "byte(s)\n");
return (0);
}
