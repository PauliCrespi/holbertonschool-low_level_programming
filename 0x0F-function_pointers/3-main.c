#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - function
 *@argc : argc
 *@argv : argv
 *Return: int
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
