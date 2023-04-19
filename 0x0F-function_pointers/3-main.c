#include "3-calc.h"

/**
 * main - Entry point
 * @argc: command line arguments count
 * @argv: command line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int n1, n2, res;
	op_t p;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	p.op = argv[2];
	p.f = get_op_func(argv[2]);
	if (p.f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	res = p.f(n1, n2);
	printf("%d\n", res);

	return (0);
}
