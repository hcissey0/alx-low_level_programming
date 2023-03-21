#ifndef _UNISTD_H_
#define _UNISTD_H_

/**
 * _putchar - prints a character to the screen
 * @c: character to be printed
 *
 * Return: Always 1 (Success)
 */
int _putchar(char c);

/**
 * print_alphabet - prints the lowercase alphabet
 *
 * Return: void
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - print alphabts 10 times
 *
 * Return: nothing
 */
void print_alphabet_x10(void);

/**
 * _islower - checks if a character is lower case
 * @c: character to be checked
 *
 * Return: 1 if lower, 0 otherwise
 */
int _islower(int c);

#endif /* _UNISTD_H_ */
