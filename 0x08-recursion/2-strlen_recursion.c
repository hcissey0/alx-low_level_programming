#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 * @s: the string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
