#include "main.h"
/**
 * print_last_digit - Prints the last digit of the input
 * @c: input from user
 * Return: Returns the value of the last digit
 */
int print_last_digit(int c)
{
	int ld = c % 10;

	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');

	return (ld);
}
