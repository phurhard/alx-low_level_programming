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
	int i, j, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);

		mul = i * j;
		printf("%d\n", mul);
	}
	return (0);
}
