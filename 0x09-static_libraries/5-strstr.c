#include "main.h"

/**
 * _strstr - locates a string
 * @haystack: to search through
 * @needle: to be searched
 * Return: character pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, n = 0;

	while (needle[n] != '\0')
		n++;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0, k = 0; needle[j] != '\0'; j++, k++)
		{
			if (haystack[i + k] != needle[j])
				break;
		}
		if (j == n)
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
