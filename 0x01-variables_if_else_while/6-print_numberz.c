#include <stdio.h>

/**
 * main - The  program print all single digit numbers of base from 0 - 10
 *
 * Description: The  program print all single digit numbers of base from 0 - 10
 *
 * Return: 0
 */

int main(void)
{
	int f;

	for (f = 0; f <= 9; f++)
	{
		putchar(f + '0');
		putchar('\n');
	}

	return (0);
}
