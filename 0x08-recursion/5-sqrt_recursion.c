#include "main.h"

/**
 * _get_sqrt - calculates the square root of a given number
 * @n: the number to find the square root of
 * @i: the current divisor to check
 *
 * Return: natural square root of n or -1 if n does not have a natural square
 */

int _get_sqrt(int i, int n)
{
	if (n * n == i)
		return (n);/* any num * itself is the nautural root of a sqaure*/

	if (n * n > i)

		return (-1);
	return (_get_sqrt(i, n + 1));
}

/**
 * _sqrt_recursion - functon that dose the recursion of our square
 *
 * @n: integer
 *
 * Return: the recursion on n
 **/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_get_sqrt(n, 0));
}
