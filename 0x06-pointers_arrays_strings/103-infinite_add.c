#include "main.h"

/**
 * infinite_add - adds large numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: size of buffer
 *
 * Return: Character pointer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, carry, len1, len2, k;

	len1 = 0;
	while (n1[len1])
		len1++;

	len2 = 0;
	while (n2[len2])
		len2++;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	k = 0;
	carry = 0;
	i = len1 - 1;
	j = len2 - 1;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		int d1 = i >= 0 ? n1[i] - '0' : 0;
		int d2 = j >= 0 ? n2[j] - '0' : 0;

		int sum = d1 + d2 + carry;
		
		if (k >= size_r)
			return (0);
		r[k] = (sum % 10) + '0';
		carry = sum / 10;

		i--;
		j--;
		k++;
	}

	r[k] = '\0';

	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char tmp = r[i];
		r[i] = r[j];
		r[j] = tmp;
	}
	return (r);
}
