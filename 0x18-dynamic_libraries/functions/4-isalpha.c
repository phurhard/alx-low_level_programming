#include "main.h"
/**
 * _isalpha - Checks if the character is an alphabet
 * @c: The input by the user
 * Return: Returns 1 or 0 depending on the outcome
 */
int _isalpha(int c)
{
	int outcome = 0;
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (c == i || c == j)
			{
				outcome = 1;
			}
		}
	}
	return (outcome);
}
