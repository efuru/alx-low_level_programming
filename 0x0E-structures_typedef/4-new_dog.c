#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: pointer to char variable
 * @age: variable for age
 * @owner: pointer for char variable
 *
 * Description: this function creates a new dog
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = strdup(name);
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	owner_copy = strdup(owner);/*create copy of owner*/
	if (owner_copy == NULL)/*checks if owner_copy is null*/
	{
		free(name_copy);
		free(new_dog);
		return (NULL);/*executes these guys if owner_copy is null*/
	}
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
