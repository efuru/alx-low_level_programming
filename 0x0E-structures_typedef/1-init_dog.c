#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - this function initialize the type stuct dog
 * @d: pointer to element of type dog d
 * @name: pointer to char of variable name
 * @age: pointer to age
 * @owner: pointer to char of vairable owner
 *
 * Description: this is a function that initialize the type stuct dog
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
