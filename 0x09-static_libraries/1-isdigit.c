#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: character to be checked
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c < 58 && c > 47)
		return (1);
	else
		return (0);
}
