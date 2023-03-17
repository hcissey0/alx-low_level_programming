#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single digits
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
