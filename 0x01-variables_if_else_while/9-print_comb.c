#include <stdio.h>

/**
 * main - program that prints all combinations of single-digit numbers
 *
 * Description: This program prints all combinations of single-digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int e;

	e = 48;

	while (e < 58)
	{
		putchar(e);
		if (e != 57)
		{
			putchar(44);
			putchar(32);
		}
		e++;
	}
	putchar(10);
	return (0);
}
