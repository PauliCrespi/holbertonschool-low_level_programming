#include "main.h"
/**
 *closeerror - func
 *@argv1 : argv
 *@argv2 : pointer
 *@fr : read
 *@fd : int
 *@fp : int
 */
void closeerror(char *argv1, char *argv2, ssize_t fr, int fd, int fp)
{
	if (fr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv1);
		exit(98);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *argv2);
		exit(100);
	}
	if ((close(fp)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fp %d\n", *argv1);
		exit(100);
	}
}
#include "main.h"
/**
 *main - func
 *@argc : argc
 *@argv : pointer
 *Return: int
 */
int main(int argc, char *argv[])
{
	int fd, fp;
	ssize_t fr, fw;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	fp = open(argv[1], O_RDONLY);
	if (fp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while ((fr = read(fp, buff, 1024)) > 0)
	{
		if (fr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		fw = write(fd, buff, fr);
		if (fw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	closeerror(argv[1], argv[2], fr, fd, fp);
	return (0);
}
