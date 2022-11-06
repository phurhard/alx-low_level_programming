#include <stdio.h>
/**
 * main -Entry point to the code
 * @argc: Counter of arguments
 * @argv: Array of arguments
 * Return: Always 0 as success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
