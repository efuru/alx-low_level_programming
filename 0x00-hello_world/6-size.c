#include<stdio.h>

/**
 * main - Entry point
 * Return: 0 if output is correct
 */

int main(void)
{
	printf("size of a char: %ld byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long));
	printf("size of a float: %ld byte(s)\n", sizeof(float));
	
	return (0);
}
