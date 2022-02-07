#include "main.h"
#include <stdlib.h>
#include "1-alphabet.c"

/**
*print_alphabet_x10 - print the alphabet 10 time.
* Return: Always 0.
*/

void print_alphabet_x10(void)
{
int counter = 0;

while (counter < 10)
{
print_alphabet();
counter = (counter + 1);
}
}
