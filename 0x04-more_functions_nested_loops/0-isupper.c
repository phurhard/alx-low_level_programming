#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks if input is uppercase or not
 * @c: user input
 * Return: Depends on the input
 */
int _isupper(int c)
{
	int outcome = 0;
	char i;

	for (i = 'A';  i <= 'Z'; i++)
	{
		if  (i == c)
		{
			outcome = 1;
		}
	}
	return (outcome);
}
