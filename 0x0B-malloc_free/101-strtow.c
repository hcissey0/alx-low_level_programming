#include "main.h"
#include <string.h>

/**
 * words - counts the number of words in the string
 * @s: the string
 * Return: string count
 */
int words(char *s)
{
	int i, c = 0;

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
	if (w < 1)
		return (NULL);
	s = malloc(sizeof(char *) * (w + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0, j = 0; i < w; i++)
	{
		while (str[j] == ' ')
			j++;
		for (k = j; str[k] != ' ' && str[k] != '\0'; k++)
		{
		}
		s[i] = malloc(sizeof(char) * (k - j + 1));
		if (s[i] == NULL)
		{
			for (--i; i >= 0; i++)
				free(s[i]);
			free(s);
			return (NULL);
		}
		for (k = 0; str[j] != ' ' && str[j] != '\0'; j++, k++)
			s[i][k] = str[j];
		s[i][k] = '\0';
	}
	s[w] = NULL;
	return (s);
}
