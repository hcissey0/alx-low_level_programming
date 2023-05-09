#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content: the content of the file
 *
 * Return: 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int r, w, fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	r = strlen(text_content);
	w = write(fd, text_content, strlen(text_content) - 1);
	if (w == -1 || w != r)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
