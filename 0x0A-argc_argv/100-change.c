#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point to the code
 * @argc: Counter of arguments
 * @argv: Array of arguments
 * Return: Always 0 as success
 */
int main(int argc, char *argv[])
{
	int j, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	j = atoi(argv[1]);

	for (i = 0; j > 0; i++)
	{
		if (j - 25 >= 0)
			j = j - 25;
		else if (j - 10 >= 0)
			j = j - 10;
		else if (j - 5 >= 0)
			j = j - 5;
		else if (j - 2 >= 0)
			j = j - 2;
		else if (j - 1 >= 0)
			j = j - 1;
	}
	printf("%d\n", i);


	return (0);
}
