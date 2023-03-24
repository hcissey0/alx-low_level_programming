#include "main.h"

/**
 * print_number - prints a number recursively
 * @n: the number to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}

	if (i >= 10)
		print_number(i / 10);

	_putchar(48 + i % 10);
}
