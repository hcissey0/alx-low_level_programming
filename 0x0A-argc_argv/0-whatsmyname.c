#include "main.h"

/**
 * main - entry point
 * @argc: command line argument count
 * @argv: command line arguments
 *
 * Return: Always 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i = 0;

	while (*(argv[0] + i) != '\0')
	{
		_putchar(*(argv[0] + i));
		i++;
	}
	_putchar('\n');

	return (0);
}
