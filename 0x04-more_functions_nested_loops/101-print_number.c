#include "main.h"

/**
 * print_number - prints a number recursively
 * @n: the number to be printed
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}

	if (n >= 10)
		print_number(n / 10);

	_putchar(48 + n % 10);
}
