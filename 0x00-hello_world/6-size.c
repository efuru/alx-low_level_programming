#include <stdio.h>
/**
 * main - prints the size of various data types
 *
 * Description: Prnits the sizes of data types on the computer when compiled.
 *
 * Return: always (0) success
 */

int main(void)
{
	printf("size of char: %zu byte(s)\n", sizeof(char));
	printf("size of int: %zu byte(s)\n", sizeof(int));
	printf("size of long int: %zu byte(s)\n", sizeof(long int));
	printf("size of long long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of float: %zu byte(s)\n", sizeof(float));

	return (0);
}
