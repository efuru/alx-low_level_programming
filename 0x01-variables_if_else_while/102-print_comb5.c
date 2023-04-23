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
	int a;
	int b;
	int c;
	int d;

	for (a = '0'; a <= '9'; a++) /*print first two digit combo*/
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = a; c <= '9'; c++) /*print second of pair*/
			{
				for (d = b + 1; d <= '9'; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);

					if (!((a == '9' && b == '8') &&
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
