#include "main.h"
#include <string.h>

/**
 * strtow - converts a string to array of words
 * @str: the string
 * Return: array of words
 */
char **strtow(char *str)
{
	int i = 0, j = 0, k = 0, len = 0, rows = 0, cols = 0;
	char **s;

	if (str == NULL || strlen(str) < 1)
		return (NULL);
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
		{
			continue;
		}
		else
		{
			if (str[i - 1] ==  ' ')
				rows++;
		}
	}
	rows++;
	s = malloc(sizeof(char *) * rows);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	cols = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
		{
			cols = 0;
			continue;
		}
		else
		{
			cols++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				s[k++] = malloc(sizeof(char) * cols);
				cols = 0;
			}
		}
	}
	j = 0;
	i = 0;
	k = 0;
	cols = 0;
	for (; i < rows - 1; i++)
	{
		for (; j < len; j++)
		{
			if (str[j] == ' ')
			{
				cols = 1;
				break;
			}
			else
			{
				s[i][k++] = str[j];
				cols = 0;
			}
		}
		if (cols)
		{
			i--;
			cols = 0;
		}
	}
	s[rows - 1] = NULL;
	return (s);
}
