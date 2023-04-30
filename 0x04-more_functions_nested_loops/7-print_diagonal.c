#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n:  integer n is the number of times the character \ to be printed or not.
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int e, i;

	if (n <= 0)
		_putchar('\n');

	for (e = 0; e < n; e++)
	{
		for (i = 0; i <= e; i++)
		{
			if (e == i)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
			_putchar(' ');
			}
		}
	}
}
