#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: string to be checked
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++);
	return (a);
}
