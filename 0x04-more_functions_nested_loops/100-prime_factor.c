#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Return: 0 always
 */
int main(void)
{
	int i;
	unsigned long n = 612852475143;

	for (i = 3; i < 782849; i += 2)
	{
		while (n % i == 0 && n != i)
		{
			n = n / i;
		}
	}

	printf("%lu\n", n);

	return (0);
}
