#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints unique combinations of 3 digits
 * Return: Always 0
 */
int main(void)
{
	int a, b, c, e = '1', g = '0';

	for (a = '0'; a <= '9'; a++)
	{
		e = ++g;
		for (b = g; b <= '9'; b++)
		{
			e++;
			for (c = e; c <= '9'; c++)
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
