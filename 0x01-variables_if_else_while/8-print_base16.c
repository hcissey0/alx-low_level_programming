#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	char a;

	for (a = 48; a <= 57; a++)
		putchar(a);
	for (a = 97; a <= 102; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
