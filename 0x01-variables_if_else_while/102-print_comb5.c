#include <stdio.h>

/**
 * main - program prints all possible combinations of two two-digit numbers
 *
 * Description: prints all possible different combinations of two-digit numbers
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int abeb;
	int babe;
	int c;
	int d;

	for (abeb = '0'; abeb <= '9'; abeb++) /*print first two digit combo*/
	{
		for (babe = '0'; babe <= '9'; babe++)
		{
			for (c = abeb; c <= '9'; c++) /*print second of pair*/
			{
				for (d = babe + 1; d <= '9'; d++)
				{
					putchar(abeb);
					putchar(babe);
					putchar(' ');
					putchar(c);
					putchar(d);

					if (!((abeb == '9' && babe == '8') &&
					      (c == '9' && d == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				d = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
