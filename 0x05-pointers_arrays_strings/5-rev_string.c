#include "main.h"

/**
 * rev_string - reverses a string
 * @s: to be reversed
 */
void rev_string(char *s)
{
	int n = 0, i, j;
	char t;

	while (s[i] != '\0')
		n++;
	j = n - 1;
	for (i = 0; i < j && j >= 0; j--, i++)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
