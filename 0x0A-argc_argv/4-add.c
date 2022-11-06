#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point to the code
 * @argc: Counter of arguments
 * @*argv: Array of arguments
 * Return: Always 0 as success
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = atoi(argv[i]);
			if (j == 0)
			{
					printf("Error\n");
					return (1);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}

		printf("%d\n", sum);
	}
	return (0);
}
