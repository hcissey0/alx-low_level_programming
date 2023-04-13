#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of second string
 *
 * Return: pointer to the string location
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *s;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	s = malloc(sizeof(char) * (len1 + n));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		s[i] = s2[j];
	s[i] = '\0';
	return (s);
}
