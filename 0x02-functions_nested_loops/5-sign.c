#include "main.h"
/**
 * print_sign - Prints the signs of input numbers
 * @n: user inputs
 * Return: Depends on the outcome
 */
int print_sign(int n)
{
	int outcome;

	if (n < 0)
	{
		_putchar('-');
		outcome = -1;
	}
	else if (n > 0)
	{
		_putchar('+');
		outcome = 1;
	}
	else
	{
		_putchar('0');
		outcome = 0;
	}
	return (outcome);
}
