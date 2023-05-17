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

	if (size == 0)/*checks if size of array is null*/
		return (NULL);

	/*allocate memory to pointer*/
	pointer = malloc(size * sizeof(char));/*a char * total size of char*/
	if (pointer == NULL)
		return (NULL);

	/*iterate through each elements in total size using  j as an index*/
	for (j = 0; j < size; j++)
	{
		pointer[j] = c; /*initialize j-th element of the array with c*/
	}
	return (pointer);
}
