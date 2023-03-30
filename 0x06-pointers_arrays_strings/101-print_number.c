#include "main.h"

/**
 * print_number - prints a number
 * @n: number to be printed
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar(45);
		i = -n;
	}
	else
	{
		i = n;
	}

	if (i / 10 != 0)
		print_number(i / 10);

	_putchar(i % 10 + 48);
} 
