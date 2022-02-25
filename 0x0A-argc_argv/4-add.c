#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - main sum
 * @argc : argc
 * @argv : pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int add = 0;
	int j;
	int n;
	int flag = 0;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0, n = strlen(argv[i]); j < n; j++)
			{
				if (isdigit(argv[i][j]))
				{

				}
				else
				{
					printf("Error\n");
					flag = 1;
				}
			}
			if (flag == 0)
				add = add + atoi(argv[i]);
		}
	if (flag == 0)
		printf("%d\n", add);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
