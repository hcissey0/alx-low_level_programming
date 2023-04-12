#include "main.h"
#include <string.h>

/**
 * words - counts the number of words in the string
 * @s: the string
 * Return: string count
 */
int words(char *s)
{
	int i, c;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
			c++;
	}
	return (c);
}

/**
 * strtow - converts a string to array of words
 * @str: the string
 * Return: array of words
 */
char **strtow(char *str)
{
	int i, j, k, w;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);
	w = words(str);
}
