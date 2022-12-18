#include "main.h"

/**
 * print_most_numbers -  prints the numbers, from 0 to 9
 *
 * Description: prints the numbers
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	char e;

	for (e = 0; e < 10; e++)

	{
		if (e != 2 && e != 4)
		{
			_putchar(e + '0');
		}
	}
	_putchar('\n');
}
