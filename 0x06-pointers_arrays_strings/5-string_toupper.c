#include "main.h"
/**
 * string_toupper - converts a string in lowercase to uppercase
 * @s: input string
 * Return: string after conversion
 */
char *string_toupper(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
		if (s[j] > 96 && s[j] < 123)
			s[j] -= 32;
	return (s);
}
