#include "main.h"

/**
 * puts_half - prints half a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int n = 0, i = 0, j = 0;

	while (str[n] != '\0')
		n++;

	if (n % 2 == 0)
		i = n / 2;
	else
		i = (n - 1) / 2;

	for (j = n - i; j < n; j++)
		_putchar(str[j]);

	_putchar('\n');
}
