#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
	int i;

	if (2 <= argc)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf ("%d\n", i);
	}
	if (argc < 2)
	{
		printf ("Error\n");
		i = 1;
	}
	return (i);
}
