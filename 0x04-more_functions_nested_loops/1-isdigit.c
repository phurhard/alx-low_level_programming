#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks if input is numeric or not
 * @c: user input
 * Return: Depends on the input
 */
int _isdigit(int c)
{
	int i, outcome = 0;

	for (i = '0';  i <= '9'; i++)
	{
		if  (i == c)
		{
			outcome = 1;
		}
	}
	return (outcome);
}
