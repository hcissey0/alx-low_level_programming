#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints unique combinations of 3 digits
 * Return: Always 0
 */
int main(void)
{
	int a, b, c, d = 49, e = 50;

	for (a = 48; a <= 57; a++)
	{
		d = ++e;
		for (b = e; b <= 57; c++)
		{
			d++;
			for (c = d; c <= 57; e++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == '7' && b == '8' && c == '9')
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
