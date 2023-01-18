#include "main.h"
/**
 * _strncat - concatenates two strings using at most n bytes
 * @dest: string 1
 * @n: bytes to make use of
 * @src: strign to be added
 * Return: Returns a char which is a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	j = 0;
	while (src[j] != 0 && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
