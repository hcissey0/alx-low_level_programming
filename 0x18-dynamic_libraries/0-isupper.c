#include "main.h"

/**
 * _isupper - checkes if a character is upper case or lower case
 * @c: character to be checked
 * Return: 1 if upper 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
