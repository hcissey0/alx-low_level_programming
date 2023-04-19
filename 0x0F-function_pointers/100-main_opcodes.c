#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: command line arguments count
 * @argv: command line arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, n;
	unsigned char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	p = (unsigned char *)main;
	for (i = 0; i < n; i++)
	{
		printf("%02x", p[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
