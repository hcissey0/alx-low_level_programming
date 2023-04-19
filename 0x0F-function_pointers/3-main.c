#include "3-calc.h"

/**
 * main - Entry point
 * @argc: command line arguments count
 * @argv: command line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op = argv[2];
	
