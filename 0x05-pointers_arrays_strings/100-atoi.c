#include "main.h"

/**
 * _atoi - changes string to number
 * @s: string to be changed
 * Return: converted number
 */
int _atoi(char *s)
{
	int i, ans = 0, neg = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 57 && s[i] >= 48)
		{
			ans = ans * 10 + (s[i] - 48);
		}
		else
		{
			if (s[i - 1] <= 57 && s[i - 1] >= 48)
				break;
			if (s[i] == '-')
				neg++;
		}
	}

	if (neg % 2 != 0)
		ans *= -1;
	return (ans);
}
