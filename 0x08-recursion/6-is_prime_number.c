#include "main.h"

/**
 * _get_prime_num - calculates prime number of a given number
 * @n: integer to check
 * @i: divisor
 * Return: 1bif input integer is a prime number else return 0
 */

int _get_prime_num(int i, int n)
{
	if (i >= n)/*its a prime num*/
		return (1);
	if (n % i == 0)
		return (0);/*not a prime num*/
	return (_get_prime_num(i + 1, n));
}

/**
 * is_prime_number - checks for a prime number
 * @n: integer value to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_get_prime_num(2, n));
}
