#include "main.h"

/**
 * argstostr - converts arguments to strings
 * @ac: argument count
 * @av: args
 * Return: string pointer
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, n = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (++i < ac)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			n++;
		n++;
	}
	n++;
	s = malloc(sizeof(char) * n);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			s[k++] = av[i][j];
		s[k++] = '\n';
	}
	s[k] = '\0';
	return (s);
}
