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
	int e, f;

	for (e = 0; e <= 10; e++)
	{
		for (f = e + 1; f <= 10; f++)
		{
			putchar(e + '0');
			putchar(f + '0');

			if (e != 8 || f != 9)
			{
				putchar(',');
				putchar(' ');
			}

		}

	}

	putchar('\n');

	return (0);
}
