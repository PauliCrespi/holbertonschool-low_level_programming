#include "main.h"
/**
 *add - adding
 *@x : input
 *@z : input
 */
int add(int x, int z)
{
int one;
int two;

int sum = x * z;
one = sum / 10;
two = sum % 10;
return (one + two);
}
