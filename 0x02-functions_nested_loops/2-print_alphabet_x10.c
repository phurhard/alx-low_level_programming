#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int num = 0;
	char alpha;

	while (num < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
		num++;
	}
	return;
}
