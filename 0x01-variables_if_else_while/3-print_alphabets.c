#include <stdio.h>
/**
 * main -Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpHA;
	for (alpHA='a'; alpHA<='z'; alpHA++)
		putchar(alpHA);
	for (alpHA='A'; alpHA<='Z'; alpHA++)
		putchar(alpHA);
	putchar('\n');
	return (0);
}
