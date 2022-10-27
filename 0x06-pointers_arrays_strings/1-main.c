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
	ptr = _strncat(s, s2, 1);
	printf("s after the function is: %s\n", s);
	printf("s2 after the function is: %s\n", s2);
	printf("ptr is: %s\n", ptr);
	ptr = _strncat(s, s2, 1024);
	printf("s after the new function is: %s", s);
	printf("s2 after the new function is: %s", s2);
	printf("ptr after the new function is: %s", ptr);
	return (0);
}
