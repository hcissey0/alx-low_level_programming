#include <stdio.h>

/**
 * main - entry point
 * Return: 0 always
 */
int main(void)
{
	int i, max;
	unsigned long long n = 612852475143;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}

	for (i = 3; i <= n; i++)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	printf("%d\n", max);

	return (0);
}
