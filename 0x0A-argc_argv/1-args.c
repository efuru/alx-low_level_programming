#include <stdio.h>

/**
 * main - this function prints the number of arguments passed into it
 * @argc: argument count
 * @argv: arrays of string to arguments passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
