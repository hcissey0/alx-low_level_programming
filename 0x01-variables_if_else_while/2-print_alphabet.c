#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabets with putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 97; a <= 122; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
