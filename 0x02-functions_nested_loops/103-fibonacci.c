#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c, sum = 0;

	c = a + b;
	do {
		if (a % 2 == 0)
			sum += a;
		a = b;
		b = c;
		c = a + b;
	} while (a < 4000000);
	printf("\n");
	return (0);
}
