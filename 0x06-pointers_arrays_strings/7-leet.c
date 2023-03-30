#include "main.h"

/**
 * leet - converts text to leet
 * @s: string to change
 * Return: character pointer
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		char c = s[i];
		int a = (s[i] == 'a' || s[i] == 'A');
		int e = (s[i] == 'e' || s[i] == 'E');
		int o = (s[i] == 'o' || s[i] == 'O');
		int t = (s[i] == 't' || s[i] == 'T');
		int l = (s[i] == 'l' || s[i] == 'L');
		int g = (s[i] == 'g' || s[i] == 'G');

		s[i] = (a * '4') + (e * '3') + (o * '0') + (t * '7') + (l * '1') + (g * '6') + (!(a || e || o || t || l || g) * c);
	}

	return (s);
}
