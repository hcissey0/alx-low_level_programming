#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic
 * @c: character to be checked
 *
 * Return: 1 if alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
