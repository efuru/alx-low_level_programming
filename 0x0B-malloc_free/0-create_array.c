#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - this function creates an array of chars, initializes it.
 * @size: size of arrays of chars
 * @c: initializer
 * Return: pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *pointer;/*pointer to first element in the array*/
	unsigned int j;

	/*allocate memory to pointer*/
	pointer = (char *)malloc(size * sizeof(char));/*a char * total size*/

	if (pointer == NULL)/*checks if pointer is null*/
	{
		return (NULL);
	}

	/*iterate through each elements in total size using  j as an index*/
	for (j = 0; j < size; j++)
	{
		pointer[j] = c; /*initialize j-th element of the array with c*/
	}
	return (pointer);
}
