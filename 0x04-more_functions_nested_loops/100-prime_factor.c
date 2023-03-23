#include <stdio.h>

/**
 * is_prime - checks if a number is prime
 * @n: num to be checked
 * Return: 1 if true, 0 otherwise
 */
int is_prime(int n)
{
	int i;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	for (i = 0; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
	}

	return (1);
}

/**
 * main - entry point
 * Return: 0 always
 */
int main(void)
{
	int i, max;

	for (i = 1; i * i <= 612852475143; i += 2)
	{
		if (is_prime(i))
			max = i;
	}

	return (0);
}
