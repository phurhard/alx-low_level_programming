#include <stdio.h>
/**
 * main -Entry point to the code
 * @argc: Counter of arguments
 * @*argv: Array of arguments
 * Return: Always 0 as success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
