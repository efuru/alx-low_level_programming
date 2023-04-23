#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 *
 * Description: Prints all possible different combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int e, f;

	for (e = 0; e < 10; e++)
	{
		for (f = e + 1; f < 10; f++)
		{
			putchar(e + '0');
			putchar(f + '0');

			if (e != 8 || f != 9)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);

	return (0);
}
