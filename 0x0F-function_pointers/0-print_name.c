#include "function_pointers.h"
#include <string.h>
#include <stdio.h>

/**
 * print_name - this function prints name
 * @name: pointer to type char
 * @f: function pointer totghe function that prints name
 *
 * Resturn: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
