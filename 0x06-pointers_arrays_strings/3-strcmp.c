#include "main.h"

/**
 * _strcmp - compare string
 * @s1: furst string
 * @s2: second string
 * Return: character pointer
 */
int _strcmp(char *s1, char *s2)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
		sum1 += s1[i];

	for (i = 0; s2[i] != '\0'; i++)
		sum2 += s2[i];

	return (sum1 - sum2);
}
