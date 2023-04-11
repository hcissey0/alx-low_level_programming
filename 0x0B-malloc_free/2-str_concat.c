#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the new string or null
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j, ns1 = 0, ns2 = 0;
	char *s;

	if (s1)
		ns1 = strlen(s1);
	if (s2)
		ns2 = strlen(s2);
	s = malloc(sizeof(char) * (ns1 + ns2 + 1));
	for (; i < ns1; i++)
	{
		if (!s1)
			break;
		s[i] = s1[i];
	}
	for (j = 0; j < ns2; j++, i++)
	{
		if (!s2)
			break;
		s[i] = s2[j];
	}
	s[i] = '\0';

	return (s);
}
