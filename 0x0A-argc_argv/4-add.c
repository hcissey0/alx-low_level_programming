#include "main.h"

/**
 * print - prints a numberr
 * @n: number to print
 */
void print(int n)
{
	if (n / 10 != 0)
		print(n / 10);
	_putchar(n % 10 + 48);
}

/**
 * toInt - converts a stirng to int
 * @s: the string to be converted
 * Return: interger value of the stiring
 */
int toInt(char *s)
{
	int res = 0, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		res = res * 10 + (s[i] - 48);
	}
	return (res);
}

/**
 * main - Entryu point
 * @argc: command line argument count
 * @argv: command line arguments
 *
 * Return: 0 on success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, j, res = 0;

	if (argc == 1)
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(argv[i] + j) != '\0'; j++)
		{
			if (!(*(argv[i] + j) >= 48 && *(argv[i] + j) <= 57))
			{
				_putchar('E');
				_putchar('r');
				_putchar('r');
				_putchar('o');
				_putchar('r');
				_putchar('\n');
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
		res = res + toInt(argv[i]);
	print(res);
	_putchar('\n');
	return (0);
}
