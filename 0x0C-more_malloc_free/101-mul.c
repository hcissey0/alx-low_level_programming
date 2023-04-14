#include "main.h"
#include <string.h>

/**
 * _calloc - imitates calloc
 * @nmemb: nmemb
 * @size: size of array
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{                                                                     void *s;

        if (nmemb == 0 || size == 0)
                return (NULL);
        s = malloc(nmemb * size);
        if (s == NULL)
                return (NULL);

        memset(s, 0, nmemb * size);
        return (s);
}

/**
 * err - pronts error
 */
void err(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}

/**
 * dig - check if all are digit
 * @s: the string
 *
 * Return: 1 on success 0 otherwise
 */
int dig(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * main - entry point
 * @argc: cli argument count
 * @argv: cli arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j, c, b, len1, len2, *s;

	if (argc != 3)
	{
		err();
		return (98);
	}
	if (!dig(argv[1]) || !dig(argv[2]))
	{
		err();
		return (98);
	}
	i = 0;
	j = 0;
	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);
	s = _calloc(len1 + len2, sizeof(int));
	if (s == NULL)
	{
		err();
		return (98);
	}
	for (i = len1 - 1; i >= 0; i--)
	{
		c = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			int d1 = argv[1][i] - '0';
			int d2 = argv[2][j] - '0';
			int ans = d1 * d2 + c + s[i + j + 1];
			c = ans / 10;
			s[i + j + 1] = ans;
		}
		s[i + j +1] += c;
	}
	b = 0;
	while (b < len1 + len2 - 1 && s[b] == 0)
		b++;
	for (i = b; i < len1 + len2; i++)
		_putchar(s[i] + '0');
	_putchar('\n');
	free(s);
	return (0);
}
