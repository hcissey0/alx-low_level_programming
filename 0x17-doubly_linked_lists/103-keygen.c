#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

/**
 * f1 - digit one
 * @i: argument 1
 *
 * Return: ans
 */
unsigned int f1(int i)
{
	return ((i ^ 0x3b) & 0x3f);
}

/**
 * f2 - digit two
 * @a: arg1
 * @n: size
 * Return: ans
 */
unsigned int f2(char *a, int n)
{
	int m = 0, i;

	for (i = 0; i < n; i++)
		m += *(a + i);
	return ((m ^ 0x4f) & 0x3f);
}

/**
 * f3 - digit three
 * @a: arg1
 * @n: size
 * Return: ans
 */
unsigned int f3(char *a, int n)
{
	int m = 1, i;

	for (i = 0; i < n; i++)
		m = (*(a + i) * m);
	return ((m ^ 0x55) & 0x3f);
}

/**
 * f4 - digit four
 * @a: arg1
 * @n: size
 * Return: ans
 */
unsigned int f4(char *a, int n)
{
	int m = *a, i;

	for (i = 0; i < n; i++)
		if (a[i] > 10)
			m = a[i];
	srand(m ^ 0xe);
	return (rand() & 0x3f);
}

/**
 * f5 - digit five
 * @a: arg1
 * @n: size
 * Return: ans
 */
unsigned int f5(char *a, int n)
{
	int m = 0, i;

	for (i = 0; i < n; i++)
		m += (*(a + i) * (*(a + i)));

	return ((m ^ 0xef) & 0x3f);
}

/**
 * f6 - digit six
 * c: char
 * Return: ans
 */
unsigned int f6(char c)
{
	int m = 0, i;

	for (i = 0; c > i; i++)
		m = rand();
	return ((m ^ 0xe5) & 0x3f);
}

/**
 * main - Entry point
 * @ac: argc
 * @av: argv
 * Return: Always 0
 */
int main(int ac, char **av)
{
	char pass[7], *m;
	int i = 0;
	char s[64] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	if (ac != 2)
	{
		printf("Usage: %s username\n", av[0]);
		return (1);
	}
	m = av[1];
	i = strlen(m);
	pass[0] = s[f1(i)];
	pass[1] = s[f2(m, i)];
	pass[2] = s[f3(m, i)];
	pass[3] = s[f4(m, i)];
	pass[4] = s[f5(m, i)];
	pass[5] = s[f6(*m)];
	pass[6] = '\0';
	printf("%s", pass);

	return (0);
}
