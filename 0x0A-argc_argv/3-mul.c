#include <stdio.h>
#include <stdlib.h>
/**
 *main - main function
 *@argc : unused
 *@argv : pointer
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int one, two;

	if (argc == 3)
	{
		one = atoi(argv[1]);
		two = atoi(argv[2]);
		i = one * two;
		printf("%d\n", i);
	}
	if (argc != 3)
	{
		printf("Error\n");
	}
	return (0);
}
