#include "variadic_functions.h"

/**
 * print_numbers - prints the given numbers
 * @separator: the separator of the numbers
 * @n: integer count;
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (n == 0)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
