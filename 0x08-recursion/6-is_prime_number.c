#include "main.h"

/**
 * not_div - check if a num is devisible
 * @n: num to check
 * @i: to be used to divide
 *
 * Return: 1 if divisibe 0 otherwise
 */
int not_div(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (not_div(n, i + 1));
}

/**
 * is_prime_number - chechs if a numbe is prime
 * @n: the number to check
 *
 * Return: 1 if a prime number else 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	return (not_div(n, 4));
}
