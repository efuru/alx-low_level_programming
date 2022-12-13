#include <stdio.h>

/**
 * main - program that prints all the given numbers of base
 *
 * Description: This program that prints all the given numbers of base
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int e;

	e = 0;

	while (e <48)
	{
		if (e < 10)
			putchar(e + '0');
		else if (e > 41)
			putchar(e - 10 + 'A');
		e++;
	}
	putchar(10);
	return (0);
}
