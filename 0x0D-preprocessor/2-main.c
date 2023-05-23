#include <stdio.h>

/**
 * main - this program prints the name of the file it was compiled from
 * void: parameter passed
 * Return: 0 for success
 */

int main(void)
{
	printf("%s\n", __FILE__);/*contains name of current source file*/
	return (0);
}
