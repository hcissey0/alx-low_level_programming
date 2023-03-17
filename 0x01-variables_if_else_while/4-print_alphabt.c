#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 97; a <= 122; a++)
	{
		if (a != 'q' && a != 'e')
			putchar(a);
	}
	putchar('\n');

	return (0);
}
