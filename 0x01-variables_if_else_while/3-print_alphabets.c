#include <stdio.h>

/**
 * main - A program that print alphabet followed by new line
 *
 * Description: This program prints alphabet in lowercase and uppercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int e, f;

	e = 97;
	f = 65;

	while (e < 123)
	{
		putchar(e);
		e++;
	}
	while (f < 91)
	{
		putchar(f);
		f++;
	}
	putchar(10);
	return (0);
}
