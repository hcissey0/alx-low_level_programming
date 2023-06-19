#include "main.h"

/**
 * _puts - prints a string to the screen
 * @s: string to be printed
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
