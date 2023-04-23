#include <stdio.h>

/**
 *main - the program prints all single digit numbers of base 10 starting from
 *
 * Description: Print all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */

int main(void)
{
	int e;

	for (e = 0; e <= 9; e++)
	{
		putchar(e + '0');
		putchar('\n');
	}
	return (0);
}
