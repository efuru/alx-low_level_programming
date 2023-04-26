#include "main.h"

/**
 * _abs - Computes the absolut value of an integer
 *
 * @n: integer to be computed
 *
 * Return: absolute value of an integer
 *
 */


int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
