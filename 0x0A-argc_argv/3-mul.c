#include "main.h"

/**
 * print - prints and integer
 * @n: the interger
 */
void print(int n)
{
	if (n / 10 != 0)
		print(n / 10);
	_putchar('0' + n % 10);
}

/**
 * main - entry point
 * @argc: command line argument count
 * @argv: command line arguments
 *
 * Return: 0 on success 1 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');

		return (1);
	}
	else
	{
		int i = *argv[1], j = *argv[2];
		int res = i * j;

		print(res);
		_putchar('\n');

		return (0);
	}
}
