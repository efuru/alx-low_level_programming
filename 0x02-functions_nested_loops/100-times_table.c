#include "main.h"

/**
 * print_times_table - print times table
 *
 * @n: integer to be printed
 *
 * Description: prints the n times table
 *
 * Return: Always 0
 */

void print_times_table(int n)
{
	int i, j, k;

	if (n <= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (j == 0)
					_putchar('0' + k);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (k <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + k);
					}
					else if (k > 9 && k < 100)
					{
						_putchar(' ');
						_putchar('0' + (k / 10));
						_putchar('0' + (k % 10));
					}
					else if (k >= 100)
					{
						_putchar('0' + (k / 100));
						_putchar('0' + ((k / 10) % 10));
						_putchar('0' + (k % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}

