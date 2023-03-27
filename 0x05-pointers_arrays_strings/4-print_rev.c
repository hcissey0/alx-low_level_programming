#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	for (i = 0; s[i] != '\0'; i ++)
		n++;

	for (i = n; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
