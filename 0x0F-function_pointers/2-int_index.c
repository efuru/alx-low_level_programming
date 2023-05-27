#include <stddef.h>
#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - this function searches for an integer
 * @array:pointer to array of numbers
 * @size: total numbers of elements in array
 * @cmp: pointer to function in use
 *
 * Return: the first element for cmp, -1 if no element matches, -1 if size <= o
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
