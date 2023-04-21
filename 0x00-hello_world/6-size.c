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
	prinf("size of char: %zu byte(s)\n", sizeof(char));
	prinf("size of int: %zu byte(s)\n", sizeof(int));
	prinf("size of long int: %zu byte(s)\n", sizeof(long int));
	prinf("size of long long int: %zu byte(s)\n", sizeof(long long int));
	prinf("size of float: %zu byte(s)\n", sizeof(float));

	return (0);
