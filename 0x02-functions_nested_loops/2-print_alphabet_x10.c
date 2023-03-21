#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int a, b = 0;

	while (b != 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		b++;
		_putchar('\n');
	}
}
