#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	char s[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("s before d func: %s\n", s);
	printf("s2 before the function: %s\n", s2);
	ptr = _strcat(s, s2);
	printf("s after the function is: %s\n", s);
	printf("s2 after the function is: %s\n", s2);
	printf("ptr is: %s\n", ptr);
	return (0);
}
