#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: the content of the file
 *
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int r, w, fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	r = strlen(text_content);
	w = write(STDOUT_FILENO, text_content, r);
	if (w == -1 || w != r)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
