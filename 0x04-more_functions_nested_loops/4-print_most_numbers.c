#include "main.h"

/**
 * print_most_numbers - Print the numbers since 0 up to 9
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int e;

	for (e = 0; e <= 9; e++)
	{
		if (e != 2 && e != 4)
			_putchar(e + '0');
	}
	_putchar('\n');
}
