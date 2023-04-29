#include "main.h"

/**
 * print_numbers - This function that prints the numbers, from 0 to 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	int e;

	for (e = 0; e <= 9; e++)
	{
		_putchar(e + '0');
	}
	_putchar('\n');
}
