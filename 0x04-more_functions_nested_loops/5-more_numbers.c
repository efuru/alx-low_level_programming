#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int e, a;

	e = 10;
	a =  15;

	for (e = 0; e < 10; e++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				_putchar(a / 10 + '0');
			}
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
