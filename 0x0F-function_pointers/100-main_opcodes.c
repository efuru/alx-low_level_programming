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
	unsigned char *pointer;

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
	/*print opcode; use malloc to access main's memory*/
	pointer = (unsigned char *)main;

	for (i = 0; i < num_byt; i++)
	{
		printf("%02x ", pointer[i]);/*for hex, for space*/
	}
	printf("\n");/*for new line*/
	return (0);
}
