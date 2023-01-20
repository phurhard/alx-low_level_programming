#include "main.h"
/**
 * _strncpy - copies strings using at most n bytes
 * @dest: destination
 * @n: bytes to make use of
 * @src: string to be copied
 * Return: Returns a char which is a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	i = i;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
