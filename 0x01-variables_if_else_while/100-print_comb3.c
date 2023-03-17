#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints uniwue combinations
 * Return: Always 0
 */
int main(void)
{
	int a, b = 48, c;

	for (a = 48; a <= 57; a++)
	{
		b++;
		for (c = b; c <= 57; c++)
		{
			putchar(a);
			putchar(c);
			if (a == '8' && c == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
