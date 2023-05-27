#include "function_pointers.h"
#include <string.h>
#include <stdio.h>

/**
 * print_name - takes two arguemants, char poiter name & function pointer f
 * @name: char pointer
 * @f: points to a function that takes a char and returns nothin
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	/*check if name & f is not null & *name is != null terminator*/
	if (name != NULL && f != NULL)
		f(name);/*call function pointer to by f with name argument*/
}
