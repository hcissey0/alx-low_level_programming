#include "main.h"

/**
 * print_binary - prints a number in binary form
 * @n: the number to print
 *
 * Return: (void)
 */
void print_binary(unsigned long int n)
{
	while (n != 0)
	{
		_putchar('0' + (n & 1));
		n >>= 1;
	}
}
