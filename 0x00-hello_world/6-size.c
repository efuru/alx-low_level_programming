#include<stdio.h>

/**
 * main - Entry point
 * Return: 0 if output is correctly
 */

int main(void)
{
	printf("size of a char: %ld 1 byte(s)\n", sizeof(char));
	printf("size of an int: %lu 4 byte(s)\n", sizeof(int));
	printf("size of a long int: %lu 8 byte(s)\n", sizeof(long));
	printf("size of a long long int: %lu 8 byte(s)\n", sizeof(long long));
	printf("size of a float: %ld 4 byte(s)\n", sizeof(float));

	return (0);
}
