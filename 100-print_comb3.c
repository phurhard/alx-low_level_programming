#include <stdio.h>
/**
 * main -Prints all possible combination of double numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, second;

	for (first = '0'; first <= '9'; first++)
	{
		for (second = first + 1; second <= '9'; second++)
		{
			if (second != first)
			{
				putchar(first);
				putchar(second);

				if (first == '8' && second == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
