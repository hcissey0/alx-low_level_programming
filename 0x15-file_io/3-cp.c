#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#define BUFFER_SIZE 1024

/**
 * error - prints error
 * @m: the error message
 * @filename: the filename
 * @fd: the file des
 * @e: exit status
 */
void error(char *m, char *filename, int fd, int e)
{
	dprintf(STDERR_FILENO, m, filename);
	if (fd != -1)
		close(fd);
	exit(e);
}

/**
 * main - Entry point
 * @ac: commandline argument count
 * @av: the command line arguments
 *
 * Return: 0 on success, otherwise on failure
 */
int main(int ac, char **av)
{
	int i = 0, fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t r, w;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		error("Error: Can't read from file %s\n", av[1], fd_from, 98);
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd-to == -1)
		error("Error: Can't write to %s\n", av[2], fd_to, 99);
	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
			error("Error: Can't write to %s\n", av[2], fd_to, 99);
	}
	if (r == -1)
		error("Error: Can't read from file %s\n", av[1], fd_from, 98);
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
