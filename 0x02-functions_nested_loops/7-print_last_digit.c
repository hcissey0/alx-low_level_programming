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
		return ((n - 2 * n) % 10);
	else
		return (n % 10);
}
