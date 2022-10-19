#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c: input from user
 * Return: Returns either 1 or 0 depending on the success
 */
int _islower(int c)
{
	int outcome = 0;
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low == c)
		{
			outcome = 1;
		}
	}
	return (outcome);
}
