#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @n:  number of elements of the array
 * @a: array of integers
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int e, f, tmp;

	f = n - 1;

	for (e = 0; e < n / 2; e++)

	{
		tmp = a[e];
		a[e] = a[f];
		a[f--] = tmp;
	}
}
