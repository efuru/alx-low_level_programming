#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - this program prints the opcodes of it's own main function
 * @argc: argument count
 * @argv: argument value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, num_byt;

	if (argc != 2)/*checks if argc is correct when the user types*/
	{
		printf("Error\n");
		exit(1);
	}
	num_byt = atoi(argv[1]);
	if (num_byt < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < num_byt; i++)
	{
		printf("%02hhx", *((char *)main + 1));/*for hex, for space*/
		if (i < num_byt - 1)
		{
			printf(" ");
		}
		printf("\n");/*for new line*/
	}
	return (0);
}
