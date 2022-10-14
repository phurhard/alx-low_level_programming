#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/* A program to write the output into the standard error without using the printf or puts*/
int main(void)
{
	write(2, "and that pieceof art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return(1);
}
