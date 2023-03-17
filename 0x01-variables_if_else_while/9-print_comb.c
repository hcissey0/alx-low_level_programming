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
			putchar(b);
			putchar(a);
			if (a != '9')
				putchar(',');
		}
		putchar('\n');
	}

	return (0);
}
