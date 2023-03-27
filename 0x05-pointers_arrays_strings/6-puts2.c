#include "main.h"

/**
 * puts2 - prints odd indexes
 * @str: to be printed
 */
void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
		i++;

	for (; j < i; j++)
	{
		if (j % 2 != 0)
			continue;
		_putchar(str[j]);
	}
	_putchar('\n');
}
