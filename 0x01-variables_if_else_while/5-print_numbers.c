#include <stdio.h>

/**
 * main - prints all the single digit numbers of the base
 *
 * Description: program prints all single digit of the base given.
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
		e++;
	}

	putchar(10);
	return (0);
}
