#include "main.h"

/**
 * read_textfile - reads fron a text file
 * @filename: name of the file
 * @letters: number of letters to read
 *
 * Return: number of letters that was read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int r, w, fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	r = read(fd, buffer, letters);
	if (r < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[r] = '\0';
	w = write(STDOUT_FILENO, buffer, letters);
	if (w < 0 || r != w)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);

	return (w);
}
