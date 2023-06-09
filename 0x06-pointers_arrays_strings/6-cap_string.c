#include "main.h"

/**
 * cap_string - capitalizes a string
 * @s: string to be capitalized
 * Return: character pointer
 */
char *cap_string(char *s)
{
	int i = 0, j = 0;

	while (s[j] != '\0')
		j++;
	if (j <= 1)
		return (s);
	if (s[i] >= 97 && s[i] <= 122)
		s[i] -= 32;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				s[i] == ',' || s[i] == ';' || s[i] == '.' ||
				s[i] == '!' || s[i] == '?' || s[i] == '"' ||
				s[i] == '(' || s[i] == ')' || s[i] == '{' ||
				s[i] == '}')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
		i++;
	}

	return (s);
}
