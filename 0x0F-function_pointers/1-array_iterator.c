#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - this function executes a function given as
 * a parameter on each element of an array
 * @array: pointer to array
 * @size: size of entire array
 * @action: pointer to function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
