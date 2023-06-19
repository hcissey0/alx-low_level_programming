#include "main.h"

/**
 * _strpbrk - serches for any set of bytes
 * @s: string to search through
 * @accept: bytes to search for
 * Return: character pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, found = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found)
			return (s + i);
	}
	return (NULL);
}
