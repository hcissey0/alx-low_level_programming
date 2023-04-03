#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0, f = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			f++;
			break;
		}
		i++;
	}
	if (f)
		return (s + i);
	else
		return (NULL);
}
