#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int a = 1, b = 2, c, i = 0;

	c = a + b;
	do {
		printf("%u", a);
		a = b;
		b = c;
		c = a + b;
		if (i != 50)
			printf(", ");
		i++;
	} while (i <= 50);
	printf("\n");
	return (0);
}
