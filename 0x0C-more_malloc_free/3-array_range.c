#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - this function creates an array of integers
 * @min: integer
 * @max: second integer
 * Return: pointer to new array, or NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int i, size_of_array;
	int *pointer;

	if (min > max)
		return (NULL);

	size_of_array = max - min + 1;/*declare size of array*/

	pointer = malloc(size_of_array * sizeof(int));

	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < size_of_array; i++)
		pointer[i] = min + i;
	return (pointer);
}
