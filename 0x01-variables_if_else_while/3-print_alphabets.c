#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints upper and lower case alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	char A;

	for (a = 97; a <= 122; a++)
		putchar(a);
	for (A = 65; A <= 90; A++)
		putchar(A);
	putchar('\n');

	return (0);
}
