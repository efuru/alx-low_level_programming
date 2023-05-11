#include "main.h"

/**
 * factorial - calculates the factorial of a given number.
 * @n: given number
 * Return: factorial
 **/

int factorial(int n)
{
	if (n < 0)/*because the fact of zero is -one*/
	{
		return (-1);
	}
	if (n == 0 || n == 1)/*because the fact of one is one*/
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
