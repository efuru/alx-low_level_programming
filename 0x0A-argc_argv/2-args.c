#include <stdio.h>

/**
 * main - this program writes all arguments it recieves
 * @argc: arguments count
 * @argv: arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)/*let i iterate through argc from zero to max*/
		printf("%s\n", argv[i]);/*count the max num of i*/
	return (0);
}
