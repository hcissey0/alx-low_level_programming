#include "main.h"

/**
 * wildcmp - compares two strings taking wildcards into account
 * @s1: first string
 * @s2: second string (can contain wildcards)
 *
 * Return: 1 if same 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 2));
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	return (0);
}
