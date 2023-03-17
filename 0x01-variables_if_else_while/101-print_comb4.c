#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints unique combinations of 3 digits
 * Return: Always 0
 */
int main(void)
{
	int a, b = 48, c, d = 49, e;

	for (a = 48, a <= 57; a++)
	{
		b++;
		for (c = b; c <= 57; c++)
		{
			d++;
			for (e = d; e <= 57; e++)
			{
				putchar(a);
				putchar(c);
				putchar(e);
				if (a == '7' && c == '8' && e == '9')
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
	}

	return (0);
}
