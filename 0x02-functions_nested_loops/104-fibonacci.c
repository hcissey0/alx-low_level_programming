#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	double a = 1, b = 2, c, i = 0;

	c = a + b;
	do {
		printf("%.f", a);
		a = b;
		b = c;
		c = a + b;
		if (i != 97)
			printf(", ");
		i++;
	} while (i < 98);
	printf("\n");
	return (0);
}