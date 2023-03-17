#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single digits
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
