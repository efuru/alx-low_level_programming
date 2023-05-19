#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - this functoion allocates mamory using malloc
 * @b: parameter passed
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *A;

	A = malloc(b);

	if (A == NULL)
		exit(98);
	return (A);
}
