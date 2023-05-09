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
	ssize_t i = 0;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);
	i = read(fd, buffer, letters);
	if (i < 0)
		return (0);
	i = write(STDOUT_FILENO, buffer, letters);
	if (i < 0 && i != (ssize_t)letters)
		return (0);
	return (letters);
}
