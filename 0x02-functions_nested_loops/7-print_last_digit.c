#include "main.h"

/**
 * print_last_digit- prints the last digit of a number
 *
 * @n: number to be printed
 *
 * Return: last digit  of n
 *
 */

int print_last_digit(int n)
{
	int e;

	e = n % 10;

	if (n < 0)
		e = e *  -1;
	_putchar(e + '0');
	return (e);
}
