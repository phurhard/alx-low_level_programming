#include "main.h"
#define BUFSIZE 1024
/**
 *_close - close a file descriptor and print error message upon faiure
 *@fd: the file descriptor
 *Return: 1 on success and -1 on failure
 */
int _close(int fd)
{
	if (!close(fd))
		return (0);
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	return (-1);
}

