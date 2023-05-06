#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @n:  number of elements of the array
 * @a: array of integers
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int e = 0, f = 0;
	int g[20];

	n--;

	while (e <= n)
	{
		g[n - e] = a[e]; /* takes a[] value and assigns it to g[]*/
		e++;
	}

	while (f <= n)
	{
		a[f] = g[f]; /* takes f valu of g[] and assigns it to a[]*/
		f++;
	}
}
