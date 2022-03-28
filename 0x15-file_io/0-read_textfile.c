#include "main.h"
/**
 *read_textfile - func
 *@filename : pointer
 *@letters : number
 *Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, fr, fw;
	char *buff = malloc(letters * sizeof(char));

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	fr = read(fd, buff, letters);
	if (fr == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	fw = write(STDOUT_FILENO, buff, fr);
	free(buff);
	close(fd);
	if (fw == -1)
		return (0);
	return (fw);
}
