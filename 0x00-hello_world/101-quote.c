#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints text without using Puts and Printf.
 * Return: returns 1 (Succes)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, sizeof(str) - 1, 1, stdout);

	return (1);
}
