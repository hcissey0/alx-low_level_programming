#include "main.h"

/**
 * _strspn - count bytes present
 * @s: string to search through
 * @accept: string to check
 * Return: number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0, found = 0;

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
		{
			count++;
			found = 0;
		}
		else
		{
			break;
		}
	}
	return (count);
}
