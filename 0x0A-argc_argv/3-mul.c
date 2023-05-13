#include <stdio.h>
#include <stdlib.h>

/**
 * main - this function multiples two numbers
 * @argc: arguments counter
 * @argv: value of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, product;

	if (argc <= 2)/*check if we have two arguments to multiply*/
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);/*atoi convert strings to int so it can be multiply*/

	product = i * j;/*we multiply i & j and put inside product*/

	printf("%d\n", product);
	return (0);
}
