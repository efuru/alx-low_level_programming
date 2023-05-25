#ifndef DOG_H
#define DOG_H

/**
 * struct dog - this structure define a data type for dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: this structure defines the data types of the structure dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
