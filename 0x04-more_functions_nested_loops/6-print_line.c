#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 *
 * @n: integer n is the number of times _ is printed
 *
 * Return: o
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}

	}
	_putchar('\n');
}
