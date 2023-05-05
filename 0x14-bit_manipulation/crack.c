#include <stdio.h>

/**
 * main - starting point
 *
 * Return: always 0
 */
int main(void)
{
	int a = 74215240;
	int b = 255;

	printf("%c",(b & (unsigned int)(a >> ((char)(0 << 3) ))));
	printf("%c",(b & (unsigned int)(a >> ((char)(1 << 3) ))));
	printf("%c",(b & (unsigned int)(a >> ((char)(2 << 3) ))));
	printf("%c",(b & (unsigned int)(a >> ((char)(3 << 3) ))));

	return 0;
}
