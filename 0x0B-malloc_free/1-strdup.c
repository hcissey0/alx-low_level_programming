#include "main.h"
#include <string.h>

/**
 * _strdup - copies a string to a loc
 * @str: strimg to copy
 *
 * Return: a pointer or null
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0, n;

	if (!str)
		return (NULL);
	n = strlen(str);
	s = malloc(sizeof(char) * (n + 1));
	if (!s)
		return (NULL);
	while (i <= n)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
