#include "main.h"
#include <string.h>

/**
 * pal - checkes if a str is palindrome
 * @s: string to be checked
 * @a: starting point
 * @e: end point
 *
 * Return: returns 1 if palindrome 0 otherwise
 */
int pal(char *s, int a, int e)
{
	if (a >= e)
		return (1);
	if (s[a] != s[e])
		return (0);
	return (pal(s, a + 1, e - 1));
}

/**
 * is_palindrome - checks if a stringis palindrome
 * @s: string to be checked
 *
 * Return: 1 if palindrome 0 other wise
 */
int is_palindrome(char *s)
{
	int sa = 0, e = strlen(s);
	return (pal(s, sa, e - 1));
}
