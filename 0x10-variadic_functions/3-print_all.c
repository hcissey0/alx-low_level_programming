#include "variadic_functions.h"

/**
 * print_all - prints any type
 * @format: for to be printed
 */
void print_all(const char * const format, ...)
{
	char *s;
	int i = 0;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		default:
			i++;
			continue;
		}
		if (i < (int) strlen(format) - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
