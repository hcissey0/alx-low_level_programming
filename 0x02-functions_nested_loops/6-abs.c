#include "main.h"

/**
 * _abs - prints the absolute value
 * @n: number to be checked
 *
 * Return: the absolute of n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n - 2 * n);
}
