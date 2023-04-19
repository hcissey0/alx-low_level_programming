#include "3-calc.h"

/**
 * get_op_func - returns the function of the operator
 * @s: the op
 * Return: int pointer
 */
int (*get_op_func(char *s))(int, int);
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
