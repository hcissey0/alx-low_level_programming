#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: character pointer
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0, n = 0;

	while (s[n] != '\0')
		n++;
	

	while (i <= n)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
