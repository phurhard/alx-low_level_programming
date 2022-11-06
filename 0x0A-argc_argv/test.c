#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	printf("The count of argc is given as %d\n", argc);
	printf("The name of this function is %s\n", argv[0]);
	printf("The values inside argv v is printed below \n");

	for (i = 0; i < argc; i++)
	{
		printf("The values in argv[%d] is %s \n", i, argv[i]);
	}
}
