#include "main.h"
/**
 * read_textfile - To read text files
 * @filename: Name of the file to read
 * @letters: Number of letters it should read and print
 * Return: 1 on success and -1 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rd, i, reading;
	char *buf;

	if (filename == NULL)
		return (0);
	rd = open(filename, O_RDONLY);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	if (rd == -1)
	{
		free(buf);
		return (0);
	}
	reading = read(rd, buf, letters);
	if (reading == -1)
	{
		close(rd);
		free(buf);
		return (0);
	}
	for (i = 0; i < reading; i++)
	{
		if (write(STDIN_FILENO, &buf[i], 1) == -1)
		{
			close(rd);
			free(buf);
			return (0);
		}
	}
	close(rd);
	free(buf);
	return (reading);
}
