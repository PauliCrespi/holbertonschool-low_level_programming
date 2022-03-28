#include "main.h"
/**
 *create_file - func
 *@filename : pointer of name
 *@text_content : pointer to content
 *Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int i;
	ssize_t fp, fw;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fp == -1)
		return (-1);
	if (!text_content)
		return (1);
	for (i = 0; text_content[i] != '\0'; i++)
	{
	}
	fw = write(fp, text_content, i);
	if (fw == -1)
		return (0);
	close(fp);
	return (1);
}
