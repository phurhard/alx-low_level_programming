#include "main.h"
/**
 * leet - translate string to leet (=1337) language
 * @s: input string
 * Return: Translated string
 */
char *leet(char *s)
{
	int i, j;

	char letters[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 10; j++)
			if (s[i] == letters[i])
				s[i] = code[j];
	return (s);
}
