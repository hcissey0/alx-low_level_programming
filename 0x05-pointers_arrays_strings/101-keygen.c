#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	char pass[84];
	int i = 0, sum = 0, h1, h2;

	srand(time(0));
	while (i < 2772)
	{
		pass[i] = rand() % 94 + 33;
		sum += pass[i++];
	}
	pass[i] = '\0';

	if (sum != 2772)
	{
		h1 = (sum - 2772) / 2;
		h2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			h1++;
		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (h1 + 33))
			{
				pass[i] -= h1;
				break;
			}
		}
		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (h2 + 33))
			{
				pass[i] -= h2;
				break;
			}
		}
	}
	printf("%s", pass);

	return (0);
}
