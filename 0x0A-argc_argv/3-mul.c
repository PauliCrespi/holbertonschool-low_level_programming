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
	int i;

	if (argc >= 2)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	if (argc < 2)
	{
		printf("Error\n");
		i = 1;
	}
	return (i);
}
