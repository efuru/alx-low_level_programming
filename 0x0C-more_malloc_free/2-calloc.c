#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - this function allocates memory for an array using malloc
 * @nmemb: elements in array
 * @size: each bytes of memory
 * Return: NULL if nmemb or size is 0, Null if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *holder;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	holder = malloc(size * nmemb);

	if (holder == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)/*iterate through nmemb * size*/
		holder[i] = 0;
	return (holder);
}
