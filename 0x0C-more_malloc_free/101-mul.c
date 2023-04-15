#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - imitates calloc
 * @nmemb: nmemb
 * @size: size of array
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	memset(s, 0, nmemb * size);
	return (s);
}

/**
 * error - prints error
 */
void error(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * mul - multiplies the numbers
 */
void mul(char *n1, char *n2)
{
	int i, j, l1, l2, *s;

	l1 = strlen(n1);
	l2 = strlen(n2);
	s = _calloc(l1 + l2, sizeof(int));
	if (s == NULL)
		error();
	for (i = l1 - 1; i >= 0; i--)
	{
		for (j = l2 - 1; j >= 0; j--)
		{
			int d1 = n1[i] - '0';
			int d2 = n2[j] - '0';
			int pd = d1 * d2;
			int p1 = i + j;
			int p2 = i + j + 1;
			int sum = pd + s[p2];
			s[p1] += sum / 10;
			s[p2] = sum % 10;
		}
	}
	i = 0;
	while (i < l1 + l2 && s[i] == 0)
		i++;
	if (i == l1 + l2)
		_putchar('0');
	for (; i < l1 + l2; i++)
		_putchar(s[i] + '0');
	_putchar('\n');
	free(s);
}

/**
 * main - entry point
 * @argc: cli argument count
 * @argv: cli arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
		error();
	for (i = 1; i <= 2; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
				error();
		}
	}

	mul(argv[1], argv[2]);

	return (0);
}
