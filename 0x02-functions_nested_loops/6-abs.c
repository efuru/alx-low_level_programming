#include "main.h"

/**
 * _abs - Computes the absolut value of an integer
 *
 * @e: integer to be computed
 *
 * Return: absolute value of an integer
 *
 */

int _abs(int e)
{
	if (e > 0)
	{
		_putchar(e);

		return (e);
	}
	else if (e < 0)
	{
		return (-e);
	}
	else
	{
		return (e);
	}
}
