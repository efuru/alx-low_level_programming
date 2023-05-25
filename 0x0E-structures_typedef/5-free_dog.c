#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dogs
 * @d: pointer to variable
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
	d = NULL;
}
