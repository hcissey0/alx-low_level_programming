#include "main.h"

/**
 * print_last_digit - pritns last digit
 * @n: to be checked
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar('0' + ((n - 2 * n) % 10));
		return ((n - 2 * n) % 10);
	}
	else
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}
}
