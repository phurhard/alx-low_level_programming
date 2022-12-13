#include "main.h"
/**
 * append_text_to_file - Appends text to file
 * @filename:Name of the file
 * @text_content: String to append t the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if !(filename)
		return (-1);
	if !(text_content)
		return (1);
	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
	{
		if (write(fd, &text_content[i], 1) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (-1);
}
