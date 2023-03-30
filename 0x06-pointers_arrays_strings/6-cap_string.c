#include "main.h"

/**
 * cap_string - capitalizes a string
 * @s: string to be capitalized
 * Return: character pointer
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 32 || s[i] == '\t' || s[i] == '.' ||
				s[i] == '\n' || s[i] == ';' || s[i] == '(' ||
				s[i] == '\v' || s[i] == '\a' || s[i] == '\r' ||
				s[i] == '\f' || s[i] == '[' || s[i] == '{' ||
				s[i] == ',' || s[i] == '?' || s[i] == '"' ||
				s[i] == ')' || s[i] == '}' || s[i] == '!')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
		i++;
	}

	return (s);
}
