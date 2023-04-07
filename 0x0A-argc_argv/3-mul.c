#include "main.h"

/**
 * print - prints and integer
 * @n: the interger
 */
void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		print(n / 10);
	_putchar('0' + n % 10);
}

/**
 * toInt - converts char to int
 * @s: string to convert
 * Return: integer value of the string
 */
int toInt(char *s)
{
	int i = 0, neg = 0, res = 0;

	if (s[i] == '-')
	{
		neg++;
		i++;
	}
	while (s[i] != '\0')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	if (neg)
		res *= -1;
	return (res);
}

/**
 * main - entry point
 * @argc: command line argument count
 * @argv: command line arguments
 *
 * Return: 0 on success 1 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');

		return (1);
	}
	else
	{
		int i = toInt(argv[1]), j = toInt(argv[2]);
		int res = i * j;

		print(res);
		_putchar('\n');

		return (0);
	}
}
