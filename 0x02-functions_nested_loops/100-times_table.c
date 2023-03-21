#include "main.h"

/**
 * print_times_table - prints the times table up to n times
 * @n: number of times table to be printed
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n > 0 && n < 16)
	{
		int a, b, c;

		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (c / 10 > 9)
				{
					_putchar(' ');
					_putchar('0' + c / 100);
					_putchar('0' + c / 10);
					_putchar('0' + c % 10);
				}
				else if (c / 10 > 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + c / 10);
					_putchar('0' + c % 10);
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + c);
				}
				if (b == n)
					_putchar('\n');
				else
					_putchar(',');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
