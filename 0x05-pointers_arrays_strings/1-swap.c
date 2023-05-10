#include "main.h"

/**
 * swap_int - Main function
 *
 * @a: pointer interger to swap
 * @b: pointer integer to swap
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int e;

	e = *a;
	*a = *b;
	*b = e;
}
