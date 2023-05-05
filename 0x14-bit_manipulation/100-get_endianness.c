#include "main.h"

/**
 * get_endianness - checks for the endianness
 *
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	char endian[6] = "Endian";

	if (&endian[0] < &endian[5])
		return (1);
	if (&endian[0] > &endian[5])
		return (0);
}
