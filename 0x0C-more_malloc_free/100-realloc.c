#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - this function reallocates a block of memory using malloc and free
 * @ptr: pointer  to previously allocated memory
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: new size in bytes of new memory block
 * Return: NULL is new_size is eual to 0, & if ptr is not NULL return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (ptr == NULL)/*check if  ptr is null, if it is*/
	{
		new_ptr = malloc(new_size);
		return (new_ptr);/*alloc a new mem bloc of siz new_size*/
	}
	if (new_size == 0 && ptr != NULL)/*c if n_s is 0 & if ptr is not null*/
	{
		free(ptr);/*if if is true, free memory pointed to by ptr*/
		return (NULL);
	}
	if (new_size == old_size)/*see  if n_s is = to o_s, if true*/
		return (ptr);/*return ptr*/

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		/*cp old mem * to by ptr to new mem*/
		new_ptr[i] = ((char *)ptr)[i];/*cp bytes from old mem to new*/

	free(ptr);

	return (new_ptr);
}
