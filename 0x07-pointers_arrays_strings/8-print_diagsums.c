#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - this function prints the sum of the two diagonals
 *  of a square matrix of integers
 *
 *  @a: two dementional arrays
 *  @size: total size of sqaure matrix integers
 *
 *  Retrun: nothing
 */

void print_diagsums(int *a, int size)
{
	int j; /*counters loop*/
	int sum1 = 0;
	int sum2 = 0;
	int s = size * size;/*cal total num of element in sqaure matrix*/

	for (j = 0; j < s; j += size + 1)
	{
		sum1 += a[j];
	}

	for (j = size - 1; j < s - 1; j += size - 1)
	{
		sum2 += a[j];/*add current element to sum2*/
	}

	printf("%d, %d\n", sum1, sum2);
}
