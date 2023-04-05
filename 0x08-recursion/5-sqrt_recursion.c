#include "main.h"

/**
 * _sqrt - finds the square root with a guess
 * @n: the number to find
 * @g: the guess number
 * Return: the square root
 */
int _sqrt(int n, int g)
{
	if (g * g > n)
		return (-1);
	if (g * g == n)
		return (g);
	return (_sqrt(n, g + 1));
}

/**
 * _sqrt_recursion - Findes the square root
 * @n: number to find
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 1));
}
