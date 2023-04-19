#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: the printer function
 */
void print_name(char *name, void (*f)(char *))
{
	char *s = name;

	if (name == NULL)
		s = "";
	(*f)(s);
}
