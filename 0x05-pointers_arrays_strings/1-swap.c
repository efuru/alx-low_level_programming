#include "main.h"

/**
 * swap_int - swap values of two integers
 *
 * @a: pointer to first value
 *
 * @b: pointer second value
 */

void swap_int(int *a, int *b)
{
	int e;

	e = *a;
	*a = *b;
	*b = e;
}
