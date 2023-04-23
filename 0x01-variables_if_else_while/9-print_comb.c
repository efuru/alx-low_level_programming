#include <stdio.h>

/**
 * main - This program prints all possible combinations of single-digit numbers
 *
 * Description: Print all possible combinations of single-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int e;

	e = 48;

	while (e < 58)
	{
		putchar(e);

		if (e != 58)
		{
			putchar(44);
			putchar(32);
		}
		e++;
	}
	putchar(10);

	return (0);
}
