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

/**
 * print_last_digit - prints the last digit of a number
 * @int: to be checked
 *
 * Return: retuens the last digit
 */
int print_last_digit(int);

/**
 * jack_bauer - prints the clock numbers
 *
 * Return: void
 */
void jack_bauer(void);

/**
 * times_table - prints the times table under 9
 *
 * Return: void
 */
void times_table(void);

/**
 * add - adds two integers
 * @int: first number
 * @int: second number
 *
 * Return: the sum of the two integers
 */
int add(int, int);

/**
 * print_to_98 - prints natural numbers from nto 98
 * @n: the number to print from
 *
 * Return: void
 */
void print_to_98(int n);

/**
 * print_times_table - prints the times table up to n
 * @n: the upto number
 *
 * Return: void
 */
void print_times_table(int n);

#endif /* _UNISTD_H_ */
