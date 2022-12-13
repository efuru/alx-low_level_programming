#include <stdio.h>

/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * Description: This program prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int e;

	e = 122;

	while (e > 96)
	{
		putchar(e);
		e--;
	}
	putchar(10);
	return (0);
}
