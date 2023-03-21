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

/**
 * _isalpha - check if the chatracteris alphabetic
 * @c: character to be checked
 *
 * Return: 1 if alphabetic, 0 otherwise
 */
int _isalpha(int c);

/**
 * print_sign - checks the sign of a number
 * @n: the number to be checked
 *
 * Return: 1 if positive, -1 if negative, 0 otherwise
 */
int print_sign(int n);

/**
 * _abs - prints absolute value
 * @int: number to be checked
 *
 * Return: returns the absolute value of n
 */
int _abs(int);

#endif /* _UNISTD_H_ */
