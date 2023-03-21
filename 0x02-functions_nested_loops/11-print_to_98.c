#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers to 98
 * @n: number to print from
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				printf("\n");
			else
				printf(", ");
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				printf("\n");
			else
				printf(", ");
		}
	}
}
