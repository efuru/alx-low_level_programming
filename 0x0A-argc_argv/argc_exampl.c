#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function prints the number of CML argument
 */

int main(int argc, char* argv[])
{
	int i, sum = 0;

	printf(" number of argument is %d\n", argc);
	printf("lets see what's in argv[]\n");
	
	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		printf("the value of argv[%d] is %s\n", i, argv[i]);
		sum =+ atoi(argv[i]);
	}
	}
	printf ("total value is %d\n", sum);
	return (0);

}

