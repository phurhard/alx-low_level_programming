#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @c: user value
 * Return: absolute value of user input
 */
int _abs(int c)
{
	int outcome, nc;

	if (c < 0)
	{
		nc = c * -1;
		outcome = nc;
	}
	else
		outcome = c;
	return (outcome);
}
