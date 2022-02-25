#include <stdio.h>
/**
 *main - main
 *@argc : argc
 *@argv : pointer
 *Return: i
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i = -1;

	while (i < argc - 1)
	{
		i++;
	}
	printf("%d\n", i);
	return (i);
}
